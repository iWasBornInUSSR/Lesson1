//
// Created by peeknick on 03.09.18.
//

#ifndef ALGOSI_LISTS_H
#define ALGOSI_LISTS_H
struct nodesArray
{
     nodesArray *next;
     char info;
};
struct headArray
{
    nodesArray *first;
    int id;
};

headArray *createHead(int id);

void addInEnd(headArray *head, nodesArray *newNode);

nodesArray *createNode(char charInfo);

void printList(headArray *head);
void addAllToList(headArray *head, char *array);
void doTaskWithLists(char *A, char *B, char *C, char *D);
void add(headArray *head, nodesArray *node);
void freeAll(headArray *head);
#endif //ALGOSI_LISTS_H
