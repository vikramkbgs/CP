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
        int count = 0;

        while (temp != nullptr && temp->next != nullptr)
        {
            if (count == a - 1)
                first = temp;

            if (count == b)
            {
                last = temp->next;
                break;
            }
            count++;
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