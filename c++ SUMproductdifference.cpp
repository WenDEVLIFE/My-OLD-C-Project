
#include <iostream>
#include <conio.h>
using namespace std;


int main()

{

   int sum,diff,prod,div, x , y;


   cout<<" This is a program that will compute the "<<endl;

   cout<<"sum, difference,product and division of two numbers.\n";

   cout<<" Please enter the first integer.\n";

   cin>>x;

   cout<<" Please enter the second integer.\n";

   cin>>y;

    sum = x+y;

    diff = x-y;

    prod = x*y;

    div = x / y;


   cout<<"The sum is: ";

   cout<<sum<<endl;

   cout<<"The difference is: ";

   cout<<diff<<endl;

                cout<<"The product is: ";

   cout<<prod<<endl;

   cout<<"The division is: ";

   cout<<div<<endl;


   getch();

   return 0;

}