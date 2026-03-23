#include <iostream> // standard input output library
#include <string> // standard string library

using namespace std; // using names from the standard library without needing ::std 

int main(){ //entry point of the program.. 
            //returns a status code to the operating system 
            //0 is success nonzero is an error

    string name = "Eric";
    cout << "ello, " << name << endl; //'<<' is the stream insertion operator
    return 0; // tells the OS the program completed successfully

}

