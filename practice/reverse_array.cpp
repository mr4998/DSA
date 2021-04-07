#include <bits/stdc++.h>
using namespace std;
int * reverse( int * a, int n ){
	int * temp;
	for(int i=0;i<n;i++)
        temp[i]=a[n-i-1];
       return temp;
}
int * reverse1( int * a, int n ){
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
       return a;
}

string reverseString( string a ){
	char temp;
	int n=a.length();
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
       return a;
}


	


int main(){
/*/	int n;
	cin>>n;
	int arr[n];
	 for(int i=0;i<n;i++) cin>>arr[i];
	//int * rev_arr=reverse(arr,n);
	int * rev_arr=reverse1(arr,n);
	 for(int i=0;i<n;i++) cout<<rev_arr[i]<<" ";*/
	 
	 string s;
	 cin>>s;
	cout<<reverseString(s);
	return 0;
	
}
