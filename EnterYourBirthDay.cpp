#include <iostream>
using namespace std;
void age1(int pd, int pm, int py,int birthdate, int  birthmonth, int birthyear)
{
  int day, month, year;
  int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
  year= py - birthyear;
  if (pm <  birthmonth)
  {
    year--;
    month = 12 - ( birthmonth - pm);       
  }
  else
  {month = pm - birthmonth;}
  if (pd < birthdate)
  {
    month--;
    day = md[pm - 1] - (birthdate - pd);
  }
  else
  {day = pd - birthdate;}
  cout << "your age is : \n";
  cout << year << " years " << month << " months " << day << " days. ";
}
int main()
{
  int pd, pm, py, birthdate,  birthmonth, birthyear;
cout <<"==-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-= "<<endl;
cout <<" | Enter the present date in the format dd mm yyyy:|"<<endl;
cout <<"==-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-= " <<endl;
  cin >> pd >> pm >> py;
cout << "==-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-= "<<endl;
cout <<"| Enter the birth date in the format dd mm yyyy :  |" <<endl;
cout << "==-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-= "<<endl;
  cin >> birthdate >> birthmonth >> birthyear;
  age1(pd, pm, py, birthdate,  birthmonth, birthyear);
  
  return 0;
}