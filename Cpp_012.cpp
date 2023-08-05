#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//pointer in c 


/*int main(){
    int a=45;
    int *p;//declaration of a pointer
    p=&a; //assinging the address of a to the pointer
    cout<< *p << "- value \n" << p << " - address derefrencing \n" << a << "\n" << &a << "\n" ;

    return 0;
}*/

/*int main(){
    int A[5]={2,3,4,56,7}; /// when we declare somthing, it is created in the stack  for the main function.
    int *p;
    p=A;//or p=&A[0];
    for (int i=0;i<5;i++){
        cout << p[i] << "\n";// or cout <<A[i] << "\n"
    }
    return 0;
}*/

//let us create the  array in heap
/*
int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    p[0]=13;p[1]=73;p[2]=15;p[3]=43;p[4]=12;p[5]=113;
    for(int i=0;i<6;i++){
        cout<<p[i]<<endl;
    }
    free(p);
return 0;
}*/

//pointer in c++
int main(){
    int *p;
    p=new int[5];
    p[0]=13;p[1]=73;p[2]=15;p[3]=43;p[4]=12;p[5]=113;
    for(int i=0;i<6;i++){
        cout<<p[i]<<endl;
    }
    delete [ ] p;
return 0;
}