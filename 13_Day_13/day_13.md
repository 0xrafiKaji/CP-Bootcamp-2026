---
export_on_save:
  puppeteer: true

puppeteer:
  displayHeaderFooter: true

  headerTemplate: "<div style='font-size: 9px; width: 100%; padding: 0 1.8cm; box-sizing: border-box;'>Created by Rafi (261071044)</div>"

  footerTemplate: "<div style='font-size: 9px; width: 100%; padding: 0 1.8cm; box-sizing: border-box; text-align: right;'><span class='pageNumber'></span> / <span class='totalPages'></span></div>"

  margin:
    top: "2cm"
    right: "1.8cm"
    bottom: "1.8cm"
    left: "1.8cm"
---

# 🚀 CP Bootcamp 2026 - Day 13

# Theme: Trees + Binary Search Tree Foundation

> **Main Goal:**
> আজ থেকে তুমি linear data structure থেকে **hierarchical data structure**-এ যাবে।

এতদিন:

```text
Array

[1][2][3][4]
```

```text
Linked List

1 → 2 → 3
```

আজ:

```text
Tree

        1
       / \
      2   3
```

---

আজকের focus:

```text
Tree Structure
↓
Node Relationship
↓
Tree Traversal
↓
Binary Tree
↓
Binary Search Tree
```

**Estimated Time:** 6–7 hours

---

# 📖 Day 13 Chapter Map

```text
Day 13
│
├── Chapter 1 - Tree Mental Model
│
├── Chapter 2 - Tree Terminology
│
├── Chapter 3 - Binary Tree Concept
│
├── Chapter 4 - Tree Traversal (DFS)
│
├── Chapter 5 - Level Order Traversal (BFS)
│
├── Chapter 6 - Binary Search Tree (BST)
│
├── Chapter 7 - BST Operations
│
├── Chapter 8 - Tree Problem Patterns
│
├── Chapter 9 - Common Bugs & Edge Cases
│
└── Chapter 10 - Day 13 Assignment & Practice
```

---

# Chapter 1 - Tree Mental Model

## Tree কী?

Tree হলো:

> একটি hierarchical data structure যেখানে node-গুলো parent-child relationship দিয়ে connected থাকে।

Example:

```text
        A
       / \
      B   C
     / \
    D   E
```

এখানে:

```text
A → Parent

B,C → Children

D,E → Grandchildren
```

---

# Real Life Example

Folder structure:

```text
Computer

├── Documents

│     ├── File1

│     └── File2


└── Pictures
```

এটাও একটি tree।

---

# Tree vs Linked List

Linked List:

```text
10 → 20 → 30
```

একটা direction।

Tree:

```text
        10

      /    \

     20     30
```

একটি node থেকে multiple child যেতে পারে।

---

# Chapter 2 - Tree Terminology

Tree বুঝতে কিছু শব্দ জানা দরকার।

---

# Node

Tree-এর প্রতিটি element।

Example:

```text
       10

       ↑

      Node
```

---

# Root

সবচেয়ে উপরের node।

Example:

```text
        1
       / \
      2   3
```

Root:

```text
1
```

---

# Parent

যে node-এর নিচে child আছে।

Example:

```text
        1
       /
      2
```

1 হলো:

```text
Parent
```

---

# Child

যে node parent-এর নিচে থাকে।

2 হলো:

```text
Child
```

---

# Leaf Node

যার কোনো child নেই।

Example:

```text
        1
       / \
      2   3
```

Leaf:

```text
2

3
```

---

# Edge

দুই node-এর connection।

Example:

```text
1 -- 2
```

এখানে edge:

```text
1-2
```

---

# Height

Root থেকে সবচেয়ে দূরের leaf পর্যন্ত distance।

Example:

```text
        1
       /
      2
     /
    3
```

Height:

```text
2
```

---

# Depth

একটি node root থেকে কত দূরে।

Example:

```text
        1
       /
      2
```

2-এর depth:

```text
1
```

---

# Chapter 3 - Binary Tree Concept

## Binary Tree কী?

যে tree-এর প্রতিটি node-এর maximum দুইটি child থাকে।

Child:

```text
Left

Right
```

Example:

```text
        10

       /  \

      5    20
```

---

Node Structure in C:

```c
struct Node
{
    int data;

    struct Node *left;

    struct Node *right;
};
```

---

একটি node:

```text
        data

          |

    left pointer

          |

    right pointer
```

