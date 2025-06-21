/*
Linked List

You will extend the previous assignment with list_add() and list_find() and add a function called 
list_delete() that will find and remove the node containing the integer value if it is in the list. 
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

void list_dump(struct list *lst);
void list_add(struct list *lst, int value);
void list_remove(struct list *lst, int value);

int main()
{

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    list_remove(&mylist, 42);

    list_remove(&mylist, 10);
    list_dump(&mylist);

    list_remove(&mylist, 30);
    list_dump(&mylist);

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

void list_remove(struct list *lst, int value) 
{
    /* Remove the value from the linked list. */
	// Initialze the current struct
    struct lnode *current = lst->head;
    struct lnode *previous = NULL;

    while (current != NULL) {
    	// check value of the current struck
    	if (current->value == value) {
    		// value to remove is the head of the list
    		if (current == lst->head) {
    			lst->head = current->next;
    			if (lst->head == NULL) {
    				lst->tail = NULL;
    			}
    		}
    		// value ot remove is the tail of the list
    		 else if (current == lst->tail) {
    			previous->next = NULL;
    			lst->tail = previous;
    		} 
    		// value to remove is in the middle of the list
    		else {
    			previous->next = current->next;
    		}
    		free(current); // free the memory we are done with
    		return;
    	} else {
    		// update pointer to point to the next address
    		previous = current;
    		current = current->next;
    	}
    }
}

