#include <iostream>
#include <string>
using namespace std;
int main(){
    int Account=2023;
    const string correctpassword="rain";
    string password;
    cout<<"Enter account";
    cin>>Account;
    cout<<"enter password";
    cin>>password;

if(password=correctpassword){

    cout<<"Welcome to my simple App.Select an action to perform:"<<endl;
    cout<<". Go to About us page"<<endl;
    cout<<". Go to services page"<<endl;
    cout<<".Go to full profile page"<<endl;
    cout<<". logout"<<endl;
}

    return 0;
}