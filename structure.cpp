#include<iostream>
using namespace std;
struct part
{
    int modelNumber;
    int partNumber;
    float cost;

};
int main()
{
    part part1;
    part1.modelNumber=1990;
    part1.partNumber=645;
    part1.cost=263.55;
    cout<<"model number="<<part1.modelNumber<<"\n";
    cout<<"part Number="<< part1.partNumber<<"\n";
    cout<<"cost="<<part1.cost<<endl;
    cout<<"_______________";
     part part2;
     part2.modelNumber= 2022;
    part2.partNumber= 43;
    part2.cost=10000;
    cout<<"\nmodel number="<<part2.modelNumber<<"\n";
    cout<<"part Number="<< part2.partNumber<<"\n";
    cout<<"cost="<<part2.cost<<endl;




    return 0;
}
