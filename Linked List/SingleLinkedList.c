#include<stdio.h>
#include<malloc.h>
struct Node{
    int val;
    struct Node *next;
};
typedef struct Node N;
void createList();
void printList();
void addFirst();
void addLast();
void insertAfter();
void insertBefore();      
void countNode();     
void deleteFirst();   
void deleteLast(); 
void reverseList();    

N *start=NULL,*ptr,*tmp,*pnode=NULL,*nnode=NULL;
void createList(){
    ptr = (N *) malloc (sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr->val);
    ptr -> next = NULL;
    if(start == NULL){
        start = ptr;
        tmp = ptr;
    }
    else{
        tmp -> next = ptr;
        tmp=ptr;
    }
}
void printList(){
    ptr = start;
    printf("List are:");
    while(ptr!=NULL){
        printf("%d ->",ptr -> val);
        ptr=ptr->next;
    }
}
void addFirst(){
    ptr = (N *) malloc (sizeof(N));
    printf("Enter the value");
    scanf("%d",&ptr->val);
    ptr->next=start;
    start = ptr;
}
void addLast(){
    tmp = start;
    while(tmp -> next != NULL){
        tmp = tmp -> next;
    }
   ptr = (N*)malloc(sizeof(N));
   printf("Enter the last value");
   scanf("%d",&ptr -> val);
   tmp ->next = ptr;
   ptr -> next = NULL; 
}
void insertAfter(){
    int n;
    printf("Enter the node number");
    scanf("%d",&n);
    tmp = start;
    while(tmp ->val !=n){
        tmp = tmp -> next;
    }
   ptr = (N*)malloc(sizeof(N));
   printf("Enter the value");
   scanf("%d",&ptr -> val);
   ptr -> next = tmp ->next;
   tmp -> next = ptr;
}
void insertBefore(){
    int n;
    printf("Enter the node number");
    scanf("%d",&n);
    tmp = start;
    while(tmp ->next -> val !=n){
        tmp = tmp -> next;
    }
   ptr = (N*)malloc(sizeof(N));
   printf("Enter the value");
   scanf("%d",&ptr -> val);
   ptr -> next = tmp ->next;
   tmp -> next = ptr;
}
void countNode(){
    int c = 0;
    tmp = start;
    while(tmp -> next != NULL){
        tmp = tmp -> next;
        c++;
    }
    printf("The Number of Node is %d",c);
}
void deleteFirst(){
    ptr = start;
    if(start == NULL){
        printf("List is Empty");
    }
    printf("The deleted Node is %d", start -> val);
    start = start -> next;
    free(ptr);
}
void deleteLast(){
    ptr = start;
    while(ptr -> next != NULL){
        tmp = ptr;
        ptr = ptr -> next;
    }
    tmp -> next = NULL;
    free(ptr);
}
void deleteAfter(){
    ptr = start;
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    while(ptr -> val != NULL){
        ptr = ptr -> next;
    }
    tmp = ptr -> next;
    ptr-> next = tmp -> next;
    free(tmp);
}
void reverseList(){
    N *tmp,*pnode=NULL,*nnode=NULL;
    tmp = start;
    while(tmp != NULL){
        nnode = tmp -> next;
        tmp -> next = pnode;
        pnode = tmp;
        tmp = nnode;
    }
    start = pnode;
}
int main(){
    int ch;
    do{
        printf("\n-: MENU-\n");
        printf("\n1 Create List");
        printf("\n2 Print List");
        printf("\n3 Add First");
        printf("\n4 Add Last");
        printf("\n5 Insert After");
        printf("\n6 Insert Before");
        printf("\n7 Count Node");
        printf("\n8 Delete First");
        printf("\n9 Delete Last");
        printf("\n10 Delete After");
        printf("\n11 Exit");
        printf("\n Enter Choice");
        scanf("%d",&ch);
        switch(ch){
            case 1: createList();
                    break;
            case 2: printList();
                    break;
            case 3: addFirst();
                    break;
            case 4: addLast();
                    break;
            case 5: insertAfter();
                    break;
            case 6: insertBefore();
                    break;       
            case 7: countNode();
                    break;     
            case 8: deleteFirst();
                    break; 
            case 9: deleteLast();
                    break;  
            case 10: deleteAfter();
                    break;   
            case 11: reverseList();
                    break;               
        }
    }
    while(ch!=0);
}
