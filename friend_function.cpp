#include<iostream>
using namespace std;
class Distance
{
    private:
    int meter;
    public:
    void set_data();

    void display()
    {
        cout<<meter<<endl;

    }
      friend void set();
};
    void Distance::set_data()
    {
        cin>>meter;
    }
    void set()
    {
        Distance pachrasta;
        pachrasta.meter=100;
    }
int main()
{
    Distance gatepar_pachrasta,pachrasta_market;
    gatepar_pachrasta.set_data();
    set();
    gatepar_pachrasta.display();
    pachrasta_market.set_data();
    pachrasta_market.display();

}
