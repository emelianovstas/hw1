#include <iostream>
using namespace std;
long double Fib (long double i)
{
long double f1 = 0;
long double f2 = 1;
long double fn;
if (i < 1) { return 0; }
if (i == 1){ return 1; }
if (i > 1)
{

for (long double j = 1; j < i;j++)
{
fn = f1 + f2;

f1 = f2;
f2 = fn;
}
}
cout << fn;
return 0;
};

int main(){
char choice;
long double input;
cout << "Enter the number below, and you will get the Fibonacci numder corresponding to the position indicated by your input number: ";
cin >> input;
cout << " Your value (" << input << ") is " << Fib(input);
cout << "\nAgain? Y/N: ";
cin >> choice;
while (choice == 'y' || choice == 'Y')
{
cout << "\nEnter the number below, and you will get the Fibonacci numder corresponding to the position indicated by your input number: ";
cin >> input;
cout << " Your value (" << input << ") is " << Fib(input);
cout << "\nAgain? Y/N: ";
cin >> choice;
}
return 0;
}

