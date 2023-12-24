#include <iostream>
using namespace std;
#include <string.h>
 string search;

    char again;
int main () 
{
   do {


    cout << " Welcome to C++ Search Engine" <<endl;
   cout << " In order to search just type anythin and we will show it to you" << endl;
   getline(cin>>ws,search);

   if ("Leonardo The Vinci" == search) {
    cout <<"Leonardo is identified as one of the greatest painters in the history of art and is often credited as the founder of the High Renaissance.[3] Despite having many lost works and less than 25 attributed major works—including numerous unfinished works—he created some of the most influential paintings in Western art.[3] His magnum opus, the Mona Lisa, is his best known work and often regarded as the world's most famous painting. The Last Supper is the most reproduced religious painting of all time and his Vitruvian Man drawing is also regarded as a cultural icon. In 2017, Salvator Mundi, attributed in whole or part to Leonardo,[5] was sold at auction for US$450.3 million, setting a new record for the most expensive painting ever sold at public auction." <<endl;
      cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   }
   else if ("leonardo the vinci" == search) {
    cout <<"Leonardo is identified as one of the greatest painters in the history of art and is often credited as the founder of the High Renaissance.[3] Despite having many lost works and less than 25 attributed major works—including numerous unfinished works—he created some of the most influential paintings in Western art.[3] His magnum opus, the Mona Lisa, is his best known work and often regarded as the world's most famous painting. The Last Supper is the most reproduced religious painting of all time and his Vitruvian Man drawing is also regarded as a cultural icon. In 2017, Salvator Mundi, attributed in whole or part to Leonardo,[5] was sold at auction for US$450.3 million, setting a new record for the most expensive painting ever sold at public auction." <<endl;
      cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   }
else if ("World War 2" == search)
{
    cout << "World War II or the Second World War, often abbreviated as WWII or WW2, was a global war that lasted from 1939 to 1945. It involved the vast majority of the world's countries—including all of the great powers—forming two opposing military alliances: the Allies and the Axis powers." <<endl;
cout << "Date: Sep 1, 1939 to Sep 2, 1945" <<endl;
  cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   }
   else if ("World War Two" == search)
{
 
   cout << "World War II or the Second World War, often abbreviated as WWII or WW2, was a global war that lasted from 1939 to 1945. It involved the vast majority of the world's countries—including all of the great powers—forming two opposing military alliances: the Allies and the Axis powers." <<endl;
   cout << "Date: Sep 1, 1939 to Sep 2, 1945" <<endl;
     cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   } 
   else if ("World War II" == search)
{
    
cout << "World War II or the Second World War, often abbreviated as WWII or WW2, was a global war that lasted from 1939 to 1945. It involved the vast majority of the world's countries—including all of the great powers—forming two opposing military alliances: the Allies and the Axis powers." <<endl;
 cout << "Date: Sep 1, 1939 to Sep 2, 1945" <<endl;
   cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   }
   else if ("world war 2" == search)
{
    cout << "World War II or the Second World War, often abbreviated as WWII or WW2, was a global war that lasted from 1939 to 1945. It involved the vast majority of the world's countries—including all of the great powers—forming two opposing military alliances: the Allies and the Axis powers." <<endl;
  cout << "Date: Sep 1, 1939 to Sep 2, 1945" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
   }
   else {
    cout << " your search cannot be found" <<endl;
      cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
    break;
   }
   }while ('Y' == again|| 'y' == again);
system("pause");
return 0;
}
