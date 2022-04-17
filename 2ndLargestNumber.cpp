#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int print2ndLargetNumber(int arr[], int n){
            int ans;
            sort(arr,arr+n);
            for(int i=n-1;i>0;i--){
                if(arr[i]!=arr[i-1]){
                    ans=arr[i-1];
                    return ans;
                }
            }
            return -1;
        }
};
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    Solution obj;
    auto ans=obj.print2ndLargetNumber(arr,num);
    cout<<"2nd largest number is "<<ans<<endl;
    return 0;
}