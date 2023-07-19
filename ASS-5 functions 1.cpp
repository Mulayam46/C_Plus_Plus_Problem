#include<iostream>
using namespace std;
int AOC(int);
int main()
{
   int a,A;
   cout<<"enter a number";
   cin>>a;
   A=AOC(a);
   cout<<"AOC is "<<A;
}
int AOC(int b)
{
    return 3.14*b*b;
}
