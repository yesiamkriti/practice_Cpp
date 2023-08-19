 #include<iostream>
using namespace std;
int main(){
    //adding the element at the position of array
    int n,i,item,index;
    cout<<"Enter the size of array : ";
    cin>>n;int arr[n];
    cout<<"enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to add : ";
    cin>>item;
    cout<<"Enter the index : ";
    cin>>index;
    arr[index]=item;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}