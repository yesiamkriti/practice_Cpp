// single line comment
/*multi line comment*/
#include <iostream> 
// #include is a preprocessor directive,use to import header file
// iostream is header file
using namespace std; 
// we will be the standard namespace where all the standard library functions are defined
int main() 
//The program execution always starts from the main function. All the other functions are called from the main function. In C++, the main function is required to return some value indicating the execution status.
{
    cout<<"first code in c++"<<endl; 
    cout<<"Hello_world";
    //cout is a obj of iostream class which is inside standard library of iostream
    //use to give output through console
    
    // endl is use to enter in new line (end of line)

    // << this is extertion operator

    cout<<"Enter your name : "; 
    string name;//string is a data type and name is variable

    // cin is a obj of iostream class which is inside standard library os iostream
    // use take input from the user through console
    cin>>name;
    // insertion operator >>
    return 0;
    
}
