# Lista Ligada

Una lista ligada es una estructura de datos basada en nodos donde cada nodo apunta al siguiente, generando una lista lineal.

Mientras que un array normal separa el espacio de memoria en conjunto, la Lista ligada puede ir reservando cada vez que se crea un nodo nuevo.


## Array
Para saber por qué usar Listas ligadas es bueno saber por qué se crearon.
Un array se podría ver como un bloque de memoria con un espacio limitado que se reserva:
![[array_example.png]]

La ventaja de esto es que es muy fácil saber donde está cada elemento. El PC reserva esa memoria, ya sea en el stack o en el heap y retorna una dirección de memoria. en este caso la dirección, por ejemplo `fff000`, apuntará al primer item, es decir `list[0]`. El segundo item `list[1]` estará en la dirección inmediatamente posterior `fff001`, lo que vendría siendo sumarle un uno a la dirección original. Si la lista tiene 6 elementos el último elemento es `fff005`. En general, se puede encontrar un elemento con `<mem_dir> + <idx>` donde `<mem_dir>` es la dirección de memoria o puntero de la lista y `<idx>` el índice.

En general las operaciones con array son muy rápidas porque con una simple formula puedes buscar, ordenar y cambiar los items de la lista. ¿Si es tan bueno esto, entonces por qué se crearon las otras? Los otros tipos de lista, además de ser buenos ejercicios mentales intentan resolver carencias que tienen también los *Array*.

El mayor problema de los array es que son estáticos, cuando se reserva la memoria, se asigna un tamaño en específico y ese no cambia al momento de ejecución. Esto significa que no se pueden agregar items de manera dinámica a menos que reasignes la memoria, lo que es un trabajo pesado para el procesador y al eliminar un item, cubrir el espacio vacío que deja significa también los elementos posteriores al eliminado. El linked list resuelve estos problemas, aunque trae otros.

## Solución de la Lista Ligada
Una lista ligada se puede ver memoria esparcida que se conecta a través de punteros:
![[linked_list_example.png]]

Esta lista se puede expandir tanto como haya espacio disponible en la memoria. Tiene sus ventajas y sus desventajas.

#### Ventajas
- Se pueden crear y añadir nuevos elementos en runtime.
- facilita la inserción y el borrado de los elementos.

#### Desventajas
	- 