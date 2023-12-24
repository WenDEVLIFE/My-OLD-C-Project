// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter an integer:";
    cin>>num1;
    cout<<"Enter an integer:";
    cin>>num2;
    cout<<"Enter an integer:";
    cin>>num3;
    if(num1 > num2){
      if(num1 > num3){
       cout<<num1<<" is max";
      }
      else{
      cout<<"error";
    }
    }
    else if(num2 > num1){
      if(num2 > num3){
       cout<<num2 <<" is max";
    }
      else{
      cout<<"error2";
    }
    }
    else if(num3 > num1){
      if(num3 > num2){
       cout<<num3 <<" is max";
    }
      else{
      cout<<"error";
    }
    }
    return 0;
}