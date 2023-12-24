#include <iostream>
using namespace std;

int main (){
    int num1,remainder, product*1;
    cout<<"Enter a Number\n";
    cin>>num1;

    while (num1>0){
remainder = num1 % 10;
product = num1 * remainder;

num1 = num1 / 10;

    }
   cout<<"The Product of all number is:" <<product;
    return 0;

}