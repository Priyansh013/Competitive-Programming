#include <bits/stdc++.h>
using namespace std;


bool uniqueOccurrences(vector<int>& arr) {
        long long n = arr.size();
        map<int,int>mm;

        for(int i=0;i<n;i++){
           mm[arr[i]]+=1;
        }

        multiset<int>ms;

        for(auto it = mm.begin(); it!= mm.end(); ++it){
            ms.insert((*it).second);
        }

        long long l = ms.size();

        auto it = ms.begin();

        for(int i = 0;i<l-1;i++){

            auto itr = it;
            it++;

            if((*itr)==(*it)){ return false;}

        }

        return true;

        
    }




int main(){
}