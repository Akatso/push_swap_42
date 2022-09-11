# push_swap_42

Ce projet vous demande de trier des données dans une pile, en utilisant un set
d’instructions limité, et avec le moins d’opérations possibles. Pour le réussir, vous
devrez manipuler différents algorithmes de tri et choisir la (ou les ?) solution la plus
appropriée pour un classement optimisé des données.

ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_linux $ARG

ARG=$(seq 500 | shuf | tr '\n' ' '); ./push_swap ${ARG} | wc -l
