//Practice Problem: Repeated Console Output
/*Coding Prompt: Create a program that performs the following tasks.

Prompt the user to enter a value through console input with the message: Enter a positive integer value to countdown from: 

Display a countdown for each number until reaching 1 with the message (where # is a number): Countdown to #...

After reaching zero, output: Happy New Year!

Learning Objective: 
   Performing a decrementing task in a while-loop*/

#include <iostream>
using std::cout, std::endl, std::cin;

int main(){
    int number = 0;
    cout <<"Enter a positive integer value to countdown from: ";
    cin >> number;
    while (number > 0) {
        cout << "Countdown to " << number << " ..." << endl;
        number --;
    }
    if (number == 0) {
        cout << "Happy New Year!" << endl;
    }
    return 0;
}