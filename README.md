# push_swap_42

ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_linux $ARG

ARG=$(seq 500 | shuf | tr '\n' ' '); ./push_swap ${ARG} | wc -l
