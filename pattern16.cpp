#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter value for n:";
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            if(i==1||j==1||j==n||i==n)
            cout<<"*";
            else 
            cout<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}