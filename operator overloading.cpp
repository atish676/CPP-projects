#include<iostream>
using namespace std;
class bank
         {
             int sb,cb;
         public:
            void setbal(int s, int c)
                     {
                         sb=s;
                         cb=c;
                     }
            void show()
                     {
                         cout<<sb<<"   "<<cb<<endl;
                     }
            void operator++()
                     {
                         sb++;cb++;
                     }
            void operator++(int a)
                     {
                         sb++;cb++;
                     }
            void operator+=(bank &r)
                     {
                         sb=sb+r.sb;
                         cb=cb+r.cb;
                     }
            bank operator+(bank &a)
                     {
                         bank bro;
                         bro.sb=sb+a.sb;
                         bro.cb=cb+a.cb;
                         return(bro);
                     }
         };
int main()
         {
             class bank amn,rmn,chmn;
             amn.setbal(1,2);
             ++amn;
             amn++;
             amn.show();
             rmn.setbal(3,6);
             ++rmn;
             rmn++;
             rmn.show();
             amn.operator+=(rmn);
             amn.show();
             chmn=rmn.operator+(amn);
             chmn=rmn+amn;
             chmn.show();
         }
