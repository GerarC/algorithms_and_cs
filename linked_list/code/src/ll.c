#include <ll.h>
#include <stdio.h>
#include <stdlib.h>

Node *create_node(int num) {
	// Memory alloc (Decirle al SO que reserve memoria)
	Node *node = malloc(sizeof(Node));
	node->value = num;
	return node;
}

Node *append_node(LinkedList *ll, int num) {
	Node *node = create_node(num);
	if (!ll->head) {
		ll->head = node;
		ll->tail = node;
	} else {
		ll->tail->next = node;
		ll->tail = node;
	}
	return node;
}

Node *insert_node(LinkedList *ll, Node *before, int num);

int delete_node(LinkedList *ll, Node *);

Node *search(LinkedList *ll, int num);

void print_list(LinkedList *ll) {
	Node *current;
	current = ll->head;
	while (current) {
		printf("val: %d\n", current->value);
		current = current->next;
	}
}
