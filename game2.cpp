#include<iostream>
using namespace std;
class person1
         {
             char a1[40],a2[40],a3[40];
         public:
            char* input1()
                       {
                           cout<<"Trip to LONDON or PARIS? :";
                           cin>>a1;
                           return(a1);
                       }
            char* input2()
                        {
                           a2[40]=1;while(a2[40]<10){cout<<"*"<<a2[40];a2[40]++;}
                           cout<<"\nWant to eat PIZZA or PASTA? :";
                           cin>>a2;
                           return(a2);
                        }
            char* input3()
                        {
                           a3[40]=1;while(a3[40]<10){cout<<"*"<<a3[40];a3[40]++;}
                           cout<<"\nVia CRUISE or PLANE? :";
                           cin>>a3;
                           return(a3);
                        }
         };
class person2
         {
             char a4[40],a5[40],a6[40];
         public:
             char* input4()
                       {
                           a4[40]=1;while(a4[40]<10){cout<<"*"<<a4[40];a4[40]++;}
                           cout<<"\nTrip to LONDON or PARIS? :";
                           cin>>a4;
                           return(a4);
                       }
            char* input5()
                        {
                           a5[40]=1;while(a5[40]<10){cout<<"*"<<a5[40];a5[40]++;}
                           cout<<"\nWant to eat PIZZA or PASTA? :";
                           cin>>a5;
                           return(a5);
                        }
            char* input6()
                        {
                           a6[40]=1;while(a6[40]<10){cout<<"*"<<a6[40];a6[40]++;}
                           cout<<"\nVia CRUISE or PLANE? :";
                           cin>>a6;
                           return(a6);
                        }
         };
class result
         {
             char a1,a2,a3,a4,a5,a6;
         public:
            void setresults(char *a11,char a21,char a31,char a41,char a51,char a61)
                            {
                                a1=a11;
                                a2=a21;
                                a3=a31;
                                a4=a41;
                                a5=a51;
                                a6=a61;
                            }
            void know()
                      {
                          if(a1==a4&&a2==a5&&a3==a6)
                            {
                                cout<<"YOU KNOW EVERYTHING ABOUT THE OTHER ;)";
                            }
                          else
                            if(a1==a4&&a2==a5||a2==a5&&a3==a6||a1==a4&&a3==a6)
                            {
                                cout<<"YOU KNOW THE OTHER QUITE WELL :)";
                            }
                          else
                            if(a1==a4||a2==a5||a3==a6)
                            {
                                cout<<"YOU DON'T KNOW MUCH :(";
                            }
                          else
                            {
                                cout<<"NOTHING!! LITERALLY NOTHING!! ";
                            }
                      }
         };
int main()
         {
             class person1 X;
             class person2 Y;
             char* a1=X.input1();
             char* a2=X.input2();
             char* a3=X.input3();
             char* a4=Y.input4();
             char* a5=Y.input5();
             char* a6=Y.input6();
             class result Z;
             Z.setresults(a1,a2,a3,a4,a5,a6);
             Z.know();
         }
ÿ