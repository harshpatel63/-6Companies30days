class Solution{
public:
    string helper(string &s, int &i) {
        int t = 0;
        string word = "";
        
        while(i < s.length()) {
            if(s[i] >= '0' && s[i] <= '9') {
                t = t * 10 + (s[i] - '0');
            } else if(s[i] == '[') {
                
                i++;
                string temp = helper(s, i);
                
                while(t--) 
                    word += temp;
                t = 0;
            }
            else if(s[i] == ']')
                return word;
            else
                word += s[i];
            i++;
        }
        return word;
    }

    string decodedString(string s){
        // code here
        int i = 0;
        return helper(s, i);
    }
};