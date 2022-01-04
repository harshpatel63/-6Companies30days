class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        int i = 0;
        while(i<n) {
            while(arr[arr[i]-1] != arr[i] && i<n) swap(arr[arr[i]-1], arr[i]);
            i++;
        }
        
        for(int i = 0;i<n;i++) {
            if(arr[i]!=i+1) {
                ans[0] = arr[i];
                ans[1] = i+1;
            }
        }
        
        return ans;
        
    }
};