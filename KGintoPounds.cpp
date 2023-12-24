//header file
#include <iostream>
// to run the variables and functions.
using namespace std;

int main () {
 //string for name
    string name;
    //int of contact numbers
    int contact;
    //float of kilograms and pounds
float kilograms, pounds;
cout <<"Please Put Your Personal Info" <<endl;
//ask the user to put name
cout <<"Enter your Name:" <<endl;
//read what you put in name variable
cin>>name;
//ask the user to put contact number
cout <<"Contact Nuumber" <<endl;
//read what you put in the contact variable
cin>>contact;
//ask the user to put weight into kg
cout <<"Enter weight into kg:" <<endl;
//read what you put in the variable
cin>>kilograms;
//calculate kilograms to pounds
pounds=kilograms*2.20462;
//print the pounds
cout<<"Kilograms to Pounds is: " <<pounds;
return 0;

}