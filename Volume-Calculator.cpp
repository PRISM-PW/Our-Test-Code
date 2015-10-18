#include <iostream> // Standard Requred Header for C++ to compile.
using namespace std; // Standard C++ Namespace.

int volume(int l=1, int w=1, int h=1); 
/*
See above.
Declares the volume variables for later use.
l=length
w=width
h=hight
*/

int main()
{ // Start Of Main Program.
    cout << volume(); // Calls Calculation Function and displays the results.
} // End of Main Program

int volume(int l, int w, int h) // Function for Calculating Volume.
{ // Start Of Function.
    return l*w*h; // Calculation and return command.
} // End of Function
