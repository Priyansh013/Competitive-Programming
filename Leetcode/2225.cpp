#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> solve( vector<vector<int>> & matches){
    long long n = matches.size();

    map<int, int > w,l;

    for(long long i =0;i<n;i++){
        w[(matches[i])[0]] += 1;
        l[(matches[i][1])] +=1;
    }

    set<int> ww,ll;

    for(auto it = w.begin(); it != w.end(); ++it){
        int ele = (*it).first;
        if(l[ele] == 0){
            ww.insert(ele);
        }

    }

    for( auto it = l.begin(); it != l.end(); ++it){
        int ele = (*it).first;
        int freq = (*it).second;
        if(freq==1){
            ll.insert(ele);
        }
    }
    

    vector<int> vw,lll;

    for( auto it = ww.begin(); it != ww.end() ; ++it){
        vw.push_back((*it));
    }


    for( auto it = ll.begin(); it != ll.end() ; ++it){
        lll.push_back((*it));
    }

    vector<vector<int>> ans;
    ans.push_back(vw);
    ans.push_back(lll);

    return ans;

}








int main(){
return 0;
}