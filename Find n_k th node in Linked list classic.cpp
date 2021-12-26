Node *fractionalNodes(Node *head, int k)
{
    // Corner cases
    if (k <= 0 || head == NULL)
        return NULL;

    Node *fractionalNode = NULL;

    // Traverse the given list
    int i = 0;
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {

        // For every k nodes, we move fractionalNode one
        // step ahead.
        if (i % k == 0)
        {

            // First time we see a multiple of k
            if (fractionalNode == NULL)
                fractionalNode = head;

            else
                fractionalNode = fractionalNode->next;
        }
        i++;
    }
    return fractionalNode;
}