#include <iostream>
#include <string>

using namespace std;

void printGreeting(const string& name, int age){
    cout << "Your name is " << name << " and you are " << age << " years old." << endl;    
}

int main(){
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    printGreeting(name, age);
    return 0;
}