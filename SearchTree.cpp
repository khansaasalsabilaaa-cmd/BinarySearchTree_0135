#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class Binarytree
{
public:
    Node *root;

    Binarytree()
    {
        root = NULL;
    }

    void insert(string element)
    {
        node *newnode = new node(element, NULL, NULL);
        
        newnode->info = element;
        newnode->leftchild = NULL;
        newnode->rightchild = NULL;

        node *parent = NULL;
        node *currentnode = NULL;
