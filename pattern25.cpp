#include<iostream>
using namespace std;
int main()
{
    int n , i =1;
    cin>>n;
    while(i<=n)
    {
        int j = 1,k=1;
        int space = i - 1;
        while(space)
        {
            cout<<" ";
            space --;
        }
        while(j<=n- i + 1)
        {
            cout<<j;
            j+=1;
        }
      /*  while(k<=i)
        {
            cout<<"*";
            k++;
        }*/
        cout<<endl;
        i+=1;
    }
    return 0;
}