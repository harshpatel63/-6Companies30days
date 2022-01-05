class Solution{
 public:
   int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) 
   {
       long long int i = 0, j = 0,count = 0,temp=1;
       while(j<n){
           temp*=a[j];
           while(i<n and temp>=k){
               temp/=a[i];
               i++;
           }
           if(temp < k) {
                count+= (j-i+1);   
           }
          
           j++;
       }
       return count;
   }
};