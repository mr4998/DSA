#include<bits/stdc++.h>
using namespace std;
int sum1(int * a,int n){
	
	int max=0;
for(int i=0;i<n;i++)
{
 for(int j=i;j<n;j++)
  { int sum=0;
 // int max=0;
    	for(int k=i;k<=j;k++)
    	   {
		   sum=sum+a[k];}
	    
       if(sum>max) 
	   max=sum;
  }  
	
} 
return max;
}
int main(){
	int n ;
	cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
   cout<<sum1(arr,n);
	return 0;
}
