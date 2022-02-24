#include <bits/stdc++.h>
using namespace std;
/*Duplicate element 
in array
O(n)
*/
int main()
{
    long long n;
    cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	for(int i=0;i<n;i++)
    {
		a[a[i]%n]=a[a[i]%n]+n;
	}
	for (int i=0;i<n;i++) 
    {
		if(a[i]>=n*2)
        {
			cout<<i<<" "<<endl;
		}
	}
	return 0;
}
