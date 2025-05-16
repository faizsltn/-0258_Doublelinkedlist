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

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }
    void addNode()
    {
        int rollNo;
        string nm;
        cout << "\nEnter the roll number of the student: ";
        cin >> rollNo;
        cout << "\nEnter the name of the student: ";
        cin.ignore();
        getline(cin, nm);

        Node *newNode = new Node();
        newNode->rollNo = rollNo;
        newNode->name = nm;
        newNode->prev = NULL;
        newNode->next = NULL;