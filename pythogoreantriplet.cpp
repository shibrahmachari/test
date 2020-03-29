#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	     for (int i = 0; i < n; i++) 
        a[i] = a[i] * a[i]; 
  
    // Sort array elements 
    sort(a, a + n); 
	    string ans="no";
	    for(int i=0;i<n-2;i++){
	        int j=i+1,k=n-1;
	        while(i<j){
	            if(a[i]+a[j]==a[k]){
	                ans="yes";
	                j++;
	                k--;
	            }
	            else   if(a[i]+a[j]<a[k]){
	                k--;
	            }
	            else{
	                j++;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
