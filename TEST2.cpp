#include <iostream>
#include <string.h>
using namespace std;

int main () {
	int age;
	string name, address, gender, birthday;
	
cout <<"Enter your fullname" <<endl;
 cin >>name;
 cout <<"Enter your age" <<endl;
 cin >>age;
  cout <<"Enter your full address" <<endl;
 getline(cin>>ws,address);
 cout <<"Enter your Birthday" <<endl;
 getline(cin>>ws,birthday);
 cout <<"Enter your Gender" <<endl;
  cin >>gender;
  
 cout <<"My Name is" " "<<name <<endl;
  cout <<"My Age is" " "<<age <<endl;
   cout <<"I live  in" " "<<address <<endl;
 cout <<"I was born in" " "<<birthday <<endl;
  cout <<"My Gender is" " "<<gender <<endl;
 return 0;
}
