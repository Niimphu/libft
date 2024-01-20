# libft | 125/100
## Overview
libft is the first project one encounters in the Common Core at 42. The project aims to equip the student with a library of functions that they have written themselves which will help them navigate the core projects' tight limitations on external function usage. In doing so, the project teaches the student about how some of the standard library functions work, how they could be implemented, and how they can be used effectively.

## Concepts
The coding concepts covered in libft are mostly covered by the 42 Piscine already. However, depending on the student's progress in the Piscine, they may encounter many new concepts in libft. Some of the key concepts covered in libft are:
### Types: characters and ascii
Characters in C can also be accessed on the [ascii table](https://en.cppreference.com/w/c/language/ascii), ranging from 0-127, each one representing a single character.
### Pointers and memory
Memory is where the program stores information that it is using, such as variables. The address of the memory in which a variable is stored can be obtained by referencing (using the ampersand `&`) the variable. A pointer (denoted by the asterisk `*`) is a variable which stores the address of another variable as its value.
```
char  c = 'x';
char* ptr = &c;
char  out = *ptr;

// ptr holds the address of the variable c as a hexadecimal, and would look something like 0x7ffe5367e044
// out deferences this address, and finds the value held at that address, which would be the character 'x'
```
### String manipulation
In C, strings are just arrays of characters. They can be iterated through, and individual characters can be accessed with an index.
```
char *string = "Hello";
char c = string[1];

// the character c would be 'e', the character at index 1 (or the second letter) of the string "Hello"
```
### Allocating and freeing memory
When programming, memory used by variables may be referred to as stack memory and heap memory. Stack memory is memory used for variables in the local scope of a function, and persists for the lifetime of that function. Heap memory is used for variables that might need to outlive the function it is created in, and must have their memory allocated using `malloc()`. Memory allocated in this way should be de-allocated with `free()` to prevent memory leaks at the end of the program.
### Linked lists and structs
Structs are data types that can group multiple variables together and store them in a single structure, hence the name struct. Using structs, we can create a linked list, where nodes of structs can be created, and each node contains a "next" variable that can point to another node of the same type, linking them together in a list.
```
typedef struct s_list
{
  void    *content;
  t_list  *next;
}         t_list;
```
<table>
  <tr>
    <th>Node</th>
    <th>Content</th>
    <th>Next</th>
  </tr>
  <tr>
    <td>Node 1</td>
    <td>"Hello"</td>
    <td>2</td>
  </tr>
  <tr>
    <td>Node 2</td>
    <td>"World"</td>
    <td>3</td>
  </tr>
  <tr>
    <td>Node 3</td>
    <td>"!"</td>
    <td>NULL</td>
  </tr>
</table>
In this table, we see a linked list that holds three strings.

We can iterate through our linked list like this:

```
t_list  *node;

node = list;
while (node)
{
  // some actions
  node = node->next;
}
```

## Thoughts
As I only made it to C04 in the Piscine, I found that there were many new topics in libft for me, and some of them were quite challenging to jump into as someone new to programming. ALthough this project took me a while, it was a good way to refresh the basics of coding, and I was happy that I was able to finish the bonus part that involved linked lists.


