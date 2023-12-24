#include <iostream>
using namespace std;

int main () {
    //declate variables
    int operation =0;
    int num1= 0;
    int num2= 0;
    int answer = 0;

    //enter input items
    cout<<"Enter 1 (add) or 2 (subtract): ";
    cin >> operation;
    cout<<endl;
    cout<<"Enter the first number:  ";
    cin >> num1;
    cout<<"Enter the second number:  ";
    cin >> num1;
    cout <<endl;

//calculate and display output
if (operation == 1) {
    answer = num1 + num2;
    cout <<"Sum: " <<answer << endl;
}
else {
    answer = num1 - num2;
    cout <<"Difference: " <<answer << endl;
}
return 0;
//end of main function
  
}