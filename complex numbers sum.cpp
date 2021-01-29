#include<iostream>
using namespace std;
class numbers
         {
             int r,i;
         public:
            void input()
                       {
                           cout<<"enter real and imaginary part:";
                           cin>>r>>i;
                       }
            numbers operator+(numbers &x)
                       {
                           numbers bro;
                           bro.r=r+x.r;
                           bro.i=i+x.i;
                           return(bro);
                       }
            void output()
                        {
                            cout<<"\nSUM="<<r<<"+"<<i<<"I";
                        }
         };
int main()
         {
             class numbers x,y,z;
             x.input();
             y.input();
             z=y.operator+(x);
             z.output();
         }
