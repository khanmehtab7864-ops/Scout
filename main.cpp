#include <iostream>
#include "functions.h"
#include "terminal.h"
#include <string>
#include <vector>

int main(int argc, const char* argv[])
{
    if(argc < 2)
    {
        std::cerr << "Error: No arguments provided\n";
        std::cout << "Use --help for usage\n";
        return 1;
    }

    std::string argv1 = argv[1];

    if(argv1 == "--version")
    {
        std::cout << "PathScout v0.1.0\n";
        std::cout << "A lightweight C++ CLI tool for filesystem analysis.\n";
        std::cout << "(c) 2026 Mehtab Khan\n";
        std::cout << "Licensed under MIT License\n";
        return 0;
    }

    if(argv1 == "--help")
    {
        std::cout << "PathScout - Filesystem Analysis CLI Tool\n\n"

                  << "USAGE:\n"
                  << "    pathscout <category> <command> <path>\n\n"

                  << "EXAMPLE:\n"
                  << "    pathscout Analysis Count .\n\n"

                  << "COMMANDS:\n"
                  << "    Count, TreeCount, CountExt, TreeCountExt\n"
                  << "    ListDesc, ListAsc, TreeListDesc, TreeListAsc\n\n"

                  << "--help     Show help\n"
                  << "--version  Show version\n";
        return 0;
    }

    if(argc < 4)
    {
        std::cerr << "Error: Missing arguments\n";
        std::cout << "Format: pathscout Analysis <Command> <Path>\n";
        return 1;
    }

    std::string argv2 = argv[2];
    std::string argv3 = argv[3];

    terminal(argv1, argv2, argv3);
}
