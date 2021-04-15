#include<iostream>
using namespace std;
class student{
private:
char name[20];
float cgpa;
int age,id;
void display();
public:
void input();
};
void student::input()
{
    cout<<"Input id,name,age,cgpa\n";
    cin>>id>>name>>age>>cgpa;
    display();
}

void student::display()
{
    cout<<"ID: "<<id<<" NAME: "<<name<<" AGE: "<<age<<" CGPA: "<<cgpa<<endl;
}
int main()
{
    student st,st1;
    st.input();
    st1.input();
}
