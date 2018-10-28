#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,count=0;
cin>>n>>k;
int a[n];
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
for(int j=1;j<=n;j++)
{
if(a[j]!=1)
count++;
}
if(count<=k)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
