#include <stdio.h>
#include <stdlib.h>

struct Node_
{
    int digit;
    struct Node_ *prev;
    struct Node_ *next;
};

typedef struct Node_ Node;

void addToEnd(Node **tail, int digit)
{
    Node *node = (Node *)malloc(sizeof(Node));

    node->next = NULL;
    node->prev = *tail;
    node->digit = digit;
    if (*tail != NULL)
        (*tail)->next = node;
    *tail = node;
    return;
}

void addToFront(Node *head, int digit)
{
    Node *node = (Node *)malloc(sizeof(Node));

    node->next = head;
    node->prev = NULL;
    node->digit = digit;
    if (head != NULL)
        head->prev = node;
    return;
}

void calcOneDigitProduct(Node* a_tail, int multiplier, Node** oneDigitProduct_tail){
    
    addToEnd(oneDigitProduct_tail, 0);
    int carry = 0;

    Node* oneDigitProduct_node = *oneDigitProduct_tail;

    while(a_tail!=NULL){
        int oneDigProd = a_tail->digit * multiplier + carry;

        oneDigitProduct_node->digit = oneDigProd%10;
        carry = oneDigProd/10;
        
        if (oneDigitProduct_node->prev == NULL){
            addToFront(oneDigitProduct_node,0);
        }

        oneDigitProduct_node = oneDigitProduct_node->prev;
        a_tail = a_tail->prev;
    }

    if (carry){
        oneDigitProduct_node->digit = carry;
    }
    return;
}


void calcSum(Node *p_tail, Node *toAdd_tail)
{
    Node* p_node = p_tail;
    int carry = 0;

    while (toAdd_tail != NULL || carry != 0)
    {

        int oneDigSum;

        if (toAdd_tail != NULL)
            oneDigSum = p_node->digit + toAdd_tail->digit + carry;
        else
            oneDigSum = p_node->digit + carry;

        p_node->digit = oneDigSum % 10;
        carry = oneDigSum / 10;

        if (p_node->prev == NULL)
        {
            addToFront(p_node, 0);
        }
        p_node = p_node->prev;

        if (toAdd_tail != NULL)
            toAdd_tail = toAdd_tail->prev;
    }
}

void multiply(Node *a_tail, Node *b_tail, Node *p_tail)
{

    int numZeroes = 0;

    while (b_tail != NULL)
    {

        Node *oneDigitProduct_tail = NULL;
        calcOneDigitProduct(a_tail, b_tail->digit, &oneDigitProduct_tail);
        for (int i = 0; i < numZeroes; i++)
            addToEnd(&oneDigitProduct_tail, 0);

        calcSum(p_tail, oneDigitProduct_tail);

        numZeroes++;
        b_tail = b_tail->prev;
    }

    return;
}

int isZeroLL(Node* head){

    while(head!=NULL) {
        if (head->digit!=0) return 0;
        head = head->next;
    }

    return 1;
}

void printLL(Node *head, int isNeg)
{

    if (isZeroLL(head)) {
        printf("0\n");
        return;
    }

    if (isNeg) printf("-");
    int firstNonzeroDig = 0;

    while (head != NULL)
    {
        if(firstNonzeroDig==0 && head->digit==0){
            head = head->next;
            continue;
        }
        firstNonzeroDig = 1;
        printf("%d", head->digit);
        head = head->next;
    }

    printf("\n");
    return;
}

int main()
{

    Node *a_tail = NULL;
    Node *b_tail = NULL;

    int isNeg = 0;

    char c;
    scanf("%c", &c);
    if (c=='-') {isNeg++; scanf("%c", &c);}

    while (c != '\n')
    {
        int digit = c - '0';
        addToEnd(&a_tail, digit);
        scanf("%c", &c);
    }

    scanf("%c", &c);
    if (c=='-') {isNeg++; scanf("%c", &c);}

    while (c != '\n')
    {
        int digit = c - '0';
        addToEnd(&b_tail, digit);
        scanf("%c", &c);
    }

    Node *p_tail = NULL;

    addToEnd(&p_tail, 0);

    multiply(a_tail, b_tail, p_tail);

    Node* p_travel = p_tail;
    Node *p_head = NULL;

    while(p_travel!=NULL){
        p_head = p_travel;
        p_travel = p_travel->prev;
    }

    printLL(p_head, isNeg%2);

    return 0;
}