# C Queue Data Structures Implementation

A complete collection of menu-driven C implementations for **Linear Queue** and **Circular Queue** data structures using both arrays and singly linked lists.

## Programs Included

### 1. Circular Queue using Linked List (`CIRLIST.C`)
* Implements a menu-driven circular queue using dynamic memory allocation (`malloc` and `free`)[cite: 11].
* Maintains the circular connection by pointing `rear->next` back to `front`[cite: 11].

### 2. Circular Queue using Array (`CIRQUEAR.C`)
* Implements a circular queue with a fixed-size array (`q[100]`)[cite: 12].
* Uses modulo arithmetic `(index + 1) % size` to manage ring-buffer index wrapping for enqueue and dequeue operations[cite: 12].

### 3. Linear Queue using Linked List (`list.c` / `QUEUEUSI.C`)
* Implements a standard First-In-First-Out (FIFO) queue using dynamic linked list nodes[cite: 13, 15].
* Includes modular function implementations for `enqueue()`, `dequeue()`, and `display()`[cite: 13].

### 4. Linear Queue using Array (`QUEUEARR.C`)
* Implements a standard linear queue structure using a contiguous memory array[cite: 14].
* Tracks `front` and `rear` pointer indices to handle insertion and deletion[cite: 14].

---

## Technical Note
These programs use legacy Turbo C / MS-DOS headers (`<conio.h>`, `clrscr()`, `getch()`)[cite: 11, 12, 13, 14, 15]. If compiling with modern compilers like **GCC**:
* Replace `void main()` with `int main()`[cite: 11, 12, 13, 14, 15]
* Remove `clrscr()` and `getch()`[cite: 11, 12, 13, 14, 15]
