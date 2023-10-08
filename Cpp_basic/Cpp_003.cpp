#include <iostream>
using namespace std;
int main(){
    int a,b;//declaring variables
    //user defined variables always starts with alphabets or _ .

    cout<<"enter first number : ";
    cin>>a;//taking input in variable a
    cout<<"enter second number : ";
    cin>>b;//taking input in variable b
    cout << "sum of " << a << " and " << b << " is " <<a+b<<endl;
    cout << "sub of " << a << " and " << b << " is " <<a-b<<endl;
    cout << "mul of " << a << " and " << b << " is " <<a*b<<endl;
    cout << "div of " << a << " and " << b << " is " <<a/b<<endl;
    cout << "mod of " << a << " and " << b << " is " <<a%b <<endl;
    cout << "& of " << a << " and " << b << " is " << (a&&b) <<endl;
   
    return 0;
}