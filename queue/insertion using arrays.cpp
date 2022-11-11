Node*skipMdeleteN(Node *head, int M, int N)
{
    if(head==NULL || head->next==NULL)
    {
return head;}
    if(M==0)
    {
return NULL;}
    else if(N==0)
    {
return head;}

Node*temp1=head;
    while(temp1!=NULL)
    {
for(int i=0;i<M-1;i++)
{
if(temp1->next==NULL)
{
return head;}
temp1=temp1->next;}
        Node*temp2=temp1->next;
for(int i=0;i<N-1;i++)
{
if(temp2->next==NULL)
{
    temp1->next=NULL;
    return head;
}
temp2=temp2->next;}
        temp1->next=temp2->next;
            temp1=temp1->next;
        }
    }
