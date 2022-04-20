// Check if all the elements of the array are palindrome or not

#include<iostream>
#include<string.h>
using namespace std;                // 111 121 131 141 

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	int sum=0;
    	for(int j=0;j<n;j++){
    	    int p=a[j];
    	    sum=0;
    	    while(p){
    	        int rem=p%10;
    	        sum=sum*10+rem;
    	        p=p/10;
    	    }
    	    if(sum==a[j])
    	    continue;
    	    else
    	    return 0;
    	}
    	return 1;
    }
};

int main()
{
    int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	Solution obj;
	cout<<obj.PalinArray(a,n)<<endl;
}