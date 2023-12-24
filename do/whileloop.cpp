#include <iostream>
using namespace std;

int main() {
    char answer;
    do{
  int num1, num2, num3, sum;
  cout<<"Enter the 1st number\n";
  cin>>num1;
  cout<<"Enter the 2nd number\n";
  cin>>num2;
cout<<"Enter the 3rd number\n";
  cin>>num3;
  sum=num1 + num2 + num3;
  cout<<"The sum is:" <<sum <<endl;
  cout<<"Do you want to continue the program Y/N \n";
  cin>>answer;
    }while('Y' ==answer|| 'y' ==answer);
    system("pause");


    return 0;
}