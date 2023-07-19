#include<iostream>
#include<conio.h>
using namespace std;
class MyClass{
public:
    int a;
    int b;
    //int m;

    // Default Constructor
   MyClass(){
        a = 0;
        b=1;
   }
};

int main() {
   int m;
    MyClass obj;  // Default constructor called
    cout<<"a=" << obj.a<<endl;
    cout<<"b=" << obj.b;
    cout<<"Enter the value of m";
    cin>>m;
    cout<<"m=";

    //std::cout << "Value: " << obj.v << std::endl;  // Output: 0
        // cin>>
    return 0;
}

