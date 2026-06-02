//Selecting Options from a Menu
/*Coding Prompt: Create a program that performs the following tasks.

Display a menu with a title bar and three options: two options with a question and one option for exiting the program.
Prompt the user to enter an option number from the menu.
Output a unique response for each question option.
Keep prompting the user until the exit program option is selected.

Learning Objective: 
  Performing a console input task to select and display options in while-loop.
*/

#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() {
    while (true) {
        cout << "1: What is your name?" << endl;
        cout << "2: How old are you?" << endl;
        cout << "3: Exit the program" << endl;

        cout << "Enter a option number from the menu: ";
        int option = 0;
        cin >> option;
        if (option == 1) {
            cout << "What is your name? ";
            string name = "";
            cin >> name;
            cout << "Hello, " << name << "!" << endl;
        } else if (option == 2) {
            cout << "How old are you? ";
            int age = 0;
            cin >> age;
            cout << "You are " << age << " years old." << endl;
        } else if (option == 3) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
}