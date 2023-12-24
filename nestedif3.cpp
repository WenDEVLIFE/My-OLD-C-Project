#include <iostream>
using namespace std;

int main() {
  int grade;
  cout<<"Enter Your Grade\n";
  cin>>grade;
  if (grade !=100) {

    if (grade>=90){
        cout<<"You Have the Higher Grades";
    } 
    else 
    {
        cout<<"You have the minimum grade";
    }
  } 
  else {
    cout<<"You have a Perfect Grade";
  }
}