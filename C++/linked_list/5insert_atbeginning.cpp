#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
     data=x;
     next=NULL;
    }
};
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
    Node *head=NULL;
    head=insertbeg(head,50);
    head=insertbeg(head,40);
    head=insertbeg(head,30);
    head=insertbeg(head,20);
    head=insertbeg(head,10);
    printlist(head);
   return 0;
}