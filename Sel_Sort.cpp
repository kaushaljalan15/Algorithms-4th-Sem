#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp=0;
	cin>>n;
	int a[n]; 
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		int min=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	cout<<"Sorted Array is :"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
