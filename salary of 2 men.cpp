#include<iostream>
using namespace std;
class salary
         {
             float bs,total,bonus,tax,net;
         public:
            void input()
                       {
                           cout<<"enter values for basic salaries and bonus respectively:";
                           cin>>bs>>bonus;
                       }
            void formula()
                         {
                             total=bs+bonus;
                             tax=total/10;
                             net=total-tax;
                         }
            void output()
                        {
                            cout<<"\nSALARY="<<net;
                        }
         };
int main()
         {
             class salary amn,rmn;
             amn.input();
             rmn.input();
             amn.formula();
             rmn.formula();
             amn.output();
             rmn.output();
         }
