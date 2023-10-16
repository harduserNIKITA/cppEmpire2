#include <iostream>
#include <string>
int main()
{
    std::cout << "We come back!\n";
    std::cout << "What is our slogan of Empire\n";
    std::string inputStr = "";
    std::getline(std::cin, inputStr);
    std::cout << inputStr + "Indeed.\n";
    return 0;
}
