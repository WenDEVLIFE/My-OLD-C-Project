#include <iostream>
using namespace std;
 char answer;
int main () 
{  do {
   
int money = 10000;
int withdraw, deposit, select,pin ,addition;
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout <<"Pin Number: 5690456" <<endl;
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout <<"Enter the Pin Number" <<endl;
cin>>pin;

if (5690456 == pin) {
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout<<"|                 Welcome to Medina ATM Machine v1.0                        |" <<endl;
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout <<"Type a Number to Enter" <<endl;
cout <<"1. Withdraw " <<endl;
cout <<"2. Deposit " <<endl;
cout <<"3. Exit " <<endl;
cin>>select;
switch (select)
{
case 1:
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout<<"|                 Withdraw Section                                          |" <<endl;
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout<<"Enter a balance to withdraw" <<endl;
cin>>withdraw;
cout<<"The Balance of the money is " <<money - withdraw <<endl;
cout <<"You Withdraw " " "<<withdraw;
cout <<"Do you want to continue select Y/N" <<endl;
cin>>answer;
    break;
case 2:
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout<<"|                 Deposit Section                                           |" <<endl;
cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
cout <<"Enter a balance to deposit" <<endl;
cin>>deposit;
addition = money + deposit;
cout<<"The Balance is now: " <<addition <<endl;
cout <<"Do you want to continue select Y/N" <<endl;
cin>>answer;
break;
case 3:
cout <<"Are you sure exit?" <<endl;
cout <<"Do you want to continue select Y/N" <<endl;
cin>>answer;
break;
default:
cout <<"Select a Number Plsss:" <<endl;
cout <<"Do you want to continue select Y/N" <<endl;
cin>>answer;
    break;
}

}
else {
    cout<<"Error Your Pin Code is Incorrect";
    cout <<"Do you want to continue select Y/N" <<endl;
cin>>answer;
}
} while ('Y'==answer || 'y' ==answer );
system("pause");
return 0;
}
