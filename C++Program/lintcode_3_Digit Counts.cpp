#include <iostream>
#include <vector>

class Solution
{
private:
    /* data */
public:
    Solution(){}

    int digitCounts(int k, int n)
    {
        int save, count;
        vector<int> a;
        count = 0;
        save = n;
        while (save > 0)
        {
            a.push_back(save % 10);
            save = save/10;
            /* code */
        }
        
    }
};

