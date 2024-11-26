#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    std::map<int, int> numberCount;
    std::string input;

    std::cout << "Enter numbers separated by spaces: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    int number;

    while (ss >> number) {
        numberCount[number]++;
    }

    std::cout << "\nCount of each number:\n";
    for (const auto& pair : numberCount) {
        std::cout << pair.first << " appears " << pair.second << " times\n";
    }

    return 0;
}
