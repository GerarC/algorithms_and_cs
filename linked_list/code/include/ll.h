/** Los archivos .h o mejor conocidos como headers sirven para
 * definir las cosas que se van a utilizar, luego el compilador enlazará
 * todas las definiciones con sus implementaciones hechas en el archivo de
 * código o .c
 * */

#ifndef LL_H
/* ### Comandos del preprocesador.
 * Básicamente le estoy diciendo al compilador que si la macro
 * LL_H existe, entonces se salte este pedazo de código. de otra
 * manera, el preprocesador tendrá en cuenta el código que haya
 * hasta el #endif
 */
#define LL_H // <- Se define la macro, en caso de compilar otra vez, no tendrá
			 // en cuenta este código si no se ha cambiado

/**
 * Estructura de nodo de lista ligada, contiene un valor y un puntero al
 * siguiente item de la lista
 * */
typedef struct _node_t {
	int value;
	struct _node_t *next;
} Node;

/**
 * Estructura de Linked List, esta envuelve a los nodos para facilitar el manejo
 * y la comprensión de estos
 * */
typedef struct _linked_list_t {
	Node *head;
	Node *tail;
} LinkedList;

/**
 * Crea un nodo y lo retorna.
 * */
Node *create_node(int num);

/**
 * Crea un nodo con el valor dado, lo añade al final de la lista ligada
 * proporcionada y retorna el nodo creado
 * */
Node *append_node(LinkedList *ll, int num);

/**
 * Crea un nodo con el valor dado, lo añade después del nodo proporcionado, si
 * es que este último este pertenece a la lista, y retorna el nodo creado. En
 * caso de no específicar un nodo anterior, se añadirá al principio de la lista
 * */
Node *insert_node(LinkedList *ll, Node *before, int num);

/**
 * Desconecta el nodo proporcionado de la lista, lo elimina, y retorna el valor
 * que tenía
 * */
int delete_node(LinkedList *ll, Node *);

/**
 * Busca un nodo que tenga el valor proporcionado
 * */
Node *search(LinkedList *ll, int num);

/**
 * Imprime todos los nodos de las lista dada.
 * */
void print_list(LinkedList *ll);

#endif // !LL_H
