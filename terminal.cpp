#include "terminal.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <cstdlib>

void terminal(const std::string& command)
{
    std::cout << "Enter path: ";
    std::string path; std::cin >> path;
    if(command == "FileCount") {
        Analysis::FileCount(path);
    }else if(command == "Tree FileCount") {
        Analysis::TreeFileCount(path);
    }else if(command == "CountExt") {
        Analysis::CountExt(path);
    }else if(command == "Tree CountExt") {
        Analysis::TreeCountExt(path);
    }else if(command == "LargestFiles")  {
        Analysis::LargestFiles(path);
    }else if(command == "Tree LargestFiles")  {
        Analysis::TreeLargestFiles(path);  
    }else if(command == "Get DirSize")  {
        Analysis::GetDirSize(path);
    }else if(command == "LargestFiles")  {
        Analysis::LargestFiles(path);
    }else if(command == "Tree LargestFiles")  {
        Analysis::TreeLargestFiles(path);
    }else if(command == "SmallestFiles")  {
        Analysis::SmallestFiles(path);
    }else if(command == "Tree SmallestFileSize")  {
        Analysis::TreeSmallestFiles(path);
    }else{
        std::cout << "Error:\nFunction not found\n";
    }
       if(!fs::exists(path))  {
        std::cerr << "Error: Path not Found\n";
        std::exit(EXIT_FAILURE);
    }
}
