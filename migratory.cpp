#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,chk,cot,j,temp,tem,h,c,p;
    cin>>n;
    int arr[n],count[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
		chk=arr[i];cot=0;
    	for(j=0;j<n;j++)
    	{     
        	if(chk==arr[j])
        	{
            cot++;
        	}
        }
        count[i]=cot;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(count[j]<count[j+1])
            {
                temp=count[j];
                count[j]=count[j+1];
                count[j+1]=temp;
                tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem; 
            }
        }
    }
    c=count[0];h=arr[0];
    for(i=1;i<n;i++)
    {
        if(c==count[i])
        {
            p=min(h,arr[i]);
        }
        else
        {
            p=arr[0];
        }
    }
   cout<<p;
    return 0;
}

        

