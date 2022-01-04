class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        if(n%2 == 1) return false;
        vector<int> rem(k, 0);
        for(int i : nums) {
            rem[i%k]++;
        }
        
        int i = 1, j = k-1;
        while(i<j) {
            if(rem[i]!=rem[j])
                return false;
            i++,j--;
        }
        
        if(i == j and rem[i]%2 == 1)
            return false;
            
        return true;
    }
};