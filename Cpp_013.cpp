#include<iostream>
using namespace std;
//pointer of all types
struct rectangle{
    int length;
    int breadth;
};
int main(){
    int *p1; char *p2; float *p3; double *p4; struct rectangle *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    return 0;
    
}
//imp note : size of each pointer is same in modern compiler it is 8 and in old it is 4