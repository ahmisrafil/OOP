#include<iostream>
using namespace std;
class student{
private:
char name[20];
float cgpa;
int age,id;
public:
void input();
void display();
};
void student::input()
{
    cout<<"Input students id,name,age,cgpa\n";
    cin>>id>>name>>age>>cgpa;
}
void student::display()
{
    cout<<"ID: "<<id<<" NAME: "<<name<<" AGE: "<<age<<" CGPA: "<<cgpa<<endl;
}
int main()
{
    student st;
    st.input();
    st.display();
}
