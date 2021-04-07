#include<bits/stdc++.h>
using namespace std;
int * sort_012(int * a,int n){
	int count_0=0;
	int count_1=0;
	int count_2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0) count_0++;
		if(a[i]==1) count_1++;
		if(a[i]==2) count_2++;
	}
	int i=0;
for(i=0;i<count_0;i++)
 a[i]=0;
for(i=0;i<count_1;i++)
 a[i]=1;
for(i=0;i<count_2;i++)
 a[i]=2;
 
 return a;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) 
	cin>>arr[i];
	int  sorted[]=sort(arr,n);
	cout<<sorted[i];
	
	
	
}
