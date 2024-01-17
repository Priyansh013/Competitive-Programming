#include <bits/stdc++.h>
using namespace std;



void solve(){
long long n,m;
cin >> n >> m;
multiset<long long>ss,mm;



for (long long i =0;i<n;i++){
    long long ele;
    cin >> ele;
    ss.insert(ele);
}

for (long long i =0;i<m;i++){
    long long ele;
    cin >> ele;
    mm.insert(ele);
}


//cout << "Ss " << endl;
// for(auto pt = ss.begin(); pt != ss.end(); ++pt){
//     cout << (*pt) << " ";
// }


// cout << "mm " << endl;
// for(auto pt = mm.begin(); pt != mm.end(); ++pt){
//     cout << (*pt) << " ";
// }




long long arr[n];


auto st1= ss.begin();
auto ed1 = ss.end();
auto st2 = mm.begin();
auto ed2 = mm.end();
auto temp = st1;
temp++;


--ed1;
--ed2;

// n==1

long long strt = 0;
long long edd = n-1;

if(n%2 != 0){
    while( st1 != ed1){
       // cout << "start entry  is  " << (*ed2) << endl;
        arr[strt] = (*ed2);
        strt++;
        --ed2;
        ++st1;


       // cout << "end entry  is  " << (*st2) << endl;
        arr[edd] = (*st2);
        --edd;
        ++st2;
        --ed1;
    }

    long long diff1 = abs((*st1) - (*st2));
    long long diff2 = abs((*st1) - (*ed2));
    if(diff1 >= diff2){


        //cout << "mid entry  is  " << (*st2) << endl;
         arr[strt] = (*st2);
        strt++;
    }
    else{
       // cout << "mid entry  is  " << (*ed2) << endl;
        arr[edd] = (*ed2);
        --edd;

    }
}

else{
    while(temp!= ed1){

       // cout << "start entry  is  " << (*ed2) << endl;
        arr[strt] = (*ed2);
        strt++;
        --ed2;
        ++st1;


       // cout << "end entry  is  " << (*st2) << endl;
        arr[edd] = (*st2);
        --edd;
        ++st2;
        --ed1;
        temp++;


    }

     //cout << "start entry  is  " << (*ed2) << endl;
        arr[strt] = (*ed2);
        strt++;
        --ed2;
        ++st1;


      //  cout << "end entry  is  " << (*st2) << endl;
        arr[edd] = (*st2);
        --edd;
        ++st2;
        --ed1;



}


long long fin =0;

auto it1 = ss.begin();

for (int i=0;i<n;i++){
   // cout << arr[i] << " ";
    fin += abs( (*it1) - arr[i]);
    ++it1;
    
}

//cout << endl;


cout << fin << endl;

}





int main(){

long long t;
cin >> t;


while(t){
    solve();
    t--;}



}