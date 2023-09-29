#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *insertEnd(Node *head,int x)
{ 
    Node *temp=new Node(x);
    if(head==NULL)
    {
       return temp;
    }
    else
    {
    Node *curr=head;
    while(curr->next!=NULL)
    {
      curr=curr->next;
    }
    curr->next=temp;
      return head;
    }

}
Node *insertbeg(Node *head,int x)
{
  Node *temp=new Node(x);
  temp->next=head;
 return temp;
}
void printlist(Node *head)
{                                //no need to create cuurent variable as head in main function and head in printlist functio are different
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head= NULL;
    head=insertbeg(head,50);
    head=insertbeg(head,40);
    head=insertbeg(head,30);
    head=insertbeg(head,20);
    head=insertbeg(head,10);
    //printlist(head);
    cout<<endl;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    head=insertEnd(head,40);
    head=insertEnd(head,50);
    printlist(head);
    return 0;
}