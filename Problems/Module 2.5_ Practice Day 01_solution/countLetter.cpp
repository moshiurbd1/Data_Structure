#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int b[26]={0};
for(int i=0; i<s.size(); i++){
    int a=s[i]-'a';
    b[a]++;
}
for(int i=0; i<26; i++){
    if(b[i]>0){
            char c=i+'a';
        cout<<c<<" : "<<b[i]<<endl;
    }
}
return 0;
}
