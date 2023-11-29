// #include<iostream>
// using namespace std;
// class Stack {
//     public:
//     char data_[100];int top_;
//     // member function
//     bool empty(){
//         return (top_ ==-1);
//     }
//     char top(){
//         return data_[top_];
//     }
//     void push(char x){
//         data_[++top_] = x;
//     }
//     void pop(){
//         --top_;
//     }
// };
// int main(){
//     Stack s;
//     s.top_ = -1;
//     char str[10] = "ABCDEFGHI";
//     for( int i = 0 ; i < 9; i++ ){
//         s.push(str[i]);
//     }
//     cout<<"Revresed string: ";
//     while(!s.empty()) {
//         cout<<s.top();
//         s.pop();
//     }
//     return 0;
// }

// using struct;


#include<iostream>
using namespace std;

typedef struct Stack {
    char data_[100];
    int top_;
    } Stack;
// global function
    bool empty(const Stack &s){
        return (s.top_ ==-1);
    }
    char top(const Stack &s){
        return s.data_[s.top_];
    }
    void push( Stack &s,char x){
        s.data_[++(s.top_)] = x;
    }
    void pop(Stack &s){
        --(s.top_);
    }

int main(){
    Stack s;
    s.top_ = -1;
    char str[10] = "ABCDEFGHI";
    for( int i = 0 ; i < 9; i++ ){
        push(s,str[i]);
    }
    cout<<"Revresed string: ";
    while(!empty(s)) {
        cout<<top(s);
        pop(s);
    }
    return 0;
}