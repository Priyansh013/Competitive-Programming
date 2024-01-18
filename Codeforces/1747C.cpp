#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

ll n;
cin >> n;
ll arr[n];
ll sum =0;

for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+= arr[i];
}

if(sum%2==0){
    cout  << "Bob" << endl;
    return;
}

cout << "Alice" << endl; 
return;



}






int main(){

 ll t;
 cin >> t;

 while(t){
    solve();
     --t;
 }


}