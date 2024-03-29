#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - node of a doubly linked list
 *
 * @n: Integer
 * @prev: Pointer
 * @next: Pointer
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void radix_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif
