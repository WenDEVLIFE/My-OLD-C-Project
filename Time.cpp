#include <iostream>
using namespace std;

int main ()
 {
int t;

cout << "Enter from 1-24" <<endl;
cin >> t;

if(t>=0 && t<=3) {
        cout << "Good Night";
        }
        else if(t>=4 && t<=11) {
        cout << "Good Morning";
        }
         else if (t==12 )
          {
 cout << "Good Noon";
         }
         else if(t>=13 && t<=15) {
        cout << "Good Afternoon";
        }
        else if(t>=16 && t<=20) {
        cout << "Good Evening";
        }
        else if(t>=21 && t<=24) {
        cout << "Good Goodnight";
        }
         else {
                cout <<"unknown time";
         }       
                getc;

}