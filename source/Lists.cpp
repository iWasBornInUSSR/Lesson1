//

//
#include <cstdlib>
#include <iostream>
#include "Lists.h"
#include "consts.h"
using  namespace std;
headArray *creatHead(int id){

    headArray *head = (headArray*)malloc(sizeof(headArray));
    head->first = nullptr;
    head->id = id;
    return head;
}
void addFirst(headArray *head,nodesArray *firstNode){

    head->first = firstNode;

}
void addInEnd(headArray *head,nodesArray *newNode){

    nodesArray *endNode = head->first;
    while(endNode->next != nullptr)
        endNode = endNode->next;
    endNode->next = newNode;
}
nodesArray *createNode(char charInfo){

    nodesArray *newNode = (nodesArray*)malloc(sizeof(nodesArray));
    newNode->next = nullptr;
    newNode->info = charInfo;
    return newNode;
}
void printList(headArray *head){

    cout << "List content" << endl;
    for (nodesArray *i = head->first; i != nullptr ; i = i->next) {
        cout << i->info << " ";
    }
    cout << endl;
}
void doTaskWithLists(char *A, char *B, char *C, char *D) {
    char E[size] = {0};
    headArray *headA = creatHead(1);
    headArray *headB = creatHead(2);
    headArray *headC = creatHead(3);
    headArray *headD = creatHead(4);
    headArray *headE = creatHead(5);
    addAllToList(headA, A);
    addAllToList(headB, B);
    addAllToList(headC, C);
    addAllToList(headD, D);
    int flag;
    // E = A / B / C
    for (nodesArray *a = headA->first; a != nullptr;  a = a->next) {
        flag = 1;
        for (nodesArray *b = headB->first , *c = headC->first; b != nullptr;  b = b->next) {
            if(a->info == b->info || a->info == c->info){
                flag = 0;
                break;
            }
            c = c->next;
            if(c == nullptr)
                break;
        }
        if(flag){
            nodesArray *copy = createNode(a->info);
            add(headE,copy);
        }
    }
    // E = A / B / C  U D
    for (nodesArray *a = headD->first; a != nullptr;  a = a->next) {
        flag = 1;
        for (nodesArray *b = headE->first; b != nullptr;  b = b->next) {
            if(a->info == b->info){
                flag = 0;
                break;
            }
        }
        if(flag){
            nodesArray *copy = createNode(a->info);
            add(headE,copy);
        }
    }
   // printList(headE);
    freeAll(headA);
    freeAll(headB);
    freeAll(headC);
    freeAll(headD);
    freeAll(headE);
}
void addAllToList(headArray *head, char *array) {


    for (int i = 0; array[i]; ++i) {
        nodesArray *node;
        node = createNode(array[i]);
        add(head,node);
    }

}
void checkLinList(headArray *head)
{
    struct nodesArray *p = head->first;
    while (p != nullptr)
    {   printf("it contain: %c\n",p->info);
        if(p->next == nullptr)
            printf("next: NULL ");
        else
            printf("next: %c ",p->next->info);
        printf("\n");
        p = p->next;
    }
    printf("-------------------------------\n");
}
void add(headArray *head, nodesArray *node)
{
    if(head->first == nullptr)
        addFirst(head,node);
    else
        addInEnd(head,node);
}
void freeAll(headArray *head)
{   nodesArray *c;
    nodesArray *p = head->first;
    while (p != nullptr)
    {
        c = p->next;
        free(p);
        p = c;
    }
    free(head);
}