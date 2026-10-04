#include <iostream>
#include <string>   // Needed for std::string
using namespace std;

int main() {
    string name = "Aditya";   // Declare and initialize the string

    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << " ";
    }
    return 0;
}
