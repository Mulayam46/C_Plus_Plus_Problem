#include<iostream>
using namespace std;
int main()
{
   int n,num,digit, rev=0;
   cout<<"enter a number";
   cin>>num;
   n=num;
   while(num)
   {
      digit=num%10;
      rev=(rev*10)+digit;
      num=num/10;
   }
   if (n==rev)
     {
      cout<<"palindrome";}

   else
      {cout<<"not a palindrome";}
}
