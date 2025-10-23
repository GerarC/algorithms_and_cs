#include <stdio.h>
#include <stdlib.h>

// procedimientos

typedef struct _node_t {
  int value;
  struct _node_t *next;
} Node;

// Envolver a los nodos
typedef struct _linked_list_t {
  Node *head;
  Node *tail;
} LinkedList;

Node *create_node(int num);
void add_node(LinkedList *ll, int num);
void delete_node(LinkedList *ll, int num);
void search(LinkedList *ll, int num);
void print_list(LinkedList *ll);

int main() {

  Node *node = create_node(4);

  LinkedList *ll = malloc(sizeof(LinkedList));

  add_node(ll, 4);
  add_node(ll, 5);
  add_node(ll, 5);
  add_node(ll, 5);
  add_node(ll, 5);
  add_node(ll, 5);

  print_list(ll);

  return 0;
}

Node *create_node(int num) {
  // Memory alloc (Decirle al SO que reserve memoria)
  Node *node = malloc(sizeof(Node));
  node->value = num;
  return node;
}

void add_node(LinkedList *ll, int num) {
  Node *node = create_node(num);
  if (!ll->head) {
    ll->head = node;
    ll->tail = node;
  } else {
    ll->tail->next = node;
    ll->tail = node;
  }
}

void delete_node(LinkedList *ll, int num);
void search(LinkedList *ll, int num);

void print_list(LinkedList *ll) {
  Node *current;
  current = ll->head;
  while (current) {
    printf("val: %d\n", current->value);
    current = current->next;
  }
}
