#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	string a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"}; 
	
	string b; cin>>b; 
	int n; cin>>n; 
	n%=12; 
	
	for(int i=0;i<12;i++)
	{
		if(a[i]==b) 
		 {
		 	int pos=i+n; 
		 	if(pos>=12) pos-=12; 
		 	cout<<a[pos]; 
		 	break;
	           }
	}
}