#include<iostream>
using namespace std;
class arrays
         {
             int n;
         public:
                arrays()
                       {
                           cout<<"enter number of elements:";
                           cin>>n;
                       }
            arrays operator+(arrays &Y)
                           {
                               arrays bro;
                               bro.[i]=[i]+Y.[i];
                               return(bro);
                           }
            void output()
                        {
                            cout<<"\nSUM="<<sum[100];
                        }
         };
int main()
         {
             class arrays X[100],Y[100],sum[100]
             for(i=0;i<n;i++)
                           {
                              cout<<"enter value of elements:";
                              cin>>X[i];
                           }
             for(i=0;i<n;i++)
                           {
                              cout<<"enter value of elements:";
                              cin>>Y[i];
                           }
             for(i=0;i<n;i++)
                           {
                              cout<<"enter value of elements:";
                              cin>>sum[i];
                           }
             sum[100]=X[100].operator+(Y[100]);
             sum[100]=X[100]+Y[100];
             sum[100].output();
         }
