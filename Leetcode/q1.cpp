#include <bits/stdc++.h>
using namespace std;


void solve(){
    set<pair<int,int>>s;

    for(int i=0;i<4;i++){
        int a,b;
        cin >> a >> b;
        s.insert({a,b});
    }

    auto it = s.begin();
    auto next = it;
    ++it; 

    //cout << (*next).second << " " << (*it).second<< endl;
    long long len = -(*next).second + (*it).second;
    ++it;
    ++it;
    ++next;
    ++next;
   // cout << len << endl;
   // cout << (*next).second << " " << (*it).second << endl;

    long long wid = -(*next).second +(*it).second;

    //cout << wid << endl;

    long long area = len * wid ;
    cout << area << endl;


    // for (auto it = s.begin(); it != s.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    
}





int main(){

long long t;
cin >> t;


while(t){
    solve();
    t--;}



}