---

# Create Node

```c
struct Node* createNode(int value)
{
    struct Node* newNode;

    newNode = malloc(sizeof(struct Node));


    newNode->data=value;

    newNode->left=NULL;

    newNode->right=NULL;


    return newNode;
}
```

---

# Creating Tree Manually

Example:

```text
        1

       / \

      2   3
```

Code:

```c
root=createNode(1);

root->left=createNode(2);

root->right=createNode(3);
```

---

# Chapter 4 - Tree Traversal (DFS)

Tree-এর সব node visit করার process:

```text
Traversal
```

DFS:

```text
Depth First Search
```

মানে:

আগে গভীরে যাওয়া।

---

DFS-এর তিনটি main type:

```text
1. Preorder

2. Inorder

3. Postorder
```

---

Tree:

```text
        1

       / \

      2   3
```

---

# 1. Preorder

Order:

```text
Root

Left

Right
```

Shortcut:

```text
NLR
```

Output:

```text
1 2 3
```

---

Code:

```c
void preorder(struct Node* root)
{
    if(root==NULL)
        return;


    printf("%d ",root->data);


    preorder(root->left);


    preorder(root->right);
}
```

---

# 2. Inorder

Order:

```text
Left

Root

Right
```

Shortcut:

```text
LNR
```

Output:

```text
2 1 3
```

---

Code:

```c
void inorder(struct Node* root)
{
    if(root==NULL)
        return;


    inorder(root->left);


    printf("%d ",root->data);


    inorder(root->right);
}
```

---

# 3. Postorder

Order:

```text
Left

Right

Root
```

Shortcut:

```text
LRN
```

Output:

```text
2 3 1
```

---

Code:

```c
void postorder(struct Node* root)
{
    if(root==NULL)
        return;


    postorder(root->left);


    postorder(root->right);


    printf("%d ",root->data);
}
```

---

# Traversal Memory Trick

Tree:

```text
        A

       / \

      B   C
```

## Preorder

আগে root:

```text
A B C
```

## Inorder

Root মাঝখানে:

```text
B A C
```

## Postorder

শেষে root:

```text
B C A
```

---

# Chapter 5 - Level Order Traversal (BFS)

DFS:

```text
Depth first
```

BFS:

```text
Level first
```

---

Example:

```text
          1

       /     \

      2       3

    /   \

   4     5
```

Level order:

```text
1 2 3 4 5
```

---

BFS uses:

```text
Queue
```

কারণ:

First node আগে process হবে।

---

Algorithm:

```text
Push root

↓

While queue not empty

↓

Remove front

↓

Add children
```

---

Pseudo:

```text
queue.push(root)

while queue not empty:

    node = queue.pop()

    print node

    push left child

    push right child
```

---

# Chapter 6 - Binary Search Tree (BST)

## BST কী?

Binary Tree-এর special type।

Rule:

For every node:

```text
Left side

<

Root

<

Right side
```

---

Example:

```text
          8

       /     \

      3       10

    /   \        \

   1     6        14
```

Check:

Left:

```text
3 < 8
```

Right:

```text
10 > 8
```

Correct BST।

---

# Why BST?

Search faster করার জন্য।

Normal Binary Tree:

Need:

```text
O(n)
```

BST:

Average:

```text
O(log n)
```

---

# Chapter 7 - BST Operations

## 1. Search

Example:

Find:

```text
6
```

Tree:

```text
        8

       / \

      3   10

       \

        6
```

Start:

8

Compare:

```text
6 < 8
```

Go left।

3:

```text
6 > 3
```

Go right।

Found:

6

---

Code:

```c
struct Node* search(struct Node* root,int target)
{
    if(root==NULL || root->data==target)
        return root;


    if(target < root->data)
        return search(root->left,target);


    return search(root->right,target);
}
```

---

# 2. Insert

Rule:

Same as search.

Example:

Insert:

```text
7
```

Find correct position।

---

Code:

```c
struct Node* insert(struct Node* root,int value)
{
    if(root==NULL)
        return createNode(value);


    if(value < root->data)
        root->left=insert(root->left,value);


    else
        root->right=insert(root->right,value);


    return root;
}
```

---

# 3. Minimum Value

BST-তে:

সবচেয়ে ছোট value:

```text
সবচেয়ে বাম পাশে
```

Example:

```text
        8

       /

      3

     /

    1
```

Minimum:

```text
1
```

