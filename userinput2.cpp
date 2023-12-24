#include <iostream>
#include <string.h>
using namespace std;

int main () {
    int age, birthyear, birthdate;
    string name, address, gender, birthmonth;
    cout << " Enter your name" <<endl;
    // ang cin function basahon niya tong imong gi type sa input//
    getline(cin>>ws,name);
    cout << "Enter your full address" <<endl;
   getline(cin>>ws,address);
    cout << "Enter your gender" <<endl;
    getline(cin>>ws,gender);
 cout << "Enter your birthmonth" <<endl;
   getline(cin>>ws,birthmonth);
     cout << "Enter your birthdate" <<endl;
   cin>>birthdate;
     cout << "Enter your birthyear" <<endl;
   cin>>birthyear;
   cout << "Enter your age" <<endl;
   (cin,age);

   cout << "My name is " " " <<name <<endl;
   cout << "I live in " " " <<address <<endl;
   cout << "My Age is " " " <<age <<endl;
   cout << "My gender is" " " <<gender <<endl;
   cout << "My Birthmonth is " " " <<birthmonth <<endl;
    cout << "My Birthdate  is " " "<<birthdate <<endl;
      cout << "My Birthyear is " " "<<birthyear <<endl;
   return 0;
}