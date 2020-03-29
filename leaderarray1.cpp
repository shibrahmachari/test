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
	    bool ans =true;
	    int i=0;
	     int j=n-1;
	     while(i<n){
	         if(j==i)
	         {  if(ans){
	             cout<<i<<" ";}
	            i++;
	            j=n-1;
	         }
	         else if(a[i]>a[j])
	         { ans=ans&&true;
	         j--;
	         }
	         else if(a[j]>a[i]) 
	         {
	             ans=ans&&false;
	             j--;
	         }
	        
	     }
	    cout<<endl;
	}
	return 0;
}
