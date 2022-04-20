// Convert all '0' to '5' in the given number
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
    int convertFive(int n)
    {
        string s =to_string(n);
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='5';
            }
        }
        int p=stoi(s);
        return p;
    }
};

int main()
{
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
}