#include <iostream>
using namespace std;

int main () {
    int num, menu;
    string answer, option;
    cout <<" =-=--=-=-=-=-=-=Welcome to Jollibee how can i help you?=-=-=--=-=-=-=-=" <<endl;
    cout << "Choose a found in our menu" <<endl;
    cout <<"Press The button of the number" <<endl;
    cout <<"1. Meals" <<endl;
    cout <<"2. Dessert" <<endl;
    cout <<"3. Bundle Pack" <<endl;
    cout <<"4. Close" <<endl;
    cin >>menu;
    //menu 1
    if ( 1 == menu) {
      cout<<" =-=-=-=Meals=-=-=-=-=" <<endl;
        cout <<" 1. 1 PCS chicken with  Burger with Drinks" <<endl;
        cout <<" Price P100" <<endl;
        cout <<" 2. Chicken with fries" <<endl;
         cout <<" Price P70" <<endl;
        cout <<" 3. burger steak with lumpia and spaghetti" <<endl;
         cout <<" Price P130" <<endl;
         cout <<" 4. " <<endl;
         cout <<" Price P130" <<endl;
         
        cin >> num;
        //select your item//
          switch (num)
          {
          case 1:
            cout <<" 1. burger" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
              if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;

            case 2:
           cout <<" 2. Chicken with fries" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
            case 3: 
          cout <<" 3. burger steak with lumpia and spaghetti" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
            
          
          default:
           cout << "Number not found" <<endl;
            break;
          }
  
        
    

} // Menu 2 //
    else if ( 2 == menu) {
      cout<<" =-=-=-=Dessert=-=-=-=-=" <<endl;
        cout<<" 4. Manggo Peach" <<endl;
         cout <<" Price P50" <<endl;
        cout<<" 5. HALO-Halo" <<endl;
         cout <<" Price P80" <<endl;
        cout<<" 6. Yum Buger" <<endl;
         cout <<" Price P49" <<endl;
        cout<<" 7. French Fries Large/Medium/Small" <<endl;
         cout <<" Small P40 / Medium P60 / Large P100 " <<endl;
         cout<<" 8. Spaghetti" <<endl;
         cout <<" Price 60" <<endl;
        cin >> num;
        switch (num)
        {
        case 4:
          cout<<" 4. Manggo Peach" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
               case 5:
       cout<<" 5. HALO-Halo" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
             case 6:
            cout<<" 6. Yum Buger" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
             case 7:
           cout<<" 7. French Fries Large/Medium/Small" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
        case 8:
           cout<<" 8. Spaghetti" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
        default:
        cout << "Number not found" <<endl;
          break;
        }   
}
  if ( 3 == menu) {
      cout<<" =-=-=-=  Bundle Pack=-=-=-=-=" <<endl;
        cout <<" 9. Chicken Bucket with drinks and spaghetti" <<endl;
        cout <<" Price P560" <<endl;
        cout <<" 10. Jolly Spaghetti with drinks and Friens" <<endl;
         cout <<" Price P450" <<endl;
        cout <<" 11. 1 pack of Burger Steak with drinks, fries and Spaghetti" <<endl;
         cout <<" Price 660" <<endl;
         cout <<" 12. 1 bucket of Jolly nugggets with spagehetti and drinks " <<endl;
         cout <<" Price 500" <<endl;
         
        cin >> num;
        switch (num)
        {
         case 9:
          cout <<" 9. Chicken Bucket with drinks and spaghetti" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
        case 10:
         cout <<" 10. Jolly Spaghetti with drinks and Friens" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
            break;
        cout << "Number not found" <<endl;
          case 11:
      cout <<" 11. 1 pack of Burger Steak with drinks, fries and Spaghetti" <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
                break;
        case 12:
     cout <<" 12. 1 bucket of Jolly nugggets with spagehetti and drinks " <<endl;
            cout<< "Are you sure you wanna buy this?" <<endl;
            cin>> answer;
             if ("yes"== answer)
            {
          cout <<"Thank you for Ordering Jollibee" <<endl;
          return 0;
            }
            else if ("no" == answer) 
            {
                cout << "Take your time" <<endl;
            }
            else {
                  cout << "Program Terminated" <<endl;
                }
           
            break;
        
        default:
         cout << "Number not found" <<endl;
          break;
        }
}
else if ( 4 == menu) {
  cout <<"Thank you for coming to jollibee see you again soon" <<endl;
}
else {
  cout << " !!!!!!!!!!Error!!!!!!!!!" <<endl;
}
return 0;
}
