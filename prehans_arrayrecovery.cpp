

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
          cin>>arr[i];
       }
       int sum=arr[0];
       int flag=0;
       for(int i=1;i<n;i++)
       {
          if(sum-arr[i]>=0 and arr[i]!=0)
          {
            flag =1;
           break;
          }
          sum=sum+arr[i];
       }
       sum=0;
       if(flag==1)
       {
        cout<<"-1"<<endl;
       }
       else
       {
       for(int i=0;i<n;i++)
       {
          sum+=arr[i];
          cout<<sum<<" ";
       }
       cout<<endl;
       }
       
    }
      return 0;
       
}

       

    
  
