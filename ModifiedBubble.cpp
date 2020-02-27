#include <bits/stdc++.h> 
using namespace std; 
void bubble(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		int swaps=0;
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				swaps++;
			}
		}
		if(swaps==0)
			break;
	}
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
}
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubble(a,n);
    return 0; 
} 
  
