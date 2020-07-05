#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans = "";
        stack<char> x;
        vector<int> ins;
        for (int i = 0, j = 0; i < S.length(); i++)
        {
            if (S[i] == '(')
            {
                x.push('(');
            }
            else
            {
                x.pop();
            }
            if(x.size() == 0)
            {
                ans += S.substr(j+1, i-j-1);
                j = i+1;
            }
            
        }
        // int test = 0;
        // while (test < ins.size())
        // {
        //     cout << ins[test] << endl;
        //     test++;
        // }
        
        // int b = 0;
        // while (b < ins.size())
        // {
            // cout << ins[b+1]-1 << endl;
            // ans += S.substr(ins[b]+1, ins[b+1]-1);
            // cout << ans << endl;
            // cout << S.substr(ins[b]+1, ins[b+1]-ins[b]-1) << endl;
            // b += 2;
        // }
        return ans;
    }
};

// class Solution {
// public:
//     string removeOuterParentheses(string S) {
// string ans = "";
//         stack<char> x;
//         vector<int> ins;
//         for (int i = 0; i < S.length(); i++)
//         {
//             if (S[i] == '(')
//             {
//                 if (x.empty())
//                 {
//                     ins.push_back(i);
//                 }
//                 x.push(S[i]);
//             }
//             else
//             {
//                 x.pop();
//                 if (x.empty())
//                 {
//                     ins.push_back(i);
//                 }
                
//             }
            
            
//         }
//         int b = 0;
//         while (b < ins.size())
//         {
//             cout << ins[b+1]-1 << endl;
//             ans += S.substr(ins[b]+1, ins[b+1]-ins[b]-1);
//             cout << ans << endl;
//             cout << S.substr(ins[b]+1, ins[b+1]-ins[b]-1) << endl;
//             b += 2;
//         }
//         return ans;
//     }
// };

int main()
{
    Solution aa;
    string qu = "(()())(())";
    for (int i = 0; i < qu.length(); i++)
    {
        cout << i << " " << qu[i] << endl;
    }
    
    string an;
    an = aa.removeOuterParentheses(qu);
    cout << an << endl;
}