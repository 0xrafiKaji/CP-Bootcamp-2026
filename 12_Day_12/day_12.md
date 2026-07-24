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

# 🚀 CP Bootcamp 2026 - Day 12

# Theme: Linked List + Hashing Foundation

> **Main Goal:**
> আজকে তুমি দুইটা important concept শিখবে:

1. **Linked List** → Data কীভাবে dynamically store করা যায়
2. **Hashing** → Fast lookup কীভাবে করা যায়

এতদিন:

```text id="5w3f5p"
Array
↓
Fixed Memory
```

আজ:

```text id="q1h8v7"
Dynamic Memory
↓
Connected Nodes
```

এবং:

```text id="h3l4op"
Search O(n)

↓

Hashing

↓

Average O(1)
```

---

**Estimated Time:** 6–7 hours

---

# 📖 Day 12 Chapter Map

```text id="jv5q2w"
Day 12
│
├── Chapter 1 - Linked List Mental Model
│
├── Chapter 2 - Node & Pointer Concept
│
├── Chapter 3 - Singly Linked List Implementation
│
├── Chapter 4 - Linked List Operations
│
├── Chapter 5 - Linked List Problem Patterns
│
├── Chapter 6 - Hashing Mental Model
│
├── Chapter 7 - Hash Table & Hash Function
│
├── Chapter 8 - Frequency Counting Pattern
│
├── Chapter 9 - Hashing Applications in CP
│
└── Chapter 10 - Day 12 Assignment & Practice
```

---

# Chapter 1 - Linked List Mental Model

## Array Problem

Array:

```c
int arr[100];
```

Memory:

```text
id="y4gq2e"
[10][20][30][40]
```

সব element পাশাপাশি থাকে।

---

Problem:

যদি মাঝখানে নতুন element insert করতে হয়:

```text
10 20 30 40
```

Insert:

```text
25
```

Need:

```text
10 20 25 30 40
```

অনেক element shift করতে হবে।

---

Linked List এই সমস্যা solve করে।

---

# Linked List কী?

Linked List হলো:

> অনেকগুলো node যেখানে প্রতিটি node পরের node-এর address রাখে।

Structure:

```text
id="m1m8x7"
[10 | next]
       |
       ↓
[20 | next]
       |
       ↓
[30 | next]
       |
       ↓
NULL
```

---

একটা node:

```text
id="8qv6k1"
Data

+

Next Address
```

---

# Array vs Linked List

| Array             | Linked List     |
| ----------------- | --------------- |
| Continuous memory | Random memory   |
| Fixed size        | Dynamic size    |
| Fast indexing     | Slow indexing   |
| Insert costly     | Insert easier   |
| arr[i] possible   | No direct index |

---

# Chapter 2 - Node & Pointer Concept

Linked List বুঝতে Pointer দরকার।

---

## Pointer কী?

Pointer হলো:

> একটি variable যেটা অন্য variable-এর address রাখে।

Example:

```c
int x = 10;

int *ptr = &x;
```

Meaning:

```text
ptr
 ↓
x
```

---

# Node Structure in C

Linked List-এর node:

```c
struct Node
{
    int data;

    struct Node *next;
};
```

---

Meaning:

একটা node-এর:

```text
data

+
next pointer
```

আছে।

---

Example:

```text
id="l6m9nw"
Node

data = 10

next = address of next node
```

---

# Creating Node

```c
struct Node *newNode;

newNode = malloc(sizeof(struct Node));
```

Memory:

```text
Heap
 ↓

[ data | next ]
```

---

# Chapter 3 - Singly Linked List Implementation

Singly Linked List:

একদিকে link:

```text
id="f2yq0w"
10 → 20 → 30 → NULL
```

---

# Create Node Function

```c
struct Node* createNode(int value)
{
    struct Node* newNode;

    newNode = malloc(sizeof(struct Node));


    newNode->data = value;

    newNode->next = NULL;


    return newNode;
}
```

---

# Linking Nodes

Example:

```c
node1->next = node2;
```

Result:

```text
id="0q7x2h"
node1

  ↓

node2
```

---

# Full Structure

```text
head

↓

[10|next]

↓

[20|next]

↓

[30|NULL]
```

---

# Head কী?

Head হলো:

> প্রথম node-এর address।

Example:

```c
struct Node *head;
```

---

Empty list:

```c
head = NULL;
```

---

# Chapter 4 - Linked List Operations

---

# 1. Traversal

Array:

```c
for(i=0;i<n;i++)
```

Linked List:

Pointer দিয়ে move করতে হয়।

---

Example:

```c
struct Node *temp=head;


while(temp!=NULL)
{
    printf("%d ",temp->data);

    temp=temp->next;
}
```

---

Flow:

```text
head

↓

10

↓

20

↓

30

↓

NULL
```

---

# 2. Insert at Beginning

Before:

```text
10 → 20 → 30
```

Insert:

```text
5
```

Step:

New node:

```text
5
```

Connect:

```text
5 → 10 → 20 → 30
```

---

Code:

```c
newNode->next=head;

head=newNode;
```

---

# 3. Insert at End

Need:

শেষ পর্যন্ত যেতে হবে।

```c
temp=head;


while(temp->next!=NULL)
{
    temp=temp->next;
}
```

Then:

```c
temp->next=newNode;
```

---

# 4. Delete Beginning

Before:

```text
10 → 20 → 30
```

Remove:

```text
10
```

Update:

```c
head=head->next;
```

Result:

```text
20 → 30
```

---

# 5. Search

Linear search-এর মতো।

```c
while(temp!=NULL)
{
    if(temp->data==target)
    {
        return 1;
    }

    temp=temp->next;
}
```

Complexity:

```text
O(n)
```

---

# Chapter 5 - Linked List Problem Patterns

---

# Pattern 1 - Reverse Linked List

Original:

```text
1 → 2 → 3 → NULL
```

Reverse:

```text
3 → 2 → 1 → NULL
```

---

Need three pointers:

```text
prev

current

next
```

---

Mental Model:

```text
Save next

↓

Reverse link

↓

Move forward
```

---

# Pattern 2 - Fast & Slow Pointer

এইটা Day 9-এর Two Pointer-এর advanced version।

Use:

```text
slow

fast
```

---

Applications:

## Find Middle Node

Example:

```text
1 → 2 → 3 → 4 → 5
```

Slow:

```text
1 → 2 → 3
```

Fast:

```text
1 → 3 → 5
```

Slow middle-এ থাকে।

---

## Detect Cycle

যদি:

```text
1 → 2 → 3 → 4
      ↑     ↓
      ← ← ←
```

cycle আছে।

Fast এবং slow এক জায়গায় মিলবে।

---

# Chapter 6 - Hashing Mental Model

এখন Linked List থেকে অন্য দিকে যাই।

Problem:

Find করা:

```text
100000 element
```

Linear search:

```text
O(n)
```

Need faster।

---

Hashing:

> Data-কে এমনভাবে store করা যাতে direct access পাওয়া যায়।

---

Example:

Student ID:

```text
101 → Rafi

102 → Karim

103 → Nabil
```

ID দিয়ে instantly খুঁজে পাওয়া।

---

# Chapter 7 - Hash Table & Hash Function

Hash Table:

```text
id="0v0d0c"
Index

0

1

2

3

4

5

6

7

```

Hash Function:

Value কে index বানায়।

Example:

```text
key = 25
```

Formula:

```text
key % size
```

Size:

```text
10
```

Result:

```text
25 % 10 = 5
```

Store:

```text
index 5
```

---

# Collision

দুইটা key একই index দিলে:

Example:

```text
15 % 10 = 5

25 % 10 = 5
```

দুইটাই index 5।

এটাকে বলে:

```text
Collision
```

---

Solution:

## Chaining

এক index-এ linked list:

```text
5

↓

15 → 25 → 35
```

---

# Chapter 8 - Frequency Counting Pattern

CP-তে Hashing-এর সবচেয়ে common use।

Problem:

Count frequency।

