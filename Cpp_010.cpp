// oops in c++ 04/08/2023

/*#include<iostream>
using namespace std;
class student{
public : 
int id;
char gender;
student(int Id, char Gender){
    id = Id;
    gender = Gender;
}
void showinfo(){
    cout <<"having id " << id << " and gender "<<gender<<"\n";
}
};
int main(){
student newstudent = newstudent(9,'f');
student oldstudent(9,'f');
newstudent.showinfo();
newstudent.showinfo();
return 0;
}*/



//contructor is a method
// :: scope operator
/*#include<iostream>
using namespace std;

class Student{
public:
void greetFriends(string myName);
};


void Student:: greetFriends(string name){
cout << "My name = " << name << "\n";
}

void greetFriends(string name){
cout << "in the non classname :: method" << "\n";
cout << "my name = " << name << "\n";
}

int main(){
Student s1;
s1.greetFriends("Avnish");
greetFriends("Kumar");
return 0;
}*/

#include<iostream>
using namespace std;

class Student{
public:
int nonstaticProperty;
static int staticProperty;
static int fun_staticProperty(int value){
    cout << "changed value : " << value;
}
};
int Student::staticProperty = 119;

int main(){
Student s1;
Student::fun_staticProperty(200);
cout <<"\n" << s1.staticProperty << "\n";

return 0;
}

// how to change the value of static varibale if no then why and if yes then why explain inside the class or outside the class?

//gsoc
// gfg < 
//open source stack ?
// lld sld