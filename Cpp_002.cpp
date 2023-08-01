#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the number : ";
    cin>> day;
    switch(day){
        case 1:
        cout<<"Mon";
        break;
        case 2:
        cout<<"Tue";
        break;
        case 3:
        cout<<"wed";
        break;
        case 4:
        cout<<"thur";
        break;
        case 5:
        cout<<"fri";
        break;
        case 6:
        cout<<"sat";
        break;
        case 7:
        cout<<"sun";
        break;
    }
    return 0;
}