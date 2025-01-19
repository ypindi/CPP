#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node

    // Constructor to initialize the node
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList
{
private:
    Node *head; // Pointer to the head of the list

public:
    // Constructor to initialize the linked list
    LinkedList() : head(nullptr) {}

    // Destructor to free memory
    ~LinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Function to add a node at the beginning
    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to add a node at the end
    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to delete a node by value
    void deleteNode(int value)
    {
        if (head == nullptr)
            return;

        // If the node to be deleted is the head
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Search for the node to be deleted
        Node *current = head;
        while (current->next != nullptr && current->next->data != value)
        {
            current = current->next;
        }

        // Node not found
        if (current->next == nullptr)
            return;

        // Delete the node
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Function to display the list
    void display() const
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main()
{
    LinkedList list;

    // Insert elements
    list.insertAtHead(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtHead(5);

    cout << "Linked List: ";
    list.display();

    // Delete an element
    cout << "Deleting 20..." << endl;
    list.deleteNode(20);

    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>43.exe
// Linked List: 5 -> 10 -> 20 -> 30 -> NULL
// Deleting 20...
// Linked List after deletion: 5 -> 10 -> 30 -> NULL

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>