#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
void writing(char text[])
{
   ofstream fout;
   fout.open("file1.txt",ios::out);
   fout<<text;
   fout.close();
   getch();
}
void append(char text[])
{
   ofstream fout;
   fout.open("file1.txt",ios::app);
   fout<<text;
   fout.close();
}
void reading()
{
   char ch;
   ifstream fin;
   fin.open("file1.txt",ios::in);
   if(!fin)
    cout<<"File not open";
    else
    {
       //fin>>ch;
       ch=fin.get();
       while(!fin.eof())
      {
        cout<<ch;
        //fin>>ch;
        ch=fin.get();
      }
      fin.close();
    }
}
int main()
{
  //append("Hello Anonymous");
 reading();
  getch;
}
