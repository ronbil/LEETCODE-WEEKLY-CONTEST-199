class Solution {
public:
    int minFlips(string target) 
    {
       int ans=0;
        char prev='0';
        for(char c:target)
        {
            if(c!=prev)
                ans++;
            prev=c;
        }
        return ans;
    }
};
