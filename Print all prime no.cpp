#include<iostream>
using namespace std;
int main()
{
    int i=2;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<2)
    {
        cout<<"not prime number";
        return 0;
    }
    while(i<n)
    {
        if(n%i!=0)
        {
            cout<<i<<" ";
        }
        else
        {
         cout<<"not prime number";
        }
        i++;
    }
    return 0;
}
