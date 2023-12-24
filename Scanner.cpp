#include <iostream>
using namespace std;

int main () {
    //strings for initializing name, and address //
    string firstname, middlename, lastname, address, hobbies;
    // Int inializing for age and year //
 int age, year;
double height, bmi;    
       
    
    
// ask the user to input // 
cout << "Enter your FirstName:" << endl;
cin>> firstname;
 cout << "Enter your MiddleName:" << endl;
cin>> middlename;
cout << "Enter LastName:" << endl;
cin>> lastname;
cout <<"Enter your Address:"<< endl;
cin >> address;
cout << "Enter your most hobby you like:" << endl;
cin>> hobbies;
 
cout <<"Enter your Age:" <<endl;
cin >> age;
 
cout <<"Enter your Height:"<<endl;
cin >> height;

cout <<"Enter your BirthYear:"<<endl;
cin >> year;
 
cout <<"Enter your BMI:" << endl;
cin >> bmi;
 
// Print or display what the user put //
cout <<"My name is" " "<<firstname<<" "<<middlename<< " " <<lastname<<endl;
cout <<"I live in" " " <<address << endl;
cout <<"I am" " "<<age << endl;
cout << "My Hobbies is" " "<<hobbies << endl;
cout <<"My BirthYear is" " "<<year << endl;
cout <<"My Height is" " "<<height << endl;
cout <<"My BMI is" " "<<bmi << endl;
return 0;






}