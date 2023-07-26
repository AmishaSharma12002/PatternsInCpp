#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<=n;i++)
    {
        int space = n-i;
        while(space--)
        {
            cout<<" ";
        }
        for(int j =0;j<=n;j++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

}