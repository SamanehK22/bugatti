#ifndef STORESYSTEM_H
#define STORESYSTEM_H
#include "Node.h"

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList();
        ~LinkedList();
        void add(Vehicle* item);
        void displayAll();
        void remove(int index);
        Vehicle* get(int index);
        int size() const;
};

#endif