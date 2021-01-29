#include<iostream>
#include<fstream>
using namespace std;
class filecopy
           {
               ofstream write;
               ifstream read;
               char ch, srcfile[50], desfile[50];
           public:
            void copy()
                      {
                          cout<<"enter file name to copy:";
                          cin>>srcfile;
                          cout<<"enter new name:";
                          cin>>desfile;
                          read.open(srcfile);
                          if(read.fail())
                          {
                              cout<<"File not found!";
                          }
                          else
                          {
                              write.open(desfile,ios::app);
                              while(!read.eof())
                              {
                                  ch=read.get();
                                  write<<ch;
                                  cout<<ch;
                              }
                              cout<<"\n\n\t\t\tFile copied!";
                          }
                      }
             ~filecopy()
                       {
                           read.close();
                           write.close();
                           cout<<"\nFiles closed";
                       }
           };
int main()
         {
             filecopy cp;
             cp.copy();
         }
