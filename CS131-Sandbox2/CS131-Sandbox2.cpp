#include <iostream>

using namespace std;

/*
Create project with the name Sandbox2 and do the following:

Write code that will ask the user for two integers
Give back (print) to them the total of the two numbers
Also give back (print) to the user the average of the two numbers as a decimal number
*/

int main()
{
    int userInt1;
    int userInt2;
    
    cout << "Enter two integers:\n";

    cin >> userInt1 >> userInt2;

    cout << userInt1 << " + " << userInt2 << " is " << userInt1 + userInt2 << endl;
    cout << "The average of " << userInt1 << " and " << userInt2 << " is " << ((userInt1 + userInt2) / 2) << endl;

    return 0;
}
