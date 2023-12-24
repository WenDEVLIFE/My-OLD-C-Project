#include <iostream>
using namespace std;
//read the int my number //

int main(){
       cout << "Welcome to Math Calculator "<<endl;
       
    int num1, num2, c;
    char opr;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Select a Operator (+, -, *, /, %)";
    cin>>opr;
    if (opr== '+')
    {
        c = num1+num2;
        cout<<c;

    }
    else if(opr== '-'){
        
        c = num1-num2;
        cout<<c;

    }
    else if (opr== '*'){
        c = num1*num2;
        cout<<c;

    }
    else if (opr== '/'){
        c = num1/num2;
        cout<<c;

    }
    else if (opr== '%'){
        c = num1%num2;
        cout<<c;

    }
    else 
    cout<<"=-=-=--=-=-=--=-=-=-=-=-=-=-=-=-=-=Error=-=-=--=-=-=-=-=-=-=-=-=-=-=";

    return 0;

}