// q1
/*
#include<iostream>
using namespace std;
class custom{
    public:
    int value;
    custom(int val): value(val){};
    custom operator++(int){
        custom temp =*this;
        value++;
        return temp;
    }
};
int main(){
    custom obj(3);
    custom result =obj++;
    cout<< result.value;
    return 0;
}
*/

// q2

/*
#include<iostream>
using namespace std;
class myclass{
    int value;
    public:
    myclass(int v):value(v){}
    myclass operator -(){
        return myclass(-value);
    }
    int getvalue(){
        return value;
    }
};
int main(){
    myclass obj(8);
    myclass result = -obj;
    cout<<result.getvalue();
    return 0;

}
*/

#include <iostream>
using namespace std;

class CustomString {
private:
  string str;

public:
  CustomString(string word) : str(word) {}

  CustomString& operator --() {
    if(str[0]>=97 && str[0]<=122){
        str[0]-=32;
    }
    
    return *this;
  }

  friend ostream& operator<<(ostream& os, const CustomString& obj) {
    os << obj.str;
    return os;
  }
};

int main() {
  string word;
  getline(cin, word);

  CustomString obj(word);

  cout << "Original string: " << obj << endl;
 
  cout << "Modified string: " << obj << endl;

  return 0;
}