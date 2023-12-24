#include <iostream>
using namespace std;

int main () {
int birthyear;

cout<<"Enter your birthyear\n";
cin>>birthyear;

if (birthyear>=1946 && birthyear<=1964) {
    cout<<"You are a Boomers";
}
else if (birthyear>=1965 && birthyear<=1980) {
    cout<<"You are a Gen X";
}
else if (birthyear>=1981 && birthyear<=1996) {
    cout<<"You are a Millenials";
}
else if (birthyear>=1997 &&  birthyear<=2011) {
    cout<<"You are a Gen Z";
}
else if (birthyear>=2012) {
    cout<<"You are a Gen Alpha";
}
else {
    cout<<"Unknown Generations";
}

}