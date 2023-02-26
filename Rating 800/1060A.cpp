#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int n,i,count=0; 
	string a; 
	cin>>n; 
	cin>>a; 
	for(i=0;i<n;i++) 
	{
		if(a[i]=='8') count++; 
	}
	cout<<min(n/11,count); 
	
}