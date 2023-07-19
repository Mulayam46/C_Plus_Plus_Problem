#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int l,b,h;
   cout<<"Enter a length l and b and h";
   cin>>l>>b>>h;
   if((h*h)==(l*l)+(b*b))
      cout<<"right angle triangle";
   else
      cout<<"not a right angle triangle ";
   getch();
   return 0;
}
