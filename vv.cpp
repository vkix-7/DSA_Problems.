#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int max;
    int arr[5]={1,54,3,89,5};
    max=0;
    for(int i=1;i<=5;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"maximum element of array"<<max;
}