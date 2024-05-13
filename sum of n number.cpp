#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"enter the number=";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of n natural numbers ="<<sum;
    return 0;

}
