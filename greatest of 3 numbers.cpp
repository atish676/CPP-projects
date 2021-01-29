#include <iostream>
using namespace std;
class greatest
         {
             int a,b,c;
         public:
            void input()
                       {
                           cout<<"enter value of a,b,c:";
                           cin>>a>>b>>c;
                       }
            void formula()
                         {
                             if(a>b)
                             {
                                 if(a>c)
                                     cout<<"\na";
                                 else
                                    cout<<"\nc";
                             }
                             else
                             {
                                if(b>c)
                                    cout<<"\nb";
                                else
                                    cout<<"\nc";
                             }
                         }
            void output()
                        {
                            cout<<" is greatest";
                        }
         };
int main()
         {
             class greatest X;
             X.input();
             X.formula();
             X.output();
         }
