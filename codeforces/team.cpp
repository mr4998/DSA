# include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int number=0;
	int a[3];
	while(n!=0)
	{ 
	  int count =0;
	  for(int i=0;i<3;i++)
	  { 
	  	cin>>a[i];
		if(a[i]==1) count++;
	  }
	  if(count>=2) number++;
	  n--;
    }
    cout<<number;
	return 0;
}
