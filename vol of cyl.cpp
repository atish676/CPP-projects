#include <iostream>
using namespace std;
class cylinder
         {
             float volume,r,h;
         public:
            void input()
                       {
                           cout<<"enter r and h:";
                           cin>>r>>h;
                       }
            void formula()
                         {
                             volume=3.14*r*r*h;
                         }
            void output()
                        {
                            cout<<"\nvolume="<<volume;
                        }
         };
int main()
         {
             class cylinder X;
             X.input();
             X.formula();
             X.output();
         }
