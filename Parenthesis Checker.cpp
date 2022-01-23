class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    { // Your code here
        stack<char> st1;

        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
                st1.push(x[i]);
                continue;
            }

            if (st1.empty())
                return false;
            else
            {
                switch (x[i])
                {
                case ')':
                    if (st1.top() == '(')
                    {
                        st1.pop();
                        break;
                    }
                    else
                        return false;
                case '}':
                    if (st1.top() == '{')
                    {
                        st1.pop();
                        break;
                    }
                    else
                        return false;
                case ']':
                    if (st1.top() == '[')
                    {
                        st1.pop();
                        break;
                    }
                    else
                        return false;
                }
            }
        }

        if (st1.empty())
            return true;

        return false;

        /*
        stack<char>revSt2;

        while(!st2.empty())
        {
            revSt2.push(st2.top());
            st2.pop();
        }

        if(st1.size() != revSt2.size())
           return false;

        while(!st1.empty() && !revSt2.empty())
        {
            if((st1.top()-revSt2.top() == ('('-')'))
            ||(st1.top()-revSt2.top() == ('{'-'}'))
            ||(st1.top()-revSt2.top() == ('['-']')))
               {
                   st1.pop(); revSt2.pop();
                   continue;
               }
            else
               return false;
        }

        return true;
        */
    }
};