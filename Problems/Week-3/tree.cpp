#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=5, col=n, rowbelow=row;
    for(int i=1; i<21; i++){
        if(i%2 != 0){
            row++;
            if(i==n){
                break;
            }
        }
    }
    int s=row-1,k=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<s; j++){
            cout<<" ";
        }
        for(int j=0; j<k; j++){
            cout<<"*";
        }
        cout<<endl;
        s--;
        k=k+2;
    }
    for(int i=0; i<rowbelow; i++){
        for(int j=0; j<rowbelow; j++){
            cout<<" ";
        }
        for(int j=0; j<col; j++){
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}
