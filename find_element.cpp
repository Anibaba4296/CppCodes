// given q queries find wether it is present in the given array or not. the max size of array is less than 10^5

#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    // first we will take the input
    cout<<"enter the elements in the array"<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // creating the default array vector
    const int N = 1e5 +10;
    vector<int>init(N,0);
    // this we create frequency array
    for(int i=0;i<n;i++){
        init[v[i]]++;
    }
    // now we will take the query as input and verify of it is present in the array or not
    int q;
    cout<<"Enter the number of queries : ";
    cin>>q;
    while(q){
        int element;
        cout<<"enter the element to search : ";
        cin>>element;
        if(init[element]!=0){
            cout<<"element is present " << init[element]<<endl;
        }else{
            cout<<"element is missing "  << init[element]<<endl;
        }
        q--;
    }
    return 0;
}