#include <iostream>
using namespace std;

int main () {
 char answer;
 do {

    cout<<"Do you want to continue Y or N?\n";
    cin>>answer;

 } while('Y'==answer || 'y'==answer);
cout<<"Stop";
return 0;
}