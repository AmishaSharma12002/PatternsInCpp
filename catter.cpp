#include<iostream>
using namespace std;
void uneaten(int arr[],int n,int a)
{
    int i = 0;
    while(i<n)
    {
        if(arr[i]==1)
        {
            i+=a;
        }
        else{
            arr[i]=1;
            i+=a;
        }
    }
}
int main()
{
    int n,k,i=0,cnt=0;
    cin>>n;
    int arr[n]={0};
    cin>>k;  
    while(k!=0)
    {
        int a;
        cin>>a;
        uneaten(arr,n,a);
        k--;
    }
    while(i<n)
    {
        if(arr[i]==0)
        cnt++;
        i++;
    }
    cout<<cnt;

    return 0;
}