#include <iostream>
#include <string>


using namespace std;

int main()
{

   string user_name = "" ;
    string password = "" ;
    string pin_code = "" ;
               int s = 0 ;

         cout << "\n \n \t \t \t \t \t ====== Welcome To Admin Login interface ======" << endl;

do {

    cout << "Enter User name: " ;
    cin >> user_name ;

    cout << "Enter password: " ;
    cin >> password ;


    if ( user_name == "admin" && password == "admin" ){

        cout << "You are root now " << endl;
        s = 1 ;

         }else if ( user_name != "admin" && password != "admin" ){
     cout << "***'wrong !!'***" << endl;

     cout << "if you forget password \n then, you have to enter your pincode: " ;
     cin >> pin_code ;
if (pin_code == "0000")
{

    cout << "You are root now" ;
    s = 1 ;
}

 }else {

 cout << "***'wrong !!'***" << endl ;

 cout << "if you forget password \n then, you have to enter your pincode: " ;
     cin >> pin_code ;
 if (pin_code == "0000"){

    cout << "You are root now" ;
    s = 1 ;

}

 }

   }while ( s != 1 ) ;
}





