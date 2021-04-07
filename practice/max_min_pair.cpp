#include <bits/stdc++.h>//all included
using namespace std;
pair<int,int> max_min(int a[],int n){  //int * arr
	int mx=a[0];
	int mn=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx)
		mx=a[i];
		if(a[i]<mn)
		mn=a[i];
		
	}
	//return  make_pair(mx,mn);    //{a,b}
	return {mx,mn};
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	pair <int,int> p=max_min(arr,n);
	cout<<p.first<<" "<<p.second;
	
	
	
	return 0;
}

