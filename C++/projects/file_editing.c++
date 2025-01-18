#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::string filename;
    std::cout << "Enter the filename to edit: ";
    std::cin >> filename;

    // Open the file for reading
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Read the contents of the file into a vector of strings
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(inFile, line)) {
        lines.push_back(line);
    }
    inFile.close();

    // Display the current contents of the file
    std::cout << "Current contents of the file:\n";
    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }

    // Modify the contents as needed
    std::cout << "Enter the line number to modify (starting from 0): ";
    int lineNumber;
    std::cin >> lineNumber;
    std::cin.ignore(); // To ignore the newline character left in the buffer

    if (lineNumber >= 0 && lineNumber < lines.size()) {
        std::cout << "Enter the new content for line " << lineNumber << ": ";
        std::string newContent;
        std::getline(std::cin, newContent);
        lines[lineNumber] = newContent;
    } else {
        std::cerr << "Invalid line number!" << std::endl;
        return 1;
    }

    // Open the file for writing
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Write the modified contents back to the file
    for (const auto& l : lines) {
        outFile << l << std::endl;
    }
    outFile.close();

    std::cout << "The content of the file has been modified and saved in " << filename << std::endl;

    return 0;
}