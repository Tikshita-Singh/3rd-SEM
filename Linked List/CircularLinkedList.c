#include<stdio.h>
#include<malloc.h>
struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node N;
N *start=NULL,*ptr,*tmp;

void CreateNode()
{
    ptr=(N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr->val);
    if(start == NULL)
    {
        start = ptr;
        tmp = ptr;
        ptr -> next = start;
    }
    else
    {
        tmp -> next = ptr;
        tmp = ptr;
        ptr -> next = start;
    }
}
void insertFirst()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    tmp = start;
    ptr -> next = start;
    while(tmp -> next != start)
    {   
        tmp = tmp -> next;     
    }
    tmp -> next = ptr;
    start = ptr;
}
void insertLast()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    tmp = start;
    while(tmp -> next != start)
    {   
        tmp = tmp -> next;     
    }
    tmp -> next = ptr;
    ptr -> next = start;
}
void insertAfter()
{
    int n;
    printf("Enter the node value");
    scanf("%d",&n);
    ptr = (N *)malloc(sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr -> val);
    tmp = start;
    while(tmp -> val != n)
    {
        tmp = tmp -> next;
    }
    ptr -> next = tmp -> next;
    tmp -> next = ptr;
}
void deleteFirst()
{
    tmp = start;
    ptr = start;
    while (ptr -> next != start)
    {
        ptr = ptr ->next;
    }
    ptr -> next = start -> next;
    start = start -> next;
    free(tmp);
}
void deleteLast()
{
   tmp = start;
   while (tmp -> next != start)
    {
        ptr = tmp;
        tmp = tmp ->next;
    } 
    ptr -> next = start;
    free(tmp);
}
void printList()
{
    ptr = start;
    do
    {
        printf("%d-> ",ptr->val);
        ptr = ptr -> next;
    }
    while(ptr != start);
}
int main()
{
    int ch;
    do
    {
        printf("\n -: M E N U :-\n============");
        printf("\n1.....Create........");
        printf("\n2.....InserAtFirst......");
        printf("\n3.....InserAtLast......");
        printf("\n4.....InsertAfter......");
        printf("\n5.....DeleteFirst......");
        printf("\n6.....DeleteLast......");
        printf("\n7.....Print......");
        printf("\n8.....Exit.....");
        printf("\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:CreateNode();break;
            case 2:insertFirst();break;
            case 3:insertLast();break;
            case 4:insertAfter();break;
            case 5:deleteFirst();break;
            case 6:deleteLast();break;
            case 7:printList();break;
        }
    }
    while(ch != 0);
}
