#include <bits/stdc++.h>
using namespace std;


int solve(){
string s , t;
cin >> s >> t;

map<char , int > ss ;
map <char , int > tt;

int l = s.length();


for (int i=0;i<l;i++){
    auto it = ss.find(s.at(i));
    if(it == ss.end()){
        ss.insert({s.at(i),1});
        // cout << "ele and freq is " << s.at(i) << " " << ss[s.at(i)] << endl;
    }
    else{
        ss[s.at(i)] += 1;
        // cout << "ele and freq is " << s.at(i) << " " << ss[s.at(i)] << endl;
    }


    auto it2 = tt.find(t.at(i));
    if(it2 == tt.end()){
        tt.insert({t.at(i),1});
        // cout << "ele1 and freq 1is " << t.at(i) << " " << tt[t.at(i)] << endl;
    }
    else{
        tt[t.at(i)] += 1;
        // cout << "ele2 and freq 2is " << t.at(i) << " " << tt[t.at(i)] << endl;
    }
}
    int count = 0;
    for(auto it = ss.begin() ; it != ss.end(); ++it){
        // cout << "count is " << count << endl;
        char ele = (*it).first;
        int freq = (*it).second;
        // cout << ele << " " << freq << endl;

        auto itr = tt.find(ele);

        if(itr != tt.end()){
            int freq2 = (*itr).second;
            // cout << "freq2 is " << freq2 << endl;
                if(freq2<freq){
                count += freq-freq2;
            }
        }

        else{
            count += freq;
        }
        
    }

    // cout << "count is " << count << endl;
    return count ;




}








int main(){

long long t;
cin >> t;

while(t){
    cout << solve() << endl;
    t--;}
}