#include <bits/stdc++.h>
using namespace std;


bool solve(){

string s;
cin >> s;
int l = s.length();
int c1=0; int c2 = 0;

for(int i=0;i<l/2 ;i++){
    if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u' || s.at(i)=='A' ||s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U' ){
        c1++;
    }

    if(s.at(i+l/2)=='a' || s.at(i+l/2)=='e' || s.at(i+l/2)=='i' || s.at(i+l/2)=='o' || s.at(i+l/2)=='u' || s.at(i+l/2)=='A' ||s.at(i+l/2)=='E' || s.at(i+l/2)=='I' || s.at(i+l/2)=='O' || s.at(i+l/2)=='U' ){
        c2++;
    }

}
 
 cout << c1 << " " << c2 << endl;

if(c1==c2){ return 1;}
return 0;
}




int main(){

long long t;
cin >> t;

while(t){
    cout << solve() << endl;
    t--;}
}