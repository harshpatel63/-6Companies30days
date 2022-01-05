class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
int n = arr.size();
int i = 0, j = 0;
int curSum = 0;
int winLen = 0;
int minLen = INT_MAX;

while(j < n)
{
    while(curSum >= target)
    {
        minLen = min(minLen, winLen);
        curSum = curSum - arr[i];
        i++;
        winLen--;
    }

    curSum = curSum + arr[j];
    winLen++;
    j++;

}
while(curSum >= target)
    {
        minLen = min(minLen, winLen);
        curSum = curSum - arr[i];
        i++;
        winLen--;
    }
        if(minLen == INT_MAX)
            return 0;
return minLen;
    }
};