#include <iostream>
#include "functions.h"
#include "terminal.h"
#include <string>
#include <vector>

int main(const int argc, const char* argv[])
{
    if(!argc <=4)
    {
        std::err << "Invalid commands";
    }
    std::string argv1 = argv[1];
    std::string argv2 = argv[2];
    std::string argv3 = argv[3];
    
    terminal(argv1, argv2, argv3);
}
