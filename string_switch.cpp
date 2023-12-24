#include <iostream>
using namespace std;

int main () {
  string answer;
    cout << "Enter a letter" << endl;
    cin >> answer;

    switch (answer)
    {
    case 'IGOP':
        cout <<" Igop si garces" <<endl;
        break;
    case 'Sherlock':
        cout <<" 8TH FORM NI SHERLEY" <<endl;
        break;

    case 'Glenn':
        cout <<" HUMBLE" <<endl;
        break;
    default:
    cout << "letter not found" <<endl;
        break;
    }
}