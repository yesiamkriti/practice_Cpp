#include<iostream>
#include <vector>
using namespace std;

int main(){
    cout << "enter the no. of elements: ";
    int count, sum=0;
    cin>>count;
    vector<int> arr;  //default size
    arr.resize(count); //set resize
    for(int i = 0;i < arr.size(); i++){
        arr[i] = i; sum=sum+arr[i];
    }
    cout << "Array Sum: " << sum << endl;
}