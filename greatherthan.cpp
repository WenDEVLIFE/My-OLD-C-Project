#include <iostream>
using namespace std;
char again;
int num1, num2;

int main () {
    do 
    {
cout <<"Enter The First Number" <<endl;
cin>>num1;
cout <<"Enter The Second Number" <<endl;
cin>>num2;
if ( num1>=num2) {
    cout <<"The First Number is Greater than";
    cout <<" Do you want to continue Y/N?" <<endl;
cin>>again;
}
else {
cout <<"The Second Number is Greather Than";
cout <<" Do you want to continue Y/N?" <<endl;
cin>>again;
}


} while ('Y' == again || 'y' == again);
system("pause");
return 0;
} 

