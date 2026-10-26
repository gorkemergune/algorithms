/*
Problem: 155. Min Stack
Link: https://leetcode.com/problems/min-stack/
Difficulty: Medium
*/

#include <algorithm>
#include <stack>
#include <utility>

class MinStack
{
private:
    std::stack<std::pair<int, int>> st;

public:
    MinStack() {}

    void push(int val)
    {
        int minimum;

        if (st.empty())
        {
            minimum = val;
        }
        else
        {
            minimum = std::min(val, st.top().second);
        }

        st.push({val, minimum});
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }
};
