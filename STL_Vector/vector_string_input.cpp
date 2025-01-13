#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
cin.ignore();
vector<string>s;
for(int i=0; i<n; i++){
    string x;
    cin>>x;
    s.push_back(x);
}
for(string i:s){
    cout<<i<<endl;
}

//Another way to take input of string
int m;
cin>>m;
cin.ignore();
vector<string>v(m);
for(int i=0; i<m; i++){
    getline(cin,v[i]);
}
for(int i=0; i<m; i++){
    cout<<v[i]<<endl;
}
return 0;
}
