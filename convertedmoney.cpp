#include <iostream>
using namespace std;

int main () {
int num;
double u, a, e, j, p, c1, c2, c3, c4, c5;
cout<<"Press 1 if you want to convert Peso to US Dollar\n";
cout<<"Press 2 if you want to convert Peso to EURO\n";
cout<<"Press 3 if you want to convert Peso to Japanese Yen\n";
cout<<"Press 4 if you want to convert Peso to British Pound Sterling\n";
cout<<"Press 5 if you want to convert Peso to Australian Dollar\n";
cin>>num;
if (num==1) {
    cout<<"Enter the Peso amount\n";
    cin>>u;
    c1 = u *0.017178;
    cout<<u <<" Peso is Equal to " <<c1 <<" USD";

}
else if(num==2) {
 cout<<"Enter the Peso amount\n";
    cin>>e;
    c2 = e *0.017013;
    cout<<e <<" Peso is Equal to " <<c2 <<" EURO";
}
else if(num==3) {
     cout<<"Enter the Peso amount\n";
    cin>>j;
    c3 = j *2.5172;
    cout<<j <<" Peso is Equal to " <<c3 <<" JAPANESE YEN";
}
else if(num==4) {
     cout<<"Enter the Peso amount\n";
    cin>>p;
    c4 = p *0.01488 ;
    cout<<p <<" Peso is Equal to " <<c4 <<" British Pound Sterling";
}
else if(num==5) {
     cout<<"Enter the Peso amount\n";
    cin>>a;
    c5 = a *0.026481;
    cout<<a <<" Peso is Equal to " <<c5 <<" Australia Dollar";
}
else {
    cout<<"Select From 1 to 5";
}
}