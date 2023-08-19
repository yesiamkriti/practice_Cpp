 #include<iostream>
using namespace std;
int main(){
    //adding the an element at the end of array
    int arr[10],n,i,item;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to add at the end : ";
    cin>>item;
    arr[n]=item;
    for(i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
