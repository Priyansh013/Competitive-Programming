#include <bits/stdc++.h>
using namespace std;


bool solve(string word1 , string word2){

string s, t;
s = word1;
t = word2;

int l1 = s.length();
int l2 = t. length();

if(l1 != l2){
    return false;
}

else{

    int l = l1;
    map<char,int>ms , mt;


    multiset<int> v1 , v2;
    for(int i=0;i<l;i++){
        ms[s.at(i)] +=1;
        mt[t.at(i)]+=1;
    }

    for( auto it= ms.begin(); it != ms.end(); ++it){
        char ele = (*it).first;
        int freq = (*it).second;
        v1.insert(freq);
        if(mt.find(ele)== mt.end()){
            return false;
        }
    }

    for( auto it= mt.begin(); it != mt.end(); ++it){
        char ele = (*it).first;
        int freq = (*it).second;
        v2.insert(freq);
        if(ms.find(ele)== ms.end()){
            return false;
        }
    }

    int ll = v1.size();
    

    cout << "ll  is " <<ll << endl;

    auto it1 = v1.begin();
    auto it2 = v2.begin();

    for(int i=0;i<ll;i++){

        cout << "it1 and it2 " << *it1<< " " << *it2 << endl;
        
        if((*it1)!=(*it2)){
            return false;
        }
        ++it1;
        ++it2;
    }
}


return true;


}




int main(){

long long t;
cin >> t;


while(t){
    string s,w;
    cin >> s >> w;
    cout << solve(s,w) << endl;
    t--;}
}