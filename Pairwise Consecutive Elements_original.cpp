bool pairWiseConsecutive(stack<int> s)
{
    // Code here
    stack<int> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    while (temp.size() > 1)
    {
        int temp1 = temp.top();
        s.push(temp1);
        temp.pop();
        if (temp.top() == temp1 + 1)
            continue;
        else
            return false;
    }

    if (temp.size() == 1)
    {
        s.push(temp.top());
    }

    return true;
}