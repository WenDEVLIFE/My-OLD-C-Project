#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter grade obtained in Subject: ";
    for(i=0; i<1; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum;
    cout<<"\nRemark = ";
    if(avg>=99 && avg<=100)
        cout<<"Excellent";
    else if(avg>=96 && avg<99)
        cout<<"Outstanding";
    else if(avg>=90 && avg<95)
        cout<<"Very Good";
    else if(avg>=80 && avg<89)
        cout<<"Good";
    else if(avg>=75 && avg<79)
        cout<<"Fair";
    else if(avg>=50 && avg<74)
        cout<<"Needs Improvement";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}