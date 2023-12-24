#include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2 , num3, num4;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter four numbers: ";
  cin >> num1 >> num2 >> num3 >> num4;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 <<" + " << num3 << " + " << num4<< " = " << num1 + num2 + num3 + num4;
      break;

    case '-':
      cout << num1 << " - " << num2 <<" - " << num3 << " - " << num4<< " = " << num1 - num2 - num3 -num4;
      break;

    case '*':
      cout << num1 << " * " << num2 << " * "  << num3 << " * "  << num4<< " = " << num1 * num2 *num3 * num4;
      break;

    case '/':
      cout << num1 << " / " << num2 <<  " / " << num3 << " / " << num4<< " = " num3 / num4;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "=-=-=-=--=-=-=-=-=-=-=-=ERRRRRRRRRRRRORRRRRRRRRRR =-=-=-=-=-=-=-=-=-";
      break;
  }

  return 0;
}