#include<bits/stdc++.h>
using namespace std;


vector<int> sortManyEntries(vector<int> &v) {
    vector<int> ans;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i = 0;i<10;i++)
        pq.push(v[i]);
    for(int i = 10;i<v.size();i++) {
        if(pq.top() < v[i])
        pq.pop();
        pq.push(v[i]);
    }

    while(!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}

int main() {
    vector<int> manyEntries = {3,5,6,3,78,9,2,2,726,2,345,15,145,245345,235,3,53,534,5};
    vector<int> ans = sortManyEntries(manyEntries);
    for(int i : ans)
        cout<<i<<" ";
    cout<<endl;
}