#include <iostream>
using std::cout, std::endl;
int main() {
bool first  = true;
bool second = false;

 cout << "--- before negation ---" << endl;
 cout << std::boolalpha;
 cout << "first:  " << first << endl;
 cout << "second: " << second << endl;
 cout << endl;
 first = !first;
 second = !second; cout << "--- after negation ---" << endl;
 cout << "first: " << first << endl;
 cout << "second: " << second << endl;
 return 0;
}
