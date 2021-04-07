#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++)
     	fact=i*fact;
	return fact;
}
int ncr(int n,int r)
{
	int ncr=factorial(n)/(factorial(n-r)*factorial(r));
	return ncr;
}
int main(){
int n,r;
cin>>n>>r;
//cout<<factorial(n);	
cout<<ncr(n,r);                                       
	return 0;
}
