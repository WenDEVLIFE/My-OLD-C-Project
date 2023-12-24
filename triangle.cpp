#include <iostream>
using namespace std;


int main() {
int n=26;
int a, b;
for (a=0;a<=n;a++) 
{
    for (int b=n; b>0;b--)
    { 
        if (a>=b)
        cout<<"*";
        else
        cout<<" ";
    }
 cout<<endl;
}
    return 0;
}