#include <iostream>
using namespace std;

int main() {
    // variables of int
    int num1, num2, num3, num4, product, quotient;
    //ask to user put first number
    cout<<"Enter First Number" <<endl;
    //read what you put in num1
    cin>>num1;
      //ask to user put second number
     cout<<"Enter Second Numbers" <<endl;
         //read what you put in num2
    cin>>num2;
      //ask to user put third number
     cout<<"Enter Third Numbers" <<endl;
         //read what you put in num3
    cin>>num3;
  //ask to user put four number
     cout<<"Enter Four Numbers" <<endl;
         //read what you put in num4
         cin>>num4;

    product = num1 * num2 * num3 * num4;
    quotient = num1 / num2 / num3 / num4;
cout <<"The product is : " <<product <<endl;
cout <<"The quotient is : " <<quotient <<endl;

return 0;
}