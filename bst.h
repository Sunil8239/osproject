#ifndef __BST__
#define __BST__

#include <pthread.h>

typedef struct bstNode {
	 pthread_mutex_t mutex;
    int data;
    struct bstNode *left;
    struct bstNode *right;
} bstNode;

typedef struct bstTree {
    struct bstNode *root;
} bstTree;

bstTree *bst_new(void);
void bst_delete(bstTree *t);

bstNode *bst_new_node(int data);
void bst_delete_node(bstNode *node);

int bst_insert_node(bstTree *tree, bstNode *node);
int bst_remove_node(bstTree *tree, int data);
int bst_remove_node_ts_cg(bstTree *tree, int data);
int bst_remove_node_ts_fg(bstTree *tree, int data);

void bst_print(bstTree *tree);

#endif /* __BST__ */


