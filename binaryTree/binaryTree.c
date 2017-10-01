/*
    MIT License

    Copyright (c) 2017 Douglas Chidester

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include "binaryTree.h"

// local variables
static unsigned int treeSize = 0;
static TreeNode* root = NULL;

TreeNode* Tree_insertNode(TreeNode* node)
{
    TreeNode* newNode = NULL;

    if(Tree_isEmpty())
    {
        // create a root node
        newNode = (TreeNode*) malloc(sizeof(TreeNode));
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = 0;
        
        ++treeSize; // increment node count
        root = newNode; // set new node
    }
    else if(node->left == NULL)
    {
        newNode = (TreeNode*) malloc(sizeof(TreeNode));
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = 0;

        ++treeSize;
        node->left = newNode;
    }
    else if(node->right == NULL)
    {
        newNode = (TreeNode*) malloc(sizeof(TreeNode));
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = 0;

        ++treeSize;
        node->right = newNode;
    }
    else
    {
        // TODO find smallest subtree and add node there
        newNode = Tree_insertNode(node->left);
    }

    return newNode;
}

void Tree_removeNode(TreeNode* node)
{
    // if leaf
    if(Tree_isLeaf(node))
    {
        free(node);
        --treeSize;
    }
    // TODO fix memory leak here...
    // if(node->left != NULL)
    //     Tree_removeNode(node->left);
    // if(node->right != NULL)
    // {
    //     Tree_removeNode(node->right);
    // }
}

TreeNode* Tree_findNode(TreeNode* node, int data)
{
    TreeNode* foundNode = NULL;
    bool keepSearching = true;

    if(node != NULL)
    {
        if(node->data == data)
        {
            foundNode = node;
            keepSearching = false;
        }
        if(keepSearching && node->left != NULL)
        {
            foundNode = Tree_findNode(node->left, data);
        }
        if(keepSearching && node->right != NULL)
            foundNode = Tree_findNode(node->right, data);
    }

    return foundNode;
}

TreeNode* Tree_getRoot(void)
{
    return root;
}

bool Tree_isRoot(TreeNode* node)
{
    return (node == root)? true : false;
}

bool Tree_isLeaf(TreeNode* node)
{
    return (node->left == NULL && node->right == NULL)? true : false;
}

int Tree_getSize(void)
{
    return treeSize;
}

bool Tree_isEmpty(void)
{
    return (treeSize == 0)? true : false;
}
