#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r,c;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>r>>c;
        int op1=abs(1-r)+abs(1-c);
        int op2=abs(n-r)+abs(m-c);
        int op3=abs(1-r)+abs(m-c);
        int op4=abs(n-r)+abs(1-c);
        cout<<max(op1,max(op2,max(op3,op4)))<<endl;
    }
}