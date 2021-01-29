#include<iostream>
using namespace std;
class college
         {
             int a;
         public:
                int cfee()
                          {
                              cout<<"Enter college fee:";
                              cin>>a;
                              l();
                              return(a);
                          }
                void l(){cout<<"_____________________________________________________________________\n";}
         };
class training:public college
         {
             int b;
         public:
            int tfee()
                      {
                          cout<<"Enter training fee:";
                          cin>>b;
                          l();
                          return(b);
                      }
         };
class pmoney
         {
             int c;
         public:
            int pmon()
                      {
                          cout<<"Enter pocket money:";
                          cin>>c;
                          return(c);
                      }
         };
class total:public pmoney,public training
         {
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
