#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int nCr(int n, int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<nCr(a,b)<<endl;
    return 0;
}
