/**
    @file binaryTree.h




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
        root = (TreeNode*) malloc(sizeof(TreeNode));
        root->left = NULL;
        root->right = NULL;
        root->data = 0;

        ++treeSize; // increment node count
        newNode = root; // set new node
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

    return newNode;
}

void Tree_removeNode(TreeNode* node)
{
    if(node == NULL)
        return;
    if(node->left == NULL && node->right == NULL)
        free(node);
}

TreeNode* Tree_findNode(TreeNode* node, int data)
{

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

}

int Tree_getSize(void)
{
    return treeSize;
}

bool Tree_isEmpty(void)
{
    return (treeSize == 0)? true : false;
}
