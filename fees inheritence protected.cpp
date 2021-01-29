#include<iostream>
using namespace std;
class college
         {
         protected:
             int a;
         public:
            int cfee()
                     {
                         cout<<"Enter college fee:";
                         cin>>a;
                         line();
                         return(a);
                     }
            void line(){cout<<"___________________________________________________________________\n";}
         };
class training:public college
         {
         protected:
             int b;
         public:
            int tfee()
                     {
                         cout<<"Enter training fee:";
                         cin>>b;
                         line();
                         return(b);
                     }
         };
class pmoney
         {
         protected:
            int c;
         public:
            int pmon()
                     {
                         cout<<"Enter pocket money:";
                         cin>>c;
                         return(c);
                     }
         };
class total:public training,public pmoney
         {
         protected:
            int t;
         public:
            int tot()
                    {
                        int a=cfee();
                        int b=tfee();
                        int c=pmon();
                        t=a+b+c;
                        cout<<"\nTOTAL="<<t;
                    }
         };
int main()
         {
             class total X;
             X.tot();
         }
