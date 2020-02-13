#include<bits/stdc++.h>
using namespace std;
//Jai Shree Ram
int bSearch(int a[], int l, int e, int kaushal) 
{ 
   if (e>=l) 
   { 
        int mid = l + (e-l)/2; 
        if (a[mid] == kaushal)  
        return mid; 
        if (a[mid] > kaushal) 
        return bSearch(a, l, mid-1, kaushal); 
        
        return bSearch(a, mid+1, e, kaushal); 
   } 
   return -1; 
} 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;
	cin>>key;
	cout<<"Last Position is: "<<endl;
	cout<<bSearch(a,0,n-1,key)<<endl;
	return 0;
}
