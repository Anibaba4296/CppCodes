#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}