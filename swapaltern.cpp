#include<iostream>
using namespace std;
void printarray(int *arr,int n )
{
    cout<<endl;
    int i =0;
    while(i<n)
    {
        cout<<arr[i]<<" ";
        i+=1;
    }
}
void swapArray(int *arr, int n)
{
    for(int i =0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }

    }
}
int main()
{
    int n ;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements in array: ";
    int i = 0;
    while(i<n)
    {
        cin>>arr[i];
        i+=1;
    }
    printarray(arr,n);
    swapArray(arr,n);
    cout<<"\nAfter swaping alternative array Elements: ";
    printarray(arr,n);
    return 0;
}

