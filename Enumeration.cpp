#include<iostream>
using namespace std;
enum days_week{sun,mon,tue,wed,thu};
int main()
{
    days_week day1,day4;
    day1=mon;
    day4=thu;
    int diff=day4-day1;
    cout<<"different="<<diff;
    return 0;
}
