#include<iostream>
using namespace std;
class stack
{
    int s[3];
    int top;
    public:
        stack()
        {
        top = 0;
        }
        void insert(int x)
        {
            if(top>=3)
            {
              cout<<"stack overflow";
              return;  
            }
            top=top+1;
            s[top]=x;
            cout<<"inserted"<<x;
        }
};
int main()
{
            stack s1;
            int a,n,i=1;
            while(i)
            {
                cout<<"\n1.insert values";
                cout<<"\n2.exit";
                cin>>n;
                if(n==1)
                {
                cout<<"enter value want to insert\n";
                cin>>a;
                s1.insert(a);
                }
            else if(n==2)
            {
                i=0;
            }
        }
    }



/*output
1.insert values
2.exit 
1
enter value want to insert
1
inserted1
1.insert values
2.exit
2
*/