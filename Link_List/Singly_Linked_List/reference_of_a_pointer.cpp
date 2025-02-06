#include<bits/stdc++.h>
using namespace std;
void fun(int *&x){
   // x=NULL;
    cout<<"Function:"<<x<<endl;

}

int main(){
int a=10;
int *p=&a;
fun(p);
cout<<p<<endl;

return 0;}
