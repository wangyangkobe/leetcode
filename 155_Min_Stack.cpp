/*
 * https://leetcode.com/problems/min-stack/
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
 * push(x)  -- Push element x onto stack.
 * pop()    -- Removes the element on top of the stack.
 * top()    -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 *
 */
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) 
    {
        origin.push(x);
        if(special.empty() || x <= special.top())
            special.push(x);
    }
    
    void pop() 
    {
        if(!origin.empty() && (origin.top() <= special.top()))
            special.pop();
        
        origin.pop();
    }
    
    int top() 
    {
        return origin.top();
    }
    
    int getMin() 
    {
        return special.top();
    }
private:
    stack<int> origin;
    stack<int> special;
};
