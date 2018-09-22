//

//
#include <cstdlib>
#include <iostream>
#include "Lists.h"
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
nodesArray *creatNode(char charInfo){

    nodesArray *newNode = (nodesArray*)malloc(sizeof(nodesArray));
    newNode->next = nullptr;
    newNode->info = charInfo;
}
void printList(headArray head){

    cout << "List content" << endl;
    for (nodesArray *i = head.first; i != nullptr ; i = i->next) {
        cout << i->info << " ";
    }
    cout << endl;
}
headArray doTaskWithLists(headArray head1,headArray head2,headArray head3,headArray head4){


}
