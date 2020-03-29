#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int mat[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>mat[i][j];
	        }
	    }
	    int ans;
	       int smallest = mat[0][0], largest = mat[n - 1][n - 1]; 
    if (x < smallest || x > largest) 
   {ans=0; 
    }
	    int i=0,j=m-1;
	    while(i<n&&j>=0){
	        if(mat[i][j]==x){
	           ans=1;
	        }
	        else if(mat[i][j]>x)
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	        
	    }
	    cout<<ans<<endl;

	}
	return 0;
}
