#include "terminal.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <cstdlib>

void terminal(const std::string& argv1, const std::string& argv2, const std::string& argv3)
{
    if(argv1 == "Analysis") {
        if(argv2 == "Count")  {
            Analysis::FileCount(argv3);
        }else if(argv2 == "TreeCount") {
            Analysis::TreeFileCount(argv3);
        }else if(argv2 == "CountExt")  {
            Analysis::CountExt(argv3);
        }else if(argv2 == "TreeCountExt")  {
            Analysis::TreeCountExt(argv3);
        }else if(argv2 == "ListDesc") {
            Analysis::LargestFiles(argv3);
        }else if(argv2 == "TreeListDesc") {
            Analysis::TreeLargestFiles(argv3);
        }else if(argv2 == "DirSize") {
            Analysis::GetDirSize(argv3);
        }else if(argv2 == "ListAsc") {
            Analysis::SmallestFiles(argv3);
        }else if(argv2 == "TreeListAsc") {
            Analysis::TreeSmallestFiles(argv3);
        }else {
            std::cout << "Error: NO SUCH COMMAND " << argv2 << "\n";
        }
    }else {
        std::cout << "Error: NO SUCH COMMAND " << argv1 << "\n";
    }
}
