  #include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
   int a,b;
public:
   Complex(){a=0;b=0;}
    Complex(int x){a=x;b=0;}
     Complex(Complex &X){a=X.a;b=X.b;}
   Complex(int x,int y)
   {
     //cout<<"Hello";
     a=x;
     b=y;
   }
  void  setdata(int x,int y)
  { a=x; b=y;}
   void showdata(){ cout<<"\na="<<a<<"b="<<b;}
   ~Complex(){cout<<"bye";}
};
int main()
{
 Complex c1(3,4),c2(5),c3(5,6);
 Complex c4=c1;
 c1.showdata();
 c2.showdata();
 c3.showdata();
 c4.showdata();
 getch();
}


