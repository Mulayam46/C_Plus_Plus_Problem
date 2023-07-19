#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
   int a,b;
public:
   {
  void  setdata(int x,int y)
   a=x;
   b=y;
   }
   void showdata()
   {
      cout<<"a="<<a<<"b="<<b;
   }
   Complex add(Complex C)
   {
      Complex temp;
    temp= a+C.a;
    temp= b+C.b;
    return temp;
   }
};
int main()
{
 Complex c1,c2,c3;
 c1.setdata(3,4);
 c2.setdata(5,6);
 //c3=c1+c2;   in this error bcz +operator not define how add complex data so + defined only primitive type
 c3=c1.add(c2);
 c3.showdata();
 getch();
}
