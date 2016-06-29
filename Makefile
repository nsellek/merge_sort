
all: generate merge_sort


generate: generate.c
	gcc -o generate generate.c

merge_sort: merge_sort.c
	gcc -o merge_sort merge_sort.c
