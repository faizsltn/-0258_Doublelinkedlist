#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int rollNo;
    string name;
    Node *prev;
    Node *next;
};

class DoubleLinkedList {
    private:
        Node* START;
    
    public:
        DoubleLinkedList() {
            START = NULL;
        }