#include<iostream>
using namespace std;
class animal
{
  public:
  int hands,legs,eyes;
};
int main()
{
    animal human,cat;
    human.hands=2;
    human.legs=2;
    human.eyes=2;
    cat.hands=0;
    cat.legs=4;
    cat.eyes=2;
    cout<<"Human hands="<<human.hands<< " eyes="<<human.eyes<<endl;
    cout<<"Cats hands="<<cat.hands<< " eyes="<<cat.eyes;
}
