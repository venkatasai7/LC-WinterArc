//https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=company&envId=microsoft&favoriteSlug=microsoft-six-months&difficulty=MEDIUM 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1)
            return s.size();

        map<char,int> hash;
        int i=0,j=1;
        hash[s[0]]=1;

        int maxsize = INT_MIN;
        int cur_size=0;
        while(j<s.size())
        {
            if(hash.find(s[j])==hash.end())
            {
                hash[s[j]]=1;
                maxsize= max(maxsize,j-i+1);
            }
            else
            {
                while(i< s.size() && s[i]!=s[j])
                    {
                        hash.erase(s[i]);
                        i++;
                    }
                i++;
                maxsize= max(maxsize,j-i+1);
            }

            j++;

        }
   




         return maxsize;
    }
};