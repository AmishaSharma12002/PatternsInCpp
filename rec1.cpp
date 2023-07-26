#include<iostream>
using namespace std;
long long myopt(int x,int n)
{
    if(x==1)
    return 1;
    else if(n==1)
    return n;
    else{
        return myopt((x-1),pow(n-1));
    }
}
int main(){

}