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
        //int val = i;
        while(j<=i)
        {
            cout<<i+j-1;
            //cout<<val;
           j+=1;
           //val+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}