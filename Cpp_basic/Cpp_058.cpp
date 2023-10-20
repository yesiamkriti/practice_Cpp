#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    int real;int imaginary;
    public:
        ComplexNumber(){}
        ComplexNumber(int r,float i):real(r),imaginary(i){}
    void display(){
        cout<<"Complex numebr is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
    }  
    int getrealpart(){
        return real;
    } 
    int getimagpart(){
        return imaginary;
    } 
};
ComplexNumber add2num(ComplexNumber n1,ComplexNumber n2){
    int r;float i;
    r = n1.getrealpart() + n2.getrealpart();
    i = n1.getimagpart() + n2.getimagpart();
    ComplexNumber temp(r,i);
        return temp;
}
int main(){
    // ComplexNumber comp(4,5);
    ComplexNumber comp1(4,5),comp2(6,7),comp3;
    comp3 = add2num(comp1 , comp2);
    cout<<"addtion of two number is ";
    comp3.display();
// method one
    cout<<"pointer to the obj "<<endl;
    ComplexNumber *ptr;
    ptr = & comp3;
    // ptr->display();
    // ptr =& comp2;
    // ptr->display();
// method 2
    cout<<"method 2\n";
    (&comp3)->display();
// method 3
cout<<"method 3\n";
    (*ptr).display();
// method 4
    cout<<"method 4\n";
    ComplexNumber *ptr1 = new ComplexNumber(10,50);
    ptr1->display();
    cout<<ptr;
    return 0;
}