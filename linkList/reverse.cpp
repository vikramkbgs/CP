Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    
    Node *rest = reverse(head->next);
    head->next->next = head;

    head->next = NULL;

    return rest;
}