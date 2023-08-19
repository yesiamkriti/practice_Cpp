 #include<iostream>
using namespace std;
int main(){
    //adding the element at the position of array
    int arr[100],n,i,item,index;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to add : ";
    cin>>item;
    cout<<"Enter the index : ";
    cin>>index;
    for(i=n-1;i<=index-1;i--){
        arr[i+1]=arr[i];
    }
    arr[index-1]=item;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}