#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    long long int bullet=0;
	    int count=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==-1){
	        a[i]=bullet/count;
	        }
	        bullet=bullet+a[i];
	        count++;
	    cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
