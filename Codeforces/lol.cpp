#include <bits/stdc++.h>
using namespace std;



int solve(){


//array name : say time;


// number of bombs : say n;
// int n=5;
// int arr[5][2] = {{2,4},{1,9},{1,8},{4,9},{3,12}};
long long time_taken = 0;

for( int i=0;i<n;i++){
    time_taken += arr[i][0];
    if(time_taken > arr[i][1]){
        return -1;
        // cout << -1 << endl; return;
    }
}

return time_taken;



}



int main(){



cout << solve() << endl;


}