// https://leetcode.com/problems/optimal-partition-of-string/submissions/1458428111/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency

class Solution {
public:
    int partitionString(string s) {

        vector<set<char>> ans;
        string word="";
        set<char> word_set;


        for(auto i : s)
        {
            word+=i;
            word_set.insert(i);

            if(word.length()==word_set.size())
                continue;

            ans.push_back(word_set);

            word=i;
            word_set.clear();
            word_set.insert(i);
        }

        ans.push_back(word_set);



        return ans.size();


    }
};