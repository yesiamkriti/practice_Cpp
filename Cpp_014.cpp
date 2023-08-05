#include<iostream>
using namespace std;
int main(){
//    referencing in c++
//	it is used in parameter passing
	int a = 10;
	int &r = a; // give a nick_name/ alias / another name to a as r is called referencing
	cout<<a<<"\n"<<r<<"\n";
	r++;
	cout<<a<<"\n"<<r<<"\n";//both value increased by 1
    return 0;
}
