#include<bits/stdc++.h>//list
using namespace std;
int main(){
    list<int>l;
    l.push_front(10);
    l.push_front(30);
    l.push_front(40);
    l.push_back(20);
    l.push_back(50);
    list<int> :: iterator it;
    for(it =l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.reverse();
    cout<<"after reversing the list : ";
    for(it =l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.sort();
    cout<<"after sorting the list : ";
    for(it =l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.pop_front();
    cout<<"after poping from front of the list : ";
    for(it =l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.pop_back();
    cout<<"after poping from back of the list : ";
    for(it =l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}