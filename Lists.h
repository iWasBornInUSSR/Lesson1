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
void addAllToList(headArray *head, char *array);
void doTaskWithLists(char *A, char *B, char *C, char *D, char *E);
void checkLinList(headArray *head);
void add(headArray *head, nodesArray *node);
void freeAll(headArray *head);
#endif //ALGOSI_LISTS_H
