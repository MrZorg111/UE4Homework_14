#include <iostream>
#include <string>

int main() {
    std::string text;
   

    std::cout << "Input text:" << std::endl;
    std::cin >> text;

    std::cout << "Line length " << text.length() << std::endl;
    std::cout << "The first character: " << text[0] << std::endl;
    std::cout << "The last character: " << text[text.length() - 1] << std::endl;
}
