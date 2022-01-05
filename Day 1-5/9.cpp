class Solution{   
public:
    string printMinNumberForPattern(string s){
        stack<int> stk;
        string ans;
        int i = 1;
        for(char c : s) {
            if(c == 'D') {
                stk.push(i);
            } else {
                ans += i+'0';
                while(!stk.empty()) {
                    ans += stk.top() + '0';
                    stk.pop();
                }
            }
            i++;
        }
        ans += i + '0';
        while(!stk.empty()) {
            ans += stk.top() + '0';
            stk.pop();
        }
        return ans;
    }
};