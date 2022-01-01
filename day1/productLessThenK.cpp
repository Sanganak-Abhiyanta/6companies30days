#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long int left=0,right=0,count=0,product=1;
        
        while(right<n)
        {
            product*=a[right];
            while(left<n&&product>=k)
            {
                product/=a[left];
                left++;
            }
            count+=right-left+1;
            
            right++;
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}