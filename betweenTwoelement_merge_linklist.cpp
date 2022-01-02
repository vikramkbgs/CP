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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {

        ListNode *temp, *first, *last;
        temp = list1;

        while (temp != nullptr && temp->next != nullptr)
        {
            if (temp->next->val == a)
                first = temp;

            if (temp->val == b)
            {
                last = temp->next;
                break;
            }
            // cout<<temp->val<<" ";
            temp = temp->next;
        }

        first->next = list2;

        temp = list2;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = last;

        return list1;
    }
};