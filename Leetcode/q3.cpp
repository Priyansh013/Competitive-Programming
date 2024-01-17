#include <bits/stdc++.h>
using namespace std;


void solve(){
long long n,f,a,b;

cin >> n >> f >> a >> b;

long long arr[n];

for(int i=0;i<n;i++){
    cin >> arr[i];
}

long long cost =0;

if(arr[n-1]*a < f){
    cout << "YES" << endl;
    return;
}

if( (n)*b < f ){
    cout << "YES" << endl;
    return;
}


if(n>1){
for(int i=0;i<n-1;i++){
    long long diff = arr[i+1]-arr[i];
    long long ac = diff *a ;
    cost += min(ac,b);
}

    cost += min(arr[0]*a , b);

if(cost < f){
    cout << "YES" << endl;
    return;
}
}

cout << "NO" << endl;

}





int main(){

long long t;
cin >> t;


while(t){
    solve();
    t--;}



}