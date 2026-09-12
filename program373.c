#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE first)
{
    return 0;
}

void InserFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn-> data = iNo;
    newn-> next = NULL;

    if(*first == NULL)      //Linklist is Empty
    {
        *first = newn;
    }
    else                    //Linklist contain atleast 1 node
    {
        newn ->next = *first;
        *first = newn;
    }
}

void InserLast(PPNODE first , int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn-> data = iNo;
    newn-> next = NULL;

    if(*first == NULL)      //Linklist is Empty
    {
        *first = newn;
    }
    else                    //Linklist contain atleast 1 node
    {

    }
}

void InserAtPos(PPNODE first , int iNo,int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int iPos)
{}

int main()
{
    PNODE head = NULL;

    InserFirst(&head,101);
    InserFirst(&head,51);
    InserFirst(&head,21);
    InserFirst(&head,11);

    Display(head);


    return 0;
}
