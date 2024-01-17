#include <bits/stdc++.h>
using namespace std;


class RandomizedSet {

private :
    unordered_map<int,int> mm;    
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mm[val]==0){
            mm[val]+=1;
            return true;
        }
        else{
            return false;
        }
    }
    
    bool remove(int val) {
        if(mm.find(val)!= mm.end()){
            mm.erase(val);
            return true;
        }
        else{
            return false;
        }
    }
    
    int getRandom() {
        long long n = mm.size();
        cout << "size is " <<mm.size () << endl;
        long long ind = rand()% n;
        auto it = mm.begin();
        advance(it , ind);
        return (*it).first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */






int main(){


RandomizedSet* lol = new RandomizedSet();


cout << lol->insert(0) << endl;
cout << lol->remove(0) << endl;

cout << lol->insert(1) << endl;

cout << lol->remove(0) << endl;

cout << lol->getRandom() << endl;

// cout << lol->remove(1) << endl;

// cout << lol->remove(2) << endl;

// cout <<  lol->insert(2) << endl;

cout << lol->getRandom() << endl;


cout << lol->getRandom() << endl;
cout << lol->getRandom() << endl;
cout << lol->getRandom() << endl;
cout << lol->getRandom() << endl;
cout << lol->getRandom() << endl;
cout << lol->getRandom() << endl;



}