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

My implementation uses two different sorting algorithms based on the size of the input:
- For small inputs (2 to 5 elements), it uses a simple sorting algorithm with hardcoded sequences of operations.
- For larger inputs (more than 5 elements), it employs a more complex algorithm, such as a radix sort or a quicksort variant adapted for the constraints of the push_swap project.

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
- They were specifically used to:
- Clarify the project requirements and evaluation criteria
- Help understand algorithmic strategies commonly used for push_swap
- Assist in reasoning about program flow, data structures, and edge cases
All code was written manually, tested, and debugged by me without direct code generation from AI.