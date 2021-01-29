#include<iostream>
using namespace std;
class volume
         {
             int r,h; float volume;
         public:
            void setvalues(int r1,int h1)
                          {
                              r=r1;
                              h=h1;
                          }
            void output()
                        {
                            volume=3.14*r*r*h;
                        }
            int getvolume()
                          {
                              return(volume);
                          }
         };
int main()
         {
             class volume cyl;
             int r,h;
             cout<<"enter r and h:";
             cin>>r>>h;
             cyl.setvalues(r,h);
             cyl.output();
             float volume= cyl.getvolume();
             cout<<"\nvolume="<<volume;
         }
