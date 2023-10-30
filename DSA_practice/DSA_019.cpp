// creating a linklist
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
}*first = NULL; 
void create(int a[],int n){
    int i;
    struct Node *temp,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next =NULL;
    last = first;

    for(i=1;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct Node *p){
    while(p != NULL){
        printf("%d ",p->data);
        p =p->next;
    }
}
// using recurion 
void Display(struct Node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        Display(p->next);
    }
}
int main(){
    int a[] = {3,5,7,10,15};
    create(a,5);
    display(first);
    cout<<endl;
    Display(first);
    return 0;
}
//