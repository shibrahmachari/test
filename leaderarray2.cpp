#include <iostream>
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
	     int maxr=a[n-1];
	     for(int i=n-2;i>=0;i--){
	         if(maxr<a[i])
	         {    maxr=a[i];
	             cout<<maxr<<" ";
	         }
	         
	     }
	     cout<<a[n-1]<<" ";
	    cout<<endl;
	}
	return 0;
}
