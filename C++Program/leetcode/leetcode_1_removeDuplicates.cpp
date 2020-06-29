#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string removeDuplicates(string S)
    {
        int i = 0;
        string answer = "";
        while (i < S.length())
        {
            if(answer.empty() || answer[answer.length()-1] != S[i])
                answer.push_back(S[i]);
            else
                // answer.pop_back();
                answer.erase(answer.end()-1);
            i++;
        }
        return answer;
    }
};

//Better
// class Solution
// {
// public:
//     string removeDuplicates(string S)
//     {
//         string res="";
//         for(auto ch : S)
//         {
//             if(res.empty() || ch != res[res.length()-1])
//                 res.push_back(ch);
//             else
//                 res.erase(res.end()-1);
//         }
//         return res;
//     }
// };

//Best
// class Solution
// {
// public:
//     string removeDuplicates(string S)
//     {
//         int i = 0;
//         for(auto ch:S)
//         {
//             if(i == 0 || ch != S[i-1])
//                 S[i++] = ch;
//             else
//                 i--;
//         }
//         S.resize(i);
//         return S;
//     }
// };




int main()
{
    Solution s;
    string S = "allaca";
    cout<<s.removeDuplicates(S)<<endl;

    return 0;
}