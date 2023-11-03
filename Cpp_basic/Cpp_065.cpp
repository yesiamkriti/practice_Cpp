//inheritance 
#include<iostream>
using namespace std;
// 1. single inheritance
class A{
    public:
    void func(){
        cout<<"inherited";
    }
} ;
class B : public A{};
 int main(){
    B b;
    b.func();
    return 0;
 }