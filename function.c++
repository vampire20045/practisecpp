// returntype function name(parameters)
// function body
 #include<iostream>
 #include<math.h>
 using namespace std;
void print( int num)
{
    cout<<num<<endl;
    return;

}
int add(int a, int b)
{
    print(a);
    print(b);
    int sum=a+b;
    return sum;

}
int main(){
    int a=2,b=3;
    cout<<add(a,b);
    return 0;
}