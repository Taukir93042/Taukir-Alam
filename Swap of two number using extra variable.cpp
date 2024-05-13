//Swap of two number using extra variable
#include<iostream>
using namespace std;
int main(){
    int x,y,temp;
    cout<<"Enter two number:\n";
    cin>>x>>y;
    temp=x;
    x=y;
    y=temp;
    cout<<"Now, swap value is:\n";
    cout<<x<<" "<<y;
    return 0;
}
