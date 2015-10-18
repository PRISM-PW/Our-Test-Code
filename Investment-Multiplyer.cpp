#include <iostream> // Standard Requred Header for C++ to compile.
#include <cmath> // Header with various Classes/Functions for mathmatics.
using namespace std; // Standard C++ Namespace.

int main() { // Start Of Program.

    float a; // a (amount) is the total amount of money that you end up with.
    float p = 10000; // p (principal) is the amount of money you start with.
    float r = .01; // r (rate) is the rate that your money inflates value.
    
    for(int day = 1; day <=20; day++){ // Begins "for loop" and contains some extra values that allows the "for loop" to work.
        a = p * pow(1+r, day); // The financial forumla for the function.
        cout << day << "----------" << a << "\n"; // Outputs the finial results with a day by day listing.
    } // End of "for loop".

} // End of program.
