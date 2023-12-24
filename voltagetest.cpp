#include <iostream>
using namespace std;

int main () {
int voltage;

cout <<"Enter The Voltage" <<endl;
cin>>voltage;
if (voltage>=600) {
    cout<<"Passed the Voltage Test";
}
else{
        cout <<"Failed the Voltage Test";
    }
    return 0;
}