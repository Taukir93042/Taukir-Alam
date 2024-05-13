//swap of two number without using extra variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two number:\n";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"Now, Swap of number:\n";
    cout<<x<<" "<<y;
    return 0;
}
