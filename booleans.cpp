#include <iostream>
using std::cout, std::endl;
int main() {
int firstNumber = 0;
int secondNumber = 1;
double thirdNumber = 0.33;
bool first = firstNumber;
bool second = secondNumber;
bool third = thirdNumber;

cout << "--- numerical values ---" << endl;
cout << "firstNumber: " << firstNumber << endl;
cout << "secondNumber: " << secondNumber << endl;
cout << "thirdNumber: " << thirdNumber << endl;

cout << "--- boolean values ---" << endl;
cout << std::boolalpha;
cout << "first: " << first << endl;
cout << "second: " << second << endl;
cout << "third: " << third << endl;
return 0;}
