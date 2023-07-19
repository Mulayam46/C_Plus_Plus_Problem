#include<iostream>
using namespace std;
int main()
{
   int num,count=0,rem;
   cout<<"Enter a number";
   cin>>num;
   while(num){
   rem=num%10;
   count=count+1;
   num=num/10;}
   cout<<count;
}
