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

        if (START == NULL || rollNo <= START->rollNo)
        {
            if (START != NULL && rollNo == START->rollNo)
            {
                cout << "\nDuplicate roll numbers not allowed\n";
                return;
            }
            newNode->next = START;
            if (START != NULL)
                START->prev = newNode;
            newNode->prev = NULL;
            START = newNode;
            return;
        }
        Node *current = START;
        while (current->next != NULL && current->next->rollNo < rollNo)
            current = current->next;

        if (current->next != NULL && rollNo == current->next->rollNo)
        {
            cout << "\nDuplicate roll numbers not allowed\n";
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL)
            current->next->prev = newNode;
        current->next = newNode;
    }

    bool listEmpty() {
        return (START == NULL);
    }