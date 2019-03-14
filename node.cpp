#include "node.h"

Node::Node(int data)
{
    this->data = data;
}

int Node::get_data()
{
    return data;
}

void Node::set_next(Node *node)
{
    this->next = node;
}

Node *Node::get_next()
{
    return next;
}
