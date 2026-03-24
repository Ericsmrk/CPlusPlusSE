// Lesson 1 — Example: reading a line of text from the user
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "What is your name? ";
    string name{};
    getline(cin, name);

    cout << "Nice to meet you, " << name << ".\n";
    return 0;
}
