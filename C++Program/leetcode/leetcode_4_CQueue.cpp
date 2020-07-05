#include <iostream>
#include <stack>

using namespace std;

class CQueue {
    stack<int> x1;
    stack<int> x2;
public:
    CQueue() {
        
    }
    
    void appendTail(int value) {
        x1.push(value);
    }
    
    int deleteHead() {
        if (x1.empty() && x2.empty())
        {
            return -1;
        }
        int ans;
        if (x2.empty())
        {
            while (!x1.empty())
            {
                x2.push(x1.top());
                x1.pop();
            }
            
        }
        ans = x2.top();
        x2.pop();
        return ans;
    }
};

/**
 * Your #incl object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */