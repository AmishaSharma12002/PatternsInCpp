#include<iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin>>n;
    while(i<=n)
    {
        int space = n-i;
        int j = 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    return 0;
}