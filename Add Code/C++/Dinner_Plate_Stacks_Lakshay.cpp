/*
Name - Dinner Plate Stacks
Dificulty - Hard
Problem number - 1172
Link - https://leetcode.com/problems/dinner-plate-stacks/
*/

class DinnerPlates
{
public:
    set<int> s;
    vector<stack<int>> v;
    int c = 0;
    DinnerPlates(int capacity)
    {
        c = capacity;
    }

    void push(int val)
    {
        if (s.empty())
        {
            v.push_back(stack<int>());
            s.insert(v.size() - 1);
        }
        int it = *s.begin();
        v[it].push(val);
        if (v[it].size() == c)
        {
            s.erase(s.begin());
        }
    }

    int pop()
    {
        if (v.empty())
        {
            return -1;
        }
        int ans = v.back().top();
        v.back().pop();
        while (!v.empty() && v.back().empty())
        {
            s.erase(v.size() - 1);
            v.pop_back();
        }
        if (!v.empty() && v.back().size() < c)
        {
            s.insert(v.size() - 1);
        }
        return ans;
    }

    int popAtStack(int index)
    {
        if (index >= v.size() || v[index].empty())
        {
            return -1;
        }
        if (v.size() - 1 == index)
        {
            return pop();
        }
        int ans = v[index].top();
        v[index].pop();
        s.insert(index);
        return ans;
    }
};

/**
 * Your DinnerPlates object will be instantiated and called as such:
 * DinnerPlates* obj = new DinnerPlates(capacity);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAtStack(index);
 */