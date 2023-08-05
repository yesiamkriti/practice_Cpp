#include <iostream>
#include <vector> // header vector included
using namespace std;
#define MAX 100
int main(){
    // array and vector
    vector<int> arr(MAX);//define-time size // array decelare vector <int>
    cout<< "Enter the number of elemnet : ";
    int count, sum = 0;
    cin>>count;
    for(int i = 0 ; i < count ; i++){
        arr[i]=i;sum+=arr[i];
        }
        cout<< "Array Sum: "<<sum << endl;
    return 0;
}