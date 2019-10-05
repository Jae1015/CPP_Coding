
//Maximum sum subarray

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int n,i,k;
    //enter the size of array
    cout<<"Enter the size of array - ";
    cin>>n;
    int arr[n];
    //enter the elements of array
    cout<<"\nEnter the elements of array - ";
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr[i]=k;
    }
    int maxsum=0;
    int maxsofar=0;
    for(i=0;i<n;i++)
    {
        maxsofar+=arr[i];
        if(maxsofar<0)
        {
            maxsofar=0;
        }
        if(maxsofar>maxsum)
        {
            maxsum=maxsofar;
        }
    }
    
    cout<<"\nMaximum sum of subarray is - "<<maxsum;
    return 0;
}
