#include<iostream>
using namespace std;
int main()
{
    int n ,i = 1 ;
    cout<<"Enter value for n:";
    cin>>n;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<"*";
           
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}