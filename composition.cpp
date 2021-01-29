#include<iostream>
using namespace std;
class squ
         {
             int s; float a;
         public:
                 void areasqu()
                               {
                                   cout<<"enter side:";
                                   cin>>s;
                               }
                void formula()
                             {
                                 a=s*s;
                                 cout<<"AREA="<<a;
                             }
         };
class cyl
         {
             int r,h; float v;
         public:
                void volcyl()
                             {
                                 cout<<"\n\nenter radius and height:";
                                 cin>>r>>h;
                             }
                void formula1()
                             {
                                 v=3.14*r*r*h;
                                 cout<<"VOLUME="<<v;
                             }
         };
class shapes
         {
             class squ X;
             class cyl Y;
         public:
                void answers()
                             {
                                 X.areasqu();
                                 X.formula();
                                 Y.volcyl();
                                 Y.formula1();
                             }
         };
int main()
         {
             shapes Z;
             Z.answers();
         }
