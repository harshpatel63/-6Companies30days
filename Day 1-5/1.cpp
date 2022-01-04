class Solution{
  public:
  
    vector<vector<string>> Anagrams(vector<string>& arr) {
        vector<vector<string>> ans, answer;
        unordered_map<string, vector<int>> mp;
        for(int i = arr.size()-1;i>=0;i--) {
            string temp = arr[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        for(auto a : mp) {
            vector<string> vtemp;
            for(int j : a.second)
                vtemp.push_back(arr[j]);
            reverse(vtemp.begin(), vtemp.end());
            ans.push_back(vtemp);
        }
        
        for(int i = ans.size()-1;i>=0;i--)
            answer.push_back(ans[i]);
        
        return answer;
    }
};