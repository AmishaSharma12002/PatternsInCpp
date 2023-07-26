#include<iostream>
using namespace std;
int main()
{
   for(int row = 1;row<=3;row++)
   {
     for(int col = 1 ; col <=17;col++)
     {
        if(col>=3-row&&col<=6+row)
        cout<<"*";
     }
   }
}