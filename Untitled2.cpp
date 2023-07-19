
#include<iostream>
  using namespace std;
  /*
 int main()
 {
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(a%2==0)
    {
       cout<<"The value are even";
    }
    else
      cout<<"odd";
 }
*/
int main(){

   int a[2][2],b[2][2],c[2][2],i,j;
  cout<<"Enter the first matrics";
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         cin>>a[i][j];
      }
   }
   cout<<"Enter the second matrics";
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         cin>>b[i][j];
      }
   }
   cout<<"first matrics are:"<<endl;
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
       cout<<a[i][j];
      }
      cout<<endl;
   }
   cout<<"Second matrics are:"<<endl;
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
       cout<<b[i][j];

      }
     cout<<endl;
   }
     cout<<"Third matrics are:";
   for(i=0;i<2;i++)
   {
      for(j=0;j<3;j++)
      {
         c[i][j]=a[i][j]+b[i][j];
       cout<<c[i][j];
      }
      cout<<endl;
   }
}

