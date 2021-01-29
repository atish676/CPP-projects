#include <iostream>
using namespace std;
class maximum
         {
             int max,X[10],n,i;
         public:
            void input()
                       {
                           cout<<"enter array spaces:";
                           cin>>n;
                       }
            void show()
                      {
                          for(i=0;i<n;i++)
                          {
                          cout<<"\nenter value at "<<i<<" location:";
                          cin>>X[i];
                          }
                      }
            void formula()
                         {
                             max=X[0];
                             for(i=0;i<n;i++)
                             {
                             if(max<X[i])
                                max=X[i];
                             }
                         }
            void output()
                        {
                            cout<<"\n"<<max<<" is maximum";
                        }
         };
int main()
         {
             class maximum W;
             W.input();
             W.show();
             W.formula();
             W.output();
         }
