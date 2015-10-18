#include <iostream> // Standard Requred Header for C++ to compile.
#include <cmath> // Header with various Classes/Functions for mathmatics.
using namespace std; // Standard C++ Namespace.

int main() { // Start Of Program.
    int age; // Decares age variable.
    cout << "What is your age? \n"; // Asks user for their age.
    cin >> age; // Allows (requires) user to enter their name.
    switch(age){ // Begins switch. This will give a response based on the user's age.
        case 16: // If the user is sixteen years old the following response is given.
            cout << "Hey you can drive now... I'm 17 but I'm lazy lol \n"; // Gives user the response.
            break; // Prevents the other responses from appearing.
        case 18: // If the user is eighteen years old the following response is given.
            cout << "Go get a job... I'm one to talk but... \n"; // Gives user the response.
            break; // Prevents the other responses from appearing.
        case 21: // If the user is twenty one years old the following response is given.
            cout << "Go get a beer, and save some for me \n"; // Gives user the response.
        break; // Prevents the other responses from appearing.
        default: // In the event that the user is not one of these three ages the following response is given.
            cout << "Sorry but I have nothing to tell you... Come back after a few years and I might have some wisdom for you \n"; // Gives user the response.
    } Ends switch. No further response nor input is given.
} // End of program.
