#include <bits/stdc++.h>
using namespace std;


void solve(){




    
}





int main(){

// long long t;
// cin >> t;


// while(t){
//     solve();
//     t--;}
// 

set<pair<int,int>>s;

s.insert({3,4});
s.insert({2,4});
s.insert({3,1});


for (auto it = s.begin(); it!=s.end(); ++it){
    cout << (*it).first << " " << (*it).second << endl;
}


}