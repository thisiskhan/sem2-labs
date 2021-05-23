#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void question(int a,int b,int *c);
int main()
{
    int a,b,c,q=100,x=1,y=1;
    srand((unsigned) time(0));
    while(q>75)
    {
        int p=0;
        x=x*10;
        cout<<"Level "<<y<<endl;
        for(int i=0;i<10;i++)
        {
            a=rand()%x;
            b=rand()%x;
            question(a,b,&c);
            if(c==a*b)
            {
                int x=rand()%4;
                switch(x)
                {
                    case 0:
                    {
                        cout<<"Very good!"<<endl;
                        p++;
                        break;
                    }
                    case 1:
                    {
                        cout<<"Excellent!"<<endl;
                        p++;
                        break;
                    }
                    case 2:
                    {
                        cout<<"Nice work!"<<endl;
                        p++;
                        break;
                    }
                    case 3:
                    {
                        cout<<"Keep up the good work!"<<endl;
                        p++;
                        break;
                    }
                }
            }
            else
            {
                int x=rand()%4;
                switch(x)
                {
                    case 0:
                    {
                        cout<<"No. Please try again."<<endl;
                        break;
                    }
                    case 1:
                    {
                        cout<<"Wrong try once more."<<endl;
                        break;
                    }
                    case 2:
                    {
                        cout<<"Don't give up!"<<endl;
                        break;
                    }
                    case 3:
                    {
                        cout<<"No. Keep trying."<<endl;
                        break;
                    }
                }
            }
        }
        q=(p/10)*100;
        if(q<75)
        {
            cout<<endl<<"Please ask your teacher for extra help."<<endl<<endl;
        }
        else
        {
            cout<<endl<<"Congratulations, you are ready to go to the next level!"<<endl<<endl;
        }
        y++;
    }    
    return 0;
}
void question(int a,int b,int *c)
{
    cout<<"How much is "<<a<<" times "<<b<<": ";
    cin>>*c;
}