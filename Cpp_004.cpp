#include <iostream>
#include <cmath>
using namespace std;
int square_root(double x);
int main(){
    double x;cout << "To find the square root \n input number : ";cin >> x; square_root(x);return 0;
}
int square_root(double x){
    double sqrt_x = sqrt(x);
    cout <<"Square root of "<< x << " is : " << sqrt_x << endl;}