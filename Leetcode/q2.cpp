#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;
    string s , f;
    cin >> s>> f;

    long long cf=0,cs=0;

    for(int i=0;i<n;i++){
        if(s.at(i)=='1'){cs++;}
        if(f.at(i)=='1'){ cf++;}
    }
    //cout << cs <<" "<< cf << endl;
    long long ans=0;

    if(cf==cs){
        for(int i=0;i<n;i++){
            if(f.at(i)=='1'){
                if(s.at(i)=='0'){
                    ans++;
                }
            }
        }
    }

    else if( cf >cs){
        long long extra = cf - cs;
        for(int i=0;i<n;i++){
            if(s.at(i)=='1'){
                if(f.at(i)=='0'){
                    ans++;
                }
            }
        }

        ans = ans + extra;


    }

    else {
        long long extra = cs-cf;
        for(int i=0;i<n;i++){
            if(f.at(i)=='1'){
                if(s.at(i)=='0'){
                    ans++;
                }
            }
        }

        ans = ans + extra;


    }

    cout << ans << endl;

    
}





int main(){

long long t;
cin >> t;


while(t){
    solve();
    t--;}



}