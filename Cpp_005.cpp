#include <iostream>
using namespace std;
int main(){
    int n,sum=0;cout << "input limit : ";cin>>n;for(int i=0 ; i<=n; i++)sum = sum + i;cout << "Sum of "<< n <<" number is : " << sum <<endl;
    return 0;
}