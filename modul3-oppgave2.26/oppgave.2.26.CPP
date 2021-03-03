
#include<iostream>
#include <string>
#include <sstream>

int main() {

    std::ostringstream oss;
    char ch, sourceFile[64], targetFile[64];
    FILE* fs, *ft;

    std::cout << "Enter the Name of Source File: ";
    std::cin >> sourceFile;

    std::cout << "\nEnter the Name of Target File: ";
    std::cin >> targetFile;

    fs = fopen(sourceFile, "r");
    if (fs == NULL) {
        std::cout << oss.str();
        return 0;
    }

    ft = fopen(targetFile, "w");
    if (ft == NULL) {
        oss << "Could not find file by the name " << targetFile;
        return 0;
    }

    ch = fgetc(fs);
    while (ch != EOF) {
        fputc(ch, ft);
        ch = fgetc(fs);
    }

    fclose(fs);
    fclose(ft);

    std::cout << "\nFile copied successfully.";

    return 0;
}