---

Code:

```c
int minimum(struct Node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }

    return root->data;
}
```

---

# Chapter 8 - Tree Problem Patterns

---

# Pattern 1 - Traversal

Problem:

"Visit all nodes"

Think:

```text
DFS/BFS
```

---

# Pattern 2 - Height

Need:

```text
Maximum depth
```

Pattern:

```text
Recursive
+
Max(left,right)
```

---

Formula:

```text
height(node)

=

1 + max(left,height,right,height)
```

---

# Pattern 3 - Search

BST হলে:

```text
Compare

Move Left/Right
```

---

# Pattern 4 - Level Problems

Example:

"Print nodes level by level"

Think:

```text
Queue + BFS
```

---

# Chapter 9 - Common Bugs & Edge Cases

---

# Bug 1 - Empty Tree

Always check:

```c
if(root==NULL)
```

---

# Bug 2 - Wrong Traversal Order

Confuse:

```text
Preorder

Inorder

Postorder
```

---

# Bug 3 - BST Rule Break

Wrong:

```text
        5

       /

      8
```

Left child বড়।

BST না।

---

# Bug 4 - Forget Return in Recursive Function

Wrong:

```c
insert(root->left,value);
```

Need:

```c
root->left=insert(root->left,value);
```

---

# Bug 5 - Unbalanced BST

Example:

Insert:

```text
1
2
3
4
5
```

Tree:

```text
1

 \

 2

  \

   3
```

Linked list-এর মতো হয়ে যায়।

Complexity:

```text
O(n)
```

---

# Chapter 10 - Day 13 Assignment

## Part A - Binary Tree

Implement:

```text
1. Create Node

2. Preorder traversal

3. Inorder traversal

4. Postorder traversal

5. Count nodes

6. Find height
```

---

# Part B - BST

Implement:

```text
1. Insert

2. Search

3. Find minimum

4. Find maximum

5. Inorder traversal
```

---

# Part C - Dry Run

Tree:

```text
        10

       /  \

      5    15

     /

    3
```

Find:

```text
Preorder:

Inorder:

Postorder:

Height:
```

---

# Part D - Pattern Recognition

Problem:

> Level by level print করতে হবে।

Pattern:

```
?
```

---

Problem:

> Sorted order-এ BST values print করতে হবে।

Pattern:

```
?
```

---

Problem:

> Middle node of linked list.

Pattern:

```
?
```

---

# 📚 Glossary Update

Add:

```text
Tree

Node

Root

Parent

Child

Leaf

Edge

Height

Depth

Binary Tree

Traversal

DFS

BFS

Preorder

Inorder

Postorder

Binary Search Tree

BST

Balanced Tree
```

---

# 📚 Pattern Library Update

Add:

```md
## Tree Traversal Pattern

Recognition:

Need to visit all tree nodes.


DFS:

Recursion


BFS:

Queue


Types:

Preorder

Inorder

Postorder
```

---

```md
## BST Search Pattern

Recognition:

Data follows:

Left < Root < Right


Mental Model:

Compare

↓

Move Left/Right

↓

Repeat
```

---

# ✅ Day 13 Completion Checklist

```text
[ ] Tree concept বুঝি

[ ] Node relationship বুঝি

[ ] Root/Leaf বুঝি

[ ] Binary Tree বুঝি

[ ] DFS traversal লিখতে পারি

[ ] Preorder বুঝি

[ ] Inorder বুঝি

[ ] Postorder বুঝি

[ ] BFS বুঝি

[ ] Queue দিয়ে level order করতে পারি

[ ] BST rule বুঝি

[ ] BST insert করতে পারি

[ ] BST search করতে পারি

[ ] Tree height বের করতে পারি
```

---

# 🏁 Day 13 Final Mental Model

```text
Problem

↓

Need hierarchy?

↓

Tree

↓

Need visit all?

↓

Traversal

↓

Need fast search?

↓

BST

↓

Need level processing?

↓

Queue + BFS
```

---

Day 13 শেষে তোমার foundation:

```text
Day 1-5
Patterns

+

Day 6
Functions

+

Day 7
Searching

+

Day 8
Sorting

+

Day 9
Optimization

+

Day 10
Recursion

+

Day 11
Stack Queue

+

Day 12
Linked List Hashing

+

Day 13
Trees
```

পরের:

**Day 14 - Graph Foundation + BFS/DFS** হবে। 🌐