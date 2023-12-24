#include <iostream>
using namespace std;

int main () {
int code;
string username, password;

 cout<<" Enter Your Username\n";
 cin>>username;
 cout<<" Enter Your Password\n";
 cin>>password;
 cout<<" Enter Your Verification Code\n";
 cin>>code;
 if (username !="Wen1345" && password  !="newbie290x" && code !=908902) {

     if (username =="Wen1345" && password  =="newbie290x" && code ==908902) {
    cout<<"Welcome User Wen1345";
     } else {
    cout<<"No Information Found, Try Again Later";
  }
}
 else {
    cout<<"The Username, password or verification code is incorrect";
 }
cout << "Excercise Only!!!!"<<endl;

}