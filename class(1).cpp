#include<iostream>
using namespace std;
class person
{
 private:
    char name[30];
   char course[50];
    int age;
public:
    void getdata(void);
    void display(void);
    void print(void);
};
void person :: getdata(void)
{

    cout<<"Enter Name ";
    cin>>name;
    cout<<"Enter Age ";
    cin>>age;
    cout<<"Enter course:";
    cin>>course;
}
void person :: display(void)
{

    cout<<"\n Name: "<<name;
    cout<<"\n Age: "<<age;
}
void person :: print(void)
{

    cout<<"\n course: "<<course;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    p.print();
    return 0;

}
