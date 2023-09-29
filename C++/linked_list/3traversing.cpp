#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data =x;
    next=NULL;
  }
};
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
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    printlist(head);
    printlist(head);
    return 0;
}