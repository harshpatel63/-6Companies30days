class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
    ull getNthUglyNo(int n) {
       set<long long int> s;
       s.insert(1);
       n--;
       while(n--){
            auto it = s.begin();
            long long int temp = *it;
            s.erase(it);
            s.insert(temp*2);
            s.insert(temp*3);
            s.insert(temp*5);
        } 
           return *s.begin();
    }
};