/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> st;
        bool status = true;

        ListNode *temp = head;
        while (temp != nullptr)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (!st.empty() && temp != nullptr)
        {
            if (st.top() == temp->val)
            {
                st.pop();
                temp = temp->next;
            }
            else
            {
                status = false;
                break;
            }
        }

        return status;
    }
};