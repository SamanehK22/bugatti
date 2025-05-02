#include "storeSystem.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::add(Vehicle* item) {
    Node* newNode = new Node(item);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::displayAll() {
    Node* temp = head;
    int index = 0;
    while (temp)
    {
        cout << "Item #" << index++ << ":\n";
        temp->item->display();
        temp = temp->next;
    }
}

void LinkedList::remove(int index) {
    if (!head) return;

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    for (int i = 0; current->next && i < index - 1; ++i) {
        current = current->next;
    }

    if (current->next) {
        Node* toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
    }
}

Vehicle* LinkedList::get(int index) {
    Node* current = head;
    int i = 0;
    while (current) {
        if (i == index) return current->item;
        current = current->next;
        i++;
    }
    return nullptr;
}

int LinkedList::size() const {
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}