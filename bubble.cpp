#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	clock_t time_req; 
  
    // Without using pow function 
    time_req = clock(); 
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	time_req = clock()- time_req; 
    cout << "Processor time taken for binary search: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
	return 0;
}
