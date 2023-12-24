#include <iostream>
using namespace std;

int main() {
int price, discount1, discount2;
cout<<"Enter the price\n";
cin>>price;

if (price>=2000) {
    discount1=price*15/100;
    cout<<"The 15 percent discount has deducted only to "<<discount1;
}
else {
    discount2=price*10/100;
    cout<<"The 10 percent discount has deducted only to "<<discount2;

}
return 0;
}