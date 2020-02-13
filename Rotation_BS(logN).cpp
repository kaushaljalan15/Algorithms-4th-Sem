#include <bits/stdc++.h> 
using namespace std; 
//Jai Shreee Ram
int bsearch(int a[],int l,int e,int key) 
{ 
    if (l > e) 
    return -1; 
  
    int mid = (l+e)/2; 
    if (a[mid] == key) 
    return mid; 
  
    if (a[l] <= a[mid]) 
    { 
        if (key >= a[l] && key <= a[mid]) 
        return bsearch(a, l, mid-1, key); 
        
        return bsearch(a, mid+1, e, key); 
    } 
    if (key>=a[mid] && key<=a[e]) 
        return bsearch(a, mid+1, e, key); 
  
    return bsearch(a, l, mid-1, key); 
} 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int kaushal;
	cin>>kaushal;
	cout<<bsearch(a,0,n-1,kaushal);
	return 0;
}
