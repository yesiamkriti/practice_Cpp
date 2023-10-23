// reverse string using stack header file
/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;
void reverse(string str){
    stack <string> s;
    for(int i=0;i<str.length();i++){
        string word = "";
        while(str[i]!=' ' && i<str.length()){
            word += str[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}
int main(){
    string str = "what are you doing?";
    reverse(str);
    return 0;
}
*/


// reverse string in c

/*
#include<stdio.h>
typedef struct stack{
    char data[100];
    int top;
}stack;
int empty(stack *p){
    return (p->top == -1);
}
int top(stack *p){
    return p->data[p->top];
}
void push(stack *p,char a){
    p->data[++ (p->top)]= a;
    //what if stack->data char is more than 100 ?
}
void pop(stack *p){
    if(!empty(p)){
        p->top = p->top - 1;
    }
}
int main(){
    stack s;
    s.top  = -1;
    char ch,str[10]="ABCDE";
    int i,len =sizeof(str);
    for(i=0;i<len;i++){
        push(&s,str[i]);
    }
    printf("reversed string: ");
    while(!empty(&s)){
        printf("%c",top(&s));
        pop(&s);
    }
    return 0;
}
*/

// reverse string in cpp

// #include<iostream>
// #include<cstring>
// #include<stack>
// using namespace std;
// int main(){
//     char str[10]="ABCDE";
//     stack<char> s;
//     for(int i=0;i<strlen(str);i++){
//         s.push(str[i]);
//     }
//     cout<<"reversed string: ";
//     while(!s.empty()){
//         cout<<s.top();pop();
//     }
// }



// postfix expression evaluation i c;
/*
#include<stdio.h>
#include<ctype.h>
typedef struct stack{
    int data [100];
    int top;
}stack;

int empty(stack *p){
    return p->top==-1;
}
int top(stack *p){
    return p->data[p->top];
}
void push(stack *p,int n){
    p->data[++p->top]=n;
}
void pop(stack *p){
    if(!empty(p))
    p->top=p->top-1;
}
int main(){
    stack s;s.top =-1;
    char postfix[]={'1','2','3','*','+','4','-'};
    int len = sizeof(postfix);
    for(int i=0;i<len;i++){
        char ch = postfix[i];
        if(isdigit(ch)){
            push(&s,ch-'0');
        }else{
            int o2= top(&s);pop(&s);
            int o1= top(&s);pop(&s);
            switch (ch){
                case '+': push(&s,o1 +o2);break;
                case '-': push(&s,o1 +o2);break;
                case '*': push(&s,o1 +o2);break;
                case '/': push(&s,o1 +o2);break;
            }
        }
    }
    printf("Evaluation %d \n",top(&s));
    return 0;
}
*/

// postfix expression evaluation in cpp;

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack <int> s;
char postfix[]={'1','2','3','*','+','4','-'};
    int len = sizeof(postfix);
    for(int i=0;i<len;i++){
        char ch = postfix[i];
        if(isdigit(ch)){
            s.push(ch-'0');
        }else{
            int o2= s.top();s.pop();
            int o1= s.top();s.pop();
            switch (ch){
                case '+': s.push(o1 +o2);break;
                case '-': s.push(o1 -o2);break;
                case '*': s.push(o1 *o2);break;
                case '/': s.push(o1 /o2);break;
            }
        }
    }
    printf("Evaluation %d \n",s.top());
    return 0;
}