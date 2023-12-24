#include <iostream>
using namespace std;

int main () {
    float num1,num2;
    double x =33.38;


    cout << "Enter your credit" <<endl;
     cin >> num1;
    cout << "Enter your Payment" << endl;
    cin >> num2;
    cout<< "The Balance is" " " <<num1 - num2 <<endl;
    cout << "The Penalty to be added to your next month's bill is:" <<x <<endl;
}