#include<iostream>
using namespace std;
class Animal
{
  private:
  int hands,legs,eyes;
  public:
  void set(int h){hands=h;}
};
int main()
{
    Animal human,cat;
    human.set(2);
    cat.set(0);

}
