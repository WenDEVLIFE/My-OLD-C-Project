#include <iostream> 
using namespace std;

int main () {
int money =10000;
int withdraw, deposit, pin;
cout <<"Pin: 5693456" <<endl;
cout <<"Enter The Pin Number code" <<endl;
cin>>pin;

 if (5693456==pin) {
    cout <<"Enter the money you withdraw" <<endl;
cin>>withdraw;
cout <<"Balance of The money "<<money - withdraw;
}
else {
    cout <<"Error";
}


}