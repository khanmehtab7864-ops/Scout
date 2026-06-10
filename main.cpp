#include <iostream>
#include "functions.h"
#include "terminal.h"
#include <cstdlib>

int main()
{
    std::cout << "type 'exit' to end program\n";
    std::string command; std::getline(std::cin, command);
        if(command == "exit") {
            std::exit(EXIT_FAILURE);
        }else {
            terminal(command);
        }
    return 0;
}
