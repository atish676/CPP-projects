#include<iostream>
using namespace std;
class car
         {
         protected:
            int n,i;
            char c[50];
         public:
            int car1()
                     {
                         cout<<"Enter number of cars you possess:";
                         cin>>n;
                         cout<<"\n";

                         for(i=0;i<n;i++)
                         {
                             cout<<"Enter car name:";
                             cin>>c;
                         }
                         return(n);
                     }
         };
class bike
         {
         protected:
            int n2,i;
            char b[50];
         public:
            int bike1()
                      {
                          cout<<"\nEnter number of bikes or scooters you possess:";
                          cin>>n2;
                          cout<<"\n";

                          for(i=0;i<n2;i++)
                          {
                              cout<<"Enter bike name:";
                              cin>>b;
                          }
                          return(n2);
                      }
         };
class motor:public car,public bike
         {
         protected:
            int m;
         public:
            int motor1()
                       {
                           cout<<"\nEnter total number of motor vehicles you possess:";
                           cin>>m;
                           return(m);
                       }
         };
class bicycle
         {
         protected:
            int n3,i;
            char bi[50];
         public:
            int bicycle1()
                         {
                             cout<<"\nEnter number of bicycles you possess:";
                             cin>>n3;
                             cout<<"\n";

                             for(i=0;i<n3;i++)
                             {
                                cout<<"Enter bicycle company name:";
                                cin>>bi;
                             }
                             return(n3);
                         }
         };
class another
         {
         protected:
            int i,n4;
            char a[50];
         public:
            int another1()
                         {
                             cout<<"\nEnter the number of vehicles you possess other than mentioned above:";
                             cin>>n4;
                             cout<<"\n";

                             for(i=0;i<n4;i++)
                             {
                                 cout<<"Enter vehicle types you possess other than above mentioned:";
                                 cin>>a;
                             }
                             return(n4);
                         }
         };
class all:public motor,public bicycle,public another
         {
         protected:
            int q;
         public:
            int all1()
                     {
                        int n = car1();
                        int n2 = bike1();
                        int m = motor1();
                        int n3 = bicycle1();
                        int n4 = another1();
                        int q = m+n3;
                        cout<<"\n\nTotal vehicles="<<q;
                     }
         };
int main()
         {
             class all X;
             X.all1();
         }
