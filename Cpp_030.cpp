 #include<iostream>
using namespace std;
int main(){
    //adding the element at the beginning of array
    int arr[10],n,i,item;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to add at the beginning : ";
    cin>>item;
    for(i=n+1;i>1;i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=item;
    for(i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
