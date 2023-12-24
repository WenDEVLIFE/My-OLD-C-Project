#include <iostream>
using namespace std;

int main () {
   char letter;
    cout << "Enter a letter" << endl;
    cin >> letter;

    switch (letter)
    {
    case 'a':
        cout <<" A is Apple" <<endl;
        break;
    case 'b':
        cout <<" b for boat!" <<endl;
        break;

    case 'c':
        cout <<" c for cat!" <<endl;
        break;
    default:
    cout << "letter not found" <<endl;
        break;
    }
}