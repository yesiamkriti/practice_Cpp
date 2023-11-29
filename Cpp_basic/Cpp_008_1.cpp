// difference in using struct and class 
// #include<iostream>
// #include<cmath>
// using namespace std;

// typedef struct {
//     int x;
//     int y;
// }point;

// typedef struct {
//     point TL; // top-left
//     point BR; //bottom-left
// } Rect;

// void computeArea(Rect r){
//     cout<< abs(r.TL.x - r.BR.x)*abs(r.TL.y - r.BR.y);
// }

// int main(){
//     // using struct
//     Rect r = {{0,2},{5,7}};
//     computeArea(r);
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;

class point{ //change
public: //add
    int x;
    int y;
};

class Rect{ //change
public://add
    point TL; // top-left
    point BR; //bottom-left

    void computeArea(){ //change
        cout<< abs(TL.x - BR.x)*abs(TL.y - BR.y); //change
    }
} ;



int main(){
    // using class object
    Rect r = {{0,2},{5,7}};
    r.computeArea(); //change
    return 0;
}