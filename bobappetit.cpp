#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,ne,i,rem;
 int charged,sum,billsplit,diff=0; 
cin>>n>>ne;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cin>>charged;
rem=arr[ne];
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
sum=sum-rem;
billsplit=sum/2;

if(billsplit==charged)
{
cout<<"Bon Appetit";
}
else
{
diff=abs(charged-billsplit);
cout<<diff;
}
return 0;
}








