class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0;
        long long count = 1;
        for(int i = 1;i < s.size();i++){
            if(s[i] != s[i - 1]){
                ans += (count * (count + 1))/2;
                ans %= 1000000007;
                count = 1;
            }
            else{
                count++;
            }
        }
        ans += (count * (count + 1))/2;
        ans %= 1000000007;
        count = 1;
        return ans;
    }
};