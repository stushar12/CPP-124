#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={ 6, -3, -10, 0, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minval=arr[0];
    int maxval=arr[0];
    int pro=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<0)
        swap(maxval,minval);

        maxval=max(arr[i],maxval*arr[i]);
        minval=min(arr[i],minval*arr[i]);

        pro=max(pro,maxval);
    }
cout<<pro;
}