#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    //define the details of the structure
    int data;
    struct node* next;
}NODE;
void printList(NODE *);//function to print the solution
NODE* input(int n);//Function to take input
NODE* reverse(NODE*);//function to solve the problem
NODE* createNode(int n);

int main()
{
    NODE* head;
    int n;
    scanf("%d",&n);
    head=input(n);
    head = reverse(head);
    printList((head));
    return 0;
}

NODE* createNode(int dt){
    NODE* n=(NODE*)malloc(sizeof(NODE));
    n->data=dt;
    n->next=NULL;
    return n;
}//Function that creates and returns a pointer to a NODE

NODE* input(int n){
    NODE* head=NULL,*tail=NULL,*pt;
    
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        
        pt=createNode(num);
        if(head==NULL)
            head=tail=pt;
        else{
            tail->next=pt;
            tail=pt;
        }
    }
    return head;
}
void printList(NODE* head){
    NODE* ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

NODE* reverse(NODE *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    NODE *temp = reverse(head->next);
    NODE *pt = temp;
    while(pt->next!=NULL){
        pt = pt->next;
    }
    
    pt->next = head;
    head->next = NULL;
    return temp;
}