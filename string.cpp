# include<iostream>
#include<string>
using namespace std;
int main(){
    string x="hello";
    string y="world";
    cout<<x+y;
    // string concatenation means adding two strings 
    // append function is used to add two string 
    string full=x.append(y);
     cout<<full;
     // name of string.length() to find the length of string 
     cout<<x.length();
     // access strings 
     cout<<x[1];
     // to change the value of string at a given index

     x[0]="k";
     cout<<x;
     // to take input as a string from user 
     string user;
     cin>>user;
     // getline function is used to read a line of text  it ignore the space 
     string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;




    return 0;
}