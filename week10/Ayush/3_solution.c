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

Node* insertInSortedCyclicList(Node* start, int x) {
    // shorter code
    if (!start) {
        start = createNode(x);
        start->next = start;
    } else {
        Node *prev = start, *curr = start->next, *begin = NULL, *end = NULL;
        int break_flag = 0;
        while(1) {
            if (prev->val <= x && x <= curr->val) break;
            if (prev->val > curr->val) {
                end = prev; begin = curr;
                if (prev->val <= x) break;
            }
            prev = curr; curr = curr->next;
            if (curr == start->next) {break_flag = 1; break;}
        }
        if (break_flag) {prev = end?end:start; curr = begin?begin:start->next;}
        prev->next = createNode(x);
        prev->next->next = curr;
    }
    return start;
}

int main() {
	int N; scanf("%d",&N);
	Node* start = input(N);
	int x; scanf("%d",&x);
	start = insertInSortedCyclicList(start, x);
	output(start);
}