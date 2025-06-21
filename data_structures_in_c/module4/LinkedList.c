/*
Linked List

You will write a function list_add() to append an integer to the end of a linked list. 
You will also write a function called list_find() that will return the list node containing
 the integer value or NULL if the value is not in the list. 
*/

#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

struct lnode * list_find(struct list *lst, int value);
void list_add(struct list *lst, int value);
void list_dump(struct list *lst);

int main()
{
    struct lnode * list_find();

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    mynode = list_find(&mylist, 42);
    if ( mynode == NULL ) {
        printf("Did not find 42\n");
    } else {
        printf("Looked for 42, found %d\n", mynode->value);
    }

    mynode = list_find(&mylist, 30);
    if ( mynode == NULL || mynode->value != 30) {
        printf("Did not find 30\n");
    } else {
        printf("Found 30\n");
    }

    list_add(&mylist, 40);
    list_dump(&mylist);

}

void list_dump(struct list *lst)
{
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}

void list_add(struct list *lst, int value)
{
    /* Append the value to the end of the linked list. */
    // allocate memory and set the values of the new tail
    struct lnode *newnode = malloc(sizeof(struct lnode)); 
    newnode->value = value;
    newnode->next = NULL;
    
    // handle first node added to list
    if (lst->head == NULL) {
        lst->head = newnode;
        lst->tail = newnode;
    } else {
        lst->tail->next = newnode; // update previous tail next value to point to new node
        lst->tail = newnode;	   // update the tail to node that was just added
    }
}

struct lnode * list_find(struct list *lst, int value)
{
    // Initialze the current struct
    struct lnode *current = lst->head;

    while (current != NULL) {
    	// check value of the current struck
    	if (current->value == value) {
    		return current;
    	} else {
    		// update pointer to point to the next address
    		current = current->next;
    	}
    }
    // if nothing was found return NULL
    return NULL;
}