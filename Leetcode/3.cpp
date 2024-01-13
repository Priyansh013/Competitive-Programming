#include <bits/stdc++.h>
using namespace std;


int solve(string s){
// string s;
// cin >> s;

bool arr[256] = {0};

long long l = s.length();

long long count =0;

long long fin_count =0;


for(int i=0;i<l;i++){
    cout <<"Curr ele is " << s.at(i) << endl;
    char ele = s.at(i);
    int num = int(ele);
    cout << "Num is  " << num << endl;
    cout << "Arr[num] is " << arr[num] << endl;
    if(arr[num]==0){
        arr[num]=1;
        count++;
    }
    else{
        count=1;
        bool arr[256] = {0};
    }

    fin_count = max(count,fin_count);

}


return fin_count;

}




int main(){

// long long t;
// cin >> t;


string s = " ";

// while(t){
    cout << solve(s) << endl;
    
    
    //t--;
    //}




}