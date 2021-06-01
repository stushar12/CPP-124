#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int> arr{-3,2,25};

   int n=arr.size();

   int curr_prod=1;
   int max_prod=0;

   for(int i=0;i<n;i++)                //Forward traversal
   {
      curr_prod=curr_prod*arr[i];
      if(curr_prod>max_prod)
      max_prod=curr_prod;

      if(curr_prod==0)
      curr_prod=1;
   }
   
   curr_prod=1;
   for(int i=n-1;i>=0;i--)                //Backward traversal
   {
      curr_prod=curr_prod*arr[i];
      if(curr_prod>max_prod)
      max_prod=curr_prod;

      if(curr_prod==0)
      curr_prod=1;
   }

   cout<<max_prod;
}
