*This project has been created as part of the 42 curriculum by tamamart.*

# push_swap

## Description

`push_swap` is an algorithmic project from the 42 curriculum whose goal is to sort a stack of integers using a limited set of operations and an auxiliary stack.

The program takes a list of integers as input, stores them in a stack (stack A), and outputs a sequence of instructions that will sort the stack in ascending order. Only a predefined set of operations is allowed, and the challenge lies in producing a correct and efficient sequence of moves.

This project focuses on:
- Algorithmic thinking
- Data structure manipulation
- Parsing and error handling
- Memory management in C

---

My implementation uses two different sorting strategies depending on the size of the input:

- For small inputs (2 to 5 elements), it uses dedicated sorting routines with predefined sequences of operations.
- For larger inputs (more than 5 elements), it applies an index-based sorting strategy that progressively moves elements between two stacks according to their relative order.

To simplify comparisons and avoid dealing with large or negative values directly, an indexing technique is used. Each input number is mapped to an index representing its position in the sorted order. These indices remain constant throughout the execution and are used to guide all sorting decisions.

The stack is implemented as a doubly linked list, where each node contains both the original value and its assigned index:

```c
typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
    struct s_stack  *prev;
}   t_stack;
```

Here, value stores the original integer, index represents its relative order once sorted, and next and prev allow bidirectional traversal of the stack.

### Program Flow and Index Usage
1. **Input Parsing and Validation**: The program validates all arguments, checking for non-numeric values, duplicates, and integer overflows. If an error is detected, the program prints Error and exits cleanly.

2. **Stack creation**: All valid integers are stored in stack A as nodes of the stack structure, with their indices initially unset.

3. **Index Assignment**: Once the stack is created, each element is assigned an index based on its position in the sorted order. The smallest value receives index 0, the next smallest index 1, and so on.

4. **Sorting Strategy**:
   - For small stacks (2-5 elements): If the stack contains a small number of elements, a specific small-sort routine is applied.
   - For larger stacks (>5 elements): The program uses an index-based sorting algorithm that efficiently sorts the stack using the allowed operations. Elements are progressively moved from stack A to stack B based on their indices, effectively separating the data into manageable groups.

5. **Reconstruction of the sorted stack**: After stack A has been reduced, elements are moved back from stack B to stack A in the correct order, resulting in a fully sorted stack.

---

## Operations

There are two stacks involved: stack A and stack B. The allowed operations are as follows:
At the beginning, all integers are in stack A, and stack B is empty, and the goal is to sort stack A in ascending order. For that, you can use the following allowed operations:

| Operation      | Description                                      |
|----------------|--------------------------------------------------|
| sa             | Swap the first 2 elements at the top of stack a. |
| sb             | Swap the first 2 elements at the top of stack b. |
| ss             | sa and sb at the same time.                      |
| pa             | Take the first element at the top of b and put it at the top of a. |
| pb             | Take the first element at the top of a and put it at the top of b. |
| ra             | Shift up all elements of stack a by 1.            |
| rb             | Shift up all elements of stack b by 1.            |
| rr             | ra and rb at the same time.                      |
| rra            | Shift down all elements of stack a by 1.          |
| rrb            | Shift down all elements of stack b by 1.          |
| rrr            | rra and rrb at the same time.                    |


## Instructions

### Compilation

To compile the project, run:

```bash
make
```
This will generate the executable push_swap.

Available Makefile rules:

```bash
make         # Compiles the project
make clean   # Removes object files
make fclean  # Removes object files and the push_swap executable
make re      # Recompiles the project from scratch
```

### Execution

To run the program, use the following command:

```bash
./push_swap [list of integers]
```
For example:

```bash
./push_swap 3 2 5 1 4
```

The program will output a list of operations (one per line) that sorts the stack.
To verify the correctness of the output, you can use the official checker provided by 42:
```bash
./push_swap 3 2 1 | ./checker_linux 3 2 1
```
If the result is correct, the checker will display:
```bash 
OK
```
If the result is incorrect, it will display:
```bash
KO
```

## Error Handling
The program handles the following errors:
- Non-integer inputs
- Duplicate integers
- Integers out of the 32-bit signed integer range
- Invalid input format

If the input is already sorted or contains fewer than two numbers, the program produces no output.

## Resources

- [42 Push_Swap Subject](https://cdn.intra.42.fr/pdf/pdf/189088/en.subject.pdf)
- [Push_Swap Medium Article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [My own libft implementation](https://github.com/maramartinezvargas/libft)

## Use of Artificial Intelligence

AI tools (ChatGPT) were used as a learning aid during the development of this project.
They were specifically used to:
- Clarify the project requirements and evaluation criteria
- Help understand algorithmic strategies commonly used for push_swap
- Assist in reasoning about program flow, data structures, and edge cases