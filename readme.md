# 📌 C Pointer Basics — Demo Program

This simple C program demonstrates the fundamentals of **pointers** in C, including dynamic memory allocation, dereferencing, and pointer reassignment. It's designed as a hands-on introduction for beginners exploring how pointers interact with memory.

---

## 🧠 What This Program Shows

- **Declaring a pointer**: creates a pointer to an integer.
```c
int *z;
```

- **Allocating memory**: reserves space for one integer on the heap.
```c
malloc(sizeof(int))
```

- **Dereferencing**: stores a value in the memory pointed to by `z`.
```c
*z = x;
```

- **Pointer reassignment**: makes the pointer refer to a different variable.
```c
z = &x;
```

- **Reading through a pointer**: accesses the value stored at the pointer’s address.
```c
*z
```

---