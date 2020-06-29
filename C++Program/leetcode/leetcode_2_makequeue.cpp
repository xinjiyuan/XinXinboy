#include <iostream>
#include <stack>



class MyQueue {
    std::stack<int> t1,t2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        t1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int answer;
        if(t2.empty())
        {
            while (!t1.empty())
            {
                t2.push(t1.top());
                t1.pop();
            }
        }
        //上面部分为peek()函数操作，但在ubuntu下出现"段错误 (核心已转储)"问题
        answer = t2.top();
        t2.pop();
        return answer;
    }
    
    /** Get the front element. */
    int peek() {
        if(t2.empty())
        {
            while (!t1.empty())
            {
                t2.push(t1.top());
                t1.pop();
            }
        }
        return t2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return t1.empty() && t2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{
    int x = 122;
    MyQueue* obj = new MyQueue();
    obj->push(x);
    int p_2 = obj->pop();
    std::cout << p_2 << std::endl;
    int p_3 = obj->peek();
    std::cout << p_3 << std::endl;
    bool p_4 = obj->empty();
    std::cout << p_4 << std::endl;
}