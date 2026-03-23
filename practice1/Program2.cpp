#include <iostream>
#include <string>

using namespace std;

void print(const string &str){
    cout << str << endl;
}

int main(){
    string name = "Eric";
    string major = "Computer Science";
    string reason = "I want to build strong software systems and master C++.";
    cout << "Name: "; 
    print(name);
    cout << "Major: "; 
    print(major);
    cout << "Reason: ";
    print(reason);
    return 0;
}

// Putting everything in main() is a software engineering problem because main() 
// becomes responsible for too many things, which increases coupling and reduces
//  maintainability. Breaking work into smaller functions makes the code easier 
//  to understand, test, debug, and change later.