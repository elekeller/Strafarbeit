#include<stdio.h>
#include<stdlib.h>

//https://techvidvan.com/tutorials/binary-tree-in-c/
struct node
{
int value;
struct node *left_child, *right_child;
};

struct node *new_node(int value)
{
struct node *tmp = (struct node *)malloc(sizeof(struct node));
tmp->value = value;
tmp->left_child = tmp->right_child = NULL;
return tmp;
}

void print(struct node *root_node) // displaying the nodes!
{
if (root_node != NULL)
{
print(root_node->left_child);
printf("%d \n", root_node->value);
print(root_node->right_child);
}
}

struct node* insert_node(struct node* node, int value) // inserting nodes!
{

if (node == NULL) return new_node(value);
if (value < node->value)
{
node->left_child = insert_node(node->left_child, value);
}
else if (value > node->value)
{
node->right_child = insert_node(node->right_child, value);
}
return node;
}

void insert_worker(struct node* node, char* argv[])
{

    for(int i = 0; i < sizeof(argv) / sizeof(argv[0]);  i++)
    {
    insert_node(node, argv[i])
    }

}







int main(int argc, char* argv[])
{


    #define NUM_THREADS atoi(argv[1])           //Define number of Threads
    printf("Threads: %d \n", NUM_THREADS);


    struct node *root_node = NULL;              //create root
    root_node = insert_node(root_node, 1);


    Pthread_create();                          //






insert_node(root_node, 10);
insert_node(root_node, 30);
insert_node(root_node, 25);
insert_node(root_node, 36);
insert_node(root_node, 56);
insert_node(root_node, 78);



print(root_node);

return 0;
}