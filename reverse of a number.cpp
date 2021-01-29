#include <iostream>
using namespace std;
class reverse
         {
             int n,r,rev=0;
         public:
                void input()
                           {
                               cout<<"enter number:";
                               cin>>n;
                           }
                void formula()
                             {
                                 while(n!=0)
                                 {
                                 r=n%10;
                                 rev=rev*10+r;
                                 n=n/10;
                                 }
                             }
                void output()
                            {
                                cout<<"\n"<<rev<<" is reverse";
                            }
         };
int main()
         {
             class reverse X;
             X.input();
             X.formula();
             X.output();
         }
