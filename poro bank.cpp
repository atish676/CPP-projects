#include<iostream>
using namespace std;
class bank
         {
             int sb,cb;
         public:
            void setbal(int s,int c)
                     {
                         sb=s;
                         cb=c;
                     }
            void show()
                     {
                         cout<<sb<<"      "<<cb<<endl;
                     }
            void party(bank r)
                     {
                         sb=sb+r.sb;
                         cb=cb+r.cb;
                     }
            bank party2(bank a)
                     {
                         bank bhai;
                         bhai.sb=sb+a.sb;
                         bhai.cb=cb+a.cb;
                         return(bhai);
                     }
         };
int main()
         {
             class bank aman,raman,chaman;
             aman.setbal(2,5);
             raman.setbal(4,6);
             aman.party(raman);
             aman.show();
             raman.show();
             chaman=raman.party2(aman);
             chaman.show();
         }
