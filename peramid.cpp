#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    for (int j=a; j>=1; j--)
    {
        for (int i=1; i<=j; i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
