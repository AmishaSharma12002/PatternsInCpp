#include<iostream>
using namespace std;
int main()
{
int n,i=1;
cin>>n;
while(i<=n)
{
    int space = n - i;
    int j = 1;
    while(space)
    {
        cout<<" ";
        space--;
    }
    while(j<=i)
    {
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i+=1;
}
return 0;
}