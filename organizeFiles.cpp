#include <iostream>
#include <filesystem>
#include <string>
#include <unordered_map>
#include <algorithm>

namespace fs = std::filesystem;

void organizeFiles(const std::string& sourcePath) {
    std::unordered_map<std::string, std::string> extensionToFolder;
    
    for (const auto& entry : fs::directory_iterator(sourcePath)) {
        if (entry.is_regular_file()) {
            std::string extension = entry.path().extension().string();
            std::transform(extension.begin(), extension.end(), extension.begin(), ::tolower);

            if (extension.empty()) {
                extension = "no_extension";
            } else {
                // Remove the leading dot from the extension
                extension = extension.substr(1);
            }

            if (extensionToFolder.find(extension) == extensionToFolder.end()) {
                // Create a new folder for this extension
                std::string folderName = sourcePath + "/" + extension + "_files";
                fs::create_directory(folderName);
                extensionToFolder[extension] = folderName;
            }

            // Move the file to its corresponding folder
            std::string destinationPath = extensionToFolder[extension] + "/" + entry.path().filename().string();
            try {
                fs::rename(entry.path(), destinationPath);
                std::cout << "Moved: " << entry.path().filename() << " to " << extension << "_files folder" << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error moving file " << entry.path().filename() << ": " << e.what() << std::endl;
            }
        }
    }
}

int main() {
    std::string sourcePath;
    std::cout << "Enter the path of the directory to organize: ";
    std::getline(std::cin, sourcePath);

    if (!fs::exists(sourcePath) || !fs::is_directory(sourcePath)) {
        std::cerr << "Invalid directory path." << std::endl;
        return 1;
    }

    std::cout << "Organizing files in: " << sourcePath << std::endl;
    organizeFiles(sourcePath);
    std::cout << "File organization complete." << std::endl;

    return 0;
}