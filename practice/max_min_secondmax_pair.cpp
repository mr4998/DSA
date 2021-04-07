#include <bits/stdc++.h>
using namespace std;
pair<pair<int,int>,int> max_min_secondmax(int a[],int n){ 
	int mx=a[0];
	int mn=a[0];
	int second_max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx){
		second_max=mx;
		mx=a[i];
		}
		
		if(a[i]<mn)
		mn=a[i];
		
	}
	
	return {{mx,mn},second_max};
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	pair<pair <int,int>,int> p=max_min_secondmax(arr,n);
	cout<<p.first.first<<" "<<p.first.second<<" "<<p.second;
	
	return 0;
}

