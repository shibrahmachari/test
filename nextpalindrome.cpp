#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool prime(ll n){
if(n<2) return false;
for(ll i=2;i<=sqrt(n);i++){
  if(n%i==0)return false;
}
return true;
}

ll nextplindrome(ll n){

for(int k=1;k<1000000;k++){
string s= to_string(k);
string z(s.begin(), s.end());
reverse(z.begin(), z.end());
int x= stoll(s+z.substr(1));
if(x>=n&&prime(n)) return x;

string s= to_string(k);
string z(s.begin(), s.end());
reverse(z.begin(), z.end());
int x= stoll(s+z);
if(x>=n&&prime(n)) return x;
}

}

int main(){
ll n;
cin>>n;
cout<<nextpalindrome(n);
return 0;
}
