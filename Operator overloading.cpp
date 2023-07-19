#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
   int a,b;
public:

  void  setdata(int x,int y)
  { a=x; b=y;}
   void showdata(){ cout<<"\na="<<a<<"b="<<b;}
   Complex operator+(Complex C)
   {
   Complex temp;
   temp.a=a+C.a;
   temp.b=b+C.b;
   return temp;}
   Complex operator-()
   {
   Complex temp;
   temp.a=-a;
   temp.b=-b;
   return temp;
   }
};
int main()
{
 Complex c1,c2,c3;
 c1.setdata(3,4);
 c2.setdata(5,6);
 //c3=c1.operator+(c2);
 c3=c1+c2;//c1 ne apne member operator + ko call kiya thn c2 as a argument pass hua
 //and + opr jo return kiya wo c3 me assign hua*/
 c1.showdata();
 c2.showdata();
 c3.showdata();
 getch();
 Complex c4;
 c4=-c1;//c4=c1.operator-()
 c1.showdata();
 c4.showdata();
 getch();
}



