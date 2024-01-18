#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll n,m,a,b;

    cin >> n >> m >> a>> b;

    ll cost_a = n*a;


    ll cost_b = (n/m)*b ;

    ll extra = min (b ,(n - (n/m)*m)*a);

    cost_b += extra;

    cout << min(cost_a, cost_b) << endl;


}






int main(){

// ll t;
// cin >> t;

// while(t){
    solve();
//     --t;
// }


}