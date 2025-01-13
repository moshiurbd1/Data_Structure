#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>x={10,20,30};
vector<int>y={1,2,3};
y=x;//complexity O(1) because of same size
vector<int>a={10,20,30,40};
vector<int>b={1,2,3};
b=a;//complexity O(N) because of different size
a.pop_back();
for(int i=0; i<a.size(); i++){

    cout<<a[i]<<" ";
}
return 0;
}
