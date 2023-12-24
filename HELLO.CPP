#include <iostream>
#include <string.h>
using namespace std;

int main () {
    
    string name, address, gender;
    int age;

    cout <<"Enter your Name" <<endl;
cin >>name;
cout <<"Enter your age" <<endl;
cin >>age;
   cout <<"Enter your Gender" <<endl;
cin >>gender;
  cout <<"Enter your address" <<endl;
getline(cin>>ws,address);

cout <<"My name is " "" <<name <<endl;
cout <<"My I live in " "" <<address <<endl;
cout <<"My age is " "" <<age <<endl;
cout <<"My Gender is " "" <<gender <<endl;
}
