#include<iostream>
using namespace std;
int main()
{
    int n ,i = 1;
    cout<<"Enter value for n:";
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}