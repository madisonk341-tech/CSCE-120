#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
cout << "Enter your first and last name: ";
string firstName = "";
string lastName = "";
cin >> firstName;
cin >> lastName;
cout << "Enter today's month and day as digits: ";
int month = 0;
int day = 0;
cin >> month >> day;
cout << "Enter the course initials and number of your class: ";
string courseInitials = "";
int courseNumber = 0;
cin >> courseInitials >> courseNumber;
cout << "My name is " << firstName << " " << lastName << "." << endl;
cout << "Today is " << month << "/" << day << "." << endl;
cout << "I am taking " << courseInitials << courseNumber << "." << endl;
return 0;
}