Example:

Array:

```text
1 2 2 3 3 3
```

Need:

```text
1 → 1

2 → 2

3 → 3
```

---

Without Hash:

Nested loop:

```text
O(n²)
```

---

Hash:

```text
frequency[value]++;
```

---

C Array Hash:

যদি value ছোট:

```c
int freq[1000]={0};
```

---

Example:

```c
for(int i=0;i<n;i++)
{
    freq[arr[i]]++;
}
```

---

# Chapter 9 - Hashing Applications in CP

---

## 1. Duplicate Detection

Problem:

Array:

```text
1 2 3 2
```

Duplicate?

Hash:

```text
seen[value]
```

---

## 2. Frequency Count

Most common।

---

## 3. Two Sum

Day 9:

Sorted + Two Pointer।

Alternative:

Hash:

```text
Need = target-current
```

---

Example:

Array:

```text
2 7 11 15
```

Target:

```text
9
```

2 দেখলাম।

Need:

```text
7
```

Hash check।

Found।

---

## 4. Character Frequency

String:

```text
hello
```

Count:

```text
h=1

e=1

l=2

o=1
```

---

# Chapter 10 - Day 12 Assignment

## Part A - Linked List

Implement:

```text
1. Create Node

2. Insert Beginning

3. Insert End

4. Delete Beginning

5. Search Element

6. Traverse List
```

---

# Part B - Linked List Problems

Solve:

```text
1. Reverse Linked List

2. Find Middle Node

3. Detect Cycle

4. Count Nodes
```

---

# Part C - Hashing Practice

Implement:

```text
1. Frequency Counter

2. Duplicate Finder

3. Character Frequency

4. Two Sum using Hash
```

---

# Part D - Dry Run

Linked List:

```text
10 → 20 → 30 → NULL
```

Insert 5 at beginning।

Show:

```text
Old Head:

New Node:

New Head:
```

---

# Part E - Pattern Recognition

Problem:

> Count how many times each number appears.

Pattern:

```text
?
```

---

Problem:

> Find middle of linked list.

Pattern:

```text
?
```

---

Problem:

> Undo operation.

Pattern:

```text
?
```

---

# 📚 Glossary Update

Add:

```text
Linked List

Node

Pointer

Address

Head

Next Pointer

Dynamic Memory

Singly Linked List

Traversal

Fast Pointer

Slow Pointer

Cycle

Hashing

Hash Table

Hash Function

Collision

Chaining

Frequency Array

Key Value Pair
```

---

# 📚 Pattern Library Update

Add:

```md
## Fast Slow Pointer Pattern

Recognition:

- Middle element
- Cycle detection


Mental Model:

slow → one step

fast → two steps


Applications:

- Linked List middle
- Cycle detection
```

---

```md
## Hash Frequency Pattern

Recognition:

- Count occurrence
- Duplicate detection
- Lookup required


Mental Model:

Element

↓

Hash Index

↓

Store Information


Complexity:

Average O(1)
```

---

# ✅ Day 12 Completion Checklist

```text
[ ] Linked List concept বুঝি

[ ] Node structure বুঝি

[ ] Pointer বুঝি

[ ] Head বুঝি

[ ] Traversal করতে পারি

[ ] Insert/Delete করতে পারি

[ ] Reverse linked list idea বুঝি

[ ] Fast Slow Pointer বুঝি

[ ] Hashing concept বুঝি

[ ] Hash Function বুঝি

[ ] Collision বুঝি

[ ] Frequency counting করতে পারি

[ ] Hash দিয়ে duplicate detect করতে পারি
```

---

# 🏁 Day 12 Final Mental Model

```text
Problem

↓

Need storage?

↓

Need order?
→ Linked List

Need fast lookup?
→ Hashing

Need frequency?
→ Hash Table

Need middle/cycle?
→ Fast Slow Pointer
```

---

Day 12 শেষে:

```text
Day 1-5
Pattern Foundation

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
Linked List + Hashing
```

পরের:

**Day 13 - Trees + Binary Search Tree Foundation** 🌳