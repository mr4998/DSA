# include<bits/stdc++.h>
using namespace std;
int main(){
	int y,w,max,a,b=6,n=2;
	 cin>>y>>w;
	 max=(y>w)?y:w;
	 a=6-(max-1);
	 while(n<=3)
	 {
	 	if(a%n==0&&b%n==0)
	 	 {
	 	 	a=a/n;
	 	 	b=b/n;
	     }
	 	n++;
 	 }
	 cout<<a<<"/"<<b;
	return 0;
}
