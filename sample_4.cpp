#include<iostream>
using namespace std;
class Animal
{
  private:
  int hands,legs,eyes;
  public:
  void set(int h,int l,int e){hands=h;legs=l;eyes=e;cout<<"hands="<<hands<<endl;cout<<"legs="<<legs<<endl;cout<<"eyes="<<eyes<<endl;}
};
int main()
{
    Animal human,cat;
    human.set(2,2,2);
    cat.set(0,4,2);

}
