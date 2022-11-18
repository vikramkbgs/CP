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
    ListNode *swapPairs(ListNode *head)
    {

        ListNode *temp = head;

        if (temp == nullptr || temp->next == nullptr)
            return head;

        int num;

        while (1)
        {
            num = temp->val;
            temp->val = temp->next->val;
            temp->next->val = num;
            temp = temp->next;

            if (temp->next == nullptr || temp->next->next == nullptr)
                break;
            else
                temp = temp->next;
        }
        return head;
    }
};