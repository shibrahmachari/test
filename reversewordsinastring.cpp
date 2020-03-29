#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int i=0;
	    string ans="";
	    string temp="";
	    while(s[i]!='.'){
	        i++;
	        temp=s[i]+temp;
	    }
	    if(i==n-1){
	        cout<<temp<<endl;
	    }
	    else{ temp="";
	   
	        for(int k=n-1;k>=0;k--){
	            if(s[k]=='.'){
	                temp=temp+'.';
	                ans=ans+temp;
	                temp="";
	            }else{
	                temp=s[k]+temp;
	            }
	        }
	        ans=ans+temp;
	        cout<<ans<<endl;
	    }
	    
	}
	return 0;
}
