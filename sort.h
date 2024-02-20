#ifndef SORT_H
#define SORT_H
	
#include <stdio.h>
#include <stdlib.h>

/**
 * compairing macros for bitoonic sort
 *
 * description:
 */
#define UP 0
#define DOWN 1

/**
 * enum bool - enumaration of boolean values.
 * @false: is equal to 0
 * @true : is equal to 1
 */
typedef enum bool
{
	false = 0;
	true
} bool;



void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);



#endi
