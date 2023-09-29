#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

int count = 0;

void insert();
void ins_beg(int);
void ins_last(int);
void ins_any_pst(int);
void delete ();
void del_beg();
void del_last();
void del_any_pst();
void display();

void main()
{
    int ch;
    char con;
    do
    {
        printf("\nenter your choice       1: INSERT       2: DELETE       ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        default:
            printf("\nWRONG CHOICE INPUT: ");
        }
        printf("DO YOU WANT TO CONTINUE press s or S for continue   ");
        scanf("%s", &con);
    } while ((con == 's') || (con == 'S'));
}

void insert()
{
    int data, ch1;
    if (count == 0)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        printf("enter number   ");
        scanf("%d", &data);
        t->data = data;
        t->next = start;
        start = t;
        count++;
    }
    else
    {
        printf("\nenter number   ");
        scanf("%d", &data);
        printf("enter the choice for inserting  1: BEGIN    2: LAST     3: any position    ");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            ins_beg(data);
            break;
        case 2:
            ins_last(data);
            break;
        case 3:
            ins_any_pst(data);
        }
    }
}

void ins_beg(int data)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->next = start;
    start = t;
    count++;
    display();
}

void ins_last(int data)
{
    int i;
    struct node *t = (struct node *)malloc(sizeof(struct node));
    struct node *p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    t->data = data;
    p->next = t;
    t->next = NULL;
    count++;
    display();
}

void ins_any_pst(int data)
{
    int i, x;
    printf("enter the position      ");
    scanf("%d", &x);
    if (x <= count)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        struct node *p = start;
        for (i = 1; i < x-1; i++)
        {
            p = p->next;
        }
        t->data = data;
        t->next = p->next;
        p->next = t;
        count++;
    }
    else
    {
        printf("\nposition is greater then counts");
    }
    display();
}

void delete ()
{
    int ch2;
    if (count == 0)
    {
        printf("Linked list is underflowing!!!!");
    }
    else
    {
        printf("\nenter the choice for deleting     1: BEGNIG   2: LAST     3: any position  ");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            del_beg();
            break;
        case 2:
            del_last();
            break;
        case 3:
            del_any_pst();
            break;
        }
    }
}

void del_beg()
{
    struct node *p = start;
    start = start->next;
    free(p);
    count--;
    display();
}

void del_last()
{
    struct node *p = start;
    struct node *q = start;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL;
    free(p);
    count--;
    display();
}

void del_any_pst()
{
    int x, i;
    printf("enter the position  ");
    scanf("%d", &x);
    if (x <= count)
    {
        struct node *p = start;
        struct node *q = start;
        for (i = 1; i <= x-1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
        count--;
    }
    else
    {
        printf("\nposition is greater then counts");
    }
    display();
}

void display()
{
    struct node *p = start;
    printf("\n");

    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
}