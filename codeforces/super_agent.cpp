# include<bits/stdc++.h>
using namespace std;
int main() {
   char a[3][3];
int flag=1;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++) 
	{
	cin>>a[i][j];
	}
}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			{ if(a[i][j]==a[2-i][2-j])
    			{
				flag=flag&1;
		        }
				else
				 flag=flag&0;	   
	        }	
		} 
		if(flag==1) 
		cout<<"YES";
		 else 
		 cout<<"NO";
	
     return 0;
}
