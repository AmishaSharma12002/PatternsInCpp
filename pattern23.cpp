#include<iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin>>n;
    while(i<=n)
    {
        int space = i-1;
        int j = 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while (j <= n-i +1)
        {
            cout<<i;
            j++;
        }
        i+=1;
        cout<<endl;
    }
    return 0;
}