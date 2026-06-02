#include <iostream>
using namespace std;
int main() {

    string digi[4] = {"fourth","third","second","first"};
int digitCounter = 4;
    int number;
    int boxy[4];

std::cout << "WELCOME TO CALCULATOR \n";

    std::cout << "Enter the number of digits you would like to manipulate (1-4): ";
    std::cin >> number;

    if (number < 1 or number > 4) {
        std::cout << "not within range" << std::endl;
        std::cin >> number;
    };

    int nux = number;
    int bell = number;

    std::cout << "begin entering the values of the digits \n";
    while(number > 0){
        number = number - 1;
        digitCounter = digitCounter - 1;
        std::cout << "Enter the " << digi[digitCounter] << " digit \n";
        std::cin >> boxy[number];
    };

    std::cout << "Do you want to subtract(1) or add(2)" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice < 1 or choice > 2){
        std::cout << "not within choice numbers" << std::endl;
        std::cin >> choice;
    };

    std::cout<< "calculating\n";

int Final = 0;

    if (choice == 2) {
        for (int i = 0; i < bell; i++) Final += boxy[i];
    } else {
        Final = boxy[0];
        for (int i = 1; i < bell; i++) Final -= boxy[i];
    };



std:: cout << "The result is ";
std::cout << Final;
    std::cout << "\n In calculating this, you used " << bell <<  " numbers!!" << std::endl;

    return(0);
};