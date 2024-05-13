#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cout<<"Enter a number=";
    cin>>n;
    int index=n;
    while(n!=0)
    {
        int rem=n%10;
        n/=10;
        ans=rem+(ans*10);
    }
    cout<<index;
    if(ans==index)
    {
        cout<<" This is palindrome number.";
    }
    else
    {
        cout<<" This is not palindrome number.";
    }
    return 0;
}
