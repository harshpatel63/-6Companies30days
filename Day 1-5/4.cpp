    string encode(string str) {     
        string ans;
        int i = 1;
        int temp = 1;
        for(i = 1;i<str.size();i++) {
            if(str[i] == str[i-1]) temp++;
            else {
                ans.push_back(str[i-1]);
                ans.push_back(temp+'0');
                temp = 1;
            }
        }
        ans.push_back(str[i-1]);
        ans.push_back(temp+'0');
        return ans;
    }