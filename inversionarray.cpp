#include <iostream>
using namespace std;
long long int invert(int c[], int n){
 long long  int count =0;
    int i=0, j=n-1;
    while(i<n){
        if(i<j){
            if(c[i]>c[j]){
                count++;
            }
        }
        if(i==j)
        { j= n-1;
          i++;
        }
        j--;
    }
    return count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c[n];
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	    }
	    cout<<invert(c,n);
	    cout<<endl;
	}
	return 0;
}
