#include<iostream>
using namespace std;
int main(){
//    int a,b;
//    int c,d;
//    cout<<"input 4 integers a,b,c and d";
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    cin>>d;
   //statement: a>b
//    cout<<(a>b && c>d );
//    cout<<(a>b || c>d );
   //c++ interprets true as 1
   //c++ interprets false as 0
   float a,b;
   cout<<"Give 2 floating numbers as input"<<endl;
   cin>>a>>b;
   if(a>0.01 && b>a) // 1 and 0 //The first statement is true and the second statement is false : a=2 and 1.9=b
   {
    cout<<"The condition in if statement is correct"; //Will only be printed if the statement in the parenthesis is correct
   }
   else{
    cout<<"The condition is false";
   }
    return 0; 
    
}
/*
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Student ,please enter the marks to calculate the grade : ";
    cin>>marks;
    if(marks>90)
    {
        cout<<"A";
    }
    else if(marks<90 && marks >80)
    {
        cout<<"B";
    }
    else if(marks<90 && marks>70)
    {
        cout<<"C";
    }
     else
    {
        cout<<"Passs";
    }
    
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    // cout<<"Give three integers as input : a,b,c"<<endl;
    // cin>>a>>b>>c>>d;
    // if(a>b && c>d)
    // {
    //     cout<<"haha";
    // }
    // else if(a>b && c>d){
    //     cout<<"hehe";
    // }
    // else{
    //     cout<<"huhu";
    // }
    cout<<"enter a integer a";
    cin>>a;
    switch(a){
        case 1:
        cout<<"The value of a is 1"<<endl;
        break;
         case 2:
        cout<<"The value of a is 2"<<endl;
        break;
        case 3:
        cout<<"The value of a is 3"<<endl;
        default:
        cout<<"default will be always printed";
        break;
    }
    return 0;
}
*/