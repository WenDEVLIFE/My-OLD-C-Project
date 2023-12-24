#include <iostream>
using namespace std;

int main () {
    string username, password, user, information1, information2,answer;
    int option, option2,option3;
  cout<<"----------------------------------------------\n" <<"-------------Simple-Login-System--------------\n" <<"----------------------------------------------\n";
     cout<<"Username:";
     cin>>username;
     cout<<"Password:";
     cin>>password;
    if (username =="User1345" && password =="username1343") {
        cout<<"-------------------------------------------\n";
        cout<<"--------Welcome User User1345--------------\n";
        cout<<"-------------------------------------------\n";
        cout<<"[1] User\n" <<"[2] Change Credentials\n" <<"[3]Logout\n";
        cin>>option;
           switch(option) {
            case 1:
            cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
            cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n";
            cout<<"----------------------------------\n" <<"-------------Options--------------\n" <<"----------------------------------\n";
            cout<<"[1] Add User\n" <<"[2] Delete User\n" <<"[3] Exit\n";
            cin>>option2;
            switch (option2) {
                case 1:
                 cout<<"----------------------------------\n" <<"-----------AddUser-----------------\n" <<"-------------------------------\n";
                cout<<"Enter Your Username:";
                cin>>username;
                cout<<"Enter Your Password:";
                cin>>password;
                cout<<"Your Account " <<username <<" Has Successfully Created";
               cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4] " <<username;
                      
                break;
                case 2:cout<<"----------------------------------\n" <<"------------DeleteUser---------------\n" <<"-------------------------------\n";
            cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4]" <<username;
            cin>>option3;
            switch (option3)
            {
            case 1:
                 cout<<"Are You Sure you want to Delete User1345?\n";
                 cin>>answer;
                 if (answer=="Yes" || answer =="yes") {
                  cout<<"You Successfully Delete User1345";
                  cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                  cout<<"[1] Wenwen123\n" <<"[2] Null345\n" <<"[3]" <<username;
                 }
                 else {
                   cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                   cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4]" <<username;
                 }
              break;
              case 2:
               cout<<"Are You Sure you want to Delete Wenwen123?\n";
                 cin>>answer;
                 if (answer=="Yes" || answer =="yes") {
                  cout<<"You Successfully Delete Wenwen123";
                  cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                  cout<<"[1] User1345\n" <<"[2] Null345\n" <<"[3]" <<username;
                 }
                 else {
                   cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                   cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4]" <<username;
                 }
              break;
              case 3:
               cout<<"Are You Sure you want to Delete Null345?\n";
                 cin>>answer;
                 if (answer=="Yes" || answer =="yes") {
                  cout<<"You Successfully Delete Null345";
                  cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                  cout<<"[1] User1345\n" <<"[2] Wwenwen123\n" <<"[3]" <<username;
                 }
                 else {
                   cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                   cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4]" <<username;
                 }
                 
                
              break;
            case 4:
             cout<<"Are You Sure you want to Delete" <<username <<"?";
                 cin>>answer;
                 if (answer=="Yes" || answer =="yes") {
                  cout<<"You Successfully Delete " <<username;
                  cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                  cout<<"[1] User1345\n" <<"[2] Wwenwen123\n" <<"[3] Null345\n";
                 }
                 else {
                   cout<<"----------------------------------\n" <<"-------------User-----------------\n" <<"-------------------------------\n";
                   cout<<"[1] User1345\n" <<"[2] Wenwen123\n" <<"[3] Null345\n" <<"[4]" <<username;
                 }
            break;
            
            default:
            cout<<"Select User";
              break;
            }

            }
            
          case 2:
          cout <<"----------------------------------------\n"<<"-------------Change-Credentials-------------------\n" <<"--------------------------------------\n";
          cout<<"Enter Your Current Username:";
          cin>>username;
          cout<<"Enter Your Current Password:";
          cin>>password;
          if (username =="User1345" && password =="username1343") { 
                cout<<"Enter Your New Username:";
                cin>>information1;
                cout<<"Enter Your New Password:";
                cin>>information2;

                cout<<"Your Credentials has been Changed\n";
                cout<<"Username:" <<information1;
                cout<<"\n";
                cout<<"Password:" <<information2;

              }

            break;
          case 3:
          cout<<"Are You Sure You Want To Logout";
          cin>>answer;
          if (answer=="Yes" || answer =="yes") {
              cout<<"You Successfully Logout";
            }
            else if (answer=="No" || answer =="no") {
            cout<<"-------------------------------------------\n";
            cout<<"--------Welcome User User1345--------------\n";
            cout<<"-------------------------------------------\n";
            cout<<"[1] User\n" <<"[2] Change Credentials\n" <<"[3]Logout\n";
            cin>>option;
            }
            else {
              cout<<"Select Yes or no";
            }
            break;
          default:
          cout<<"Select 1-3";
          break;
        }
    
         }
         else {
          cout<<"Incorrect Credentials Try Again Later\n";
          }  
}





