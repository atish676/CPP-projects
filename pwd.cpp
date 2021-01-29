#include<iostream>
#include<conio.h>
using namespace std;

int main()
    {
        void input(char *);
        char p[100];

            input(p);
            cout<<"\nOutput:\n";
        cout<<p;
    }

    void input(char *p)
    {

        char ch;
        int i=0;
        while(1)
        {

            ch=getch();
            p[i]=ch;
            if(ch==13)
                break;
            i++;
            cout<<"*";

        }
        p[i]='\0';
    }
