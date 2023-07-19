#include<iostream>
int fnatural(int);
using namespace std;
int main()
{
   int i;
   cout<<"enter a number:";
   cin>>i;
   fnatural(i);

}
int fnatural(int a)
{
   if(a>=0){
   cout<<fnatural(a-1);
   cout<<" "<<a;}
}
