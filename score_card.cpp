#include<iostream>
using namespace std;
class enimies
{

    private:
    int x,y;
    static int score;
    public:
    void draw(/*something to draw like bomb,water*/){}
    void update()
    {

    }
    void score_update()
    {
        score+=10;

    }
    static void display()
    {
        cout<<"\nThe Score is:"<<score;
    }


};

int enimies::score;

int main()
{
    enimies fire,bomb;
    bomb.score_update();
    fire.score_update();
    bomb.score_update();
    fire.score_update();
    bomb.score_update();
    fire.score_update();
    enimies::display();

}







