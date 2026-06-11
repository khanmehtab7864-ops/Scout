#include <iostream>
#include <string>
#include "functions.h"
#include "terminal.h"

void displayVersion() {
    std::cout << "PathScout version 0.1.0 (Development Build)\n";
    std::cout << "Copyright (C) 2026 Mehtab Khan. All rights reserved.\n";
    std::cout << "License: MIT License <https://opensource.org/licenses/MIT>\n";
    std::cout << "This is free software: you are free to change and redistribute it.\n\n";
}

void displayHelp() {
    std::cout << "Usage: pathscout [OPTION]\n";
    std::cout << "A lightweight command-line utility for deep directory and project exploration.\n\n";
    std::cout << "Options:\n";
    std::cout << "  -v, --version    Display version and copyright information\n";
    std::cout << "  -h, --help       Display this help menu\n\n";
    std::cout << "Run without options to enter the interactive terminal loop.\n";
}

int main(int argc, char* argv[])
{
    // Check if the user passed command-line arguments/flags
    if (argc > 1) {
        std::string flag = argv[1];
        
        if (flag == "--version" || flag == "-v") {
            displayVersion();
            return 0; 
        } 
        else if (flag == "--help" || flag == "-h") {
            displayHelp();
            return 0;
        }
        else {
            std::cout << "pathscout: unrecognized option '" << flag << "'\n";
            std::cout << "Try 'pathscout --help' for more information.\n";
            return 1;
        }
    }

    // Normal interactive mode loop
    std::cout << "type 'exit' to end program\n";
    while(true)
    {
        std::string command; 
        std::getline(std::cin, command);
        if(command == "exit") {
            break;
        }
        terminal(command);
    }
    return 0;
}
