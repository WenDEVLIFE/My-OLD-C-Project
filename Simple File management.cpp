#include <iostream>
#include <string>
using namespace std;
char op;
int main ()
{ 
    string filename;
    int num;
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
         cout <<"========================================================================= "<<endl;
        cout << "|                           Login  Form                                 |"<<endl;
        cout << "========================================================================= "<<endl;
        cout << "========================================================================= "<<endl;
        cout << "|            Please enter your user name                                |"<<endl;
        cout << "========================================================================= "<<endl;
        cin >> userName;
        cout << "========================================================================= "<<endl;
        cout << "|             Please enter your user password:                           |"<<endl;
        cout << "========================================================================= "<<endl;
        cin >> userPassword;
        
        if (userName == "medina1234" && userPassword == "newbie290")
        {
            do {
            cout << "Welcome Medina1234!\n";
        cout << "========================================================================= "<<endl;
        cout << "|            C++ Electronic Document Management System                   |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"Select a option to proceed" <<endl;
        cout <<"[1.] Upload a files" <<endl;
        cout <<"[2.] instruction" <<endl;
        cout <<"[3.] logout" <<endl;
        cin>>num;
        switch (num)
        {
        case 1:
        cout << "========================================================================= "<<endl;
        cout << "|            File Section                                               |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"Enter the filename to upload the file" <<endl;
        cout << "========================================================================= "<<endl;
        cout <<"|         Name of the File                                                |" <<endl;
        cout<< "|         Example: Me.mp4                                                 |" <<endl;
        cout << "========================================================================= "<<endl;
        cin>>filename;
        cout<<"Uploadingg................."<<endl;
        cout <<"10%" <<endl;
        cout <<"20%" <<endl;
        cout <<"30%" <<endl;
        cout <<"40%" <<endl;
        cout <<"50%" <<endl;
        cout <<"60%" <<endl;
        cout <<"70%" <<endl;
        cout <<"80%" <<endl;
        cout <<"90%" <<endl;
        cout <<"100%" "uploaded" <<endl;
        cout << "The file: " + filename + "\n has successfully uploaded"<<endl;
        cout <<"Are you sure you want to continue? press Y/N" <<endl;
           cin>>op;


            break;
        case 2:
        cout << "========================================================================= "<<endl;
        cout << "|            How to Use C++ EDMS                                        |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"1. select the file section" <<endl;
        cout <<"2. type the filename you want" <<endl;
        cout <<"3. Enter the name" <<endl;
        cout <<"4. Succesfully uploaded the file" <<endl;
          cout <<"Are you sure you want to continue? press Y/N" <<endl;
           cin>>op;
        
        break;
        
        default:
        cout <<"Are you sure you want to continue login? Y/N" <<endl;
         cin>>op;
            break;
        }
            }while ('Y'==op || 'y' ==op );
system("pause");
return 0;
    
            break;
        }
        else if (userName == "GlennRAMASWATAPAM2X" && userPassword == "SLAYFORTHEWIN")
        {
       do {
            cout << "Welcome GlennRAMASWATAPAM2X!\n";
        cout << "========================================================================= "<<endl;
        cout << "|            C++ Electronic Document Management System                   |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"Select a option to proceed" <<endl;
        cout <<"[1.] Upload a files" <<endl;
        cout <<"[2.] instruction" <<endl;
        cout <<"[3.] logout" <<endl;
        cin>>num;
        switch (num)
        {
        case 1:
        cout << "========================================================================= "<<endl;
        cout << "|            File Section                                               |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"Enter the filename to upload the file" <<endl;
        cout << "========================================================================= "<<endl;
        cout <<"|         Name of the File                                                |" <<endl;
        cout<< "|         Example: Me.mp4                                                 |" <<endl;
        cout << "========================================================================= "<<endl;
        cin>>filename;
        cout<<"Uploadingg................."<<endl;
        cout <<"10%" <<endl;
        cout <<"20%" <<endl;
        cout <<"30%" <<endl;
        cout <<"40%" <<endl;
        cout <<"50%" <<endl;
        cout <<"60%" <<endl;
        cout <<"70%" <<endl;
        cout <<"80%" <<endl;
        cout <<"90%" <<endl;
        cout <<"100%" "uploaded" <<endl;
        cout << "The file: " + filename + "\n has successfully uploaded"<<endl;
        cout <<"Are you sure you want to continue? press Y/N" <<endl;
           cin>>op;


            break;
        case 2:
        cout << "========================================================================= "<<endl;
        cout << "|            How to Use C++ EDMS                                        |"<<endl;
        cout << "========================================================================= "<<endl;
        cout <<"1. select the file section" <<endl;
        cout <<"2. type the filename you want" <<endl;
        cout <<"3. Enter the name" <<endl;
        cout <<"4. Succesfully uploaded the file" <<endl;
          cout <<"Are you sure you want to continue? press Y/N" <<endl;
         cin>>op;
        
        break;
        
        default:
        cout <<"Are you sure you want to continue login? Y/N" <<endl;
         cin>>op;
            break;
        }
            }while ('Y'==op || 'y' ==op );
system("pause");
return 0;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    
    }
 if( loginAttempt == 5 ){
    cout << "Too many login attempts! The program will now terminate.";
    return 0;
}

}