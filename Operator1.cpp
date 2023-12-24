#include <iostream>
using namespace std;

int main () {
    char op;
  float num1, num2;
  cout << "Enter a Operator: + - / :";
  cin >> op;
    cout<< "Enter two numbers: " << endl;
  cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 <<  " = " << num1 + num2 <<endl;
        break;
    case '-':
      cout << num1 << " - " << num2 <<  " = " << num1 - num2 <<endl;
        break;

    case '/':
        cout << num1 << " / " << num2 <<  " = " << num1 / num2 <<endl;
        break;
    default:
    cout << "No operator found" <<endl;
        break;
    }
    return 0;
}