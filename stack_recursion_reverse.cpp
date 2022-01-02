
void insert(stack<int> &st, int element)
{
    if (st.size() == 0)
    {
        // st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, temp);
    st.push(temp);

    return;
}

void recursion(stack<int> &st)
{
    // base case
    if (st.size() == 1)
    {
        return;
    }
    int temp = st.top();
    st.pop();

    // recursion(st);
    insert(st, temp);
    st.push(temp);

    return;
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    if (st.empty())
        return 0;
    else
    {
        recursion(st);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}