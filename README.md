# C - Sorting algorithms & Big O

<h1 align="center"><img src="https://i.imgur.com/W3wtc8D.jpg"><br>Sorting algorithms<br>& Big O Notation</h1>

In computer science, a sorting algorithm is an algorithm that puts elements of a list into an order. The most frequently used orders are numerical order and lexicographical order, and either ascending or descending. Efficient sorting is important for optimizing the efficiency of other algorithms that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output.

## More Info

### Data Structure and Functions

* For this project you are given the following  ` print_array ` , and  ` print_list `  functions:

```bash
#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;
    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```bash
#include <stdio.h>
#include "sort.h"
/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;
    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

* Files  ` print_array.c `  and  ` print_list.c `  (containing the  ` print_array `  and  ` print_list `  functions) will be compiled with your functions during the correction.
* Please declare the prototype of the functions  ` print_array `  and  ` print_list `  in your  ` sort.h `  header file
* Please use the following data structure for doubly linked list:

```bash
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

Please, note this format is used for Quiz and Task questions

*  ` O(1) ` 
*  ` O(n) ` 
*  ` O(n!) ` 
* n square ->  ` O(n^2) ` 
* log(n) ->  ` O(log(n)) ` 
* n * log(n) ->  ` O(nlog(n)) ` 
* n + k ->  ` O(n+k) ` 
* …

## How to compile :hammer_and_wrench:
`gcc -Wall -Wextra -Werror -pedantic <files> -o <output_executable_name>`

## How to run :gear:
`./<output_executable_name>`

## Files :scroll:
All of the following files are programs written in C :

|**Filename**|**Description**|
|:-------|:---------:|
