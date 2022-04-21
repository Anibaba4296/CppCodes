// Sum of the series

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	   long long seriesSum(int n){
	        long long sum=(((long long)n)*((long long)(n+1)))/2;
        return sum;
	    }
};

int main() {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
        return 0;
}  