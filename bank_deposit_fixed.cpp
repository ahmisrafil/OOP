#include<iostream>
using namespace std;
class Fixed_deposit
{
    private:
    long int principle_amount;
    int years;
    float rate;
    double return_value;
    public:
    Fixed_deposit()
    {

    }
    Fixed_deposit(long int p,int y,float r=0.12)
    {
        principle_amount=p;
        years=y;
        rate=r;
        return_value=p;
        for(int i=1;i<=y;i++)
        {
            return_value=return_value*(1+rate);
        }
    }
    Fixed_deposit(long int p,int y,int r)
    {
        principle_amount=p;
        years=y;
        rate=r;
        return_value=p;
        for(int i=1;i<=y;i++)
        {
            return_value=return_value*(1+rate/100);
        }
    }
    void display()
    {
       cout<<endl;
       cout<<"Principle amount :"<<principle_amount;
       cout<<"\tReturn value is :"<<return_value;
       cout<<endl;

    }
};

int main()
{
    Fixed_deposit FD1,FD2,FD3;
    long int p;
    int y;
    int r;
    cout<<"principle amount,year,rate:";
    cin>>p>>y>>r;
    FD1=Fixed_deposit(p,y,r);
    FD1.display();
    cout<<"principle amount,year,rate:";
    cin>>p>>y;
    FD2=Fixed_deposit(p,y);
    FD2.display();
    cout<<"principle amount,year,rate:";
    FD3=Fixed_deposit();
    FD3.display();
}


















