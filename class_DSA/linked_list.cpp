#include <iostream>

// Define a Node structure
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    // Constructor to initialize an empty listl
    LinkedList() : head(nullptr) {}

    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to display the elements of the list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destructor to free memory when the list is destroyed
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

private:
    Node* head;
};

int main() {
    LinkedList myList;

   
    myList.append(10);
    myList.append(20);
    myList.append(30);

    
    myList.display();

    return 0;
}
