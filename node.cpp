#include "Node.h"

Node::Node(Vehicle* item):item(item), next(nullptr){}

Node::~Node()
{
    delete item;
}