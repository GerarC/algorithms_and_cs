#include <ll.h>
#include <stdlib.h>

/**
 * C es un lenguaje centrado en un paradigma procedimental.
 * En verdad es un lenguaje fácil, a pesar de no parecerlo a simple vista, y es
 * que tiene muy pocas features comparado con otros lenguaes
 * */

int main() {

	LinkedList *ll = malloc(sizeof(LinkedList));

	for (int val = 1; val <= 10; val++)
		append_node(ll, val);

	print_list(ll);

	return 0;
}
