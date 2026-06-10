#include <iostream>
#include "functions.h"
#include "terminal.h"

int main()
{
    std::cout << "type 'exit' to end program\n";
    while(true)
    {
        std::string command; std::getline(std::cin, command);
        if(command == "exit") {
            break;
        }
        terminal(command);
    }
    return 0;
}
