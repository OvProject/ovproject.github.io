#include <iostream>
using namespace std;
int main() {

    string response = "empty";
    std::cout << "hello world\n";
    std::cout << "(Type hello back for something nice)" << std::endl;
    std::cin >> response;

    if (response == "hello") {
        std::cout << "yay";
    };
    if (response != "hello" ){
        std::cout << "nooo you didn't do the thing.";
    };

    return 0;

}
