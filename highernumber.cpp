#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;
    
    cout<<"Enter The Three Numbers\n";
    cin>>num1>>num2>>num3;

    if (num1>num2 && num1>num3) 
    {
cout <<"The first number is the Highest";
    }
    else if (num2>num1 && num2>num3) 
    {
cout <<"The second number is the Highest";
    }
 else 
    {
        cout <<"The third number is the Highest";
    }
}