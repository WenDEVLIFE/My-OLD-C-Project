#include <iostream>
using namespace std;
char again, quit;
string answer;
int option, num;
int main () {
    do // to run the program again without restarting to run the programm.
 {
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"|               Welcome to Comelec Voting Machine                 |" <<endl;
cout <<"|              Philippine Parliament Election 2022                |" <<endl;
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"select an option" <<endl;
cout <<"1.Vote" <<endl;
cout <<"2.Instruction" <<endl;
cout <<"3.Quit" <<endl;
cin >> option;
//select an option
if ( option == 1) {
    //select a Political Party
    cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
    cout <<"|                      Select a Political Party                   |" <<endl;
     cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"1.Uniteam" <<endl;
cout <<"2.Liberal Party" <<endl;
cout <<"3.Social Democrats"<<endl;
cout <<"4.PDP Laban" <<endl;
cout <<"5.Nationalista Party"<<endl;
cin >>num;
switch (num)
{
case 1:
//party you selected //
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"|                      The Party You Selected                    |" <<endl;
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"1.Uniteam" <<endl;
cout <<"Members of The party:"<<endl;
cout <<"President"<<endl;
cout <<"BongBong Marcos"<<endl;
cout <<"Vice President"<<endl;
cout <<"Sara Duterte"<<endl;
cout <<"12 senate of Uniteam"<<endl;
cout <<"1.Robin Padilla"<<endl;
cout <<"2.Loren Legarda"<<endl;
cout <<"3.Win Gatchalian"<<endl;
cout <<"4.Jinggoy Estrada"<<endl;
cout <<"5.Gregorio Honasan"<<endl;
cout <<"6.Harry Roque"<<endl;
cout << "7.Gilbert Teodoro"<<endl;
cout <<"8.Mark Villar"<<endl;
cout << "9.Juan Miguel Zubiri"<<endl;
cout << "10.Larry Gadon"<<endl;
cout << "11.Herbert Bautista"<<endl;
cout << "12.Rodante Marcoleta"<<endl;
cout <<"Are you sure you want to Confirm? Yes or No:"<<endl;
cin>>answer;
 if ( "Yes"== answer || "yes" ==answer) {
    cout <<"You vote for Uniteam" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;

}
else {
    cout <<"Error" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;

}
    break;
    case 2:
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"|                      The Party You Selected                    |" <<endl;
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"1.Liberal Party" <<endl;
cout <<"Members of The party:"<<endl;
cout <<"President"<<endl;
cout <<"Leni Robredo"<<endl;
cout <<"Vice President"<<endl;
cout <<"Francis Pangilinan"<<endl;
cout <<"12 senate of Uniteam"<<endl;
cout <<"1.Chel Diokno "<<endl;
cout <<"2.Leila De lima"<<endl;
cout <<"3.Teddy Baguilat"<<endl;
cout <<"4.Liberal"<<endl;
cout <<"5.Marieta Mindalano-Adam"<<endl;
cout <<"6.Willie Ricablanca Jr."<<endl;
cout << "7.Gilbert Teodoro"<<endl;
cout <<"8.Rey Valeros"<<endl;
cout << "9.Carmen Zubiaga"<<endl;
cout << "10.Ariel Lim"<<endl;
cout << "11.Sonny Matula"<<endl;
cout << "12.Jejomar Binay"<<endl;
cout <<"Are you sure you want to Confirm? Yes or No:"<<endl;
cin>>answer;
 if ( "Yes"== answer || "yes" ==answer) {
    cout <<"You vote for Uniteam" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;

}
else {
    cout <<"Error" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;

}
    break;

default:
cout <<"Error" <<endl;
    cout <<" Do you want to continue Y/N?" <<endl;
    cin>> again;
    break;
}
}
else if ( option ==2) {
    //instructions
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
cout <<"|               How to Vote?                                      |" <<endl;
cout <<"|           In Philippine Parliament Election 2022                |" <<endl;
cout <<"=-=-=-=-=-=-=-==-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=--=--=" <<endl;
 cout <<" 1. select a option" <<endl;
cout <<" 2. select a party to vote" <<endl;
cout <<" 3. confirm if you are 100 percent ok in your decision" <<endl;
cout <<" 4. Done" <<endl;
cout <<" Do you want to continue Y/N?" <<endl;
cin>> again;
}
// end the program //

else {
    do {
    cout <<" Are you sure you wanna quit Y/N??" <<endl;
cin>> quit;
} while ('N'== quit|| 'n' == quit);
system("pause");
return 0;
}

} while ('Y' ==again|| 'y' ==again);
system("pause");
return 0;
}

