#include<iostream>
using namespace std;
int main(){
    //  int i;
    //  i=0;
    //  int j,k;
    //  j=0;
    //  k=0;
    // for(i=0; ;){
    //     cout<<i<<" ";
    // }
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // j=i++;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // k=++i;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // cout<<++i<<endl;
    // cout<<i++;
    // cout<<i;
    int i;
    // for(i=1;i<101;i++){
    //     cout<<i<<" ";
    // }
    while(i<101){
        cout<<i<<" ";
        i++;
    }
    int input;
    i=100;
    for(i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"congrats you have guessed correct ";
            break;
        }
    }
}