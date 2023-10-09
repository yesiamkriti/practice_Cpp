// increment and decerement operator overloading
#include<iostream>
using namespace std;
class weight{
    private:
    int kg;
    public:
    weight(){
        kg = 0;
    }
    weight(int x){
        kg = x;
    }
    void printweight(){
        cout<<"weight in kg: "<<kg<<endl;
    }

// // function for pre incrementor
//     void operator ++(){
//         ++kg;
//     }

// // function for post incrementor
//     void operator ++(int){
//         kg++;
//     }

// function for pre decrementor
    void operator --(){
        --kg;
    }
// function for post decrementor
    void operator --(int){
        kg--;
    }
// function to avoid overload in pre increment data type should be weight(user define data type);
    weight operator ++(){
        weight temp;
        temp.kg = ++kg;
        return temp;
    }
// function to avoid overload in post increment data type should be weight(user define data type);
    weight operator ++(int){
        weight temp;
        temp.kg = kg++;
        return temp;
    }
};
int main(){
    weight obj;
    obj.printweight();
    // ++x;//pre incrementer
    ++obj;
    obj.printweight();

    // x++;// post incrementer;
    obj++;
    obj.printweight();
    // --x;//pre decrementer
    --obj;
    obj.printweight();

    // x--;// post decrementer;
    obj--;
    obj.printweight();

    weight obj1,obj2;
    obj2 = ++obj1;
    obj2.printweight();

    obj2 = obj1++;
    obj2.printweight();
    return 0;
}