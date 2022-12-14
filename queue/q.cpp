Given a Singly Linked List of integers, delete all the alternate nodes in the list.
Example:
List: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> null
Alternate nodes will be:  20, 40, and 60.

Hence after deleting, the list will be:
Output: 10 -> 30 -> 50 -> null


void delete_alternate_node_LinkedList(Node *head) {

    if(head==NULL)
        return;
    if(head->next==NULL)
        return;

    int x=length(head);

        Node *p=head;
        Node *q=head;

        for(int i=2 ; i <x ; i=i+2)
        {	p=p->next;
            Node *t=p;
            p=p->next;
            q->next=p;
            delete t;
            q=p;
        }

    if(x%2==0)
        {
         p=p->next;
        q->next=NULL;
           delete p;

        }

}
