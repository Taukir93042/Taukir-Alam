#include<iostream>
using namespace std;
int main(){
    int x,y,temp;
    cout<<"Enter two number:\n";
    cin>>x>>y;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swap number:\n";
    cout<<x<<" "<<y;
    return 0;

}



