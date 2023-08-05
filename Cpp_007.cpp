// #include<iostream>
// using namespace std;
// struct student{
//     int id;
//     string name;
// }
// int main(){
//     // int arr[]={1,2,3,4,5};
//     // cout<<arr[2];
//     // return 0;

//     // int arr[5];
//     // arr[2]=33;arr[3]=44;for(int i = 0; i < 5 ; i++){cout<<arr[i] << " ";}

//     // float arr[5]= {11,22.5,33,42.2,32};
//     // cout<< sizeof(arr)/sizeof(arr[0]);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Student{
// int id;
// string name;
// long fees;
// void setId(int val){
// id = val;
// }
// string info(){
// string student_info = "Name = " + name + " having id = " + to_string(id) + " and have to pay fees = " + to_string(fees);
// return student_info;
// }
// };


// int main(){
// Student s1;
// s1.setId(99);
// s1.name = "Raj";
// s1.fees = 78.5094;
// cout<<s1.info();
// return 0;
// }

#include<iostream>
using namespace std;

// struct Student{
// int id;
// string name;
// long fees;
// void setId(int val){
// id = val;
// }
// // string info(){
// // string studentInfo = "Name = " + name + " having id = " + id + " and have to pay fees = " + fees;
// // return studentInfo;
// // }
// };

void fn(int& a){
a = 111;
cout << "In the fn method value of A = " << a << ",";
}

int main(){
// Student s1;
// s1.setId(99);
// s1.name = "Raj";
// s1.fees = 78.5094;
// string response = s1.info();
// cout << response;

int a = 10;
int &b = a;
fn(a);
b = 0;
cout << a;
cout << endl << b;
return 0;
}
