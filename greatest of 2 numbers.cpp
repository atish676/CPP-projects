#include<iostream>
using namespace std;
class greatest
         {
             int a,b;
         public:
            void setvalues(int a1,int b1)
                           {
                               a=a1;
                               b=b1;
                           }
            int getgreater()
                            {
                            if(a>b)
                                return(a);
                            else
                                return(b);
                            }
         };
int main()
         {
             class greatest X;
             int a,b;
             cout<<"enter a and b:";
             cin>>a>>b;
             X.setvalues(a,b);
             int greater= X.getgreater();
             cout<<"\nGreater="<<greater;
         }
