#include<iostream>
using namespace std;
class students
         {
             int rollno,e,m,s,total,maths;
             float per;
             char name[40];
         public:
            void input()
                       {
                           cout<<"enter NAME and ROLL NUMBER:";
                           cin>>name>>rollno;
                       }

            void input2()
                        {
                           cout<<"enter marks of ENGLISH,MATHS,SCIENCE:";
                           cin>>e>>m>>s;
                        }

            void formula()
                         {
                             total=e+m+s;
                             per=total/3;
                         }

            void output()
                        {
                            cout<<"\n"<<name <<" scored percentage="<<per<<"\n";
                        }

            void output2()
                         {
                            cout<<"\n"<<name <<" scored total="<<total<<"\n";
                         }

            float gettotal(){return(total);}
            float getper(){return(per);}
            float getmaths(){return(m);}
         };
int main()
         {
                         class students X[100];
                         int n,i,sum; float avg;
                         cout<<"enter no. of students:";
                         cin>>n;

                         for(i=0;i<n;i++)
                         {
                             X[i].input();
                         }

                         for(i=0;i<n;i++)
                         {
                             X[i].input2();
                             X[i].formula();
                         }

                         cout<<"\nRESULT:";

                         float max=X[0].getper();
                         for(i=0;i<n;i++)
                         {
                             X[i].output();
                             if(max<X[i].getper())
                                max=X[i].getper();
                         }

                         float min=X[0].gettotal();
                         for(i=0;i<n;i++)
                         {
                             X[i].output2();
                             if(min>X[i].gettotal())
                                min=X[i].gettotal();
                         }

                         sum=0;
                         for(i=0;i<n;i++)
                         {
                             X[i].getmaths();
                             sum=sum+X[i].getmaths();
                         }
                         avg=sum/n;

                         cout<<"\n\nMAXIMUM="<<max;
                         cout<<"\n\nMINIMUM="<<min;
                         cout<<"\n\nAVERAGE MATHS="<<avg;
         }
