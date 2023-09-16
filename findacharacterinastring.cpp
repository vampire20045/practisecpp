#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    cout<<"enter the character you want to find the index";
    char ch;
    cin>>ch;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch)
        {
            cout<<"the index is:"<<i;
         break;
        }
        else
        {
cout<<"element is not present in a string";
        }
    }
    return 0;
    
}