#include <iostream>
#include <string>

using namespace std;

int main () {
int num1, num2;
cout << "Enter two numbers: ";
cin >> num1 >> num2;
try {
if (num2 == 0)
{
throw string("Cannot divide by zero!");
// Throwing a string exception
}
cout << "Result: " << num1 / num2 << endl;
}
catch (string errorMessage) {
// Catching string exception
cout << "Exception caught: " << errorMessage << endl;
}
return 0;
}