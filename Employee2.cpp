#include <iostream>
using namespace std;

int main() {
    string name;
    double grosspayment, netpay, netpay2, ratehour;
    int totalhours, totalovertime;
    
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Enter Your Rate/hour\n";
    cin>>ratehour;
    cout<<"Enter Total Hours\n";
    cin>>totalhours;
    cout<<"Enter Total Overtime Hours\n";
    cin>>totalovertime;
    grosspayment = (totalhours*ratehour) + ((ratehour*20) * totalovertime);
    if (grosspayment>=10000) {
        netpay = (grosspayment*12)/100;
        netpay2 = grosspayment-netpay; 
        cout<<"Employee Name: " <<name <<endl;
        cout<<"Your Rate/Hour: " <<ratehour <<endl;
        cout<<"Your Total Hours: " <<totalhours <<endl;
    cout<<"Your Total Overtime Hours: " <<totalovertime <<endl;
    cout<<"Your Grosspay is " <<grosspayment <<endl;
    cout<<"Your Netpay is " <<netpay2;
    } else {
        cout<<"Employee Name: " <<name <<endl;
        cout<<"Your Rate/Hour: " <<ratehour <<endl;
        cout<<"Your Total Hours: " <<totalhours <<endl;
    cout<<"Your Total Overtime Hours: " <<totalovertime <<endl;
    cout<<"Your Grosspay is " <<grosspayment <<endl;
    }
    

    return 0;
}