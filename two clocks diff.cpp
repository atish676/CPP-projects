#include<iostream>
#include<cmath>
using namespace std;
class clock
         {
             int h,m;
         public:
            void input()
                        {
                            cout<<"enter hours and minutes:";
                            cin>>h>>m;
                        }
            clock operator-(clock &c2)
                        {
                            clock bro;
                            int d=abs((h*60+m)-(c2.h*60+c2.m));
                            bro.h=d/60;
                            bro.m=d%60;
                            return(bro);
                        }
            void output()
                        {
                            cout<<"\nDifference="<<h<<":"<<m;
                        }
         };
int main()
         {
             class clock c1,c2,c3;
             c1.input();
             c2.input();
             c3=c1.operator-(c2);
             c3=c1-c2;
             c3.output();
         }
