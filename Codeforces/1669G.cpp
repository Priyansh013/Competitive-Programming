#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll m,n;
    cin >> m >> n;
    char arr[m][n];

    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }


    ll s=0 , d=0 , total=0;
    char ans[m][n];

    for(int j=0;j<n;j++){    
        ll ind =0;
        for(int i=0;i<m;i++){
            ind = i; 
            // cout <<"ele is " << arr[i][j] << endl;
            // cout << "total s and d and total is " << s << " " << d <<" " << total << endl;
            if(arr[i][j]=='*'){ s++; total++;}
            else if(arr[i][j]=='.') { d++; total++;}
            else {
                // cout << "assigning o:" << i << " " << j << endl;
                    ans[i][j]='o';
                    ll ii = i-1;
                    while(s){
                        // cout << "assigning *:" << ii << " " << j << endl;
                        ans[ii][j]='*';
                        ii--;
                        s--;
                        total--;
                    }

                    while(d){
                        // cout << "assigning .:" << ii << " " << j << endl;
                        ans[ii][j]= '.';
                        ii--;
                        d--;
                        total--;

                    }
                    total=0;
            }
        }
        
        if(total!=0){
            ll ii = ind;
                    while(s){
                        // cout << "assigning *:" << ii << " " << j << endl;
                        ans[ii][j]='*';
                        ii--;
                        s--;
                        total--;
                    }

                    while(d){
                        // cout << "assigning .:" << ii << " " << j << endl;
                        ans[ii][j]= '.';
                        ii--;
                        d--;
                        total--;

                    }
                    total=0;

            }


    }
    // cout << endl;
    // cout <<"m and n is " <<m <<" " << n <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j];
        }
        cout<< endl;
    }

   
}






int main(){

 ll t;
 cin >> t;

 while(t){
    solve();
     --t;
 }


}