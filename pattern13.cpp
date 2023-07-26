#include<iostream>
using namespace std;
int main()
{
    int n ,i = 1;
    cout<<"Enter value for n:";
    cin>>n;
    char ch = 'A';
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            char ch = 'A'+i-1;
            cout<<ch;
          j+=1;
        }
        //ch+=1;
        cout<<endl;
        i+=1;
    }
    return 0;
}