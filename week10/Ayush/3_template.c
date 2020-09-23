#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int val;
	struct Node* next;
} Node;

Node* createNode(int dt){
    Node* n=(Node*)malloc(sizeof(Node));
    n->val=dt;
    n->next=NULL;
    return n;
}

Node* input(int N){
    Node* head=NULL,*tail=NULL,*pt;
    int num;
    while(N--){
        scanf("%d",&num);            
        pt=createNode(num);
        if(head==NULL)
            head=tail=pt;
        else{
            tail->next=pt;
            tail=pt;
        }
    }
    if (tail) tail->next = head;
    return head;
}

void output(Node* head){
    Node* ptr=head; int N = 0;
    while(ptr!=head || !N){
        N++;
        if (N >= 1002 || !ptr) break;
        printf("%d ",ptr->val);
        ptr=ptr->next;
    }
    if (N >= 1002 || !ptr) printf("The returned linkedlist is not a valid cyclic linked list!");
    printf("\n");
}

Node* insertInSortedCyclicList(Node* head, int x) {
    /*
        Write your code here
    */
}

int main() {
	int N; scanf("%d",&N);
	Node* head = input(N);
	int x; scanf("%d",&x);
	head = insertInSortedCyclicList(head, x);
	output(head);
}