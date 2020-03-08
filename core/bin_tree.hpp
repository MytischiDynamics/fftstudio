#pragma once
#include <cstddef>

struct node {
    int val;
    node* left;
    node* right;
};

class BinTree
{
    public:
        BinTree();
        ~BinTree();
        void destroyTree();
        void insert(int key);
    private:
        void destroyTree(node* leaf);
        void inset(int key, node* leaf);
        node* root;
}

BinTree::BinTree()
{
    root = NULL;
}

BinTree::~BinTree()
{
    destroyTree();
}

void BinTree::destroyTree(node* leaf)
{
    if (leaf != nullptr) {
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
    }
}

void BinTree::destroyTree()
{
    destroyTree(root);
}

void BinTree::insert(int key, node* leaf)
{

}

void BinTree::insert(int key)
{
    if (root != nullptr) {

    } else {

    }
}