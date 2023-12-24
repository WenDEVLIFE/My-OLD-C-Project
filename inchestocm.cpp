#include<iostream>
using namespace std;
int main()
{
// float inch and centimeters
 float inch,centimeters;
 //ask the user to put the inches
 cout<<"enter number in inches" <<endl;
 // read what you put in the inch variable
 cin>>inch;
 //calculate inch to centimeters
 centimeters=inch*2.54;
 //print the centimeters
 cout<<"Centimeters are \n"<<centimeters;
 return 0;
}