#include "terminal.h"
#include "functions.h"
#include "iostream"

void terminal(const std::string& command)
{
    if(command == "FileCount") {
        Analysis::FileCount();
    }else if(command == "Tree FileCount") {
        Analysis::TreeFileCount();
    }else if(command == "CountExt") {
        Analysis::CountExt();
    }else if(command == "Tree CountExt") {
        Analysis::TreeCountExt();
    }else if(command == "ListAllFile")  {
        Analysis::ListAllFile();
    }else if(command == "Tree ListAllFile")  {
        Analysis::TreeListAllFile();  
    }else if(command == "Get DirSize")  {
        Analysis::GetDirSize();
    }else{
        std::cout << "Error:\nFunction not found\n";
    }
}
