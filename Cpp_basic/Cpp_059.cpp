#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    int empno; 
    char name[20];
    int salary;
    int allowance;
    public:
    employee(){
        salary =1000;
    }
    void getdata();
    void display();
};
void employee:: getdata(){
    cout<<"enter the employee no : ";
    cin>>empno;
    cout<<"enter employee name : ";
    cin>>name;
    cout<<"enter the allowance : ";
    cin>>allowance;
}
void employee:: display(){
    cout << "\nempno : "<<empno<<"\nname  "<<name<<"\nallowance "<<allowance;
}
int main(){
    int n;cout<<"enter the number of employee : ";cin>>n;
    employee e[n];
    cout<<"enter the employee info \n";
    for(int i=0;i<n;i++){
        e[i].getdata();
    }
    cout<<"displaying the employee information \n";
    for(int i=0;i<n;i++){
        e[i].display();
    }
    return 0;
}