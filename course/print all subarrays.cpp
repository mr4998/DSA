#include<bits/stdc++.h>
using namespace std;
void subarrays(int * a,int n){
for(int i=0;i<n;i++)
{
 for(int j=i;j<n;j++)
  {
    	for(int k=i;k<=j;k++)
    	cout<<a[k]<<" ";
    	cout<<endl;
  }  
	
}
}
int main(){
	int n ;
	cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
   subarrays(arr,n);
	return 0;
}
