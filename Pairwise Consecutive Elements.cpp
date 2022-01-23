bool pairWiseConsecutive(stack<int> s)
{  // Code here
    while (s.size() > 1)
    {
        int temp = s.top();
        s.pop();
        if (s.top() == temp - 1)
            continue;
        else
            return false;
    }
    return true;
}