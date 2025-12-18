# 🌳 Binary Trees Project

> *"In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child."* - The Foundation of Data Structure Mastery

## 👥 Authors

**Aljawharah** & **Manar**  
*Binary Tree Champions* 

---

## 📋 Table of Contents

- [Project Overview](#project-overview)
- [File Structure](#file-structure)
- [Compilation & Usage](#compilation--usage)
- [Data Structures](#data-structures)
- [Function Reference](#function-reference)
- [Examples](#examples)
- [Style Compliance](#style-compliance)
- [Educational Purpose](#educational-purpose)

---

## 🎯 Project Overview

Welcome to our **Binary Trees Implementation** project! This collection of C functions demonstrates a complete binary tree data structure implementation, covering everything from basic node creation to advanced tree analysis operations.

### What is a Binary Tree?

A binary tree is a hierarchical data structure where each node has at most two children - a left child and a right child. Think of it as a family tree where everyone can have at most two kids! 🌳

**Why Binary Trees Matter:**
- Foundation for more complex data structures (BSTs, AVL trees, etc.)
- Efficient searching, insertion, and deletion operations
- Basis for algorithms like heap sort, expression trees, and decision trees
- Essential knowledge for technical interviews and real-world programming

---

## 📁 File Structure

```
binary-trees/
├── 🌱 Core Structure
│   ├── 0-binary_tree_node.c      # Node creation
│   ├── 1-binary_tree_insert_left.c   # Left insertion
│   ├── 2-binary_tree_insert_right.c  # Right insertion
│   └── 3-binary_tree_delete.c    # Tree deletion
│
├── 🔍 Tree Analysis
│   ├── 4-binary_tree_is_leaf.c   # Leaf detection
│   ├── 5-binary_tree_is_root.c   # Root detection
│   ├── 9-binary_tree_height.c    # Height calculation
│   ├── 10-binary_tree_depth.c    # Depth calculation
│   ├── 11-binary_tree_size.c     # Size calculation
│   ├── 12-binary_tree_leaves.c   # Leaf counting
│   ├── 13-binary_tree_nodes.c    # Node counting
│   ├── 14-binary_tree_balance.c  # Balance factor
│   ├── 15-binary_tree_is_full.c  # Full tree check
│   ├── 16-binary_tree_is_perfect.c # Perfect tree check
│   ├── 17-binary_tree_sibling.c  # Sibling finding
│   └── 18-binary_tree_uncle.c    # Uncle finding
│
├── 🚶 Traversal Methods
│   ├── 6-binary_tree_preorder.c  # Pre-order traversal
│   ├── 7-binary_tree_inorder.c   # In-order traversal
│   └── 8-binary_tree_postorder.c # Post-order traversal
│
└── 📚 Headers & Documentation
    ├── binary_trees.h            # Function prototypes
    └── README.md                 # This masterpiece!
```

---

## ⚡ Compilation & Usage

### Requirements
- **Operating System:** Ubuntu 20.04 LTS
- **Compiler:** GCC (GNU Compiler Collection)
- **Standard:** C89/GNU89

### Compilation Command
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree_program
```

### Usage Example
```c
#include "binary_trees.h"

int main(void) {
    /* Create root node */
    binary_tree_t *root = binary_tree_node(NULL, 'A');
    
    /* Build tree structure */
    binary_tree_insert_left(root, 'B');
    binary_tree_insert_right(root, 'C');
    
    /* Traverse and analyze */
    binary_tree_preorder(root, NULL);
    
    /* Clean up */
    binary_tree_delete(root);
    
    return (0);
}
```

---

## 🏗️ Data Structures

### Binary Tree Node Structure
```c
typedef struct binary_tree_s
{
    int n;                          /* Integer value stored in node */
    struct binary_tree_s *parent;   /* Pointer to parent node */
    struct binary_tree_s *left;     /* Pointer to left child */
    struct binary_tree_s *right;    /* Pointer to right child */
} binary_tree_t;
```

**Structure Breakdown:**
- **n:** The value stored in the node
- **parent:** Links to the parent node (for bidirectional navigation)
- **left:** Pointer to the left child (can be NULL)
- **right:** Pointer to the right child (can be NULL)

### Tree Properties
- **Height:** Longest path from root to leaf
- **Depth:** Distance from root to specific node
- **Size:** Total number of nodes in the tree
- **Leaf:** Node with no children
- **Full Tree:** Every node has 0 or 2 children
- **Perfect Tree:** All levels are completely filled

---

## 🔧 Function Reference

### 🌱 Node Management Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `binary_tree_node` | Creates a new binary tree node | O(1) |
| `binary_tree_insert_left` | Inserts node as left child | O(1) |
| `binary_tree_insert_right` | Inserts node as right child | O(1) |
| `binary_tree_delete` | Deletes entire tree recursively | O(n) |

### 🔍 Tree Analysis Functions

| Function | Description | Complexity |
|----------|-------------|------------|
| `binary_tree_is_leaf` | Checks if node is a leaf | O(1) |
| `binary_tree_is_root` | Checks if node is root | O(1) |
| `binary_tree_height` | Calculates tree height | O(n) |
| `binary_tree_depth` | Calculates node depth | O(h) |
| `binary_tree_size` | Counts total nodes | O(n) |
| `binary_tree_leaves` | Counts leaf nodes | O(n) |
| `binary_tree_nodes` | Counts nodes with ≥1 child | O(n) |
| `binary_tree_balance` | Calculates balance factor | O(n) |
| `binary_tree_is_full` | Checks if tree is full | O(n) |
| `binary_tree_is_perfect` | Checks if tree is perfect | O(n) |
| `binary_tree_sibling` | Finds node's sibling | O(1) |
| `binary_tree_uncle` | Finds node's uncle | O(h) |

### 🚶 Traversal Functions

| Function | Description | Order |
|----------|-------------|-------|
| `binary_tree_preorder` | Root → Left → Right | Pre-order |
| `binary_tree_inorder` | Left → Root → Right | In-order |
| `binary_tree_postorder` | Left → Right → Root | Post-order |

---

## 💡 Examples

### Building a Simple Tree
```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root, *left, *right;

    /* Create root */
    root = binary_tree_node(NULL, 1);
    
    /* Build left subtree */
    left = binary_tree_insert_left(root, 2);
    binary_tree_insert_left(left, 4);
    binary_tree_insert_right(left, 5);
    
    /* Build right subtree */
    right = binary_tree_insert_right(root, 3);
    binary_tree_insert_left(right, 6);
    binary_tree_insert_right(right, 7);
    
    /* Visual representation:
         1
        / \
       2   3
      / \ / \
     4  5 6  7
    */
    
    printf("Tree height: %zu

", binary_tree_height(root));
    printf("Tree size: %zu

", binary_tree_size(root));
    printf("Number of leaves: %zu

", binary_tree_leaves(root));
    printf("Is full tree: %d

", binary_tree_is_full(root));
    printf("Is perfect tree: %d

", binary_tree_is_perfect(root));
    
    binary_tree_delete(root);
    return (0);
}
```

### Expected Output
```
Tree height: 2
Tree size: 7
Number of leaves: 4
Is full tree: 1
Is perfect tree: 1
```

### Traversal Example
```c
void print_node(binary_tree_t *node, void (*func)(int))
{
    func(node->n);
}

/* In main function: */
printf("Pre-order: ");
binary_tree_preorder(root, print_node);  /* 1 2 4 5 3 6 7 */

printf("

In-order: ");
binary_tree_inorder(root, print_node);   /* 4 2 5 1 6 3 7 */

printf("

Post-order: ");
binary_tree_postorder(root, print_node); /* 4 5 2 6 7 3 1 */
```

---

## 📏 Style Compliance

### Betty Style Guidelines
This project strictly follows **Betty style guidelines** for C programming

---

## 🎓 Educational Purpose

This project is designed for **educational purposes** as part of the Holberton School curriculum. It demonstrates:

### Learning Objectives Achieved
- ✅ **Data Structure Implementation:** Building binary trees from scratch
- ✅ **Memory Management:** Dynamic allocation and deallocation
- ✅ **Recursive Algorithms:** Tree traversals and analysis
- ✅ **Pointer Manipulation:** Complex pointer relationships
- ✅ **Code Organization:** Header files and modular design
- ✅ **Testing & Debugging:** Comprehensive function testing
- ✅ **Style Guidelines:** Professional coding standards

### Skills Developed
- **Algorithmic Thinking:** Understanding tree-based algorithms
- **Problem Solving:** Breaking complex problems into manageable functions
- **Code Quality:** Writing clean, readable, and maintainable code
- **Debugging Skills:** Identifying and fixing pointer-related issues
- **Performance Analysis:** Understanding time and space complexity

---

## 📜 License

This project is created for **educational purposes** as part of the Holberton School curriculum. Use it responsibly to enhance your understanding of binary trees and C programming.

---

**Happy Coding! 🚀**  
*"The best way to learn data structures is to implement them!"* - Two wise holbies  

---

*Last Updated: December 19, 2025*  
*Holberton School - Low-Level Programming*
