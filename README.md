# Push_swap 
Ce projet consiste à créer un programme qui prend en paramètre la pile a sous la forme
d’une liste de nombres. Le premier paramètre est au sommet de la pile.
Le programme doit afficher la suite d’opérations qui permet de trier la pile, le plus
petit nombre étant au sommet.
Le but est de trier la pile avec le moins d’opérations possibles.


## Summary
 1. [Makefile](#makefile)
 2. [Utilisation](#usage)
 3. [Exemple](#exemple)

## <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile tous les .c et créer un exécutable fdf  	|
| `make clean`    | Supprime les .o.  	|
| `make flcean`  	| Supprime les .o et fdf.  	|
| `make re` 	 	| Exécute fclean et make.  	|

## <a name="usage">Utilisation</a>

* Sans option:
>./push_swap 4 88 23  5

* Option -v: Affiche le detail de l'action executée dans les listes.
>./push_swap -v 3 5 4 77 1
  
* Option -n: Affiche le nombre de mouvement réalisés à la fin du programme.
>./push_swap -n 3 4 1 6 2

## <a name="exemple">Exemple</a>

```c
./push_swap 3 8 6 5

Start:
a: 5 6 8 3
b:

pb sa pb sa pa pa pb sa pa

End:
a: 8 6 5 3
b:
```

```c
./push_swap -nv 3 8 6

Start:
a: 6 8 3
b:

pb
a: 6 8
b: 3

sa
a: 8 6
b: 3

pa
a: 8 6 3
b:

End:
a: 8 6 3
b:

Resolved in 3 moves
```
