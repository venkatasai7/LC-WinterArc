//https://leetcode.com/problems/the-kth-factor-of-n/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency

class Solution {
public:
    int kthFactor(int n, int k) {
        if(k>n)
            return -1;
        vector<int> v;
        for(int i=1;i<=sqrt(n+1);i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i!=n/i)
                v.push_back(n/i);
               // cout<<i<<" "<<n/i<<endl;
            }
        }

        sort(v.begin(),v.end());


        if(k>v.size())
            return -1;
        else 
            return v[k-1];
    }
};