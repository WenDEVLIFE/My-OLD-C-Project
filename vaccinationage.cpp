#include <iostream>
using namespace std;

int main () {
    //read the int
int age = 0;

cout<<" Enter your age to proceed" <<endl;
cin >> age;

if (age >= 18) {
    cout << "You are an adult. Of course, you’re allowed to take the vaccine." <<endl;
}
else if ( age <= 12) {
      cout << "I am sorry you’re not allowed to take the vaccine." <<endl;
}
else {
cout << " You are a teenager so you’re qualified to take the vaccine. " <<endl;

}

return 0;

}