# 🚀 Day 2 - Arrays, Traversal & Core Problem-Solving Patterns

তোমার বর্তমান অবস্থান অনুযায়ী Day 2 হবে **খুব গুরুত্বপূর্ণ turning point**।

Day 0-তে তুমি শিখেছো **CP কীভাবে ভাবতে হয়**।
Day 1-এ তুমি শিখেছো **Problem পড়া → Pattern চিন্তা → Algorithm → Dry Run → Code → Test** workflow।

এখন Day 2 থেকে আমরা সত্যিকারের **problem-solving pattern training** শুরু করব।

আজকের মূল লক্ষ্য:

```text
Array Problem
      ↓
একটা একটা Element দেখা
      ↓
Condition Check করা
      ↓
Result জমা / Count / Compare / Search করা
```

Day 2 শেষে তুমি যেন এই ধরনের Problem নিজে চিনতে পারো:

```text
Sum বের করো
Maximum বের করো
Minimum বের করো
Even সংখ্যা Count করো
Target Search করো
Positive / Negative Count করো
```

---

# 📖 Day 2 Chapter Map

```text
Day 2
│
├── Chapter 1 - Array Mental Model
│
├── Chapter 2 - Traversal Pattern
│
├── Chapter 3 - Accumulation Pattern
│
├── Chapter 4 - Counting Pattern
│
├── Chapter 5 - Maximum & Minimum Pattern
│
├── Chapter 6 - Searching Pattern
│
├── Chapter 7 - Combining Patterns
│
├── Chapter 8 - Common Bugs & Edge Cases
│
├── Chapter 9 - Problem Solving Session
│
├── Chapter 10 - Pattern Library Update
│
└── Chapter 11 - Assignment & Reflection
```

আমি Day 1-এর মতোই **বইয়ের Chapter style**-এ এগোব।

আজ শুরু করছি **Day 2 - Chapter 1** দিয়ে।

---

# Day 2 - Chapter 1

# Array Mental Model

---

## Lesson 1 - Array শুধু Syntax না

তুমি ইতোমধ্যে C-তে Array জানো।

যেমন:

```c
int arr[5];
```

অথবা:

```c
int arr[5] = {10, 20, 30, 40, 50};
```

Programming class-এ সাধারণত শেখানো হয়:

> Array হলো একই Data Type-এর একাধিক Value রাখার একটি Data Structure।

Definition হিসেবে এটা ঠিক।

কিন্তু CP-এর জন্য আমাদের আরেকভাবে ভাবতে হবে।

> **Array হলো অনেকগুলো Data, যেগুলোর উপর আমাদের কোনো Operation করতে হবে।**

যেমন:

```text
10 20 30 40 50
```

Problem বলতে পারে:

```text
Sum বের করো।
```

অথবা:

```text
Maximum বের করো।
```

অথবা:

```text
Even সংখ্যা Count করো।
```

অথবা:

```text
30 আছে কি না খুঁজে বের করো।
```

লক্ষ্য করো-

**Array একই।**

শুধু Operation বদলে যাচ্ছে।

---

# Lesson 2 - Array Problem-এর Basic Mental Model

যখন Array দেখবে, প্রথম চিন্তা হবে না:

```text
for loop লিখি।
```

বরং চিন্তা হবে:

```text
আমাকে প্রতিটি Element দেখতে হবে?
```

যদি উত্তর হয়:

```text
হ্যাঁ
```

তাহলে:

```text
Need Traversal
```

এরপর প্রশ্ন:

```text
প্রতিটি Element দেখে কী করব?
```

Possible Answer:

```text
যোগ করব
```

তাহলে:

```text
Traversal
    ↓
Accumulation
```

যদি বলো:

```text
Condition Check করে Count করব
```

তাহলে:

```text
Traversal
    ↓
Condition
    ↓
Counter
```

যদি বলো:

```text
বর্তমান Maximum-এর সঙ্গে Compare করব
```

তাহলে:

```text
Traversal
    ↓
Comparison
    ↓
Maximum Update
```

এটাই আজকের Day 2-এর foundation।

---

# Lesson 3 - Index এবং Element এক জিনিস না

ধরো:

```text
Index:     0   1   2   3   4

Element:  10  20  30  40  50
```

এখানে:

```text
i
```

হলো Index।

আর:

```text
arr[i]
```

হলো সেই Index-এর Value বা Element।

উদাহরণ:

```text
i = 2
```

তাহলে:

```text
arr[i]
```

মানে:

```text
arr[2]
```

Value:

```text
30
```

অর্থাৎ:

```text
i       → Position / Index

arr[i]  → Value at that position
```

এই পার্থক্য পরিষ্কার থাকা খুব জরুরি।

---

## Common Beginner Mistake

ধরো Even Number Print করতে হবে।

ভুল:

```c
if (i % 2 == 0)
{
    printf("%d ", arr[i]);
}
```

এখানে তুমি check করছো:

```text
Index Even কি না
```

কিন্তু Problem যদি বলে:

```text
Even Value Print করো
```

তাহলে হবে:

```c
if (arr[i] % 2 == 0)
{
    printf("%d ", arr[i]);
}
```

কারণ:

```text
i % 2
```

মানে:

```text
Index Check
```

আর:

```text
arr[i] % 2
```

মানে:

```text
Value Check
```

---

# Lesson 4 - Traversal কী?

Traversal তুমি Glossary-তে ইতোমধ্যে দেখেছো।

সহজভাবে:

> **Collection-এর Element-গুলো একে একে Visit করাকে Traversal বলে।**

Array:

```text
5 8 2 9 1
```

Traversal:

```text
5
↓
8
↓
2
↓
9
↓
1
```

Code:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

কিন্তু এখানে একটা গুরুত্বপূর্ণ বিষয় আছে।

**Loop এবং Traversal একই জিনিস নয়।**

Loop হলো Mechanism।

Traversal হলো Purpose।

```text
for loop
    ↓
Tool

Traversal
    ↓
Operation / Process
```

উদাহরণ:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

এখানে:

```text
Loop
    ↓
Array Traversal করছে
```

---

# Lesson 5 - Traversal-এর তিনটি প্রশ্ন

যেকোনো Array Problem-এ Traversal করার আগে নিজেকে তিনটা প্রশ্ন করবে।

## Question 1

```text
কোথা থেকে শুরু করব?
```

সাধারণত:

```text
i = 0
```

---

## Question 2

```text
কতক্ষণ চলব?
```

সাধারণত:

```text
i < n
```

---

## Question 3

```text
প্রতিটি Element-এর সঙ্গে কী করব?
```

এটাই Problem অনুযায়ী বদলাবে।

### Sum

```text
Add
```

### Count Even

```text
Check
↓
Count
```

### Maximum

```text
Compare
↓
Update
```

### Search

```text
Compare with Target
↓
Found?
```

---

# Lesson 6 - Same Traversal, Different Problems

এই Lesson খুব গুরুত্বপূর্ণ।

ধরো Array:

```text
5 8 2 9 4
```

একই Traversal:

```c
for (int i = 0; i < n; i++)
{
    // কাজ
}
```

এখন Problem অনুযায়ী ভিতরের কাজ বদলাবে।

---

## Problem A - Print All Elements

```c
printf("%d ", arr[i]);
```

Mental Model:

```text
Traversal
    ↓
Output
```

---

## Problem B - Sum

```c
sum += arr[i];
```

Mental Model:

```text
Traversal
    ↓
Accumulation
```

---

## Problem C - Count Even

```c
if (arr[i] % 2 == 0)
{
    count++;
}
```

Mental Model:

```text
Traversal
    ↓
Condition
    ↓
Counter
```

---

## Problem D - Maximum

```c
if (arr[i] > max)
{
    max = arr[i];
}
```

Mental Model:

```text
Traversal
    ↓
Comparison
    ↓
Update
```

---

## Problem E - Search

```c
if (arr[i] == target)
{
    found = 1;
}
```

Mental Model:

```text
Traversal
    ↓
Target Comparison
    ↓
State Update
```

এই কারণেই আমি তোমাকে বলেছিলাম:

> Pattern-কে শুধু একটি শব্দ হিসেবে দেখবে না।

যেমন শুধু:

```text
Maximum
```

না লিখে ভাববে:

```text
Traversal
    ↓
Comparison
    ↓
Update Maximum
```

---

# Lesson 7 - The Core Array Skeleton

অনেক Beginner Array Problem-এর ভিতরের common structure দেখতে পায় না।

দেখো:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Problem Logic

    return 0;
}
```

এই পর্যন্ত অংশ অনেক Array Problem-এ common।

তারপর Problem Logic বদলাবে।

---

## Sum Problem

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

---

## Count Problem

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

---

## Maximum Problem

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

লক্ষ্য করো:

```text
Input
    ↓
Traversal
    ↓
Operation
    ↓
Result
```

এই skeleton মাথায় ঢোকানো Day 2-এর বড় লক্ষ্য।

---

# Lesson 8 - Read and Process: সব সময় Array লাগবে?

না।

এটা খুব গুরুত্বপূর্ণ।

ধরো Problem:

> Nটি Number Input নিয়ে Sum বের করো।

তুমি লিখতে পারো:

```c
int arr[n];
```

সব Number Array-তে রাখতে পারো।

কিন্তু Sum-এর জন্য সব Value পরে আবার দরকার নেই।

তাই সরাসরি:

```c
int sum = 0;
int x;

for (int i = 0; i < n; i++)
{
    scanf("%d", &x);
    sum += x;
}
```

করাও সম্ভব।

Mental Model:

```text
Read
↓
Process
↓
Forget
```

অন্যদিকে যদি পরে Array-এর Values আবার দরকার হয়:

```text
Read
↓
Store
↓
Process Later
```

তাহলে Array লাগবে।

---

# Lesson 9 - Store or Process?

নিজেকে প্রশ্ন করবে:

> **এই Value পরে আবার দরকার হবে?**

যদি:

```text
না
```

তাহলে:

```text
Read
↓
Process Immediately
```

যদি:

```text
হ্যাঁ
```

তাহলে:

```text
Read
↓
Store in Array
↓
Process
```

### Example: Sum

শুধু Sum দরকার:

```text
10
20
30
```

Processing:

```text
sum = 0

Read 10
sum = 10

Read 20
sum = 30

Read 30
sum = 60
```

Array না রাখলেও সম্ভব।

---

### Example: Reverse Array

Input:

```text
10 20 30 40
```

Output:

```text
40 30 20 10
```

এখানে পরে আগের Value-গুলো দরকার।

তাই:

```text
Need Storage
↓
Array
```

---

# Lesson 10 - Array Problem Translation

Problem Statement:

> Given N integers, find the number of positive integers.

Beginner Brain:

```text
Code কী হবে?
```

আমাদের Brain:

```text
N Numbers
    ↓
Need to inspect each number
    ↓
Traversal

Need positive numbers only
    ↓
Condition: x > 0

Need how many
    ↓
Counter
```

Final Thinking Pipeline:

```text
Traversal
    ↓
Condition Checking
    ↓
Counter
```

তারপর Code।

---

আরেকটা:

> Find the smallest number in an array.

Thinking:

```text
Need every Element
    ↓
Traversal

Need Smallest
    ↓
Comparison

Found Smaller?
    ↓
Update Minimum
```

Pipeline:

```text
Traversal
    ↓
Comparison
    ↓
Minimum Update
```

---

# 🧠 Chapter 1 Core Mental Model

আজ থেকে Array Problem দেখলে:

```text
┌─────────────────────────┐
│       ARRAY PROBLEM     │
└────────────┬────────────┘
             ↓
      সব Element দেখতে হবে?
             ↓
            Yes
             ↓
         Traversal
             ↓
     প্রতিটা দেখে কী করব?
             │
      ┌──────┼──────┬─────────┐
      ↓      ↓      ↓         ↓
     Add    Count  Compare   Search
      ↓      ↓      ↓         ↓
 Accumulate Counter Update   Found?
```

এই Diagram Day 2-এর পুরো foundation।

---

# 🧪 Chapter 1 - Exercise

এখন Code লিখবে না।

শুধু **Thinking Pipeline** লিখবে।

## Exercise 1

> Given N integers, find their sum.

Format:

```text
Pattern:

???
↓
???
```

---

## Exercise 2

> Count how many numbers are negative.

```text
Pattern:

???
↓
???
↓
???
```

---

## Exercise 3

> Find the largest number.

```text
Pattern:

???
↓
???
↓
???
```

---

## Exercise 4

> Find whether the number `7` exists in an array.

```text
Pattern:

???
↓
???
↓
???
```

---

## Exercise 5

> Print all odd numbers.

```text
Pattern:

???
↓
???
↓
???
```

---

## Exercise 6 - Important

Problem:

> Given N numbers, calculate their sum.

Question:

```text
Array কি অবশ্যই লাগবে?

Yes / No

কারণ:
_________________________
```

---

## Exercise 7

Problem:

> Reverse N numbers.

Question:

```text
Array কেন দরকার হতে পারে?

কারণ:
_________________________
```

---

# 📝 Chapter 1 Assignment

তোমার `02_Day_2/Assignment_and_Exercise/` folder-এ:

```text
Day_2_chapter_1_exercise.md
```

বানাতে পারো।

Structure:

```md
# Day 2 - Chapter 1 Exercise

## Exercise 1

### Pattern

Traversal

↓

...

### Why?

...

---

## Exercise 2

### Pattern

...

### Why?

...
```

এবার শুধু pattern-এর নাম দিলেই হবে না। প্রতিটায় **Why?** লিখবে।

যেমন:

```text
Traversal
↓
Condition
↓
Counter
```

তারপর:

```text
Why?

প্রতিটি Number দেখতে হবে, Negative কি না Check করতে হবে,
Negative হলে Counter এক বাড়াতে হবে।
```

এতে আমি বুঝতে পারব তুমি শব্দ মুখস্থ করেছো নাকি logic বুঝেছো।

---

# Day 2 - Chapter 2

# 🔄 Traversal Pattern

---

## 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Traversal আসলে কী;
* Loop আর Traversal-এর পার্থক্য;
* Forward Traversal কী;
* Reverse Traversal কী;
* Full Traversal এবং Partial Traversal কী;
* কখন Traversal দরকার;
* `i` এবং `arr[i]`-এর পার্থক্য;
* Common Traversal Bug কী;
* Problem পড়ে কীভাবে `Need Traversal` চিনতে হয়।

এই Chapter-এর মূল লক্ষ্য:

```text
Problem Statement
        ↓
Need to inspect elements?
        ↓
Traversal
        ↓
Choose Direction
        ↓
Perform Operation
```

---

# Lesson 1 - Traversal আবার পরিষ্কার করি

Traversal মানে:

> **কোনো Collection-এর Element-গুলো একটি নির্দিষ্ট Order-এ Visit করা।**

ধরো Array:

```text
10 20 30 40 50
```

Forward Traversal:

```text
10
↓
20
↓
30
↓
40
↓
50
```

Code:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

এখানে Loop ব্যবহার করে Array Traversal করা হচ্ছে।

---

# Lesson 2 - Loop এবং Traversal এক জিনিস নয়

এই পার্থক্যটা খুব গুরুত্বপূর্ণ।

## Loop

Loop হলো একটি **Control Structure**।

এটা কোনো কাজ বারবার করতে সাহায্য করে।

Example:

```c
for (int i = 1; i <= 5; i++)
{
    printf("Hello\n");
}
```

এখানে Loop আছে।

কিন্তু কোনো Array বা Collection Visit করা হচ্ছে না।

তাই এটাকে Array Traversal বলা হবে না।

---

## Traversal

Traversal হলো:

> **Data-এর Element-গুলো Visit করার Process।**

Example:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

এখানে:

```text
for loop
    ↓
Mechanism / Tool

Array-এর সব Element Visit
    ↓
Traversal
```

### মনে রাখার Rule

```text
Loop = কীভাবে বারবার করছি?

Traversal = কোন Data-গুলো একে একে দেখছি?
```

---

# Lesson 3 - Iteration এবং Traversal

আরেকটা নতুন শব্দ:

## Iteration

Loop-এর প্রতিবার Execution-কে একটি **Iteration** বলা হয়।

ধরো:

```c
for (int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}
```

এখানে Loop চলবে ৫ বার।

```text
i = 0 → Iteration 1
i = 1 → Iteration 2
i = 2 → Iteration 3
i = 3 → Iteration 4
i = 4 → Iteration 5
```

অর্থাৎ:

```text
Traversal
    ↓
অনেকগুলো Iteration দিয়ে সম্পন্ন হতে পারে
```

---

# Lesson 4 - Forward Traversal

সবচেয়ে common Traversal:

```text
Left → Right
```

Array:

```text
Index:    0   1   2   3   4

Value:   10  20  30  40  50
```

Traversal:

```text
arr[0]
   ↓
arr[1]
   ↓
arr[2]
   ↓
arr[3]
   ↓
arr[4]
```

Code:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

---

## Dry Run

ধরো:

```text
n = 4

arr = 5 8 2 9
```

Dry Run:

|  `i` | `arr[i]` | Output |
| ---: | -------: | ------ |
|    0 |        5 | 5      |
|    1 |        8 | 8      |
|    2 |        2 | 2      |
|    3 |        9 | 9      |

Final Output:

```text
5 8 2 9
```

---

# Lesson 5 - Reverse Traversal

সব সময় Left থেকে Right যেতে হবে না।

Array:

```text
10 20 30 40 50
```

Reverse Traversal:

```text
50
↓
40
↓
30
↓
20
↓
10
```

Index:

```text
4 → 3 → 2 → 1 → 0
```

Code:

```c
for (int i = n - 1; i >= 0; i--)
{
    printf("%d ", arr[i]);
}
```

---

## কেন `n - 1`?

ধরো:

```text
n = 5
```

Valid Index:

```text
0 1 2 3 4
```

শেষ Index:

```text
4
```

আর:

```text
n - 1
=
5 - 1
=
4
```

তাই Reverse Traversal শুরু হয়:

```c
int i = n - 1;
```

থেকে।

---

# Lesson 6 - Traversal Direction কীভাবে ঠিক করব?

নিজেকে প্রশ্ন করবে:

> **কোন Order-এ Elementগুলো Process করতে হবে?**

যদি Problem বলে:

> Print all elements.

সাধারণত:

```text
Forward Traversal
```

যদি Problem বলে:

> Print elements in reverse order.

তাহলে:

```text
Reverse Traversal
```

যদি Problem বলে:

> Find Maximum.

তাহলে সাধারণত:

```text
Forward Traversal
```

যদিও Maximum বের করতে technically অন্য direction-ও সম্ভব, standard approach হলো forward traversal।

---

# Lesson 7 - Full Traversal

যখন সব Element Visit করা হয়:

```text
10 20 30 40 50
↑  ↑  ↑  ↑  ↑
সবগুলো Visit
```

এটা:

```text
Full Traversal
```

Code:

```c
for (int i = 0; i < n; i++)
{
    // process arr[i]
}
```

Common Problems:

```text
Sum
Count
Maximum
Minimum
Average
Frequency
```

এগুলোতে সাধারণত Full Traversal লাগে।

---

# Lesson 8 - Partial Traversal

সব Problem-এ শেষ পর্যন্ত যাওয়া দরকার হয় না।

ধরো:

> Array-তে `7` আছে কি না Check করো।

Array:

```text
2 5 7 9 10
```

Traversal:

```text
2 → Not Found

5 → Not Found

7 → Found
```

এখন যদি Problem শুধু জানতে চায়:

```text
7 আছে কি না?
```

তাহলে `7` পাওয়ার পর:

```c
break;
```

করা যায়।

Example:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == 7)
    {
        found = 1;
        break;
    }
}
```

Mental Model:

```text
Traversal
    ↓
Target Comparison
    ↓
Found?
    ↓
Stop Early
```

এটাকে **Early Termination** বা **Early Exit** বলা যায়।

---

# Lesson 9 - Traversal + Operation

Traversal নিজে সাধারণত Final Solution না।

Traversal হলো Data দেখার Process।

তারপর প্রতিটি Element-এর উপর কোনো Operation হয়।

## Example 1 - Print

```text
Traversal
↓
Output
```

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

---

## Example 2 - Sum

```text
Traversal
↓
Accumulation
```

```c
for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

---

## Example 3 - Count

```text
Traversal
↓
Condition
↓
Counter
```

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        count++;
    }
}
```

---

## Example 4 - Maximum

```text
Traversal
↓
Comparison
↓
Update
```

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

---

# Lesson 10 - Index Traversal vs Value Processing

এটা Beginner-দের খুব common confusion।

ধরো:

```text
Index:    0   1   2   3

Value:    7  12   5   8
```

Loop:

```c
for (int i = 0; i < n; i++)
```

এখানে:

```text
i
```

হবে:

```text
0
1
2
3
```

কিন্তু:

```text
arr[i]
```

হবে:

```text
7
12
5
8
```

তাই:

```c
if (i % 2 == 0)
```

মানে:

> Even Index Check।

আর:

```c
if (arr[i] % 2 == 0)
```

মানে:

> Even Value Check।

---

## Example

Problem:

> Print all even values.

Correct:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
}
```

Problem:

> Print values stored at even indices.

Correct:

```c
for (int i = 0; i < n; i++)
{
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
}
```

দুটো Problem সম্পূর্ণ আলাদা।

---

# Lesson 11 - Off-by-One Error

Traversal-এর সবচেয়ে common Bug-এর একটি হলো:

> **একটি Element বেশি বা কম Process করা।**

এটাকে সাধারণভাবে **Off-by-One Error** বলা হয়।

ধরো:

```text
n = 5
```

Valid Index:

```text
0 1 2 3 4
```

Correct:

```c
for (int i = 0; i < n; i++)
```

অর্থাৎ:

```text
0 1 2 3 4
```

---

## Wrong Version 1

```c
for (int i = 0; i <= n; i++)
```

এখানে `i` যাবে:

```text
0 1 2 3 4 5
```

কিন্তু:

```text
arr[5]
```

Valid না।

---

## Wrong Version 2

```c
for (int i = 0; i < n - 1; i++)
```

এখানে:

```text
0 1 2 3
```

Visit হবে।

শেষ Element:

```text
arr[4]
```

বাদ পড়বে।

---

# Lesson 12 - Empty Loop Body Bug

এই Bug-টা C-তে খুব dangerous।

ভুল:

```c
for (int i = 0; i < n; i++);
{
    printf("%d ", arr[i]);
}
```

খেয়াল করো:

```c
for (...);
```

শেষে accidental semicolon আছে।

এতে Loop-এর body empty হয়ে যায়।

Correct:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

Contest-এ ছোট syntax mistake অনেক সময় বেশি সময় নষ্ট করায়। তাই Loop header দেখার habit তৈরি করো।

---

# Lesson 13 - Traversal Recognition Signals

Problem Statement-এ এই ধরনের কথা দেখলে Traversal চিন্তা করবে:

```text
For each element...
```

```text
Among N numbers...
```

```text
Count how many...
```

```text
Find the largest...
```

```text
Find the smallest...
```

```text
Print all...
```

```text
Check whether X exists...
```

তখন Brain:

```text
Multiple Elements
        ↓
Need to inspect them
        ↓
Traversal
```

কিন্তু এরপর থামবে না।

পরের প্রশ্ন:

```text
Traversal করে কী করব?
```

Possible answer:

```text
Print
Add
Count
Compare
Search
```

---

# 🧠 Traversal Decision Map

```text
              Problem
                  ↓
       Multiple values আছে?
                  ↓
                 Yes
                  ↓
     Values inspect করতে হবে?
                  ↓
                 Yes
                  ↓
              Traversal
                  ↓
        কোন Direction দরকার?
            ↙           ↘
        Forward        Reverse
            ↓             ↓
        Operation      Operation
            ↓             ↓
     Print / Count    Print / Compare
     Sum / Search
```

---

# 🔬 Worked Example 1

Problem:

> Given `N` integers, print all positive numbers.

Input:

```text
6
-2 5 0 -7 9 3
```

## Step 1 - Need every Element?

```text
Yes
```

তাই:

```text
Traversal
```

## Step 2 - কী Check করব?

```text
Positive?
```

Condition:

```text
arr[i] > 0
```

## Step 3 - কী করব?

```text
Print
```

Final Pipeline:

```text
Traversal
↓
Condition Checking
↓
Output
```

Code:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
```

---

# 🔬 Worked Example 2

Problem:

> Print an array in reverse order.

Input:

```text
5
10 20 30 40 50
```

Need:

```text
Last Element
↓
Previous Element
↓
...
↓
First Element
```

Pipeline:

```text
Reverse Traversal
↓
Output
```

Code:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

---

# ⚠️ Important: Reverse Printing vs Reversing an Array

দুটো সব সময় একই কাজ না।

এই Code:

```c
for (int i = n - 1; i >= 0; i--)
{
    printf("%d ", arr[i]);
}
```

শুধু Reverse Order-এ **Print** করছে।

Original Array-এর ভিতরের order বদলাচ্ছে না।

অর্থাৎ:

```text
Original Array:

10 20 30 40 50
```

Reverse Print:

```text
50 40 30 20 10
```

কিন্তু memory-তে Array এখনও:

```text
10 20 30 40 50
```

Actual Array Reverse করতে হলে Element swap করতে হবে। সেটা পরে appropriate pattern-এর সঙ্গে করব।

---

# 🧪 Chapter 2 Exercise

এখানে Code লিখবে। তবে ছোট Problem-আজকের একদিনের pacing বজায় রাখার জন্য শুধু ৪টা exercise।

## Exercise 1 - Forward Traversal

Input:

```text
5
10 20 30 40 50
```

Output:

```text
10 20 30 40 50
```

### Required Pattern

```text
Traversal
↓
Output
```

---

## Exercise 2 - Reverse Traversal

Input:

```text
5
10 20 30 40 50
```

Output:

```text
50 40 30 20 10
```

### Required Pattern

```text
Reverse Traversal
↓
Output
```

---

## Exercise 3 - Print Even Values

Input:

```text
6
3 8 5 12 7 10
```

Output:

```text
8 12 10
```

### Required Pattern

নিজে লিখবে।

Hint:

```text
Traversal
↓
???
↓
Output
```

---

## Exercise 4 - Print Values at Even Indices

Input:

```text
6
10 20 30 40 50 60
```

Index:

```text
0 1 2 3 4 5
```

Output:

```text
10 30 50
```

এখানে খেয়াল রাখবে:

```text
Even Value
```

এবং:

```text
Even Index
```

এক না।

---

# 📝 Chapter 2 Assignment

Code না লিখে প্রথমে Thinking Pipeline লিখবে।

## Problem 1

> Print all negative numbers.

লিখবে:

```text
Pattern:

???
↓
???
↓
???
```

---

## Problem 2

> Print an array from last to first.

```text
Pattern:

???
↓
???
```

---

## Problem 3

> Check every element and print only values greater than 100.

```text
Pattern:

???
↓
???
↓
???
```

---

## Problem 4

> Search for `X` and stop immediately after finding it.

এখানে নতুন concept:

```text
Early Termination
```

নিজে পুরো Pipeline বানাবে।

---

# 📁 তোমার Repo-তে কোথায় রাখবে?

Day 2-এর learning material:

```text
02_Day_2/
├── day_2.md
└── Assignment_and_Exercise/
    ├── Day_2_exercise.md
    └── Day_2_assignment.md
```

আজকের local exercise code চাইলে:

```text
02_Day_2/
└── Practice/
    ├── traversal_forward.c
    ├── traversal_reverse.c
    ├── even_values.c
    └── even_indices.c
```

কিন্তু [HackerRank](https://www.hackerrank.com/domains/c?utm_source=chatgpt.com)-এর actual problem solution হলে সেটা Day folder-এ duplicate করবে না; তোমার existing platform folder `19_HackerRank/`-এর relevant category-তে রাখবে।

---

# ⏱️ Day 2 Pacing Correction

তোমার কথাটা গুরুত্বপূর্ণ: **Day 2 একদিনেই শেষ হতে হবে এবং পুরো Bootcamp ১৬ দিনের মধ্যেই শেষ হতে হবে।**

তাই Day 2-এর বাকি অংশ আমি unnecessarily বড় করব না। Revised practical flow হবে:

```text
Chapter 1
Array Mental Model
        ↓
Chapter 2
Traversal
        ↓
Chapter 3
Accumulation + Counting
        ↓
Chapter 4
Maximum + Minimum
        ↓
Chapter 5
Linear Search
        ↓
Chapter 6
Mixed Pattern Problems
        ↓
Chapter 7
Mistake Review + Pattern Library Update
        ↓
Day 2 Final Assignment
```

অর্থাৎ আগের ১১ Chapter plan compress করে **৭টি focused Chapter** করলাম। Concept বাদ যাচ্ছে না; related concepts একসঙ্গে group করছি।

আজকের Day 2-এর target হবে:

```text
Learn
  ↓
Traversal
Accumulation
Counting
Maximum
Minimum
Linear Search
  ↓
Solve Mixed Problems
  ↓
Review Mistakes
  ↓
Day 2 Complete
```

**Chapter 2 এখানেই শেষ।** Exerciseগুলো করার পর Chapter 3-এ আমরা **Accumulation + Counting Pattern** একসঙ্গে শিখব-কারণ ১৬ দিনের bootcamp pacing অনুযায়ী related patterns আলাদা আলাদা বিশাল Chapter করলে practical preparation পিছিয়ে যাবে।

---

# Day 2 - Chapter 3

# 📦 Accumulation + Counting Pattern

Chapter 2-এ আমরা শিখেছি:

```text
Multiple Elements
        ↓
একটা একটা করে Visit
        ↓
Traversal
```

কিন্তু শুধু Element Visit করলেই সাধারণত Problem Solve হয় না।

প্রতিটি Element দেখে আমাদের কিছু একটা করতে হয়।

আজ আমরা দুইটা খুব গুরুত্বপূর্ণ Pattern শিখব:

```text
1. Accumulation
2. Counting
```

দুটো দেখতে কাছাকাছি হলেও কাজ আলাদা।

এই Chapter শেষে তুমি যেন Problem পড়ে বুঝতে পারো:

```text
Total / Sum দরকার?
        ↓
Accumulator

How Many / Count দরকার?
        ↓
Counter
```

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Accumulator কী;
* Counter কী;
* Accumulator এবং Counter-এর পার্থক্য;
* Running Sum কী;
* Initialization কেন গুরুত্বপূর্ণ;
* `sum += arr[i]` কীভাবে কাজ করে;
* `count++` কখন ব্যবহার করতে হয়;
* Condition + Counter Pattern;
* Sum এবং Count combine করে Average বের করা;
* কোন Problem-এ Array না রেখেও কাজ করা যায়;
* Common accumulation এবং counting bugs।

আজকের Core Mental Model:

```text
Problem
   ↓
সব Value দেখতে হবে?
   ↓
Traversal
   ↓
কী Result দরকার?
   │
   ├── Total Value
   │       ↓
   │   Accumulator
   │
   └── Number of Matches
           ↓
         Counter
```

---

# Lesson 1 - Accumulation Pattern কী?

ধরো Array:

```text
2 5 3 10
```

Problem:

> সব Number-এর Sum বের করো।

আমাদের সব Number একসঙ্গে যোগ করতে হবে।

প্রথমে:

```text
sum = 0
```

তারপর:

```text
Read 2

sum = 0 + 2
sum = 2
```

তারপর:

```text
Read 5

sum = 2 + 5
sum = 7
```

তারপর:

```text
Read 3

sum = 7 + 3
sum = 10
```

তারপর:

```text
Read 10

sum = 10 + 10
sum = 20
```

Final:

```text
sum = 20
```

এখানে `sum` Variable প্রতিবার Result জমা করছে।

এই ধরনের Variable-কে বলা হয়:

> **Accumulator**

Mental Model:

```text
Traversal
    ↓
Current Value নাও
    ↓
Previous Result-এর সঙ্গে যোগ করো
    ↓
Accumulator Update করো
```

---

# Lesson 2 - Accumulator শব্দটার মানে

সহজ বাংলায়:

> **যে Variable ধাপে ধাপে Result জমা করে, তাকে Accumulator বলা হয়।**

Example:

```c
int sum = 0;
```

তারপর:

```c
sum = sum + arr[i];
```

অথবা Short Form:

```c
sum += arr[i];
```

দুটো একই কাজ করে।

---

## Example

ধরো:

```text
arr[i] = 5
```

এবং:

```text
sum = 10
```

তাহলে:

```c
sum += arr[i];
```

মানে:

```text
sum = sum + arr[i]

sum = 10 + 5

sum = 15
```

এখন Accumulator-এর নতুন State:

```text
sum = 15
```

---

# Lesson 3 - Running Sum

Accumulation চলার সময় প্রতিটি ধাপের Sum-কে আমরা **Running Sum** বলতে পারি।

Array:

```text
4 2 7 3
```

Dry Run:

| Current Value | Previous Sum | New Sum |
| ------------: | -----------: | ------: |
|             4 |            0 |       4 |
|             2 |            4 |       6 |
|             7 |            6 |      13 |
|             3 |           13 |      16 |

এখানে:

```text
0
↓
4
↓
6
↓
13
↓
16
```

এইভাবে Result ধাপে ধাপে তৈরি হচ্ছে।

Final Answer:

```text
16
```

---

# Lesson 4 - Sum Problem-এর Complete Thinking

Problem:

> Given `N` integers, find their sum.

Problem পড়েই Code লিখবে না।

প্রথমে Translation:

### Step 1 - কী দরকার?

```text
সব Number-এর Total
```

### Step 2 - সব Number দেখতে হবে?

```text
Yes
```

তাই:

```text
Traversal
```

### Step 3 - প্রতিটি Number নিয়ে কী করব?

```text
Running Result-এর সঙ্গে Add
```

তাই:

```text
Accumulator
```

Final Pipeline:

```text
Traversal
    ↓
Accumulation
    ↓
Output Sum
```

---

# Lesson 5 - Sum Problem Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}
```

এখানে দুইটা Traversal আছে।

প্রথম Traversal:

```text
Input নেওয়া
```

দ্বিতীয় Traversal:

```text
Sum Calculate করা
```

Flow:

```text
Input
  ↓
Store in Array
  ↓
Traversal
  ↓
Accumulation
  ↓
Output
```

---

# Lesson 6 - সব সময় Array লাগবে?

না।

এই Concept Chapter 1-এ দেখেছো। এবার Practical Example দেখি।

Problem:

> Nটি Number Input নিয়ে তাদের Sum বের করো।

আমাদের কি পরে Number-গুলো আবার দরকার?

```text
No
```

তাহলে:

```text
Read
↓
Process
↓
Forget
```

Code:

```c
#include <stdio.h>

int main()
{
    int n;
    int x;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        sum += x;
    }

    printf("%d\n", sum);

    return 0;
}
```

Flow:

```text
Read Number
      ↓
Add to Sum
      ↓
Read Next Number
      ↓
Add to Sum
      ↓
...
      ↓
Print Final Sum
```

এখানে Array ব্যবহার না করেও Problem Solve হয়েছে।

---

# Lesson 7 - Initialization কেন গুরুত্বপূর্ণ?

দেখো:

```c
int sum = 0;
```

এখানে:

```text
sum = 0
```

হলো Initialization।

কেন `0`?

কারণ আমরা Addition করছি।

ধরো শুরুতে:

```text
sum = 0
```

তারপর `5` যোগ করলে:

```text
0 + 5 = 5
```

Correct।

কিন্তু যদি ভুল করে লিখি:

```c
int sum = 10;
```

তাহলে:

```text
Input:

2 3 4
```

Calculation:

```text
sum = 10

10 + 2 = 12

12 + 3 = 15

15 + 4 = 19
```

কিন্তু Correct Answer:

```text
9
```

অর্থাৎ Initial Value ভুল হলে Final Answer-ও ভুল হবে।

---

# Lesson 8 - Counter Pattern কী?

এবার Problem:

> Array-তে কতগুলো Even Number আছে?

Array:

```text
3 8 5 12 7 10
```

আমাদের Sum দরকার না।

আমাদের জানতে হবে:

```text
কতগুলো Number Even?
```

তাই:

```text
Need Count
```

প্রথমে:

```text
count = 0
```

Traversal:

```text
3
↓
Even? No
↓
count = 0
```

```text
8
↓
Even? Yes
↓
count = 1
```

```text
5
↓
Even? No
↓
count = 1
```

```text
12
↓
Even? Yes
↓
count = 2
```

```text
7
↓
Even? No
↓
count = 2
```

```text
10
↓
Even? Yes
↓
count = 3
```

Final:

```text
count = 3
```

---

# Lesson 9 - Counter কী?

সহজ ভাষায়:

> **যে Variable কোনো ঘটনা কতবার ঘটেছে তা গোনে, তাকে Counter বলা হয়।**

Example:

```c
int count = 0;
```

Condition True হলে:

```c
count++;
```

অর্থাৎ:

```text
Previous Count
      +
      1
      ↓
New Count
```

---

# Lesson 10 - Counting Pattern-এর Complete Thinking

Problem:

> Count how many positive numbers exist.

Brain Translation:

### Step 1 - সব Number দেখতে হবে?

```text
Yes
```

তাই:

```text
Traversal
```

### Step 2 - কোন Number দরকার?

```text
Positive Number
```

তাই:

```text
Condition Checking
```

Condition:

```c
arr[i] > 0
```

### Step 3 - Positive পেলে কী করব?

```text
Count বাড়াব
```

তাই:

```text
Counter
```

Final Pipeline:

```text
Traversal
    ↓
Condition Checking
    ↓
Counter
    ↓
Output Count
```

---

# Lesson 11 - Counting Problem Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Lesson 12 - Accumulator vs Counter

এখানে অনেক Beginner Confused হয়।

দুটোতেই Variable Update হয়।

কিন্তু উদ্দেশ্য আলাদা।

| Pattern     | কী জমায়?     | Example    |
| ----------- | ---------- | ---------- |
| Accumulator | Value      | Sum        |
| Counter     | Occurrence | কতগুলো Match |

ধরো Array:

```text
2 4 7 8
```

Even Number-এর **Sum** চাইলে:

```text
2 + 4 + 8 = 14
```

Variable:

```text
sum = 14
```

এটা:

```text
Accumulator
```

Even Number-এর **Count** চাইলে:

```text
2
4
8
```

মোট:

```text
3
```

Variable:

```text
count = 3
```

এটা:

```text
Counter
```

---

# Lesson 13 - একই Problem-এ Accumulator + Counter

এবার গুরুত্বপূর্ণ অংশ।

Problem:

> Positive Number-গুলোর Average বের করো।

Input:

```text
5
10 -5 20 -3 30
```

Positive Numbers:

```text
10 20 30
```

Sum:

```text
60
```

Count:

```text
3
```

Average:

```text
60 / 3 = 20
```

এখানে কী কী লাগল?

```text
Traversal
    ↓
Condition
    ↓
Positive?
    ↓
┌──────────────┐
│              │
↓              ↓
Sum          Count
↓              ↓
Accumulator   Counter
│              │
└──────┬───────┘
       ↓
    Average
```

Code Logic:

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        sum += arr[i];
        count++;
    }
}
```

তারপর:

```c
double average = (double)sum / count;
```

এখানে `(double)` কেন লাগছে, সেটা Data Type এবং Division-এর lesson-এ আরও detail-এ আসবে। আপাতত মনে রাখো integer division যেন decimal অংশ কেটে না ফেলে।

আর একটি Edge Case:

```text
Positive Number একটাও না থাকলে
count = 0
```

তখন:

```text
sum / count
```

করা যাবে না।

কারণ Division by Zero হবে।

তাই আগে Check করতে হবে:

```c
if (count > 0)
{
    double average = (double)sum / count;
}
```

---

# Lesson 14 - Conditional Accumulation

সব সময় সব Number যোগ করতে হবে না।

Problem:

> শুধু Even Number-গুলোর Sum বের করো।

Input:

```text
3 8 5 12 7 10
```

Even:

```text
8 12 10
```

Sum:

```text
30
```

Thinking:

```text
Traversal
    ↓
Condition
    ↓
Even?
    ↓
Accumulator
```

Code:

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        sum += arr[i];
    }
}
```

এটাকে আমরা বলতে পারি:

> **Conditional Accumulation**

অর্থাৎ সব Value না, Condition Match করা Value-গুলো Result-এ জমা হচ্ছে।

---

# Lesson 15 - Conditional Counting

Problem:

> কতগুলো Number `100`-এর চেয়ে বড়?

Input:

```text
50 120 30 200 101
```

Check:

```text
50 > 100?   No

120 > 100?  Yes → count = 1

30 > 100?   No

200 > 100?  Yes → count = 2

101 > 100?  Yes → count = 3
```

Pipeline:

```text
Traversal
    ↓
Condition
    ↓
Counter
```

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 100)
    {
        count++;
    }
}
```

---

# Lesson 16 - One Traversal, Multiple Results

একটা Array থেকে একই Traversal-এ একাধিক Result বের করা সম্ভব।

Problem:

> Count Even and Odd Numbers.

Input:

```text
1 2 3 4 5 6
```

Expected:

```text
Even = 3
Odd = 3
```

Mental Model:

```text
Traversal
    ↓
Even?
 ↙      ↘
Yes      No
 ↓        ↓
Even++   Odd++
```

Code:

```c
int even = 0;
int odd = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
}
```

এখানে দুইটা Counter আছে:

```text
even
odd
```

কিন্তু Traversal একবারই।

---

# Lesson 17 - Common Bug: Counter ভুল জায়গায় রাখা

Problem:

> Count Even Numbers.

ভুল Code:

```c
for (int i = 0; i < n; i++)
{
    int count = 0;

    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

Problem কোথায়?

প্রতিটি Iteration-এ:

```text
count = 0
```

আবার তৈরি হচ্ছে।

Flow:

```text
Iteration 1
count = 0
↓
Maybe count = 1
↓
Variable শেষ
```

তারপর:

```text
Iteration 2
count = 0
```

আবার Reset।

Correct:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

Rule:

```text
Initialize Once
      ↓
Loop Many Times
      ↓
Update Result
      ↓
Print After Loop
```

---

# Lesson 18 - Common Bug: Result Loop-এর ভিতরে Print করা

ধরো Sum Problem।

ভুল:

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];

    printf("%d\n", sum);
}
```

Input:

```text
1 2 3
```

Output হবে:

```text
1
3
6
```

কিন্তু Problem যদি শুধু Final Sum চায়:

```text
6
```

তাহলে `printf()` Loop-এর বাইরে হবে:

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}

printf("%d\n", sum);
```

এখানে গুরুত্বপূর্ণ প্রশ্ন:

> Problem কি Running Result চাইছে, নাকি Final Result?

সাধারণ Sum Problem:

```text
Final Result
```

তাই:

```text
Loop
↓
Finish Processing
↓
Print
```

---

# Lesson 19 - Common Bug: `=` এবং `+=`

এই দুইটা এক না।

ধরো:

```text
sum = 10
arr[i] = 5
```

যদি লিখো:

```c
sum = arr[i];
```

তাহলে:

```text
sum = 5
```

পুরোনো `10` হারিয়ে গেল।

কিন্তু:

```c
sum += arr[i];
```

মানে:

```text
sum = 10 + 5
```

Result:

```text
15
```

Accumulation-এর জন্য সাধারণত দরকার:

```c
sum += value;
```

---

# Lesson 20 - Problem Statement Translation

এখন কিছু common signal চিনে রাখো।

Problem-এ যদি থাকে:

```text
Find the total...
```

Brain:

```text
Accumulator
```

---

যদি থাকে:

```text
Find the sum...
```

Brain:

```text
Accumulator
```

---

যদি থাকে:

```text
How many...
```

Brain:

```text
Counter
```

---

যদি থাকে:

```text
Count the number of...
```

Brain:

```text
Condition
↓
Counter
```

---

যদি থাকে:

```text
Sum of all even numbers...
```

Brain:

```text
Traversal
↓
Condition
↓
Accumulator
```

---

যদি থাকে:

```text
Count all even numbers...
```

Brain:

```text
Traversal
↓
Condition
↓
Counter
```

শুধু একটি শব্দ বদলেছে:

```text
Sum
```

versus:

```text
Count
```

কিন্তু Solution Pattern বদলে গেছে।

---

# 🧠 Accumulation vs Counting Decision Map

```text
                    Problem
                       ↓
             Multiple Values আছে?
                       ↓
                      Yes
                       ↓
                   Traversal
                       ↓
              কী Result দরকার?
                 ↙           ↘
              Total         How Many?
                ↓               ↓
          Accumulator         Counter
                ↓               ↓
           sum += value       count++
```

Condition থাকলে:

```text
Traversal
    ↓
Condition
    ↓
Match?
    ↓
┌───────────────┐
│               │
↓               ↓
Add Value     Add 1
│               │
↓               ↓
Accumulator   Counter
```

---

# 🔬 Worked Example 1 - Sum of Negative Numbers

Problem:

> Find the sum of all negative numbers.

Input:

```text
6
5 -2 7 -4 -3 10
```

## Thinking

সব Number দেখতে হবে:

```text
Traversal
```

শুধু Negative দরকার:

```text
Condition
```

Negative Value যোগ করতে হবে:

```text
Accumulator
```

Final Pipeline:

```text
Traversal
↓
Condition Checking
↓
Accumulator
```

Dry Run:

| Value | Negative? |  Sum |
| ----: | :-------: | ---: |
|     5 |    No     |    0 |
|    -2 |    Yes    |   -2 |
|     7 |    No     |   -2 |
|    -4 |    Yes    |   -6 |
|    -3 |    Yes    |   -9 |
|    10 |    No     |   -9 |

Final:

```text
-9
```

---

# 🔬 Worked Example 2 - Count Multiples of 5

Problem:

> Count how many numbers are divisible by 5.

Input:

```text
6
10 7 15 8 20 21
```

Thinking:

```text
Traversal
↓
Divisibility Check
↓
Counter
```

Condition:

```c
arr[i] % 5 == 0
```

Dry Run:

| Value | Divisible by 5? | Count |
| ----: | :-------------: | ----: |
|    10 |       Yes       |     1 |
|     7 |       No        |     1 |
|    15 |       Yes       |     2 |
|     8 |       No        |     2 |
|    20 |       Yes       |     3 |
|    21 |       No        |     3 |

Final:

```text
3
```

---

# 🧪 Chapter 3 Exercise

আজকের pacing ঠিক রাখতে **৬টি focused exercise** থাকবে।

প্রথমে Thinking Pipeline লিখবে, তারপর Code করবে।

---

## Exercise 1 - Sum of All Elements

Problem:

> Given `N` integers, find their total sum.

Input:

```text
5
10 20 30 40 50
```

Expected Output:

```text
150
```

নিজে লিখবে:

```text
Pattern:

???
↓
???
```

---

## Exercise 2 - Count Positive Numbers

Input:

```text
6
-2 5 0 -7 9 3
```

Expected Output:

```text
3
```

নিজে Pipeline লিখবে।

---

## Exercise 3 - Sum of Even Numbers

Input:

```text
6
3 8 5 12 7 10
```

Expected Output:

```text
30
```

Hint:

```text
Traversal
↓
???
↓
???
```

---

## Exercise 4 - Count Numbers Divisible by Both 3 and 5

Input:

```text
6
15 9 10 30 7 45
```

Expected Output:

```text
3
```

নিজে Condition তৈরি করবে।

---

## Exercise 5 - Count Even and Odd

Input:

```text
7
1 2 3 4 5 6 8
```

Expected Output:

```text
Even: 4
Odd: 3
```

এখানে:

```text
One Traversal
↓
Two Counters
```

ব্যবহার করবে।

---

## Exercise 6 - Challenge

Problem:

> Find the average of all positive numbers.

Input:

```text
6
10 -5 20 -3 30 40
```

Positive Values:

```text
10 20 30 40
```

Sum:

```text
100
```

Count:

```text
4
```

Average:

```text
25.00
```

এখানে নিজে Pattern Pipeline তৈরি করবে।

---

# 📝 Chapter 3 Assignment

এই Assignment-এ Code লিখবে না। শুধু **Pattern Recognition + Explanation**।

## Task 1

Problem:

> Find the sum of all numbers greater than 100.

লিখবে:

```text
Pattern:

???
↓
???
↓
???

Why?

...
```

---

## Task 2

Problem:

> Count how many characters in a string are uppercase letters.

লিখবে:

```text
Pattern:

???
↓
???
↓
???

Why?

...
```

---

## Task 3

Problem:

> Given N integers, count positive, negative and zero values separately.

লিখবে:

```text
Pattern:

???
↓
???
↓
???

Variables Needed:

???
```

---

## Task 4

Problem:

> Find the sum and count of all numbers divisible by 7.

এখানে একই Traversal-এর মধ্যে দুই ধরনের Result রাখতে হবে।

নিজে লিখবে:

```text
Pattern:

???
↓
???
↓
???
```

এবং:

```text
Variables Needed:

???
```

---

## Task 5 - Concept Check

নিজের ভাষায় উত্তর দেবে:

```text
Accumulator এবং Counter-এর মধ্যে পার্থক্য কী?
```

Code Example দিয়ে বোঝাবে।

---

# 📌 Chapter 3 Quick Revision Sheet

```text
SUM / TOTAL
    ↓
Accumulator
```

```text
HOW MANY / COUNT
    ↓
Counter
```

```text
Sum of All
    ↓
Traversal
    ↓
Accumulator
```

```text
Count Matching Values
    ↓
Traversal
    ↓
Condition
    ↓
Counter
```

```text
Sum Matching Values
    ↓
Traversal
    ↓
Condition
    ↓
Accumulator
```

```text
Average of Matching Values
    ↓
Traversal
    ↓
Condition
    ↓
Accumulator + Counter
    ↓
sum / count
```

---

# 🎓 Chapter 3 Final Mental Model

আজ থেকে Problem দেখলে:

```text
"Sum"
```

দেখে শুধু Code মনে করবে না।

Brain বলবে:

```text
Need Traversal?
↓
Yes

Need Total?
↓
Accumulator
```

আর:

```text
"How many?"
```

দেখলে Brain বলবে:

```text
Need Traversal
↓
Need Condition
↓
Need Counter
```

Chapter 2 এবং Chapter 3 মিলিয়ে এখন তোমার Pattern Vocabulary দাঁড়ালো:

```text
Traversal
│
├── Output
│
├── Condition → Output
│
├── Accumulation
│
├── Condition → Accumulation
│
├── Condition → Counter
│
└── Condition → Accumulator + Counter
```

এটাই Day 2-এর মূল foundation। **Chapter 4-এ Maximum + Minimum Pattern** আসবে-সেখানে আমরা বিশেষভাবে `max = 0` bug, negative input, initialization, comparison এবং update logic নিয়ে কাজ করব।

---

# Day 2 - Chapter 4

# 🏆 Maximum & Minimum Pattern

Chapter 2-এ আমরা শিখেছি:

```text
Traversal
```

Chapter 3-এ শিখেছি:

```text
Traversal
    ↓
Accumulation
```

এবং:

```text
Traversal
    ↓
Condition
    ↓
Counter
```

এখন আমরা আরেকটি অত্যন্ত গুরুত্বপূর্ণ Pattern শিখব:

```text
Traversal
    ↓
Comparison
    ↓
Update
```

এই Pattern ব্যবহার করে আমরা বের করতে পারি:

```text
Maximum
Minimum
Largest
Smallest
Highest
Lowest
Best
Worst
```

আজকের Chapter-এর সবচেয়ে গুরুত্বপূর্ণ বিষয় শুধু Maximum বা Minimum-এর Code শেখা নয়।

মূল লক্ষ্য হলো এই চিন্তাটা তৈরি করা:

```text
Current Best Result
        ↓
New Value-এর সঙ্গে Compare
        ↓
Better?
   ↙          ↘
 Yes          No
  ↓            ↓
Update       Ignore
```

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Maximum Pattern কী;
* Minimum Pattern কী;
* Comparison + Update কীভাবে কাজ করে;
* Candidate বলতে কী বোঝায়;
* Current Best কী;
* কেন `max = 0` Dangerous;
* কেন `min = 0`-ও Dangerous;
* Safe Initialization কী;
* কেন Maximum Traversal অনেক সময় `i = 1` থেকে শুরু হয়;
* Conditional Maximum কী;
* Maximum Value এবং Maximum Index-এর পার্থক্য;
* Multiple Maximum থাকলে কীভাবে চিন্তা করতে হয়;
* Second Maximum নিয়ে প্রাথমিক ধারণা;
* Common Max/Min Bugs।

Core Mental Model:

```text
Need Best Value
      ↓
Take a Valid Starting Candidate
      ↓
Traverse Remaining Values
      ↓
Compare
      ↓
Better Candidate Found?
      ↓
Update Current Best
```

---

# Lesson 1 - Maximum Problem কী?

ধরো Array:

```text
5 8 2 12 7
```

Problem:

> Largest Number বের করো।

মানুষ হিসেবে আমরা দেখি:

```text
5
↓
8
↓
2
↓
12
↓
7
```

এবং বুঝি:

```text
Maximum = 12
```

কিন্তু Computer-কে একটা Process দিতে হবে।

Process:

```text
প্রথমে 5-কে Maximum ধরো

max = 5
```

তারপর:

```text
8 > 5?
Yes

max = 8
```

তারপর:

```text
2 > 8?
No

max = 8
```

তারপর:

```text
12 > 8?
Yes

max = 12
```

তারপর:

```text
7 > 12?
No

max = 12
```

Final:

```text
Maximum = 12
```

---

# Lesson 2 - Maximum Pattern

Maximum বের করার মূল Pattern:

```text
Take Initial Candidate
        ↓
Traversal
        ↓
Compare Current Element with Maximum
        ↓
Is Current Element Larger?
        ↓
       Yes
        ↓
Update Maximum
```

Code Logic:

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

Final Output:

```c
printf("%d\n", max);
```

---

# Lesson 3 - Current Best এবং Candidate

এই দুইটা Concept বুঝলে Maximum/Minimum Pattern অনেক সহজ হয়ে যায়।

ধরো:

```text
5 8 2 12 7
```

প্রথমে:

```text
Current Best = 5
```

পরের Value:

```text
Candidate = 8
```

Compare:

```text
8 > 5
```

তাই:

```text
Current Best = 8
```

পরের Candidate:

```text
2
```

Compare:

```text
2 > 8?
No
```

তাই:

```text
Current Best এখনও 8
```

এভাবে:

```text
Current Best
      ↓
Candidate আসে
      ↓
Compare
      ↓
Better হলে Update
```

এই Mental Model শুধু Maximum-এর জন্য না।

ভবিষ্যতে আরও অনেক Problem-এ কাজে লাগবে।

যেমন:

```text
Highest Score
Lowest Cost
Shortest Distance
Best Profit
Longest Length
Earliest Time
Latest Time
```

সবক্ষেত্রে Core Idea:

```text
Current Best
    ↓
Compare Candidate
    ↓
Update if Better
```

---

# Lesson 4 - Maximum Dry Run

Array:

```text
4 9 3 15 8
```

Initialization:

```text
max = arr[0]
max = 4
```

Traversal শুরু:

```text
i = 1
```

Dry Run:

|  `i` | `arr[i]` | Current `max` | Comparison     | New `max` |
| ---: | -------: | ------------: | -------------- | --------: |
|    1 |        9 |             4 | `9 > 4` → Yes  |         9 |
|    2 |        3 |             9 | `3 > 9` → No   |         9 |
|    3 |       15 |             9 | `15 > 9` → Yes |        15 |
|    4 |        8 |            15 | `8 > 15` → No  |        15 |

Final:

```text
max = 15
```

---

# Lesson 5 - কেন `i = 1` থেকে শুরু?

দেখো:

```c
int max = arr[0];
```

আমরা ইতোমধ্যে প্রথম Element:

```text
arr[0]
```

কে Maximum হিসেবে ব্যবহার করেছি।

তাই Traversal:

```c
for (int i = 1; i < n; i++)
```

থেকে শুরু করা যায়।

কারণ:

```text
arr[0]
```

ইতোমধ্যে Process হয়েছে।

Flow:

```text
arr[0]
   ↓
Initial Maximum

arr[1]
arr[2]
arr[3]
...
   ↓
Compare with Maximum
```

তবে যদি `i = 0` থেকেও শুরু করো:

```c
int max = arr[0];

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

এটাও Correct।

শুধু প্রথম Element নিজের সঙ্গেই Compare হবে:

```text
arr[0] > arr[0]?
```

যা unnecessary, কিন্তু Wrong নয়।

Preferred:

```c
for (int i = 1; i < n; i++)
```

---

# Lesson 6 - Complete Maximum Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
```

Thinking Pipeline:

```text
Need Largest Value
        ↓
Traversal
        ↓
Comparison
        ↓
Maximum Update
        ↓
Output
```

---

# Lesson 7 - The Dangerous `max = 0` Bug

এটা খুব গুরুত্বপূর্ণ।

Beginner-রা অনেক সময় লেখে:

```c
int max = 0;
```

তারপর:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

কিছু Input-এর জন্য এটা কাজ করবে।

Input:

```text
5
2 8 3 10 4
```

Output:

```text
10
```

তখন মনে হবে Code ঠিক।

কিন্তু এবার Input:

```text
5
-5 -2 -8 -1 -9
```

Actual Maximum:

```text
-1
```

কিন্তু তোমার Code-এ:

```text
max = 0
```

Check:

```text
-5 > 0? No

-2 > 0? No

-8 > 0? No

-1 > 0? No

-9 > 0? No
```

তাই Final:

```text
max = 0
```

কিন্তু `0` তো Array-তেই নেই!

Correct Answer:

```text
-1
```

Wrong Answer:

```text
0
```

---

# Lesson 8 - Safe Initialization

Maximum-এর জন্য Safe Approach:

```c
int max = arr[0];
```

কেন?

কারণ:

```text
arr[0]
```

নিশ্চিতভাবে Input Data-এর একটি Valid Value।

Array:

```text
-5 -2 -8 -1 -9
```

Initialization:

```text
max = -5
```

তারপর:

```text
-2 > -5?
Yes

max = -2
```

তারপর:

```text
-8 > -2?
No
```

তারপর:

```text
-1 > -2?
Yes

max = -1
```

Correct।

Rule:

> **Best Value Problem-এ সম্ভব হলে একটি Valid Input Value দিয়ে Initialize করো।**

---

# Lesson 9 - Minimum Pattern

Maximum-এর মতোই Minimum।

Array:

```text
5 8 2 12 7
```

Problem:

> Smallest Number বের করো।

প্রথমে:

```text
min = 5
```

তারপর:

```text
8 < 5?
No
```

```text
2 < 5?
Yes

min = 2
```

```text
12 < 2?
No
```

```text
7 < 2?
No
```

Final:

```text
Minimum = 2
```

Code:

```c
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

Pattern:

```text
Traversal
    ↓
Comparison
    ↓
Minimum Update
```

---

# Lesson 10 - `min = 0` কেন Dangerous?

ধরো:

```c
int min = 0;
```

Input:

```text
5
4 8 2 10 7
```

Actual Minimum:

```text
2
```

কিন্তু Check:

```text
4 < 0? No

8 < 0? No

2 < 0? No

10 < 0? No

7 < 0? No
```

Final:

```text
min = 0
```

Wrong।

কারণ `0` Array-এর অংশই না।

Safe:

```c
int min = arr[0];
```

---

# Lesson 11 - Maximum এবং Minimum একসঙ্গে

Problem:

> Find both Maximum and Minimum.

Array:

```text
5 8 2 12 7
```

আমরা একই Traversal-এ দুটো Result বের করতে পারি।

Initialization:

```c
int max = arr[0];
int min = arr[0];
```

Traversal:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

Mental Model:

```text
                Traversal
                    ↓
              Current Value
               ↙          ↘
      Compare with Max   Compare with Min
             ↓                 ↓
       Update Max?         Update Min?
```

Complete Code:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
```

---

# Lesson 12 - Maximum Value vs Maximum Index

ধরো Array:

```text
Index:   0   1   2   3   4

Value:   5   8   2  12   7
```

Maximum Value:

```text
12
```

Maximum Value-এর Index:

```text
3
```

দুটো আলাদা Result।

---

## শুধু Maximum Value দরকার

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

---

## Maximum-এর Index-ও দরকার

```c
int max = arr[0];
int max_index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        max_index = i;
    }
}
```

যখন Maximum Update হবে:

```text
Maximum Value Update
        +
Maximum Index Update
```

দুটো একসঙ্গে হবে।

---

# Lesson 13 - Index Track করার Dry Run

Array:

```text
4 9 3 15 8
```

Initial:

```text
max = 4
max_index = 0
```

Dry Run:

|  `i` | Value | Better? | `max` | `max_index` |
| ---: | ----: | :-----: | ----: | ----------: |
|    1 |     9 |   Yes   |     9 |           1 |
|    2 |     3 |   No    |     9 |           1 |
|    3 |    15 |   Yes   |    15 |           3 |
|    4 |     8 |   No    |    15 |           3 |

Final:

```text
Maximum Value = 15
Maximum Index = 3
```

---

# Lesson 14 - Duplicate Maximum

Array:

```text
5 12 7 12 3
```

Maximum:

```text
12
```

কিন্তু `12` দুইবার আছে।

Indices:

```text
1
3
```

এখন Problem কী চাইছে সেটা গুরুত্বপূর্ণ।

---

## First Maximum Position

যদি Code হয়:

```c
if (arr[i] > max)
```

তাহলে Equal Value পেলে Update হবে না।

Result:

```text
First Maximum Index
```

অর্থাৎ:

```text
1
```

---

## Last Maximum Position

যদি Code হয়:

```c
if (arr[i] >= max)
```

তাহলে Equal Maximum পেলেও Update হবে।

Result:

```text
Last Maximum Index
```

অর্থাৎ:

```text
3
```

এখানে ছোট একটা Operator:

```text
>
```

versus:

```text
>=
```

Problem-এর Result বদলে দিতে পারে।

তাই Statement ভালোভাবে পড়বে।

---

# Lesson 15 - Conditional Maximum

সব সময় পুরো Array-এর Maximum চাইবে না।

Problem:

> Find the largest even number.

Input:

```text
5
3 8 5 12 7
```

Even Values:

```text
8 12
```

Maximum Even:

```text
12
```

Thinking:

```text
Traversal
    ↓
Condition
    ↓
Even?
    ↓
Comparison
    ↓
Maximum Update
```

এখানে একটি সমস্যা আছে।

আমরা কি লিখব:

```c
int max_even = arr[0];
```

না।

কারণ:

```text
arr[0]
```

Even নাও হতে পারে।

Input:

```text
3 8 10
```

এখানে:

```text
arr[0] = 3
```

কিন্তু `3` Valid Candidate না, কারণ আমরা শুধু Even Number-এর মধ্যে Maximum খুঁজছি।

---

# Lesson 16 - Valid Candidate Initialization

Conditional Maximum-এ আমাদের প্রথম **Valid Candidate** দরকার।

একটি Beginner-friendly Approach:

```c
int found = 0;
int max_even;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (found == 0)
        {
            max_even = arr[i];
            found = 1;
        }
        else if (arr[i] > max_even)
        {
            max_even = arr[i];
        }
    }
}
```

শেষে:

```c
if (found == 1)
{
    printf("%d\n", max_even);
}
else
{
    printf("No even number\n");
}
```

Mental Model:

```text
Traversal
    ↓
Valid Candidate?
    ↓
First Valid Candidate?
   ↙              ↘
 Yes               No
  ↓                 ↓
Initialize       Compare
  ↓                 ↓
found = 1         Update?
```

এই Pattern ভবিষ্যতে খুব কাজে লাগবে।

---

# Lesson 17 - Maximum Difference: Max - Min

Problem:

> Find the difference between the largest and smallest number.

Input:

```text
5
8 2 15 4 10
```

Maximum:

```text
15
```

Minimum:

```text
2
```

Difference:

```text
15 - 2 = 13
```

Thinking:

```text
Traversal
    ↓
Track Maximum + Minimum
    ↓
max - min
```

Code Logic:

```c
int max = arr[0];
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }
}

int difference = max - min;
```

---

# Lesson 18 - Maximum Input না Maximum Output?

Problem Statement carefully পড়বে।

ধরো:

> Find the student with the highest score.

Data:

```text
Student ID:  101  102  103  104

Score:        70   95   80   90
```

শুধু Maximum Score বের করলে:

```text
95
```

কিন্তু Problem যদি Student ID চায়:

```text
102
```

তাহলে শুধু Maximum Value Track করলেই হবে না।

Maximum Update-এর সময় associated information-ও Update করতে হবে।

Mental Model:

```text
Better Score Found
        ↓
Update Maximum Score
        +
Update Student ID
```

এটাকে এখন Concept হিসেবে মনে রাখো।

পরে Struct এবং Pair-type Problem-এ আরও দেখবে।

---

# Lesson 19 - Second Maximum-এর Basic Idea

এই Chapter-এ আমরা Second Maximum পুরোপুরি Deep Dive করব না, কারণ Day 2-এর scope concise রাখতে হবে।

কিন্তু Concept জানা দরকার।

Array:

```text
5 12 7 9 3
```

Largest:

```text
12
```

Second Largest:

```text
9
```

এখানে শুধু:

```text
max
```

Track করলে হবে না।

আমাদের দুইটি State দরকার:

```text
largest
second_largest
```

Concept:

```text
New Value আসে
        ↓
Largest-এর চেয়ে বড়?
   ↙               ↘
 Yes                No
  ↓                  ↓
Old Largest      Second-এর চেয়ে বড়?
becomes Second        ↓
New Value             Yes
becomes Largest        ↓
                  Update Second
```

এটা Day 2-এর Final Assignment-এর Challenge হিসেবে থাকবে, কিন্তু এখনই Code মুখস্থ করার দরকার নেই।

---

# Lesson 20 - Common Bug: Comparison উল্টো করা

Maximum Problem:

Correct:

```c
if (arr[i] > max)
{
    max = arr[i];
}
```

ভুল:

```c
if (arr[i] < max)
{
    max = arr[i];
}
```

এই Code Maximum না, বরং Minimum-এর দিকে যাবে।

মনে রাখো:

```text
Maximum
    ↓
Current Value > Current Maximum?
```

```text
Minimum
    ↓
Current Value < Current Minimum?
```

---

# Lesson 21 - Common Bug: Wrong Update

ভুল:

```c
if (arr[i] > max)
{
    arr[i] = max;
}
```

এখানে তুমি Maximum Update করছো না।

বরং Array Element পরিবর্তন করে দিচ্ছো।

Correct:

```c
if (arr[i] > max)
{
    max = arr[i];
}
```

Thinking:

```text
Candidate Better
      ↓
Current Best = Candidate
```

অর্থাৎ:

```text
max = arr[i]
```

---

# Lesson 22 - Common Bug: Input Constraint না দেখা

ধরো Problem-এর Constraint:

```text
-10^9 ≤ A[i] ≤ 10^9
```

এখন যদি Sum করতে হয়:

```text
N = 100000
```

তাহলে Total Sum `int` range ছাড়িয়ে যেতে পারে।

Maximum/Minimum-এর একটি Element হয়তো `int`-এ fit করবে, কিন্তু Sum নাও করতে পারে।

তাই Contest-এ Constraint দেখে Data Type নির্বাচন করতে হবে।

উদাহরণ:

```c
long long sum = 0;
```

এই Chapter Maximum/Minimum নিয়ে হলেও Rule মনে রাখবে:

```text
Problem Statement
      ↓
Constraints
      ↓
Choose Data Type
      ↓
Write Logic
```

---

# 🧠 Maximum vs Minimum Decision Map

```text
                  Problem
                     ↓
              Need Best Value?
                     ↓
                    Yes
                     ↓
               What is "Best"?
                ↙          ↘
            Largest       Smallest
               ↓             ↓
          Initialize     Initialize
          Valid Value    Valid Value
               ↓             ↓
           Traversal      Traversal
               ↓             ↓
          `>` Compare    `<` Compare
               ↓             ↓
          Update Max     Update Min
```

---

# 🔬 Worked Example 1 - Maximum from Negative Numbers

Problem:

> Find the maximum number.

Input:

```text
5
-10 -3 -20 -1 -7
```

Initialization:

```text
max = -10
```

Dry Run:

| Value | Comparison       | Maximum |
| ----: | ---------------- | ------: |
|    -3 | `-3 > -10` → Yes |      -3 |
|   -20 | `-20 > -3` → No  |      -3 |
|    -1 | `-1 > -3` → Yes  |      -1 |
|    -7 | `-7 > -1` → No   |      -1 |

Final:

```text
-1
```

এখানেই বোঝা যায়:

```c
int max = 0;
```

কেন ভুল হতে পারে।

---

# 🔬 Worked Example 2 - Minimum and Its Index

Problem:

> Find the minimum value and its index.

Input:

```text
5
8 3 10 1 7
```

Thinking:

```text
Traversal
    ↓
Comparison
    ↓
Smaller?
    ↓
Update Minimum
    +
Update Index
```

Code:

```c
int min = arr[0];
int min_index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
        min_index = i;
    }
}
```

Result:

```text
Minimum = 1
Index = 3
```

---

# 🧪 Chapter 4 Exercise

আজকের pacing অনুযায়ী **৬টি focused exercise** থাকবে।

প্রতিটি Problem-এ:

```text
1. Pattern লিখবে
2. Own Example বানাবে
3. Dry Run করবে
4. তারপর Code করবে
```

---

## Exercise 1 - Find Maximum

Problem:

> Given `N` integers, find the largest value.

Input:

```text
5
7 2 15 4 10
```

Expected Output:

```text
15
```

Pattern:

```text
???
↓
???
↓
???
```

---

## Exercise 2 - Find Minimum

Input:

```text
6
8 3 12 1 9 5
```

Expected Output:

```text
1
```

নিজে Pattern লিখবে।

---

## Exercise 3 - Find Maximum and Minimum Together

Input:

```text
7
10 3 25 7 1 18 9
```

Expected Output:

```text
Maximum: 25
Minimum: 1
```

Requirement:

```text
One Traversal
↓
Track Two Results
```

---

## Exercise 4 - Maximum Index

Input:

```text
6
4 10 7 25 3 8
```

Expected Output:

```text
Maximum: 25
Index: 3
```

Requirement:

```text
Maximum Update
        +
Index Update
```

---

## Exercise 5 - Difference Between Maximum and Minimum

Input:

```text
5
8 2 15 4 10
```

Expected Output:

```text
13
```

নিজে Pipeline তৈরি করবে।

---

## Exercise 6 - Challenge: Largest Even Number

Input:

```text
7
3 8 5 12 7 20 9
```

Expected Output:

```text
20
```

Pattern Hint:

```text
Traversal
↓
Condition
↓
Valid Candidate Initialization
↓
Comparison
↓
Update
```

আর এই Input-টাও Test করবে:

```text
5
3 5 7 9 11
```

কারণ এখানে কোনো Even Number নেই।

---

# 📝 Chapter 4 Assignment

Assignment-এ প্রথমে Code লিখবে না।

Pattern Recognition এবং Explanation লিখবে।

---

## Task 1

Problem:

> Find the smallest negative number.

উদাহরণ:

```text
5 -2 7 -10 -3
```

Answer:

```text
-10
```

লিখবে:

```text
Pattern:

???
↓
???
↓
???
↓
???

Why?

...
```

**সতর্কতা:** “smallest negative” মানে zero-এর কাছাকাছি negative না; numeric value হিসেবে সবচেয়ে ছোটটি।

---

## Task 2

Problem:

> Find the largest positive number.

লিখবে:

```text
Pattern:

???
↓
???
↓
???
↓
???

Initialization Problem:

...

Solution Idea:

...
```

---

## Task 3

Problem:

> Find Maximum Value and its first occurrence index.

Array:

```text
5 12 7 12 3
```

Expected:

```text
Maximum = 12
Index = 1
```

প্রশ্ন:

```text
Comparison-এ `>` ব্যবহার করবে নাকি `>=`?

কারণ:
...
```

---

## Task 4

Problem:

> Find Maximum Value and its last occurrence index.

একই Array:

```text
5 12 7 12 3
```

Expected:

```text
Maximum = 12
Index = 3
```

প্রশ্ন:

```text
Comparison কী হবে?

কারণ:
...
```

---

## Task 5 - Bug Hunt

এই Code-এর Problem খুঁজে বের করো:

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

লিখবে:

```text
Bug:

...

Failing Test Case:

...

Expected Output:

...

Actual Output:

...

Fix:

...
```

---

## Task 6 - Challenge Thinking

Problem:

> Find the second largest distinct number.

Input:

```text
7
5 12 7 12 9 3 8
```

Expected:

```text
9
```

এখন Code না পারলেও সমস্যা নেই।

শুধু লিখবে:

```text
What states do I need?

1. ???
2. ???

What happens when a new largest value appears?

...

What happens when a value is smaller than largest
but greater than second largest?

...
```

---

# 📌 Chapter 4 Quick Revision Sheet

```text
Maximum
    ↓
Traversal
    ↓
Comparison: `>`
    ↓
Update Max
```

```text
Minimum
    ↓
Traversal
    ↓
Comparison: `<`
    ↓
Update Min
```

```text
Maximum + Index
    ↓
Traversal
    ↓
Comparison
    ↓
Update Value + Index
```

```text
Conditional Maximum
    ↓
Traversal
    ↓
Condition
    ↓
Find Valid Candidate
    ↓
Comparison
    ↓
Update
```

```text
First Maximum Position
    ↓
Usually `>`
```

```text
Last Maximum Position
    ↓
Usually `>=`
```

---

# 🎓 Chapter 4 Final Mental Model

আজ থেকে:

```text
Largest
Highest
Maximum
Best Score
```

দেখলে Brain:

```text
Need Best Candidate
        ↓
Valid Initialization
        ↓
Traversal
        ↓
Comparison
        ↓
Update Maximum
```

আর:

```text
Smallest
Lowest
Minimum
Cheapest
```

দেখলে Brain:

```text
Need Best Candidate
        ↓
Valid Initialization
        ↓
Traversal
        ↓
Comparison
        ↓
Update Minimum
```

এখন পর্যন্ত Day 2-তে তোমার Pattern Map:

```text
Traversal
│
├── Output
│
├── Condition → Output
│
├── Accumulation
│
├── Condition → Accumulation
│
├── Condition → Counter
│
├── Accumulator + Counter
│
├── Comparison → Maximum Update
│
├── Comparison → Minimum Update
│
└── Condition → Valid Candidate → Comparison → Update
```

**Day 2 - Chapter 4 এখানেই শেষ।** পরের Chapter হবে **Chapter 5 - Linear Search Pattern**। সেখানে `target`, `found flag`, `break`, first occurrence, last occurrence, count occurrences এবং search-এর common bugs একসঙ্গে শেখা হবে।

---

# Day 2 - Chapter 5

# 🔎 Linear Search Pattern

Chapter 2-এ আমরা শিখেছি:

```text
Traversal
```

Chapter 3-এ:

```text
Traversal
    ↓
Accumulation / Counting
```

Chapter 4-এ:

```text
Traversal
    ↓
Comparison
    ↓
Update Best Result
```

এখন আমরা শিখব আরেকটি অত্যন্ত গুরুত্বপূর্ণ Pattern:

```text
Traversal
    ↓
Target Comparison
    ↓
Match Found?
```

এই Pattern-এর নাম:

# **Linear Search**

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Search Problem কী;
* Linear Search কী;
* Target কী;
* Match কী;
* `found` Flag কী;
* Flag কেন ব্যবহার করা হয়;
* `break` কেন এবং কখন ব্যবহার করতে হয়;
* Early Termination কী;
* First Occurrence কী;
* Last Occurrence কী;
* Count Occurrence কী;
* Value Search এবং Index Search-এর পার্থক্য;
* `break` দিলে Result কীভাবে বদলে যায়;
* Search এবং Counting-এর সম্পর্ক;
* Linear Search-এর Time Complexity কেন `O(n)`;
* Common Search Bugs কী।

আজকের Core Mental Model:

```text
Need to find something
        ↓
Take Target
        ↓
Traverse Elements
        ↓
Compare Element with Target
        ↓
Match?
   ↙           ↘
 Yes           No
  ↓             ↓
Found       Continue Search
```

---

# Lesson 1 - Search Problem কী?

ধরো Array:

```text
5 8 2 12 7
```

Problem:

> Array-তে `12` আছে কি না বের করো।

এখানে:

```text
Target = 12
```

আমরা Check করব:

```text
5 == 12?
No

8 == 12?
No

2 == 12?
No

12 == 12?
Yes
```

আমরা Target পেয়ে গেছি।

Result:

```text
Found
```

এই Process হলো:

```text
Traversal
    ↓
Target Comparison
    ↓
Match Detection
```

---

# Lesson 2 - Linear Search কী?

সহজ ভাষায়:

> **একটি Collection-এর Element-গুলো একে একে Check করে Target খোঁজাকে Linear Search বলে।**

ধরো:

```text
Array:

10 20 30 40 50
```

Target:

```text
40
```

Search:

```text
10
↓
Match? No

20
↓
Match? No

30
↓
Match? No

40
↓
Match? Yes
```

Target Found।

এখানে Search একদিক থেকে একটার পর একটা Element Check করছে।

তাই:

```text
Linear
```

অর্থাৎ:

```text
One by One
```

---

# Lesson 3 - Target কী?

Search Problem-এ আমরা যেটা খুঁজছি সেটাই:

> **Target**

Example:

> Find whether `7` exists in the array.

এখানে:

```text
Target = 7
```

Problem:

> Find the index of `100`.

এখানে:

```text
Target = 100
```

Problem:

> Count how many times `5` occurs.

এখানেও:

```text
Target = 5
```

অর্থাৎ Target একই ধরনের হতে পারে, কিন্তু Problem-এর Goal আলাদা হতে পারে।

```text
Target Search
│
├── Exists?
│
├── First Position?
│
├── Last Position?
│
└── How Many Times?
```

এই পার্থক্যটা আজ পরিষ্কার করব।

---

# Lesson 4 - Basic Linear Search

Problem:

> Check whether Target exists.

Input:

```text
5
10 20 30 40 50

Target = 30
```

Basic Logic:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
}
```

এখানে একটা সমস্যা আছে।

ধরো Target:

```text
100
```

কোনো Match পাওয়া গেল না।

তাহলে Code কিছুই Print করবে না।

আমাদের দরকার:

```text
Found
```

অথবা:

```text
Not Found
```

এই Problem Solve করতে আমরা ব্যবহার করব:

# **Flag Variable**

---

# Lesson 5 - Flag Variable কী?

Flag হলো একটি Variable যেটা কোনো Condition বা Event-এর State মনে রাখে।

সহজভাবে:

```text
Something happened?
```

তার উত্তর রাখে:

```text
Yes / No
```

C-তে Beginner-friendlyভাবে:

```text
0 = No
1 = Yes
```

Search শুরু করার আগে:

```c
int found = 0;
```

মানে:

```text
এখনও Target পাওয়া যায়নি
```

Target পেলে:

```c
found = 1;
```

মানে:

```text
Target পাওয়া গেছে
```

Flow:

```text
found = 0
    ↓
Search শুরু
    ↓
Target Found?
    ↓
found = 1
```

---

# Lesson 6 - Basic Search with Flag

```c
#include <stdio.h>

int main()
{
    int n;
    int target;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}
```

Mental Model:

```text
Target Input
    ↓
found = 0
    ↓
Traversal
    ↓
arr[i] == target?
    ↓
Yes
    ↓
found = 1
    ↓
break
    ↓
Final Decision
```

---

# Lesson 7 - Flag কেন দরকার?

ধরো:

```text
Array:

3 8 5 12 7
```

Target:

```text
12
```

Dry Run:

|  `i` | `arr[i]` | Match? | `found` |
| ---: | -------: | :----: | ------: |
|    0 |        3 |   No   |       0 |
|    1 |        8 |   No   |       0 |
|    2 |        5 |   No   |       0 |
|    3 |       12 |  Yes   |       1 |

শেষে:

```text
found = 1
```

তাই:

```text
Found
```

এবার Target:

```text
100
```

পুরো Traversal-এর পরেও:

```text
found = 0
```

তাই:

```text
Not Found
```

Flag মূলত Search-এর Result **মনে রাখছে**।

---

# Lesson 8 - `break` কী করছে?

এই Code দেখো:

```c
if (arr[i] == target)
{
    found = 1;
    break;
}
```

`break` মানে:

> **বর্তমান Loop সঙ্গে সঙ্গে বন্ধ করে দাও।**

ধরো:

```text
Array:

2 5 7 9 10
```

Target:

```text
7
```

Search:

```text
2 → No

5 → No

7 → Yes
```

এখন Problem শুধু জানতে চায়:

```text
7 আছে কি?
```

Answer ইতোমধ্যে পাওয়া গেছে।

তাই:

```text
9
10
```

Check করার আর দরকার নেই।

Flow:

```text
Traversal
    ↓
Target Found
    ↓
Answer Known
    ↓
Stop Searching
```

এটাই:

# **Early Termination**

---

# Lesson 9 - সব Search-এ `break` দেওয়া যাবে?

না।

এটা অত্যন্ত গুরুত্বপূর্ণ।

Problem:

> Target আছে কি না?

Target পেলে:

```text
Answer Known
```

তাই:

```c
break;
```

দেওয়া যায়।

কিন্তু Problem:

> Target কতবার আছে?

Array:

```text
5 2 5 7 5 9
```

Target:

```text
5
```

Occurrences:

```text
Index 0
Index 2
Index 4
```

Total:

```text
3
```

যদি প্রথম `5` পেয়েই:

```c
break;
```

দাও, তাহলে বাকি `5`-গুলো আর Check হবে না।

তাই:

```text
Exists?
    ↓
Can Stop Early

Count All?
    ↓
Must Continue
```

---

# Lesson 10 - Search Problem-এর বিভিন্ন ধরন

একই Array:

```text
5 12 7 12 3
```

Target:

```text
12
```

Problem হতে পারে:

### Type 1 - Exists?

```text
12 আছে?
```

Answer:

```text
Yes
```

---

### Type 2 - First Occurrence

```text
প্রথম 12 কোথায়?
```

Answer:

```text
Index 1
```

---

### Type 3 - Last Occurrence

```text
শেষ 12 কোথায়?
```

Answer:

```text
Index 3
```

---

### Type 4 - Count Occurrences

```text
12 কতবার আছে?
```

Answer:

```text
2
```

একই Target।

একই Array।

কিন্তু Pattern-এর শেষ অংশ বদলে যাচ্ছে।

---

# Lesson 11 - Existence Search

Problem:

> Check whether Target exists.

Pattern:

```text
Traversal
    ↓
Target Comparison
    ↓
Match?
    ↓
Set Flag
    ↓
Early Termination
```

Code:

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}
```

শেষে:

```c
if (found)
{
    printf("Found\n");
}
else
{
    printf("Not Found\n");
}
```

এখানে:

```c
if (found)
```

এবং:

```c
if (found == 1)
```

এই ক্ষেত্রে একই অর্থে ব্যবহার করা যায়।

কারণ:

```text
0     → False
Non-zero → True
```

তবে Bootcamp-এর এই পর্যায়ে clarity-এর জন্য:

```c
if (found == 1)
```

লিখলেও সমস্যা নেই।

---

# Lesson 12 - First Occurrence

Array:

```text
5 12 7 12 3
```

Target:

```text
12
```

First Occurrence:

```text
Index 1
```

আমাদের প্রথম Match পাওয়ার পর Search বন্ধ করতে হবে।

Initialization:

```c
int index = -1;
```

কেন `-1`?

কারণ Valid Array Index সাধারণত:

```text
0 থেকে n - 1
```

তাই:

```text
-1
```

মানে:

```text
Not Found
```

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

Flow:

```text
index = -1
    ↓
Traversal
    ↓
Target Match?
    ↓
Yes
    ↓
Save Index
    ↓
break
```

---

# Lesson 13 - কেন First Occurrence-এ `break`?

Array:

```text
5 12 7 12 3
```

Search:

```text
Index 0 → 5

Index 1 → 12 → Match
```

আমরা First Occurrence চাই।

তাই Answer:

```text
1
```

এরপর Index 3-এর `12` আমাদের দরকার নেই।

তাই:

```c
break;
```

দেওয়া হবে।

Mental Model:

```text
First Match
    ↓
Save Index
    ↓
Stop
```

---

# Lesson 14 - Last Occurrence

একই Array:

```text
5 12 7 12 3
```

Target:

```text
12
```

Last Occurrence:

```text
Index 3
```

এবার প্রথম Match পেয়ে থামলে চলবে না।

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

খেয়াল করো:

```text
No break
```

Dry Run:

|  `i` | Value | Match? | `index` |
| ---: | ----: | :----: | ------: |
|    0 |     5 |   No   |      -1 |
|    1 |    12 |  Yes   |       1 |
|    2 |     7 |   No   |       1 |
|    3 |    12 |  Yes   |       3 |
|    4 |     3 |   No   |       3 |

Final:

```text
index = 3
```

কারণ প্রতিবার Match হলে পুরোনো Index নতুন Index দিয়ে Replace হয়েছে।

---

# Lesson 15 - First vs Last Occurrence

এই পার্থক্য মনে রাখো:

## First Occurrence

```text
Match
↓
Save Index
↓
Break
```

Code:

```c
if (arr[i] == target)
{
    index = i;
    break;
}
```

---

## Last Occurrence

```text
Match
↓
Save Index
↓
Continue Search
↓
Future Match হলে Update
```

Code:

```c
if (arr[i] == target)
{
    index = i;
}
```

মূল পার্থক্য:

```text
First Occurrence
        ↓
      break
```

```text
Last Occurrence
        ↓
    no break
```

---

# Lesson 16 - Reverse Search দিয়ে Last Occurrence

Last Occurrence বের করার আরেকটি উপায় আছে।

Array:

```text
5 12 7 12 3
```

Target:

```text
12
```

Right থেকে Search:

```text
Index 4 → 3 → No

Index 3 → 12 → Match
```

এটাই Last Occurrence।

Code:

```c
int index = -1;

for (int i = n - 1; i >= 0; i--)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

Mental Model:

```text
Reverse Traversal
        ↓
Target Comparison
        ↓
First Match from Right
        ↓
Actually Last Occurrence
```

এটা Chapter 2-এর Reverse Traversal এবং Chapter 5-এর Search Pattern-এর Combination।

---

# Lesson 17 - Count Occurrences

Problem:

> Target কতবার আছে?

Array:

```text
5 2 5 7 5 9
```

Target:

```text
5
```

Thinking:

```text
Need all Elements
        ↓
Traversal

Need Target Match
        ↓
Condition

Need How Many
        ↓
Counter
```

Final Pattern:

```text
Traversal
    ↓
Target Comparison
    ↓
Counter
```

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
    }
}
```

Final:

```text
count = 3
```

এখানে তুমি দেখতে পাচ্ছো:

> নতুন Problem অনেক সময় সম্পূর্ণ নতুন Pattern নয়; পুরোনো Pattern-এর Combination।

এখানে:

```text
Linear Search Thinking
        +
Counting Pattern
```

একসঙ্গে কাজ করছে।

---

# Lesson 18 - Search এবং Count-এর পার্থক্য

Problem 1:

> `7` আছে কি?

আমাদের দরকার:

```text
Boolean-like State
```

তাই:

```text
Flag
```

---

Problem 2:

> `7` কতবার আছে?

আমাদের দরকার:

```text
Number of Matches
```

তাই:

```text
Counter
```

Comparison:

| Problem Goal    | Variable |
| --------------- | -------- |
| Exists?         | `found`  |
| First Position? | `index`  |
| Last Position?  | `index`  |
| How Many?       | `count`  |

Problem Statement-এর Goal বুঝে State Variable ঠিক করবে।

---

# Lesson 19 - Search করে Value না Index?

ধরো:

```text
Index:    0   1   2   3   4

Value:   10  20  30  40  50
```

Target:

```text
40
```

Problem বলতে পারে:

> Is `40` present?

Answer:

```text
Yes
```

অথবা:

> Find the index of `40`.

Answer:

```text
3
```

তাই Problem পড়ে বুঝতে হবে:

```text
Need Existence?
```

নাকি:

```text
Need Position?
```

Code-এর State সে অনুযায়ী বদলাবে।

---

# Lesson 20 - Common Bug: `=` vs `==`

Search-এর সবচেয়ে Dangerous Beginner Bug-এর একটি।

Correct:

```c
if (arr[i] == target)
```

মানে:

```text
Compare
```

কিন্তু:

```c
if (arr[i] = target)
```

এখানে Comparison হচ্ছে না।

এখানে Assignment হচ্ছে।

অর্থাৎ:

```text
arr[i]-এর Value বদলে Target বসিয়ে দেওয়া হচ্ছে
```

মনে রাখবে:

```text
=     Assignment

==    Equality Comparison
```

Search Problem:

```text
Need Comparison
```

তাই:

```c
==
```

---

# Lesson 21 - Common Bug: Loop-এর ভিতরে `Not Found` Print

এই Code ভুল:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

ধরো:

```text
Array:

5 8 12
```

Target:

```text
12
```

Output হবে:

```text
Not Found
Not Found
Found
```

কিন্তু আমরা চাই:

```text
Found
```

কেন ভুল হলো?

কারণ:

```text
একটা Element Target না হওয়া
```

মানে এই না যে:

```text
পুরো Array-তে Target নেই
```

`Not Found` বলা যাবে কখন?

```text
পুরো Search শেষ
        ↓
কোনো Match নেই
        ↓
Not Found
```

Correct Mental Model:

```text
Search Entire Array
        ↓
Track Match State
        ↓
After Search
        ↓
Final Decision
```

---

# Lesson 22 - Common Bug: Flag Reset করা

ভুল:

```c
for (int i = 0; i < n; i++)
{
    int found = 0;

    if (arr[i] == target)
    {
        found = 1;
    }
}
```

Problem:

```text
প্রতিটি Iteration-এ
found আবার 0 হচ্ছে
```

Correct:

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}
```

Rule:

```text
Initialize State
        ↓
Before Loop

Update State
        ↓
Inside Loop

Use Final State
        ↓
After Loop
```

---

# Lesson 23 - Common Bug: First Occurrence-এ `break` না দেওয়া

Problem:

> Find first occurrence.

Array:

```text
5 12 7 12 3
```

Wrong:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

Result:

```text
3
```

কিন্তু First Occurrence:

```text
1
```

কারণ Search continue করেছে এবং পরে Index overwrite হয়েছে।

Correct:

```c
if (arr[i] == target)
{
    index = i;
    break;
}
```

---

# Lesson 24 - Common Bug: Count Occurrence-এ `break`

Problem:

> Count Target Occurrences.

Wrong:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
        break;
    }
}
```

এখানে সর্বোচ্চ:

```text
count = 1
```

হতে পারবে।

কারণ প্রথম Match-এর পর Loop বন্ধ।

Count All-এর জন্য:

```text
Full Traversal Required
```

তাই:

```text
No break
```

---

# Lesson 25 - Linear Search Time Complexity

এখন Complexity খুব Deep-এ যাচ্ছি না।

শুধু Contest-এর জন্য Basic Understanding।

ধরো Array Size:

```text
n
```

Worst Case-এ Target হতে পারে:

```text
শেষ Element
```

অথবা:

```text
Array-তে নেই
```

তখন আমাদের সব Element Check করতে হবে।

```text
n Elements
    ↓
At most n Checks
```

তাই Linear Search-এর Worst-case Time Complexity:

```text
O(n)
```

সহজভাবে:

```text
Array Size বাড়লে
Search Work-ও Linearly বাড়ে
```

Example:

```text
10 Elements
→ At most 10 checks
```

```text
1000 Elements
→ At most 1000 checks
```

এখন শুধু এটুকুই মনে রাখবে।

---

# Lesson 26 - Read and Search Without Array?

ধরো Problem:

> Nটি Number Input নাও এবং বলো Target আছে কি না।

যদি পরে Number-গুলো দরকার না হয়, theoretically Input নেওয়ার সময়ই Search করা যায়।

Example:

```c
int found = 0;
int x;

for (int i = 0; i < n; i++)
{
    scanf("%d", &x);

    if (x == target)
    {
        found = 1;
    }
}
```

কিন্তু এখানে একটি গুরুত্বপূর্ণ বিষয় আছে।

Input stream-এর সব Value পড়তে হতে পারে, বিশেষ করে program structure অনুযায়ী।

তাই:

```text
Target Found
```

হলেও Input Loop থেকে হঠাৎ `break` দেওয়া সব situation-এ ভালো design নয়।

Bootcamp-এর জন্য Rule:

> যদি Array Problem হিসেবে Data Store করা থাকে, Search Loop-এ `break` ব্যবহার করো। Input পড়ার Loop এবং Search-এর Logic আলাদা রাখলে Beginner হিসেবে reasoning পরিষ্কার থাকবে।

---

# Lesson 27 - Search Pattern Recognition Signals

Problem Statement-এ এই ধরনের শব্দ দেখলে Search চিন্তা করবে:

```text
Find whether...
```

```text
Check if X exists...
```

```text
Locate...
```

```text
Find the position...
```

```text
Find the first occurrence...
```

```text
Find the last occurrence...
```

```text
How many times X appears...
```

তখন Brain:

```text
Target আছে
    ↓
Elements inspect করতে হবে
    ↓
Traversal
    ↓
Target Comparison
```

তারপর Goal অনুযায়ী:

```text
Exists?
    ↓
Flag
```

```text
First Position?
    ↓
Index + Break
```

```text
Last Position?
    ↓
Index Update
```

```text
How Many?
    ↓
Counter
```

---

# 🧠 Linear Search Decision Map

```text
                    SEARCH PROBLEM
                           ↓
                     Target কী?
                           ↓
                     Traverse Data
                           ↓
                  arr[i] == target?
                           ↓
                         Match
                           ↓
                Problem কী জানতে চায়?
       ┌─────────────┬─────────────┬──────────────┐
       ↓             ↓             ↓              ↓
     Exists?       First         Last           Count
       ↓             ↓             ↓              ↓
     Flag       Save Index     Update Index     Counter
       ↓             ↓             ↓              ↓
     Break         Break         Continue       Continue
```

---

# 🔬 Worked Example 1 - Search Target

Problem:

> Check whether `7` exists.

Input:

```text
6
3 8 5 7 12 10
```

Target:

```text
7
```

### Step 1 - Need Search

```text
Target = 7
```

### Step 2 - Need Elements

```text
Traversal
```

### Step 3 - Need Existence Only

```text
Flag
```

### Step 4 - Once Found

```text
Early Termination
```

Final Pipeline:

```text
Traversal
    ↓
Target Comparison
    ↓
Flag Update
    ↓
Break
```

Dry Run:

| Value | Match? | `found` |
| ----: | :----: | ------: |
|     3 |   No   |       0 |
|     8 |   No   |       0 |
|     5 |   No   |       0 |
|     7 |  Yes   |       1 |

তারপর:

```text
break
```

Final:

```text
Found
```

---

# 🔬 Worked Example 2 - Count Occurrences

Problem:

> Count how many times `5` appears.

Input:

```text
7
5 2 5 8 5 3 5
```

Thinking:

```text
Traversal
    ↓
Target Comparison
    ↓
Counter
```

Dry Run:

| Value | Match? | Count |
| ----: | :----: | ----: |
|     5 |  Yes   |     1 |
|     2 |   No   |     1 |
|     5 |  Yes   |     2 |
|     8 |   No   |     2 |
|     5 |  Yes   |     3 |
|     3 |   No   |     3 |
|     5 |  Yes   |     4 |

Final:

```text
4
```

---

# 🔬 Worked Example 3 - First Occurrence

Problem:

> Find the first index of Target.

Input:

```text
7
3 8 5 8 10 8 2
```

Target:

```text
8
```

Thinking:

```text
Traversal
    ↓
Target Comparison
    ↓
First Match
    ↓
Save Index
    ↓
Break
```

Dry Run:

```text
Index 0
Value 3
No Match
```

```text
Index 1
Value 8
Match
```

তাই:

```text
index = 1
```

তারপর:

```text
break
```

---

# 🧪 Chapter 5 Exercise

আজকের Day 2 pacing বজায় রাখতে **৬টি focused exercise** থাকবে।

প্রতিটি Exercise-এ:

```text
1. Pattern লিখবে
2. Own Test Case বানাবে
3. Dry Run করবে
4. Code লিখবে
5. অন্তত 3টি Test Case চালাবে
```

---

## Exercise 1 - Exists or Not

Problem:

> Check whether Target exists in the array.

Input:

```text
5
10 20 30 40 50
30
```

Expected Output:

```text
Found
```

আর Test করবে:

```text
5
10 20 30 40 50
100
```

Expected:

```text
Not Found
```

নিজে Pattern লিখবে।

---

## Exercise 2 - First Occurrence

Input:

```text
7
3 8 5 8 10 8 2
8
```

Expected Output:

```text
1
```

Requirement:

```text
First Match
↓
Save Index
↓
Early Termination
```

---

## Exercise 3 - Last Occurrence

একই Input:

```text
7
3 8 5 8 10 8 2
8
```

Expected Output:

```text
5
```

এখানে চিন্তা করবে:

```text
break দেব?
```

নাকি:

```text
Search Continue করব?
```

---

## Exercise 4 - Count Occurrences

Input:

```text
8
5 2 5 8 5 3 5 10
5
```

Expected Output:

```text
4
```

Pattern নিজে লিখবে।

---

## Exercise 5 - Search Negative Target

Input:

```text
6
5 -2 8 -10 3 7
-10
```

Expected:

```text
Found at index 3
```

এই Exercise-এর উদ্দেশ্য:

```text
Search Logic positive number-এর উপর নির্ভর করে না
```

Target negative হলেও একই Pattern।

---

## Exercise 6 - Challenge: First and Last Position

Problem:

> Target-এর First এবং Last Occurrence বের করো।

Input:

```text
8
5 2 7 2 9 2 10 2
2
```

Expected:

```text
First: 1
Last: 7
```

Requirement:

```text
One Full Traversal
```

Hint:

```text
first = -1
last = -1
```

কিন্তু পুরো Logic নিজে তৈরি করবে।

---

# 📝 Chapter 5 Assignment

Assignment-এ প্রথমে **Code লিখবে না**। Pattern Recognition, State Selection এবং Reasoning লিখবে।

---

## Task 1 - Existence Search

Problem:

> Check whether `X` exists in an array.

লিখবে:

```text
Pattern:

???
↓
???
↓
???
↓
???

State Variable:

???

Why?

...
```

---

## Task 2 - First Occurrence

Problem:

> Find the first index of `X`.

লিখবে:

```text
Initial State:

???

Pattern:

???
↓
???
↓
???
↓
???

Why is break needed?

...
```

---

## Task 3 - Last Occurrence

Problem:

> Find the last index of `X`.

লিখবে:

```text
Initial State:

???

Pattern:

???
↓
???
↓
???

Why should search continue?

...
```

---

## Task 4 - Count Occurrences

Problem:

> Count how many times `X` appears.

লিখবে:

```text
Pattern:

???
↓
???
↓
???

Variable Needed:

???

Should I use break?

Yes / No

Why?

...
```

---

## Task 5 - Bug Hunt

এই Code-এর সমস্যা বের করো:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

লিখবে:

```text
Bug:

...

Why is it wrong?

...

Failing Test Case:

...

Correct Thinking:

...
```

---

## Task 6 - Bug Hunt

Problem:

> Find first occurrence.

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

Answer করবে:

```text
এই Code আসলে কী বের করছে?

...

First Occurrence-এর জন্য কী পরিবর্তন করতে হবে?

...

কেন?

...
```

---

## Task 7 - Pattern Combination

Problem:

> Count how many times the Maximum Value appears.

Example:

```text
7
5 12 7 12 3 12 8
```

Maximum:

```text
12
```

Count:

```text
3
```

এখন Code লিখবে না।

শুধু চিন্তা করো:

```text
Phase 1:
???

Phase 2:
???
```

তারপর Pattern লিখবে:

```text
???
↓
???
↓
???
↓
???
```

এটা Chapter 4 এবং Chapter 5-এর Combination।

---

# 🧠 Important Pattern Combination

এখন পর্যন্ত আমরা Pattern আলাদা করে শিখছি।

কিন্তু বাস্তব Problem-এ এগুলো combine হবে।

উদাহরণ:

> Maximum Number কতবার আছে?

Thinking:

```text
Traversal
    ↓
Comparison
    ↓
Maximum Find
```

তারপর:

```text
Traversal
    ↓
Target Comparison
    ↓
Counter
```

অর্থাৎ:

```text
Maximum Pattern
        +
Counting/Search Pattern
```

আবার Problem:

> First Even Number-এর Index বের করো।

Thinking:

```text
Traversal
    ↓
Condition
    ↓
First Valid Match
    ↓
Save Index
    ↓
Break
```

তাই Pattern Library-কে আলাদা আলাদা Box হিসেবে দেখবে না।

বরং:

```text
Small Patterns
      ↓
Combine
      ↓
Solve Bigger Problem
```

---

# 📌 Chapter 5 Quick Revision Sheet

```text
Exists?
    ↓
Traversal
    ↓
Target Comparison
    ↓
Flag
    ↓
Break
```

```text
First Occurrence
    ↓
Traversal
    ↓
Target Comparison
    ↓
Save Index
    ↓
Break
```

```text
Last Occurrence
    ↓
Traversal
    ↓
Target Comparison
    ↓
Update Index
    ↓
Continue
```

```text
Count Occurrences
    ↓
Traversal
    ↓
Target Comparison
    ↓
Counter
    ↓
No Break
```

```text
Search Result State

Exists?        → found
Position?      → index
How Many?      → count
```

---

# ⚡ `break` Decision Rule

এটা খুব ভালো করে মনে রাখবে:

```text
Match পাওয়ার পর Answer সম্পূর্ণ জানা গেছে?
                ↓
        ┌───────┴───────┐
        ↓               ↓
       Yes              No
        ↓               ↓
      break         Continue
```

Examples:

| Problem                       | `break`? |
| ----------------------------- | :------: |
| Target exists?                |   Yes    |
| First occurrence              |   Yes    |
| Last occurrence, forward scan |    No    |
| Count occurrences             |    No    |
| Print all matches             |    No    |

এটা মুখস্থ করার চেয়ে Rule-টা বোঝো:

> **Answer complete হলে stop; future elements answer বদলাতে পারলে continue।**

---

# 🎓 Chapter 5 Final Mental Model

আজ থেকে Search Problem দেখলে প্রথমে Code চিন্তা করবে না।

নিজেকে জিজ্ঞেস করবে:

```text
আমি কী খুঁজছি?
        ↓
Target
```

তারপর:

```text
কোথায় খুঁজছি?
        ↓
Collection / Array
```

তারপর:

```text
সব Element Check করতে হবে?
        ↓
Traversal
```

তারপর সবচেয়ে গুরুত্বপূর্ণ প্রশ্ন:

```text
Problem কী Result চাইছে?
```

তার ভিত্তিতে:

```text
Exists?
    ↓
Flag
```

```text
First Position?
    ↓
Index + Break
```

```text
Last Position?
    ↓
Index Update + Continue
```

```text
How Many?
    ↓
Counter
```

---

# 🗺️ Day 2 Progress

এখন পর্যন্ত আমরা শেষ করেছি:

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation + Counting
│
├── ✅ Chapter 4 - Maximum + Minimum
│
├── ✅ Chapter 5 - Linear Search
│
├── ⏳ Chapter 6 - Mixed Pattern Problems
│
└── ⏳ Chapter 7 - Mistake Review + Pattern Library + Final Assignment
```

Day 2-এর core theory এখন শেষ। **Chapter 6 থেকে নতুন theory অনেক কম থাকবে**-সেখানে আসল কাজ হবে Problem দেখে নিজে ঠিক করা:

```text
Traversal?
Accumulator?
Counter?
Maximum?
Minimum?
Search?
Flag?
Index?
Break?
```

অর্থাৎ Chapter 6 হবে আজ পর্যন্ত শেখা Pattern-গুলো **mix করে problem-solving practice**, আর Chapter 7 দিয়ে Day 2 close হবে।

---

# Day 2 - Chapter 6

# 🧩 Mixed Pattern Problems

Chapter 1 থেকে Chapter 5 পর্যন্ত আমরা একেকটি Core Pattern আলাদাভাবে শিখেছি।

```text
Chapter 1
    ↓
Array Mental Model

Chapter 2
    ↓
Traversal

Chapter 3
    ↓
Accumulation + Counting

Chapter 4
    ↓
Maximum + Minimum

Chapter 5
    ↓
Linear Search
```

এখন পর্যন্ত Problem দেখলে Pattern অনেকটা পরিষ্কার ছিল।

যেমন:

```text
Find Sum
    ↓
Accumulation
```

অথবা:

```text
Find Maximum
    ↓
Comparison + Update
```

কিন্তু Contest-এর Problem সাধারণত সব সময় এত সরাসরি হবে না।

একটা Problem-এর মধ্যে থাকতে পারে:

```text
Traversal
    +
Condition
    +
Counter
    +
Maximum
```

অথবা:

```text
Maximum
    +
Search
    +
Counter
```

অথবা:

```text
Condition
    +
Accumulator
    +
Counter
    +
Average
```

তাই Chapter 6-এর লক্ষ্য নতুন Pattern শেখা না।

লক্ষ্য হলো:

> **ছোট ছোট Pattern Combine করে বড় Problem Solve করা।**

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Mixed Pattern Problem কী;
* Problem-কে ছোট Subproblem-এ ভাঙতে হয় কীভাবে;
* Single-pass Solution কী;
* Multi-pass Solution কী;
* কখন এক Traversal যথেষ্ট;
* কখন দুইটি Traversal দরকার;
* Pattern Dependency কী;
* Maximum + Counter কীভাবে Combine হয়;
* Condition + Maximum কীভাবে কাজ করে;
* Search + Count কীভাবে Combine হয়;
* Accumulator + Counter দিয়ে Average কীভাবে বের হয়;
* Multiple State Variable কীভাবে Track করতে হয়;
* Problem Statement থেকে Pattern Pipeline কীভাবে তৈরি করতে হয়।

আজকের Core Mental Model:

```text
Big Problem
     ↓
Break into Small Questions
     ↓
Identify Pattern for Each Question
     ↓
Check Dependency
     ↓
Combine Patterns
     ↓
Choose One Pass or Multiple Passes
     ↓
Code
```

---

# Lesson 1 - Mixed Pattern Problem কী?

ধরো Problem:

> Array-এর Maximum Number কতবার আছে?

Input:

```text
7
5 12 7 12 3 12 8
```

Expected Output:

```text
3
```

এটা শুধু Maximum Problem না।

আবার শুধু Counting Problem-ও না।

প্রথমে জানতে হবে:

```text
Maximum Value কী?
```

তারপর জানতে হবে:

```text
Maximum Value কতবার আছে?
```

অর্থাৎ:

```text
Problem
    ↓
Subproblem 1
Find Maximum
    ↓
Subproblem 2
Count Maximum Occurrences
```

Pattern:

```text
Traversal
    ↓
Comparison
    ↓
Maximum Update

        +

Traversal
    ↓
Target Comparison
    ↓
Counter
```

এটাই Mixed Pattern Problem।

---

# Lesson 2 - Problem Decomposition

একটা বড় Problem দেখলে সঙ্গে সঙ্গে Code লিখবে না।

Problem-টাকে প্রশ্নে ভাঙবে।

ধরো:

> Find the average of all positive numbers.

প্রথমে প্রশ্ন:

```text
কোন Values দরকার?
```

Answer:

```text
Positive Values
```

তাই:

```text
Condition
```

তারপর:

```text
Average বের করতে কী দরকার?
```

Formula:

```text
Average = Sum / Count
```

তাই দরকার:

```text
Accumulator
+
Counter
```

সব Values দেখতে হবে:

```text
Traversal
```

Final Pipeline:

```text
Traversal
    ↓
Condition
    ↓
Positive?
    ↓
Accumulator + Counter
    ↓
Average
```

এটাই Problem Decomposition।

---

# Lesson 3 - Pattern Combination Formula

Mixed Problem-এর জন্য একটা Mental Formula মনে রাখো:

```text
What data must I inspect?
        ↓
Traversal

What values are relevant?
        ↓
Condition

What result must I remember?
        ↓
State Variable

How does that state change?
        ↓
Update Rule
```

উদাহরণ:

> Count negative numbers.

```text
What data?
    ↓
All Elements
    ↓
Traversal

Relevant?
    ↓
Negative
    ↓
Condition

Remember?
    ↓
How Many
    ↓
Counter

Update?
    ↓
count++
```

Final:

```text
Traversal
↓
Condition
↓
Counter
```

আরেকটা:

> Find largest even number.

```text
What data?
    ↓
All Elements
    ↓
Traversal

Relevant?
    ↓
Even Numbers
    ↓
Condition

Remember?
    ↓
Current Largest Even
    ↓
Maximum State

Update?
    ↓
Compare + Update
```

Final:

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
Comparison
↓
Maximum Update
```

---

# Lesson 4 - State Variable কী?

এখন পর্যন্ত আমরা অনেক ধরনের Variable ব্যবহার করেছি।

```text
sum
count
max
min
found
index
```

এগুলো শুধু সাধারণ Variable না।

Problem Solving-এর দৃষ্টিতে এগুলো হলো:

> **State Variables**

অর্থাৎ Traversal চলার সময় Problem-এর গুরুত্বপূর্ণ Information মনে রাখে।

উদাহরণ:

| Variable | কী মনে রাখে?              |
| -------- | --------------------- |
| `sum`    | এখন পর্যন্ত Total       |
| `count`  | এখন পর্যন্ত Match Count |
| `max`    | এখন পর্যন্ত Largest     |
| `min`    | এখন পর্যন্ত Smallest    |
| `found`  | Target পাওয়া গেছে কি না     |
| `index`  | Match-এর Position     |

Mixed Problem-এ একাধিক State থাকতে পারে।

যেমন:

> Positive Numbers-এর Average।

দরকার:

```text
sum
count
```

> Maximum এবং তার Index।

দরকার:

```text
max
max_index
```

> Maximum Value কতবার আছে।

দরকার হতে পারে:

```text
max
count
```

Problem Solve করার আগে প্রশ্ন করবে:

> **Traversal-এর সময় আমাকে কী কী Information মনে রাখতে হবে?**

এটাই State Selection।

---

# Lesson 5 - Single Pass কী?

একবার Array Traverse করে Problem Solve করলে তাকে সহজভাবে:

> **Single-pass Solution**

বলতে পারি।

Problem:

> Maximum এবং Minimum একসঙ্গে বের করো।

Input:

```text
6
8 3 15 2 10 7
```

আমরা একবার Traverse করেই দুটো Result বের করতে পারি।

```c
int max = arr[0];
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

Pattern:

```text
One Traversal
      ↓
Current Element
   ↙           ↘
Compare Max   Compare Min
     ↓             ↓
Update Max    Update Min
```

এখানে:

```text
Number of Passes = 1
```

---

# Lesson 6 - Multi-pass কী?

একই Array একাধিকবার Traverse করলে:

> **Multi-pass Solution**

ধরো:

> Maximum Value কতবার আছে?

Beginner-friendly Solution:

### Pass 1

```text
Find Maximum
```

### Pass 2

```text
Count Maximum
```

Code:

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}

int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        count++;
    }
}
```

Pipeline:

```text
Pass 1
    ↓
Traversal
    ↓
Comparison
    ↓
Maximum

Pass 2
    ↓
Traversal
    ↓
Target Comparison
    ↓
Counter
```

এখানে:

```text
Number of Passes = 2
```

---

# Lesson 7 - কেন দুই Pass দরকার হতে পারে?

Problem:

> Maximum কতবার আছে?

Count করার আগে Target জানা দরকার।

কিন্তু Target হলো:

```text
Maximum
```

যেটা শুরুতে জানা নেই।

তাই Beginner-friendly reasoning:

```text
Maximum Unknown
      ↓
Find Maximum First
      ↓
Now Maximum Known
      ↓
Count It
```

এটাকে আমরা বলতে পারি:

# **Pattern Dependency**

কারণ:

```text
Counting Step
```

নির্ভর করছে:

```text
Maximum Finding Step
```

-এর Result-এর উপর।

Mental Model:

```text
Phase 2 needs Phase 1 result?
              ↓
             Yes
              ↓
       Multi-phase Thinking
```

---

# Lesson 8 - এক Pass-এ Maximum Count করা যায়?

হ্যাঁ, যায়।

কিন্তু Logic একটু বেশি careful হতে হবে।

ধরো Array:

```text
5 12 7 12 3 12
```

State:

```text
max
count
```

Logic:

```text
New Value > max
        ↓
New Maximum Found
        ↓
max = value
count = 1
```

আর:

```text
New Value == max
        ↓
Same Maximum Again
        ↓
count++
```

Code:

```c
int max = arr[0];
int count = 1;

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        count = 1;
    }
    else if (arr[i] == max)
    {
        count++;
    }
}
```

কিন্তু Bootcamp-এর এই Stage-এ দুই-pass Solution বুঝতে পারা বেশি গুরুত্বপূর্ণ।

কারণ:

```text
Clear Correct Solution
        >
Clever but Confusing Solution
```

Contest-এ আগে Correct Solution।

Optimization পরে।

---

# Lesson 9 - One Pass না Two Pass?

এই Rule অনুসরণ করতে পারো।

## যদি Resultগুলো Independent হয়

যেমন:

```text
Maximum
+
Minimum
```

দুটো একই Element দেখে আলাদাভাবে Update করা যায়।

তাই:

```text
One Pass
```

---

## যদি Second Result First Result-এর উপর নির্ভর করে

যেমন:

```text
Find Maximum
        ↓
Count Maximum
```

Beginner-friendly approach:

```text
Two Pass
```

---

## Mental Rule

```text
Can I update all required states correctly
while seeing each element once?
              ↓
        ┌─────┴─────┐
        ↓           ↓
       Yes          No / Unclear
        ↓           ↓
    One Pass      Multi Pass
```

---

# Lesson 10 - Mixed Problem 1: Count Maximum Occurrences

Problem:

> Find how many times the maximum value occurs.

Input:

```text
7
5 12 7 12 3 12 8
```

## Step 1 - Find Maximum

Pattern:

```text
Traversal
↓
Comparison
↓
Maximum Update
```

Result:

```text
max = 12
```

## Step 2 - Count Maximum

Pattern:

```text
Traversal
↓
Target Comparison
↓
Counter
```

Target:

```text
12
```

Final:

```text
count = 3
```

Complete Code:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Lesson 11 - Mixed Problem 2: Average of Positive Numbers

Problem:

> Find the average of positive numbers.

Input:

```text
6
10 -5 20 -3 30 40
```

Positive Values:

```text
10 20 30 40
```

Sum:

```text
100
```

Count:

```text
4
```

Average:

```text
25.00
```

Pattern:

```text
Traversal
↓
Condition
↓
Accumulator + Counter
↓
Average
```

Code Logic:

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        sum += arr[i];
        count++;
    }
}
```

তারপর:

```c
if (count > 0)
{
    double average = (double)sum / count;

    printf("%.2lf\n", average);
}
```

এখানে `count > 0` Check গুরুত্বপূর্ণ।

কারণ:

```text
No Positive Number
        ↓
count = 0
        ↓
sum / count
        ↓
Division by Zero
```

---

# Lesson 12 - Mixed Problem 3: Largest Even Number

Problem:

> Find the largest even number.

Input:

```text
7
3 8 5 12 7 20 9
```

Even Values:

```text
8 12 20
```

Maximum:

```text
20
```

Pattern:

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
Comparison
↓
Maximum Update
```

এখানে সরাসরি:

```c
int max_even = arr[0];
```

Safe না।

কারণ `arr[0]` Odd হতে পারে।

Beginner-friendly Solution:

```c
int found = 0;
int max_even;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (found == 0)
        {
            max_even = arr[i];
            found = 1;
        }
        else if (arr[i] > max_even)
        {
            max_even = arr[i];
        }
    }
}
```

Final Decision:

```c
if (found == 1)
{
    printf("%d\n", max_even);
}
else
{
    printf("No even number\n");
}
```

এখানে Pattern Combination:

```text
Traversal
    +
Condition
    +
Flag
    +
Maximum
```

---

# Lesson 13 - Mixed Problem 4: First Positive Number

Problem:

> Find the index of the first positive number.

Input:

```text
6
-5 -2 0 8 10 3
```

Expected:

```text
3
```

Thinking:

```text
Need every Element?
        ↓
Traversal

Need specific category?
        ↓
Condition: arr[i] > 0

Need which Match?
        ↓
First Match

Need what Result?
        ↓
Index

After First Match?
        ↓
Break
```

Final Pattern:

```text
Traversal
↓
Condition
↓
First Valid Match
↓
Save Index
↓
Break
```

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        index = i;
        break;
    }
}
```

এখানে আমরা নির্দিষ্ট Target Value খুঁজছি না।

কিন্তু Search Pattern-এর Idea ব্যবহার করছি:

```text
Find First Matching Element
```

এটা গুরুত্বপূর্ণ।

Search মানেই শুধু:

```text
arr[i] == target
```

না।

Search হতে পারে:

```text
First Positive
First Even
First Number > 100
First Divisible by 7
```

---

# Lesson 14 - Mixed Problem 5: Last Negative Number

Problem:

> Find the index of the last negative number.

Input:

```text
7
5 -2 8 -10 3 -7 9
```

Negative Indices:

```text
1
3
5
```

Expected:

```text
5
```

Thinking:

```text
Traversal
↓
Condition
↓
Match?
↓
Update Index
↓
Continue Search
```

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] < 0)
    {
        index = i;
    }
}
```

No `break`.

কারণ future Element answer বদলাতে পারে।

---

# Lesson 15 - Mixed Problem 6: Sum Between Minimum and Maximum?

এখন Problem Statement পড়ার গুরুত্ব দেখি।

Problem:

> Find the sum of the minimum and maximum values.

Input:

```text
5
8 2 15 4 10
```

Minimum:

```text
2
```

Maximum:

```text
15
```

Answer:

```text
17
```

Pattern:

```text
Traversal
↓
Track Min + Max
↓
min + max
```

এখানে Element-গুলোর মাঝের Sum করতে হবে না।

Problem-এর ভাষা:

```text
sum of minimum and maximum
```

মানে:

```text
min + max
```

এটা:

```text
sum between minimum and maximum
```

এর থেকে আলাদা Problem।

Contest-এ একটা শব্দের পার্থক্য পুরো Logic বদলে দিতে পারে।

---

# Lesson 16 - Multiple Counters

Problem:

> Count Positive, Negative এবং Zero আলাদাভাবে।

Input:

```text
7
5 -2 0 8 -1 0 3
```

Expected:

```text
Positive: 3
Negative: 2
Zero: 2
```

State Variables:

```text
positive
negative
zero
```

Initialization:

```c
int positive = 0;
int negative = 0;
int zero = 0;
```

Traversal:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        positive++;
    }
    else if (arr[i] < 0)
    {
        negative++;
    }
    else
    {
        zero++;
    }
}
```

Mental Model:

```text
                 Traversal
                     ↓
                Current Value
             ┌───────┼───────┐
             ↓       ↓       ↓
          Positive Negative  Zero
             ↓       ↓       ↓
           pos++   neg++    zero++
```

এখানে:

```text
One Traversal
+
Three Counters
```

---

# Lesson 17 - `if` vs `else if` in Classification

আগের Problem:

```text
Positive
Negative
Zero
```

একটি Number একই সঙ্গে দুই Category-তে পড়তে পারে?

না।

একটি Number হয়:

```text
Positive
```

অথবা:

```text
Negative
```

অথবা:

```text
Zero
```

তাই:

```c
if (...)
{
}
else if (...)
{
}
else
{
}
```

Logical।

এটাকে ভাবতে পারো:

```text
Mutually Exclusive Categories
```

অর্থাৎ একটির বেশি Category একই সঙ্গে True হবে না।

কিন্তু Problem যদি হয়:

> Count numbers divisible by 2 and count numbers divisible by 3.

একটি Number:

```text
6
```

একই সঙ্গে:

```text
Divisible by 2
```

এবং:

```text
Divisible by 3
```

তাই এখানে:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}

if (arr[i] % 3 == 0)
{
    count3++;
}
```

দুইটা independent `if` লাগতে পারে।

যদি `else if` দাও:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}
else if (arr[i] % 3 == 0)
{
    count3++;
}
```

তাহলে `6` প্রথম Condition-এ ঢোকার পর দ্বিতীয়টা Check হবে না।

এই Bug Contest-এ খুব common।

---

# Lesson 18 - Independent Conditions vs Exclusive Conditions

## Exclusive Categories

একটা Value শুধু এক Category-তে যাবে।

Example:

```text
Positive / Negative / Zero
```

Use:

```text
if
else if
else
```

---

## Independent Conditions

একটা Value একাধিক Condition Match করতে পারে।

Example:

```text
Divisible by 2
Divisible by 3
```

`6` দুইটাই Match করে।

Use:

```text
if

if
```

Mental Question:

> **একটি Element কি একাধিক Category-তে Count হতে পারে?**

যদি:

```text
Yes
```

তাহলে independent Conditions দরকার হতে পারে।

যদি:

```text
No
```

তাহলে `if / else if / else` chain উপযুক্ত হতে পারে।

---

# Lesson 19 - Order Matters

Mixed Pattern Problem-এ Operation-এর Order গুরুত্বপূর্ণ হতে পারে।

ধরো Single-pass Maximum Count:

```c
if (arr[i] > max)
{
    max = arr[i];
    count = 1;
}
else if (arr[i] == max)
{
    count++;
}
```

কেন নতুন Maximum পেলে:

```text
count = 1
```

করছি?

ধরো:

```text
5 5 10
```

শুরুতে:

```text
max = 5
count = 1
```

দ্বিতীয় `5`:

```text
count = 2
```

তারপর `10`:

```text
New Maximum
```

এখন আগের `5`-এর Count আর Maximum Count না।

তাই:

```text
max = 10
count = 1
```

অর্থাৎ নতুন Best Result এলে পুরোনো Result-এর সঙ্গে সম্পর্কিত State Reset করতে হতে পারে।

এই Idea ভবিষ্যতে আরও Advanced Problem-এ কাজে লাগবে।

---

# Lesson 20 - Pattern Dependency চিনবে কীভাবে?

Problem:

> Maximum Number-এর first index বের করো।

প্রথম চিন্তা হতে পারে:

```text
Find Maximum
↓
Search First Occurrence
```

এটা দুই Pass।

### Phase 1

```text
Maximum Pattern
```

### Phase 2

```text
First Occurrence Search
```

Code Logic:

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

তারপর:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        index = i;
        break;
    }
}
```

Pipeline:

```text
Find Maximum
      ↓
Maximum becomes Target
      ↓
Search Target
      ↓
First Match
      ↓
Save Index
```

এখানে Search Phase Maximum Phase-এর উপর নির্ভর করছে।

---

# Lesson 21 - Same Problem, Better Combination

আগের Problem:

> Maximum Value এবং তার first index বের করো।

এটা এক Pass-এও করা যায়।

```c
int max = arr[0];
int max_index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        max_index = i;
    }
}
```

এখানে:

```text
Maximum Update
        +
Index Update
```

একসঙ্গে হচ্ছে।

কোনটা ব্যবহার করবে?

এই Stage-এ Rule:

```text
যেটা তুমি পরিষ্কারভাবে Reason করতে পারো
এবং Correct লিখতে পারো
সেটাই আগে ব্যবহার করো।
```

Contest-এর প্রথম লক্ষ্য:

```text
Correct
```

তারপর:

```text
Efficient
```

তারপর:

```text
Elegant
```

---

# Lesson 22 - Constraints দেখে Pass Count নিয়ে ভাবা

ধরো:

```text
n = 100
```

একবার Traverse:

```text
100 operations-এর কাছাকাছি
```

দুইবার Traverse:

```text
200 operations-এর কাছাকাছি
```

Big-O হিসেবে:

```text
O(n) + O(n)
=
O(2n)
=
O(n)
```

তাই দুই Pass মানেই Automatically Bad না।

Beginner হিসেবে:

```text
2 Clear O(n) Passes
```

অনেক সময়:

```text
1 Confusing O(n) Pass
```

এর চেয়ে ভালো।

তবে Contest-এ Constraint অবশ্যই দেখবে।

---

# Lesson 23 - Mixed Problem Solving Workflow

এখন থেকে Mixed Problem-এ এই Workflow ব্যবহার করবে।

## Step 1 - Output Question

```text
শেষে কী Print করতে হবে?
```

---

## Step 2 - Required Information

```text
Output বের করতে কী কী Information দরকার?
```

---

## Step 3 - State Selection

```text
কোন Variables দরকার?
```

Possible:

```text
sum
count
max
min
found
index
```

---

## Step 4 - Traversal Requirement

```text
কোন Elements দেখতে হবে?
```

```text
All?
First Match পর্যন্ত?
Reverse?
Filtered Values?
```

---

## Step 5 - Dependency Check

```text
এক Result পাওয়ার পর আরেক কাজ শুরু করতে হবে?
```

যদি Yes:

```text
Multiple Phase / Pass
```

---

## Step 6 - Update Rules

প্রতিটি State কখন Update হবে?

যেমন:

```text
sum
    ↓
sum += value
```

```text
count
    ↓
count++
```

```text
max
    ↓
if value > max
```

---

## Step 7 - Edge Cases

```text
No Match?
All Negative?
All Positive?
One Element?
Duplicates?
Target Missing?
```

---

## Step 8 - Dry Run

তারপর Code।

---

# 🧠 Mixed Pattern Master Map

```text
                        ARRAY PROBLEM
                              ↓
                         Need Elements
                              ↓
                          Traversal
                              ↓
                    What must I do?
       ┌──────────────┬───────┼──────────┬─────────────┐
       ↓              ↓       ↓          ↓             ↓
      Add           Count   Compare     Search       Filter
       ↓              ↓       ↓          ↓             ↓
 Accumulator       Counter   Max/Min    Flag/Index   Condition
       │              │       │          │             │
       └──────────────┴───────┴──────────┴─────────────┘
                              ↓
                      Combine if Needed
                              ↓
                        Final Result
```

---

# 🔬 Worked Problem 1 - Count Maximum Occurrences

Problem:

> Find how many times the largest number appears.

Input:

```text
8
5 12 7 12 3 12 8 12
```

## Problem Decomposition

```text
Need Count of Maximum
        ↓
But Maximum Unknown
        ↓
Find Maximum
        ↓
Use Maximum as Target
        ↓
Count Target
```

Pattern:

```text
Phase 1
Traversal
↓
Comparison
↓
Maximum Update

Phase 2
Traversal
↓
Target Comparison
↓
Counter
```

Dry Run Phase 1:

```text
Maximum = 12
```

Phase 2:

```text
12 found 4 times
```

Answer:

```text
4
```

---

# 🔬 Worked Problem 2 - Sum and Count of Even Numbers

Problem:

> Find the Sum and Count of Even Numbers.

Input:

```text
7
3 8 5 12 7 10 4
```

Even:

```text
8 12 10 4
```

Sum:

```text
34
```

Count:

```text
4
```

Pattern:

```text
Traversal
↓
Condition
↓
Even?
↓
Accumulator + Counter
```

Code Logic:

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        sum += arr[i];
        count++;
    }
}
```

এখানে দুইটা Result Independentভাবে একই Match-এর উপর Update হচ্ছে।

তাই:

```text
One Pass
```

যথেষ্ট।

---

# 🔬 Worked Problem 3 - First Maximum Index

Problem:

> Find the first index of the maximum value.

Input:

```text
7
5 12 7 12 3 8 12
```

Expected:

```text
1
```

Beginner-friendly Decomposition:

```text
Phase 1
Find Maximum
    ↓
max = 12

Phase 2
Search 12
    ↓
First Match
    ↓
Index = 1
    ↓
Break
```

Pattern:

```text
Maximum Pattern
        ↓
Target Search
        ↓
First Occurrence
```

---

# 🧪 Chapter 6 Exercise

এখানে **৮টি Problem** থাকবে। কিন্তু সবগুলোর Full Code একসঙ্গে লিখতে হবে না।

Day 2 একদিনে শেষ করার জন্য ভাগ:

```text
Must Solve Today:
Exercise 1–5

Challenge:
Exercise 6–8
```

---

## Exercise 1 - Sum and Count Positive Numbers

Input:

```text
7
10 -5 20 0 -3 30 5
```

Expected:

```text
Sum: 65
Count: 4
```

তুমি লিখবে:

```text
Pattern:
???
↓
???
↓
???
```

Variables:

```text
???
???
```

তারপর Code।

---

## Exercise 2 - Maximum and Minimum Together

Input:

```text
7
8 3 15 2 10 1 7
```

Expected:

```text
Maximum: 15
Minimum: 1
```

Requirement:

```text
One Traversal
```

---

## Exercise 3 - Count Maximum Occurrences

Input:

```text
8
5 12 7 12 3 12 8 12
```

Expected:

```text
4
```

Requirement:

```text
Beginner-friendly Two Pass Solution
```

প্রথমে লিখবে:

```text
Phase 1:
...

Phase 2:
...
```

তারপর Code।

---

## Exercise 4 - First Positive Index

Input:

```text
6
-5 -2 0 8 10 3
```

Expected:

```text
3
```

নিজে ঠিক করবে:

```text
Flag দরকার?
Index দরকার?
break দরকার?
```

---

## Exercise 5 - Count Positive, Negative and Zero

Input:

```text
8
5 -2 0 8 -1 0 3 -7
```

Expected:

```text
Positive: 3
Negative: 3
Zero: 2
```

Requirement:

```text
One Traversal
+
Three Counters
```

---

## Exercise 6 - Challenge: Largest Odd Number

Input:

```text
7
8 3 12 7 20 15 4
```

Expected:

```text
15
```

এই Test Case-টাও করবে:

```text
5
2 4 6 8 10
```

এখানে কোনো Odd Number নেই।

Pattern:

```text
Traversal
↓
Condition
↓
???
↓
Comparison
↓
Update
```

---

## Exercise 7 - Challenge: First and Last Occurrence

Input:

```text
9
5 2 7 2 9 2 10 2 8
2
```

Expected:

```text
First: 1
Last: 7
```

Requirement:

```text
One Full Traversal
```

States:

```text
first
last
```

নিজে Logic তৈরি করবে।

---

## Exercise 8 - Challenge: Count Minimum Occurrences

Input:

```text
8
5 2 7 2 9 2 10 3
```

Minimum:

```text
2
```

Count:

```text
3
```

Beginner-friendly Solution:

```text
Phase 1:
???

Phase 2:
???
```

---

# 📝 Chapter 6 Assignment

এই Assignment-এর মূল লক্ষ্য Code না।

মূল লক্ষ্য:

> **Problem ভেঙে Pattern চিনতে পারা।**

---

## Task 1 - Pattern Breakdown

Problem:

> Find the average of all even numbers.

লিখবে:

```text
Required Information:

1. ???
2. ???

Pattern:

???
↓
???
↓
???
↓
???

Variables:

???
???
```

---

## Task 2 - Dependency Analysis

Problem:

> Count how many times the minimum value occurs.

লিখবে:

```text
What must be known first?

...

Phase 1:

...

Phase 2:

...

Complete Pattern:

...
```

---

## Task 3 - State Selection

Problem:

> Find Maximum Value and its first occurrence index.

লিখবে:

```text
State Variables:

1. ???
2. ???

When should each state update?

...

Should equal maximum update the index?

Yes / No

Why?

...
```

---

## Task 4 - Condition Logic

Problem:

> Count numbers divisible by 2 and count numbers divisible by 3.

Input:

```text
6
2 3 6 8 9 12
```

প্রশ্ন:

```text
Should I use:

if + if

or

if + else if
```

কারণ লিখবে।

তারপর নিজে Expected Count বের করবে।

---

## Task 5 - Pattern Combination

Problem:

> Find the largest negative number.

Example:

```text
5 -2 7 -10 -3
```

Answer:

```text
-2
```

লিখবে:

```text
Pattern:

???
↓
???
↓
???
↓
???

Initialization Challenge:

...

No Negative Number থাকলে:

...
```

**খেয়াল করো:** Chapter 4-এর Assignment-এ ছিল *smallest negative number*, আর এখানে *largest negative number*। `-2 > -10`, তাই Answer `-2`।

---

## Task 6 - Bug Hunt

Problem:

> Count numbers divisible by both 2 and 3.

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }

    if (arr[i] % 3 == 0)
    {
        count++;
    }
}
```

Answer করবে:

```text
Bug:

...

Why?

...

Correct Condition:

...
```

Hint:

```text
Divisible by 2
AND
Divisible by 3
```

একই Number-এর জন্য দুইটা আলাদা Count না।

---

## Task 7 - Design the Pipeline

Problem:

> Find the first occurrence of the minimum value.

শুধু Pipeline লিখবে।

Format:

```text
Phase 1
???
↓
???
↓
???

Phase 2
???
↓
???
↓
???
↓
???
```

তারপর ব্যাখ্যা করবে কেন Phase 2, Phase 1-এর Result-এর উপর নির্ভর করছে।

---

# ⚠️ Chapter 6 Common Mistakes

Mixed Problem-এ সবচেয়ে বেশি যে ভুলগুলো হয়:

| Mistake                  | Problem           |
| ------------------------ | ----------------- |
| Code আগে লেখা               | Pattern পরিষ্কার না   |
| State ভুল নেওয়া             | Result মনে রাখা যায় না |
| `break` ভুল জায়গায়          | Search অসম্পূর্ণ     |
| `if` বনাম `else if` ভুল    | Count ভুল          |
| Invalid initialization   | Max/Min ভুল        |
| Dependency না বোঝা          | Wrong phase order |
| Edge case ignore         | Hidden test fail  |
| একই Variable ভুল কাজে ব্যবহার | State corrupt     |

---

# 📌 Chapter 6 Quick Revision Sheet

## Simple Sum

```text
Traversal
↓
Accumulator
```

## Conditional Sum

```text
Traversal
↓
Condition
↓
Accumulator
```

## Conditional Count

```text
Traversal
↓
Condition
↓
Counter
```

## Maximum

```text
Traversal
↓
Comparison
↓
Update
```

## Conditional Maximum

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
Comparison
↓
Update
```

## Existence Search

```text
Traversal
↓
Target Comparison
↓
Flag
↓
Break
```

## First Match

```text
Traversal
↓
Condition / Target Comparison
↓
Save Index
↓
Break
```

## Last Match

```text
Traversal
↓
Condition / Target Comparison
↓
Update Index
↓
Continue
```

## Average of Matching Values

```text
Traversal
↓
Condition
↓
Accumulator + Counter
↓
Division
```

## Count Maximum

```text
Find Maximum
↓
Use Maximum as Target
↓
Traversal
↓
Counter
```

---

# 🧠 The Most Important Skill of Chapter 6

একটা Problem দেখে:

```text
এইটা Maximum Problem
```

এতটুকু বললে এখন আর যথেষ্ট না।

তোমাকে পুরো Pipeline বলতে হবে।

যেমন:

> Count how many times the maximum appears.

তোমার Brain:

```text
Maximum আগে জানা দরকার
        ↓
Phase 1
Traversal
↓
Comparison
↓
Maximum Update
        ↓
Maximum এখন Target
        ↓
Phase 2
Traversal
↓
Target Comparison
↓
Counter
```

আবার:

> Find first positive number.

Brain:

```text
Traversal
↓
Condition
↓
First Valid Match
↓
Save Index
↓
Break
```

এইভাবে **Problem → Pipeline** translate করতে পারা CP-এর মূল skillগুলোর একটি।

---

# 🎓 Chapter 6 Final Mental Model

```text
               BIG PROBLEM
                     ↓
             Don't Write Code Yet
                     ↓
            Break Into Questions
                     ↓
        What data must I inspect?
                     ↓
                 Traversal
                     ↓
        What values are relevant?
                     ↓
                 Condition
                     ↓
      What information must I remember?
                     ↓
          Choose State Variables
                     ↓
          How should state update?
                     ↓
             Define Update Rules
                     ↓
         Does one result depend on another?
               ↙              ↘
             Yes               No
              ↓                 ↓
        Multiple Phase      Combine States
              ↓                 ↓
                Dry Run
                   ↓
                Edge Cases
                   ↓
                  Code
                   ↓
                  Test
```

---

# 🗺️ Day 2 Progress

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation + Counting
│
├── ✅ Chapter 4 - Maximum + Minimum
│
├── ✅ Chapter 5 - Linear Search
│
├── ✅ Chapter 6 - Mixed Pattern Problems
│
└── ⏳ Chapter 7 - Mistake Review, Pattern Library & Day 2 Final Assignment
```

Chapter 6 পর্যন্ত Day 2-এর **সব Core Problem-Solving Pattern শেখা শেষ**। Chapter 7-এ আর বড় নতুন Theory যোগ হবে না। সেখানে Day 2-এর common mistakes, edge-case checklist, debugging workflow, `core_pattern.md` update, final mixed assignment এবং Day 2 completion checklist থাকবে-যাতে Day 2 সত্যিই একদিনের মধ্যে close করে Day 3-তে যাওয়া যায়।

---

# Day 2 - Chapter 7

# 🧩 Combining Patterns

Day 2-এর আগের Chapter-গুলোতে আমরা একেকটি Core Pattern আলাদাভাবে শিখেছি।

```text
Chapter 1
    ↓
Array Mental Model

Chapter 2
    ↓
Traversal Pattern

Chapter 3
    ↓
Accumulation + Counting

Chapter 4
    ↓
Maximum + Minimum

Chapter 5
    ↓
Linear Search

Chapter 6
    ↓
Mixed Pattern Problems
```

Chapter 6-এ আমরা প্রথমবার দেখেছি যে একটি Problem-এর মধ্যে একাধিক Pattern থাকতে পারে।

এখন Chapter 7-এ আমরা এই Skill-টাকে আরও পরিষ্কারভাবে শিখব:

# **Pattern Combination**

অর্থাৎ:

```text
একটা বড় Problem
        ↓
ছোট ছোট কাজ খুঁজে বের করা
        ↓
প্রতিটি কাজের Pattern চেনা
        ↓
Pattern-গুলোর Dependency বোঝা
        ↓
সঠিক Order-এ Combine করা
        ↓
Solution তৈরি করা
```

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি বুঝতে পারবে:

* Pattern Combination কী;
* কেন একটি Problem-এ একাধিক Pattern লাগে;
* Subproblem কী;
* Problem Decomposition কী;
* Pattern Pipeline কী;
* State Combination কী;
* Pattern Dependency কী;
* Independent State কী;
* Dependent Phase কী;
* Single-pass Combination কী;
* Multi-pass Combination কী;
* কোন Pattern আগে এবং কোন Pattern পরে চলবে;
* Pattern combine করার সময় State Variable কীভাবে select করতে হয়;
* একাধিক Pattern-এর মধ্যে `break` কীভাবে সিদ্ধান্ত নিতে হয়;
* Problem দেখে Solution Pipeline কীভাবে তৈরি করতে হয়।

আজকের সবচেয়ে গুরুত্বপূর্ণ Mental Model:

```text
Problem
    ↓
Break Into Small Questions
    ↓
Identify Pattern for Each Question
    ↓
Check Dependency
    ↓
Choose States
    ↓
Arrange Pattern Order
    ↓
Combine
    ↓
Dry Run
    ↓
Code
```

---

# Lesson 1 - Pattern Combination কী?

ধরো Problem:

> Array-এর Maximum Number কতবার আছে?

Input:

```text
7
5 12 7 12 3 12 8
```

Expected Output:

```text
3
```

এখন Problem-টা দেখেই যদি Code লিখতে যাও, Confusion হতে পারে।

তাই Problem-টাকে দুইটা Question-এ ভাগ করি।

### Question 1

```text
Maximum Number কোনটা?
```

Answer বের করার Pattern:

```text
Traversal
↓
Comparison
↓
Maximum Update
```

### Question 2

```text
সেই Maximum Number কতবার আছে?
```

Pattern:

```text
Traversal
↓
Target Comparison
↓
Counter
```

এখন দুইটা Pattern Combine করলে:

```text
Find Maximum
        ↓
Maximum becomes Target
        ↓
Search Every Element
        ↓
Compare with Maximum
        ↓
Count Matches
```

এটাই Pattern Combination।

---

# Lesson 2 - একটি Problem-এর ভিতরে ছোট Problem

Competitive Programming Problem অনেক সময় দেখতে একটা Problem হলেও ভিতরে একাধিক ছোট Problem থাকে।

ধরো:

> Positive Number-গুলোর Average বের করো।

Problem-টা ভাঙি।

প্রথম কাজ:

```text
Positive Number চিনতে হবে
```

Pattern:

```text
Condition
```

দ্বিতীয় কাজ:

```text
Positive Number-গুলোর Sum দরকার
```

Pattern:

```text
Accumulator
```

তৃতীয় কাজ:

```text
Positive Number কয়টা আছে জানতে হবে
```

Pattern:

```text
Counter
```

শেষ কাজ:

```text
Average = Sum / Count
```

সব Combine করলে:

```text
Traversal
↓
Condition
↓
Positive?
↓
Accumulator + Counter
↓
Average
```

এখানে একটি Problem-এর মধ্যে আছে:

```text
Traversal
+
Condition
+
Accumulator
+
Counter
+
Final Calculation
```

---

# Lesson 3 - Problem Decomposition

একটি Problem-কে ছোট ছোট Logical Task-এ ভাগ করাকে আমরা এখানে বলছি:

# **Problem Decomposition**

ধরো Problem:

> Largest Even Number বের করো।

Problem-টা ভাঙি।

```text
Task 1
সব Element দেখতে হবে
        ↓
Traversal
```

```text
Task 2
শুধু Even Number দরকার
        ↓
Condition
```

```text
Task 3
Even Number-গুলোর মধ্যে Largest দরকার
        ↓
Maximum Pattern
```

Final Combination:

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
Comparison
↓
Maximum Update
```

Code-এর আগে এই Pipeline বের করতে পারলে Solution অনেক পরিষ্কার হয়ে যায়।

---

# Lesson 4 - Pattern Pipeline কী?

একটি Problem Solve করতে Pattern-গুলো যে Order-এ কাজ করে, সেটাকে আমরা Bootcamp-এ বলব:

# **Pattern Pipeline**

Example:

> First Positive Number-এর Index বের করো।

Pipeline:

```text
Traversal
↓
Condition
↓
Positive?
↓
First Valid Match
↓
Save Index
↓
Break
```

আর:

> Positive Number Count করো।

Pipeline:

```text
Traversal
↓
Condition
↓
Positive?
↓
Counter
```

দুটো Problem-এই Positive Condition আছে।

কিন্তু Goal আলাদা।

তাই Pipeline-ও আলাদা।

---

# Lesson 5 - Pattern Combination-এর আগে Output দেখো

Problem Solve করার সময় প্রথমে Output বুঝতে হবে।

ধরো:

> Find the largest number.

Output:

```text
One Value
```

State:

```text
max
```

---

ধরো:

> Find the largest number and its index.

Output:

```text
Value
+
Position
```

States:

```text
max
max_index
```

---

ধরো:

> Find how many times the largest number occurs.

Output:

```text
Count
```

কিন্তু Count বের করতে আগে দরকার:

```text
Maximum Value
```

States:

```text
max
count
```

তাই:

> **Output কী চাইছে সেটা বুঝলে Required Information বোঝা যায়। Required Information থেকে State এবং Pattern বের হয়।**

---

# Lesson 6 - State Combination

Mixed Problem-এ একাধিক State Variable থাকতে পারে।

ধরো:

> Even Number-এর Sum এবং Count বের করো।

দরকার:

```text
sum
count
```

Initialization:

```c
int sum = 0;
int count = 0;
```

Traversal:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        sum += arr[i];
        count++;
    }
}
```

এখানে একই Match দুইটি State Update করছে।

```text
Even Number Found
       ↓
   ┌───┴───┐
   ↓       ↓
Sum Update Count Update
```

এটাই State Combination।

---

# Lesson 7 - Independent States

ধরো Problem:

> Maximum এবং Minimum একসঙ্গে বের করো।

দরকার:

```text
max
min
```

একটি Element দেখে আমরা দুইটা State আলাদাভাবে Update করতে পারি।

```c
int max = arr[0];
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

Pipeline:

```text
Traversal
    ↓
Current Element
   ↙           ↘
Compare Max   Compare Min
     ↓             ↓
Update Max    Update Min
```

এখানে `max` বের করার জন্য `min` আগে জানা দরকার নেই।

আবার `min` বের করার জন্য `max` জানা দরকার নেই।

তাই এগুলো:

# **Independent States**

---

# Lesson 8 - Dependent Patterns

এবার Problem:

> Maximum Number কতবার আছে?

এখানে Counting করার Target হলো Maximum।

কিন্তু শুরুতে Maximum জানা নেই।

তাই:

```text
Count Maximum
      ↓
Need Maximum Value First
```

Dependency:

```text
Find Maximum
      ↓
Maximum Known
      ↓
Count Maximum
```

এখানে দ্বিতীয় Pattern প্রথম Pattern-এর Result-এর উপর নির্ভর করছে।

এটাকে আমরা বলব:

# **Pattern Dependency**

Mental Question:

```text
Phase 2 শুরু করতে
Phase 1-এর Result দরকার?
        ↓
       Yes
        ↓
Dependent Phases
```

---

# Lesson 9 - Single-pass Combination

একবার Traversal করে একাধিক Result বের করলে:

```text
Single Pass
```

Example:

> Positive, Negative এবং Zero Count করো।

States:

```text
positive
negative
zero
```

Code:

```c
int positive = 0;
int negative = 0;
int zero = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        positive++;
    }
    else if (arr[i] < 0)
    {
        negative++;
    }
    else
    {
        zero++;
    }
}
```

একবার Array Traverse হচ্ছে।

```text
One Traversal
      ↓
Classification
      ↓
Correct Counter Update
```

এটাই Single-pass Pattern Combination।

---

# Lesson 10 - Multi-pass Combination

একই Array একাধিকবার Traverse করলে:

```text
Multi Pass
```

Example:

> Maximum Number কতবার আছে?

### Pass 1

```text
Find Maximum
```

### Pass 2

```text
Count Maximum
```

Code:

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}

int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        count++;
    }
}
```

Pipeline:

```text
Pass 1
Traversal
↓
Comparison
↓
Maximum Update

        ↓

Pass 2
Traversal
↓
Target Comparison
↓
Counter
```

---

# Lesson 11 - One Pass না Two Pass?

সবসময় কম Loop মানেই Better Solution-এভাবে চিন্তা করবে না।

ধরো:

```text
Two clear O(n) passes
```

এবং:

```text
One confusing O(n) pass
```

Beginner হিসেবে Clear Solution বেশি valuable।

কারণ Contest-এ:

```text
Correct Solution
      ↓
Accepted
```

Confusing Optimization:

```text
Small Bug
    ↓
Wrong Answer
```

তাই Rule:

```text
Can I clearly update all states
in one traversal?
        ↓
    ┌───┴───┐
    ↓       ↓
   Yes      No / Confusing
    ↓       ↓
One Pass   Multi Pass
```

---

# Lesson 12 - Pattern Order Matters

Pattern Combine করলেই হবে না।

সঠিক Order-এ Combine করতে হবে।

Problem:

> First Occurrence of Maximum Value বের করো।

Wrong Order:

```text
Search Maximum
↓
But Maximum Unknown
```

সঠিক Order:

```text
Find Maximum
↓
Maximum becomes Target
↓
Search from Left
↓
First Match
↓
Save Index
↓
Break
```

অর্থাৎ:

```text
Maximum Pattern
        ↓
Search Pattern
```

Order উল্টো করা যাবে না।

---

# Lesson 13 - Maximum + Index

Problem:

> Maximum Value এবং তার First Index বের করো।

Input:

```text
7
5 12 7 12 3 8 10
```

Expected:

```text
Maximum: 12
Index: 1
```

এটা One Pass-এ করা যায়।

State:

```text
max
max_index
```

Initialization:

```c
int max = arr[0];
int max_index = 0;
```

Traversal:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        max_index = i;
    }
}
```

খেয়াল করো:

```c
arr[i] > max
```

ব্যবহার করা হয়েছে।

`>=` না।

কেন?

কারণ Equal Maximum পেলে Index Update করলে Last Occurrence চলে আসবে।

Example:

```text
5 12 7 12
```

`>` ব্যবহার করলে:

```text
First 12
↓
index = 1

Second 12
↓
Not Greater
↓
No Update
```

Final:

```text
1
```

---

# Lesson 14 - Maximum + Last Index

Problem:

> Maximum Value-এর Last Index বের করো।

Input:

```text
5 12 7 12 3
```

Maximum:

```text
12
```

Last Index:

```text
3
```

One-pass approach:

```c
int max = arr[0];
int index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        index = i;
    }
    else if (arr[i] == max)
    {
        index = i;
    }
}
```

Mental Model:

```text
New Maximum
    ↓
Update Value + Index
```

```text
Equal Maximum
    ↓
Update Index Only
```

এই Example দেখায়:

> একই Maximum Pattern-এর সঙ্গে Index Pattern combine করলে Goal অনুযায়ী Update Rule বদলে যায়।

---

# Lesson 15 - Maximum + Count

Problem:

> Maximum কতবার আছে?

Beginner-friendly approach:

```text
Phase 1
Find Maximum

Phase 2
Count Maximum
```

কিন্তু One Pass-এও করা যায়।

State:

```text
max
count
```

Initialization:

```c
int max = arr[0];
int count = 1;
```

Logic:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        count = 1;
    }
    else if (arr[i] == max)
    {
        count++;
    }
}
```

কেন New Maximum পেলে:

```c
count = 1;
```

হচ্ছে?

ধরো:

```text
5 5 10
```

প্রথমে:

```text
max = 5
count = 1
```

দ্বিতীয় `5`:

```text
count = 2
```

তারপর `10`:

```text
New Maximum
```

আগের `5`-এর Count আর দরকার নেই।

তাই:

```text
max = 10
count = 1
```

এখানে একটি গুরুত্বপূর্ণ Idea:

> **Main State বদলালে তার সঙ্গে সম্পর্কিত Dependent State Reset হতে পারে।**

---

# Lesson 16 - Condition + Maximum

Problem:

> Largest Even Number বের করো।

এখানে Combination:

```text
Traversal
+
Condition
+
Maximum
```

কিন্তু সমস্যা হলো Initialization।

Wrong:

```c
int max_even = arr[0];
```

কারণ `arr[0]` Odd হতে পারে।

তাই দরকার:

```text
Traversal
↓
Condition
↓
First Valid Candidate
↓
Initialize
↓
Future Candidate Compare
↓
Update
```

Code:

```c
int found = 0;
int max_even;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (found == 0)
        {
            max_even = arr[i];
            found = 1;
        }
        else if (arr[i] > max_even)
        {
            max_even = arr[i];
        }
    }
}
```

এখানে Combined Pattern:

```text
Traversal
+
Condition
+
Flag
+
Maximum
```

---

# Lesson 17 - Condition + Minimum

Problem:

> Smallest Positive Number বের করো।

Input:

```text
7
-5 8 3 -2 10 1 7
```

Positive Values:

```text
8 3 10 1 7
```

Answer:

```text
1
```

Pattern:

```text
Traversal
↓
Condition
↓
Positive?
↓
Valid Candidate
↓
Comparison
↓
Minimum Update
```

States:

```text
found
min_positive
```

এই Pattern Largest Even-এর মতোই।

শুধু:

```text
Condition বদলেছে
```

এবং:

```text
Comparison Direction বদলেছে
```

এটাই Pattern Reuse।

---

# Lesson 18 - Condition + Accumulator + Counter

Problem:

> Negative Number-এর Average বের করো।

Input:

```text
6
5 -2 8 -4 -6 10
```

Negative Values:

```text
-2 -4 -6
```

Sum:

```text
-12
```

Count:

```text
3
```

Average:

```text
-4.00
```

Pattern:

```text
Traversal
↓
Condition
↓
Negative?
↓
Accumulator + Counter
↓
Check Count
↓
Average
```

States:

```text
sum
count
```

Code Logic:

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] < 0)
    {
        sum += arr[i];
        count++;
    }
}
```

তারপর:

```c
if (count > 0)
{
    double average = (double)sum / count;
}
```

---

# Lesson 19 - Search + Counter

Problem:

> Target কতবার আছে?

Input:

```text
7
5 2 5 8 5 3 5
5
```

Pattern:

```text
Traversal
↓
Target Comparison
↓
Match?
↓
Counter
```

এখানে Linear Search Thinking এবং Counting Pattern combine হয়েছে।

```text
Search
+
Counter
```

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
    }
}
```

খেয়াল করো:

```text
No break
```

কারণ সব Match দরকার।

---

# Lesson 20 - Search + Index Tracking

Problem:

> Target-এর First এবং Last Index বের করো।

Input:

```text
9
5 2 7 2 9 2 10 2 8
2
```

Expected:

```text
First: 1
Last: 7
```

States:

```text
first
last
```

Initialization:

```c
int first = -1;
int last = -1;
```

Logic:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        if (first == -1)
        {
            first = i;
        }

        last = i;
    }
}
```

Mental Model:

```text
Match
  ↓
First never set?
  ↓
Set First Once
```

কিন্তু:

```text
Every Match
    ↓
Update Last
```

এখানে:

```text
Search
+
State Check
+
Index Tracking
```

combine হয়েছে।

---

# Lesson 21 - কেন এখানে `break` নেই?

Problem:

```text
First এবং Last দুটোই দরকার
```

প্রথম Match পেয়ে:

```text
first
```

জানা গেল।

কিন্তু:

```text
last
```

এখনো জানা যায়নি।

Future Match Last Index বদলাতে পারে।

তাই:

```text
First Found
    ↓
Don't Break
    ↓
Continue Search
    ↓
Update Last
```

Rule:

> **Combined Problem-এ একটি Subproblem complete হলেই Loop stop করা যাবে না, যদি অন্য Subproblem এখনো future elements-এর উপর depend করে।**

এটা খুব গুরুত্বপূর্ণ।

---

# Lesson 22 - Multiple Counters Combine করা

Problem:

> Even এবং Odd Number আলাদাভাবে Count করো।

States:

```text
even_count
odd_count
```

Pattern:

```text
Traversal
↓
Classification
↓
Correct Counter Update
```

Code:

```c
int even_count = 0;
int odd_count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        even_count++;
    }
    else
    {
        odd_count++;
    }
}
```

এখানে এক Element:

```text
Even
```

অথবা:

```text
Odd
```

দুটো একসঙ্গে হতে পারে না।

তাই `if-else` যথেষ্ট।

---

# Lesson 23 - Independent Condition Combination

Problem:

> Divisible by 2 কতগুলো এবং Divisible by 3 কতগুলো?

Input:

```text
6
2 3 6 8 9 12
```

`6` এবং `12` দুই Condition-ই Match করে।

তাই:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}

if (arr[i] % 3 == 0)
{
    count3++;
}
```

এখানে দুইটি Independent Pattern একই Traversal share করছে।

```text
Traversal
    ↓
Current Value
   ↙           ↘
Check % 2     Check % 3
    ↓             ↓
count2++       count3++
```

---

# Lesson 24 - Pattern Share করা

একাধিক কাজের জন্য সবসময় আলাদা Loop দরকার হয় না।

Problem:

> Sum এবং Count of Positive Numbers.

Wrong না, কিন্তু unnecessary:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        sum += arr[i];
    }
}

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        count++;
    }
}
```

একই Condition এবং একই Traversal হলে combine করা যায়:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        sum += arr[i];
        count++;
    }
}
```

Mental Rule:

```text
Same Elements?
    ↓
Same Condition?
    ↓
Independent Updates?
    ↓
Can Often Share Traversal
```

---

# Lesson 25 - কখন Pattern Share করবে না?

Problem:

> Maximum বের করো এবং Maximum কতবার আছে Count করো।

এখানে দুই-pass approach:

```text
Pass 1
Find Maximum

Pass 2
Count Maximum
```

কেন?

কারণ Count Pattern-এর Target:

```text
Maximum
```

যা প্রথম Pass-এর আগে জানা নেই।

হ্যাঁ, Advanced State Update দিয়ে One Pass সম্ভব।

কিন্তু Beginner-friendly decomposition:

```text
Dependent Result
    ↓
Separate Phase
```

Rule:

```text
Second Pattern needs completed result
from First Pattern?
        ↓
       Yes
        ↓
Separate Phase is often clearer
```

---

# Lesson 26 - Combination Decision Framework

Mixed Problem দেখলে এই Questions করবে।

### Question 1

```text
Output কী?
```

### Question 2

```text
Output বের করতে কী কী Information দরকার?
```

### Question 3

```text
প্রতিটি Information-এর Pattern কী?
```

### Question 4

```text
কোন State Variables দরকার?
```

### Question 5

```text
States কি Independent?
```

### Question 6

```text
এক Pattern-এর Result আরেক Pattern-এর আগে দরকার?
```

### Question 7

```text
One Pass পরিষ্কারভাবে সম্ভব?
```

### Question 8

```text
Future Element কি Answer বদলাতে পারে?
```

### Question 9

```text
break দেওয়া যাবে?
```

### Question 10

```text
কোন Edge Case State Initialization ভাঙতে পারে?
```

---

# 🧠 Pattern Combination Master Map

```text
                         BIG PROBLEM
                              ↓
                      What is the output?
                              ↓
                  What information is needed?
                              ↓
                     Break into Subproblems
                              ↓
                 Identify Pattern for Each Part
                              ↓
                        Choose States
                              ↓
                      Check Dependency
                    ↙                  ↘
              Independent            Dependent
                   ↓                    ↓
          Share Traversal        Arrange Phases
             if possible           in correct order
                   ↓                    ↓
                   └─────────┬──────────┘
                             ↓
                      Build Pipeline
                             ↓
                         Dry Run
                             ↓
                           Code
```

---

# 🔬 Worked Problem 1 - Maximum and Minimum Difference

Problem:

> Maximum এবং Minimum বের করে তাদের Difference Print করো।

Input:

```text
6
8 3 15 2 10 7
```

### Step 1 - Output

```text
Difference
```

Formula:

```text
max - min
```

### Step 2 - Required Information

```text
Maximum
Minimum
```

### Step 3 - States

```text
max
min
```

### Step 4 - Dependency

Maximum এবং Minimum Independent।

তাই One Pass।

Pipeline:

```text
Traversal
↓
Track Maximum + Minimum
↓
Final Calculation
↓
max - min
```

Code:

```c
int max = arr[0];
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (arr[i] < min)
    {
        min = arr[i];
    }
}

int difference = max - min;
```

---

# 🔬 Worked Problem 2 - Largest Even and Count

Problem:

> Largest Even Number এবং সেটি কতবার আছে বের করো।

Input:

```text
9
3 8 5 12 7 12 20 9 20
```

Expected:

```text
Largest Even: 20
Count: 2
```

Problem Breakdown:

```text
Task 1
Find Largest Even
        ↓
Condition + Maximum

Task 2
Count Largest Even
        ↓
Search + Counter
```

Dependency:

```text
Count Target
    ↓
Target = Largest Even
    ↓
Largest Even must be known first
```

Beginner-friendly Pipeline:

```text
Phase 1
Traversal
↓
Even Condition
↓
Valid Candidate
↓
Maximum Update

Phase 2
Traversal
↓
Compare with Largest Even
↓
Counter
```

States:

```text
found
max_even
count
```

এখানে `found` দরকার কারণ Array-তে কোনো Even Number নাও থাকতে পারে।

---

# 🔬 Worked Problem 3 - First Minimum Index

Problem:

> Minimum Value-এর First Index বের করো।

Input:

```text
7
5 2 7 2 9 3 8
```

Expected:

```text
Minimum: 2
Index: 1
```

One-pass approach:

```c
int min = arr[0];
int index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
        index = i;
    }
}
```

কেন:

```c
arr[i] < min
```

এবং:

```c
arr[i] <= min
```

না?

কারণ Equal Minimum পেলে Index Update করলে Last Occurrence পাওয়া যাবে।

First Occurrence রাখতে:

```text
Only Strictly Better Value
        ↓
Update Value + Index
```

---

# 🔬 Worked Problem 4 - Sum of Values Greater Than Average

Problem:

> Array-এর Average বের করো, তারপর Average-এর চেয়ে বড় Number-গুলোর Sum বের করো।

Input:

```text
5
10 20 30 40 50
```

Average:

```text
30
```

Greater than Average:

```text
40 50
```

Sum:

```text
90
```

এখানে Dependency আছে।

Phase 1:

```text
Traversal
↓
Accumulator
↓
Total Sum
↓
Average
```

Phase 2:

```text
Traversal
↓
Condition: value > average
↓
Accumulator
```

Complete Pipeline:

```text
Find Sum
↓
Calculate Average
↓
Use Average as Threshold
↓
Traverse Again
↓
Conditional Accumulation
```

এখানে দ্বিতীয় Phase প্রথম Phase-এর Result-এর উপর নির্ভর করছে।

---

# 🔬 Worked Problem 5 - Count Numbers Equal to Minimum or Maximum

Problem:

> কতগুলো Element Minimum অথবা Maximum-এর সমান?

Input:

```text
8
2 5 10 2 7 10 4 10
```

Minimum:

```text
2
```

Maximum:

```text
10
```

Matching Values:

```text
2 10 2 10 10
```

Count:

```text
5
```

Pipeline:

```text
Phase 1
Traversal
↓
Find Min + Max

Phase 2
Traversal
↓
Condition
↓
value == min OR value == max
↓
Counter
```

Condition:

```c
if (arr[i] == min || arr[i] == max)
{
    count++;
}
```

এখানে Combination:

```text
Min/Max Pattern
+
Condition
+
Counter
```

---

# 🧪 Chapter 7 Exercise

প্রতিটি Exercise-এর জন্য এই Order follow করবে:

```text
1. Problem Breakdown
2. Required Information
3. Pattern Pipeline
4. State Variables
5. Dependency
6. One Pass / Multi Pass Decision
7. Dry Run
8. Code
9. Custom Tests
```

---

## Exercise 1 - Sum and Count of Negative Numbers

Input:

```text
7
5 -2 8 -10 -3 7 -1
```

Expected:

```text
Sum: -16
Count: 4
```

নিজে Pattern বের করবে।

Hint:

```text
Traversal
↓
Condition
↓
??? + ???
```

---

## Exercise 2 - Maximum and Its First Index

Input:

```text
7
5 12 7 12 3 8 10
```

Expected:

```text
Maximum: 12
Index: 1
```

Requirement:

```text
One Pass
```

চিন্তা করবে:

```text
>
```

নাকি:

```text
>=
```

---

## Exercise 3 - Maximum and Its Last Index

একই Input:

```text
7
5 12 7 12 3 8 10
```

Expected:

```text
Maximum: 12
Index: 3
```

Exercise 2-এর সঙ্গে Logic Difference লিখবে।

---

## Exercise 4 - Minimum Occurrence Count

Input:

```text
8
5 2 7 2 9 2 10 3
```

Expected:

```text
Minimum: 2
Count: 3
```

Requirement:

```text
Beginner-friendly Multi-pass
```

লিখবে:

```text
Phase 1:
...

Phase 2:
...
```

---

## Exercise 5 - Smallest Positive Number

Input:

```text
7
-5 8 3 -2 10 1 7
```

Expected:

```text
1
```

এই Input-ও Test করবে:

```text
5
-5 -2 0 -8 -1
```

এখানে Positive Number নেই।

---

## Exercise 6 - First and Last Even Index

Input:

```text
8
3 5 8 7 10 9 12 11
```

Expected:

```text
First Even Index: 2
Last Even Index: 6
```

Requirement:

```text
One Full Traversal
```

States:

```text
first
last
```

---

## Exercise 7 - Count Values Greater Than Minimum

Input:

```text
6
5 2 8 2 10 3
```

Minimum:

```text
2
```

Values greater than Minimum:

```text
5 8 10 3
```

Expected Count:

```text
4
```

Problem Dependency নিজে লিখবে।

---

## Exercise 8 - Challenge: Closest to Maximum

Problem:

> Maximum Value বের করো, তারপর Maximum থেকে Difference সবচেয়ে কম এমন non-maximum Value বের করো।

Input:

```text
6
5 12 8 10 3 7
```

Maximum:

```text
12
```

Closest non-maximum value:

```text
10
```

এটা Challenge Problem।

এখনই না পারলে সমস্যা নেই।

প্রথমে শুধু Problem Decomposition লিখবে।

---

# 📝 Chapter 7 Assignment

এই Assignment-এর মূল উদ্দেশ্য:

> **Code-এর আগে Pattern Combination Reasoning তৈরি করা।**

---

## Task 1 - Pattern Decomposition

Problem:

> Find the sum and count of even numbers.

লিখবে:

```text
Subproblems:

1. ...
2. ...

Patterns Needed:

1. ...
2. ...

State Variables:

1. ...
2. ...

Pipeline:

???
↓
???
↓
??? + ???
```

---

## Task 2 - Independent or Dependent?

নিচের Problem-গুলোর পাশে লিখবে:

```text
Independent
```

অথবা:

```text
Dependent
```

Problems:

```text
1. Find Maximum and Minimum

2. Find Maximum and Count Maximum

3. Find Sum and Count of Positive Numbers

4. Find Average, then Count Values Above Average

5. Find Even Count and Odd Count
```

প্রতিটির জন্য এক লাইনে কারণ লিখবে।

---

## Task 3 - One Pass or Multi Pass?

নিচের Problem-গুলোর জন্য Beginner-friendly Approach select করবে:

```text
One Pass
```

অথবা:

```text
Multi Pass
```

Problems:

```text
1. Maximum + Minimum

2. Count Maximum Occurrences

3. Positive Sum + Positive Count

4. First + Last Target Index

5. Count Values Greater Than Average
```

প্রতিটির কারণ লিখবে।

---

## Task 4 - State Selection

Problem:

> Largest Even Number এবং তার First Index বের করো।

লিখবে:

```text
States Needed:

1. ...
2. ...
3. ...

Why is each state needed?

...

Pattern:

???
↓
???
↓
???
↓
???
```

---

## Task 5 - Break Decision

Problem:

> Find First and Last Occurrence of Target in one traversal.

Answer করবে:

```text
Can I break after finding the first occurrence?

Yes / No

Why?

...

Which state becomes complete first?

...

Which state still depends on future elements?

...
```

---

## Task 6 - Update Rule Analysis

Problem:

> Find Maximum Value and its First Index.

Code:

```c
if (arr[i] >= max)
{
    max = arr[i];
    index = i;
}
```

Answer করবে:

```text
Bug:

...

What index will this preserve?

First / Last

Correct Comparison:

...

Why?
```

---

## Task 7 - Dependency Pipeline

Problem:

> Count numbers greater than the average.

শুধু Pipeline লিখবে।

Format:

```text
Phase 1
???
↓
???
↓
???

Calculate
???
↓
???

Phase 2
???
↓
???
↓
???
```

তারপর লিখবে:

```text
Why can't the simple beginner solution
count before average is known?

...
```

---

## Task 8 - Final Combination Design

Problem:

> Find the smallest positive number and count how many times it appears.

Example:

```text
8
-5 3 8 3 1 -2 1 7
```

Expected:

```text
Smallest Positive: 1
Count: 2
```

Code লিখবে না।

শুধু:

```text
Problem Breakdown:

1. ...
2. ...

Dependency:

...

States:

1. ...
2. ...
3. ...

Phase 1 Pattern:

...

Phase 2 Pattern:

...

Edge Case:

...
```

---

# 🧠 Pattern Combination Decision Table

| Problem Goal               | Pattern Combination                         |
| -------------------------- | ------------------------------------------- |
| Sum of even values         | Traversal + Condition + Accumulator         |
| Count positive values      | Traversal + Condition + Counter             |
| Average of negative values | Condition + Accumulator + Counter           |
| Maximum and minimum        | Traversal + Two Comparison States           |
| Maximum and first index    | Maximum + Index Tracking                    |
| Target occurrence count    | Search + Counter                            |
| First and last target      | Search + Multiple Index States              |
| Largest even               | Condition + Valid Candidate + Maximum       |
| Count maximum              | Maximum + Search + Counter                  |
| Values above average       | Accumulator + Average + Condition + Counter |

---

# ⚡ Pattern Combination Rules

## Rule 1

```text
একই Traversal
+
একই Condition
+
Independent State Updates
        ↓
Often Combine in One Pass
```

Example:

```text
Positive Sum + Positive Count
```

---

## Rule 2

```text
Second Task needs First Task's final result
        ↓
Dependency
        ↓
Multi-phase Thinking
```

Example:

```text
Find Maximum
↓
Count Maximum
```

---

## Rule 3

```text
One Subproblem Complete
        ≠
Whole Problem Complete
```

Example:

```text
First + Last Occurrence
```

First পাওয়া গেলেও Last এখনো Unknown।

তাই No `break`।

---

## Rule 4

```text
Main State changes
        ↓
Related State may need Update or Reset
```

Example:

```text
New Maximum
↓
max = value
count = 1
```

---

## Rule 5

```text
Conditional Best Value
        ↓
Need Valid Candidate Initialization
```

Example:

```text
Largest Even
Smallest Positive
Largest Negative
```

---

# 📌 Chapter 7 Quick Revision Sheet

## Pattern A - Condition + Sum

```text
Traversal
↓
Condition
↓
Accumulator
```

---

## Pattern B - Condition + Count

```text
Traversal
↓
Condition
↓
Counter
```

---

## Pattern C - Condition + Sum + Count

```text
Traversal
↓
Condition
↓
Accumulator + Counter
```

---

## Pattern D - Maximum + Index

```text
Traversal
↓
Comparison
↓
Update Maximum + Index
```

---

## Pattern E - Maximum + Count

Beginner-friendly:

```text
Find Maximum
↓
Traverse Again
↓
Compare with Maximum
↓
Counter
```

---

## Pattern F - Search + First + Last

```text
Traversal
↓
Match
↓
Set First Once
↓
Update Last Every Match
↓
Continue
```

---

## Pattern G - Conditional Maximum

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
Comparison
↓
Update
```

---

## Pattern H - Dependent Multi-phase Problem

```text
Phase 1
Find Required Information
        ↓
Result becomes Target / Threshold
        ↓
Phase 2
Use Result
        ↓
Final Answer
```

---

# 🎓 Chapter 7 Final Mental Model

এখন থেকে Mixed Problem দেখলে তোমার Brain-এর Flow হবে:

```text
Problem
    ↓
শেষে কী Output চাই?
    ↓
Output-এর জন্য কী কী Information দরকার?
    ↓
Problem-কে ছোট Task-এ ভাঙি
    ↓
প্রতিটি Task-এর Pattern কী?
    ↓
কোন State Variables দরকার?
    ↓
States কি Independent?
    ↓
কোনো Task কি অন্য Task-এর Result-এর উপর নির্ভর করছে?
    ↓
One Pass না Multi Pass?
    ↓
Pattern Order ঠিক করি
    ↓
Update Rules লিখি
    ↓
break Decision করি
    ↓
Edge Case ভাবি
    ↓
Dry Run
    ↓
Code
```

সবচেয়ে গুরুত্বপূর্ণ পরিবর্তন হবে এই জায়গায়:

আগে:

```text
Problem
↓
Code
```

এখন:

```text
Problem
↓
Decompose
↓
Pattern
↓
State
↓
Dependency
↓
Pipeline
↓
Dry Run
↓
Code
```

এটাই Chapter 7-এর আসল শিক্ষা।

---

# 🗺️ Day 2 Progress

এখন Original Day 2 Chapter Map অনুযায়ী Progress:

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation Pattern
│
├── ✅ Chapter 4 - Counting / Maximum-Minimum Core Practice
│
├── ✅ Chapter 5 - Maximum-Minimum / Search Foundation
│
├── ✅ Chapter 6 - Searching & Mixed Pattern Foundation
│
├── ✅ Chapter 7 - Combining Patterns
│
├── ⏳ Chapter 8 - Common Bugs & Edge Cases
│
├── ⏳ Chapter 9 - Problem Solving Session
│
├── ⏳ Chapter 10 - Pattern Library Update
│
└── ⏳ Chapter 11 - Assignment & Reflection
```

---

# Day 2 - Chapter 8

# 🐞 Common Bugs & Edge Cases

Day 2-এর Chapter 1–7 পর্যন্ত আমরা Array Problem-এর Core Pattern শিখেছি।

এখন পর্যন্ত আমাদের Mental Toolbox:

```text
Traversal
│
├── Accumulation
│
├── Counting
│
├── Maximum
│
├── Minimum
│
├── Linear Search
│
├── Flag
│
├── Index Tracking
│
├── First Occurrence
│
├── Last Occurrence
│
├── Conditional Best
│
└── Combining Patterns
```

কিন্তু Competitive Programming-এ শুধু Logic বের করতে পারলেই হবে না।

অনেক সময়:

```text
Logic বুঝেছি
    ↓
Pattern চিনেছি
    ↓
Code লিখেছি
    ↓
Sample Test Passed
    ↓
Submit
    ↓
Wrong Answer ❌
```

কেন?

কারণ হতে পারে:

```text
Wrong Initialization
Wrong Loop Boundary
Wrong Condition
Wrong Update Rule
Wrong break
Wrong State Reset
Missing Edge Case
Integer Overflow
Division by Zero
Wrong Output Format
```

Chapter 8-এ আমরা শিখব:

> **নিজের Code-এর বিরুদ্ধে নিজেই Test Case তৈরি করা।**

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি পারবে:

* Bug এবং Syntax Error-এর পার্থক্য বুঝতে;
* Compile Error, Runtime Error এবং Wrong Answer আলাদা করতে;
* Array Boundary Bug ধরতে;
* Initialization Bug ধরতে;
* State Reset Bug ধরতে;
* Condition Bug ধরতে;
* `if` বনাম `else if` Bug ধরতে;
* `=` বনাম `==` Bug চিনতে;
* `break` Bug বুঝতে;
* First এবং Last Occurrence Bug ধরতে;
* Conditional Maximum/Minimum-এর Initialization সমস্যা বুঝতে;
* Integer Division Bug বুঝতে;
* Division by Zero prevent করতে;
* Overflow Risk চিনতে;
* Edge Case তৈরি করতে;
* Counterexample বানাতে;
* Dry Run Table ব্যবহার করে Bug isolate করতে;
* Random Debugging-এর বদলে Systematic Debugging করতে।

আজকের Main Mental Model:

```text
Wrong Answer
      ↓
Don't Randomly Edit Code
      ↓
Classify the Bug
      ↓
Find a Small Failing Test
      ↓
Dry Run
      ↓
Find Exact Wrong State Transition
      ↓
Fix the Cause
      ↓
Retest Old + New Cases
```

---

# Part 1 - Error এবং Bug চিনে নেওয়া

# Lesson 1 - সব Error একরকম না

Programming-এ Problem হলে Beginner অনেক সময় সবকিছুকে বলে:

```text
Code কাজ করছে না
```

কিন্তু এটা Debugging-এর জন্য যথেষ্ট precise না।

আমরা প্রথমে Error-কে Category-তে ভাগ করব।

```text
Program Problem
│
├── Compile Error
│
├── Runtime Error
│
├── Wrong Answer
│
├── Time Limit Exceeded
│
└── Output Format Problem
```

Day 2-তে আমাদের Main Focus:

```text
Compile Error
Runtime Error
Wrong Answer
Output Format Problem
```

---

# Lesson 2 - Compile Error

Compile Error মানে Compiler তোমার Code থেকে Executable Program বানাতে পারছে না।

Example:

```c
#include <stdio.h>

int main()
{
    int x = 10

    printf("%d\n", x);

    return 0;
}
```

এখানে:

```c
int x = 10
```

এর পরে:

```text
;
```

নেই।

Compile করলে Error আসবে।

আরেকটি Example:

```c
pritnf("Hello\n");
```

এখানে Function Name ভুল।

Expected:

```c
printf("Hello\n");
```

Mental Model:

```text
Compile Error
      ↓
Program এখনো Run-ই হয়নি
```

---

# Lesson 3 - Runtime Error

Code Compile হয়েছে।

কিন্তু Run করার সময় Program abnormalভাবে fail করছে।

Conceptual Examples:

```text
Invalid Memory Access
Invalid Array Access
Division by Zero
Stack Overflow
```

Day 2-এর Array Context-এ একটি Dangerous Mistake:

```c
int arr[5];

arr[5] = 100;
```

Valid Index:

```text
0
1
2
3
4
```

কিন্তু Access করা হয়েছে:

```text
5
```

এটি Out-of-Bounds Access।

C Language-এ এর Behaviour dangerous এবং unpredictable।

Program:

```text
Crash করতে পারে
Wrong Value দিতে পারে
দেখতে ঠিকও চলতে পারে
```

তাই:

> **Program crash না করলেই Code safe-এটা ধরে নেওয়া যাবে না।**

---

# Lesson 4 - Wrong Answer

Competitive Programming-এ সবচেয়ে common frustration:

```text
Compilation Successful
        ↓
Program Runs
        ↓
Sample Passed
        ↓
Submit
        ↓
Wrong Answer
```

এর মানে সাধারণত:

```text
কিছু Input-এর জন্য
তোমার Logic ভুল Result দিচ্ছে
```

Example:

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

Input:

```text
5
1 8 3 10 2
```

Output:

```text
10
```

Correct।

কিন্তু Input:

```text
5
-8 -3 -10 -2 -7
```

Program Output:

```text
0
```

Correct Answer:

```text
-2
```

অর্থাৎ:

```text
Sample-like Positive Input
        ↓
Passed

All Negative Input
        ↓
Failed
```

এটাই Edge Case-এর প্রয়োজনীয়তা।

---

# Part 2 - Array Boundary Bugs

# Lesson 5 - Off-by-One Error

Array Problem-এর সবচেয়ে common Bug-এর একটি:

# **Off-by-One Error**

ধরো:

```c
int arr[n];
```

Valid Index:

```text
0
1
2
...
n - 1
```

Correct Traversal:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

Wrong:

```c
for (int i = 0; i <= n; i++)
{
    printf("%d ", arr[i]);
}
```

Difference:

```text
i < n
```

versus:

```text
i <= n
```

শেষ Iteration-এ Wrong Code:

```text
i = n
```

তখন Access:

```text
arr[n]
```

কিন্তু Last Valid Element:

```text
arr[n - 1]
```

---

# Lesson 6 - Index Mental Model

ধরো:

```text
n = 5
```

Array:

```text
Value:    10   20   30   40   50
Index:     0    1    2    3    4
```

Relationship:

```text
Size = 5
Last Index = 4
```

General Rule:

```text
Size = n
        ↓
Last Index = n - 1
```

এটা মাথায় স্থায়ী করতে হবে।

---

# Lesson 7 - Wrong Starting Index

সব Loop সবসময় `0` থেকে শুরু হবে না।

Example:

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

এখানে `1` থেকে শুরু করার কারণ:

```text
arr[0]
already used for initialization
```

তবে নিচের Code-ও logically correct:

```c
int max = arr[0];

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

শুধু:

```text
arr[0]
```

নিজের সঙ্গেই একবার compare হবে।

এটা ভুল না।

কিন্তু Mental Habit হিসেবে:

```text
Initialize from arr[0]
        ↓
Process remaining elements
        ↓
Start from i = 1
```

পরিষ্কার।

---

# Part 3 - Initialization Bugs

# Lesson 8 - Initialization কেন এত গুরুত্বপূর্ণ?

Pattern Code-এ State Variable থাকে।

Example:

```text
sum
count
max
min
found
first
last
```

প্রতিটি State-এর Initial Meaning থাকতে হবে।

যেমন:

```c
int sum = 0;
```

Meaning:

```text
এখন পর্যন্ত কোনো Value যোগ করা হয়নি
        ↓
Total = 0
```

Counter:

```c
int count = 0;
```

Meaning:

```text
এখন পর্যন্ত কোনো Match পাওয়া যায়নি
        ↓
Count = 0
```

Flag:

```c
int found = 0;
```

Meaning:

```text
এখন পর্যন্ত Target পাওয়া যায়নি
```

Initialization random number দিয়ে করা যাবে না।

---

# Lesson 9 - Sum-এর Wrong Initialization

Wrong:

```c
int sum = 1;
```

তারপর:

```c
for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

Input:

```text
3
10 20 30
```

Actual Sum:

```text
60
```

Program:

```text
1 + 10 + 20 + 30
= 61
```

Correct:

```c
int sum = 0;
```

Accumulator-এর Identity Value বুঝতে হবে।

Addition-এর জন্য:

```text
0
```

কারণ:

```text
x + 0 = x
```

---

# Lesson 10 - Product-এর Initialization

Problem:

> সব Element-এর Product বের করো।

Wrong:

```c
int product = 0;
```

তারপর:

```c
product *= arr[i];
```

যে Number-ই আসুক:

```text
0 × anything = 0
```

তাই Multiplication Accumulator:

```c
int product = 1;
```

কারণ:

```text
x × 1 = x
```

Mental Table:

| Operation         | Common Initial State |
| ----------------- | -------------------: |
| Sum               |                  `0` |
| Count             |                  `0` |
| Product           |                  `1` |
| Found Flag        |                  `0` |
| First Index       |                 `-1` |
| Last Index        |                 `-1` |
| Unconditional Max |             `arr[0]` |
| Unconditional Min |             `arr[0]` |

---

# Lesson 11 - Maximum-এ `0` Bug

Wrong:

```c
int max = 0;
```

এই Code Positive Number-এর ক্ষেত্রে কাজ করতে পারে।

কিন্তু:

```text
All Negative
```

Case-এ fail করবে।

Input:

```text
4
-10 -3 -8 -5
```

Dry Run:

| Current | Max Before | Update? | Max After |
| ------: | ---------: | ------- | --------: |
|     -10 |          0 | No      |         0 |
|      -3 |          0 | No      |         0 |
|      -8 |          0 | No      |         0 |
|      -5 |          0 | No      |         0 |

Final:

```text
0
```

কিন্তু Correct:

```text
-3
```

Safe:

```c
int max = arr[0];
```

---

# Lesson 12 - Minimum-এ `0` Bug

Wrong:

```c
int min = 0;
```

Input:

```text
5
8 3 10 2 7
```

সব Number Positive।

কোনো Number:

```text
< 0
```

না।

তাই `min` থেকে যায়:

```text
0
```

কিন্তু Input-এ `0`-ই নেই।

Correct:

```c
int min = arr[0];
```

General Rule:

> **Unconditional Maximum বা Minimum-এর Initial State হিসেবে Valid Input Value ব্যবহার করো।**

---

# Part 4 - State Reset Bugs

# Lesson 13 - State Variable Loop-এর ভিতরে Initialize করা

Problem:

> Positive Number Count করো।

Wrong:

```c
for (int i = 0; i < n; i++)
{
    int count = 0;

    if (arr[i] > 0)
    {
        count++;
    }
}
```

এখানে প্রতিটি Iteration-এ:

```text
count = 0
```

আবার তৈরি হচ্ছে।

Mental Simulation:

```text
Iteration 1
count = 0
match
count = 1
iteration ends

Iteration 2
count = 0 again
```

Correct:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        count++;
    }
}
```

Pattern:

```text
Initialize State
        ↓
Before Traversal

Update State
        ↓
During Traversal

Use Final State
        ↓
After Traversal
```

---

# Lesson 14 - Nested Scope বুঝে রাখো

এই Code:

```c
for (int i = 0; i < n; i++)
{
    int x = arr[i];
}
```

Loop-এর বাইরে:

```c
printf("%d", x);
```

করলে Problem হবে।

কারণ `x`-এর Scope Loop Block-এর মধ্যে।

এখন Deep Scope Theory দরকার নেই।

শুধু মনে রাখো:

```text
Variable কোথায় declare করেছি?
        ↓
কোথা পর্যন্ত দরকার?
```

State যদি পুরো Traversal-এর Information ধরে রাখে:

```text
sum
count
max
min
found
```

তাহলে সাধারণত Loop-এর আগে declare করবে।

---

# Part 5 - Condition Bugs

# Lesson 15 - Condition উল্টো লেখা

Problem:

> Count even numbers.

Correct:

```c
if (arr[i] % 2 == 0)
{
    count++;
}
```

Wrong:

```c
if (arr[i] % 2 != 0)
{
    count++;
}
```

দ্বিতীয়টি Odd Count করছে।

এ ধরনের Bug Syntax Error না।

Compiler কিছু বলবে না।

তাই Debugging-এ প্রশ্ন:

```text
Condition সত্য হলে
আমি ঠিক কোন Category-তে আছি?
```

---

# Lesson 16 - `=` বনাম `==`

Assignment:

```c
x = 5;
```

Meaning:

```text
x-এর মধ্যে 5 রাখো
```

Comparison:

```c
x == 5
```

Meaning:

```text
x কি 5-এর সমান?
```

Search Problem:

```c
if (arr[i] == target)
```

Wrong:

```c
if (arr[i] = target)
```

Mental Shortcut:

```text
Store
  ↓
  =
```

```text
Compare
   ↓
  ==
```

---

# Lesson 17 - `if` বনাম `else if`

Problem:

> Positive, Negative এবং Zero Count করো।

একটি Number একই সঙ্গে:

```text
Positive
and
Negative
```

হতে পারে না।

Categories mutually exclusive।

তাই:

```c
if (arr[i] > 0)
{
    positive++;
}
else if (arr[i] < 0)
{
    negative++;
}
else
{
    zero++;
}
```

---

কিন্তু Problem:

> Divisible by 2 এবং Divisible by 3 আলাদাভাবে Count করো।

Number:

```text
6
```

একই সঙ্গে:

```text
Divisible by 2
Divisible by 3
```

তাই:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}

if (arr[i] % 3 == 0)
{
    count3++;
}
```

যদি লিখো:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}
else if (arr[i] % 3 == 0)
{
    count3++;
}
```

তাহলে `6` প্রথম Condition-এ ঢোকার পরে দ্বিতীয় Condition Check-ই হবে না।

---

# Lesson 18 - Boundary Condition Bug

Problem:

> Count numbers greater than 10.

Correct:

```c
if (arr[i] > 10)
```

কিন্তু:

```c
if (arr[i] >= 10)
```

লিখলে `10`-কেও Count করবে।

এই দুইটি Problem এক না:

```text
Greater Than 10
```

versus:

```text
Greater Than or Equal to 10
```

CP-তে Problem Statement-এর শব্দকে Operator-এ translate করতে হবে।

| Statement    | Operator |
| ------------ | -------- |
| greater than | `>`      |
| at least     | `>=`     |
| less than    | `<`      |
| at most      | `<=`     |
| equal to     | `==`     |
| not equal to | `!=`     |

---

# Part 6 - Search Bugs

# Lesson 19 - `Not Found` Loop-এর ভিতরে Print করা

Problem:

> Target আছে কি না বের করো।

Wrong:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

Input:

```text
5
3 7 10 12 8
10
```

Output হতে পারে:

```text
Not Found
Not Found
Found
Not Found
Not Found
```

কিন্তু Problem চেয়েছে একটি Final Answer।

Correct Mental Model:

```text
One element didn't match
        ≠
Target absent from whole array
```

Correct:

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}

if (found == 1)
{
    printf("Found\n");
}
else
{
    printf("Not Found\n");
}
```

---

# Lesson 20 - Wrong `break`

Problem:

> Target কতবার আছে?

Wrong:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
        break;
    }
}
```

এটা Count করছে:

```text
Maximum one occurrence
```

কারণ First Match-এর পর Loop শেষ।

Problem যদি হয়:

```text
Does target exist?
```

তাহলে `break` ঠিক।

Problem যদি হয়:

```text
Count all occurrences
```

তাহলে `break` ভুল।

Decision Question:

```text
এই Match পাওয়ার পর
Final Answer পুরোপুরি জানা গেছে?
```

যদি Yes:

```text
break possible
```

যদি No:

```text
continue traversal
```

---

# Lesson 21 - First Occurrence Bug

Input:

```text
7
5 2 8 2 10 2 7
```

Target:

```text
2
```

First Index:

```text
1
```

Wrong:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

Final:

```text
5
```

কারণ প্রতিটি Match-এ Index Update হচ্ছে।

এটা আসলে:

```text
Last Occurrence
```

Pattern।

First Occurrence চাইলে:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

---

# Lesson 22 - First Maximum Index Bug

Input:

```text
5
7 12 3 12 8
```

Problem:

> Maximum-এর First Index বের করো।

Wrong:

```c
if (arr[i] >= max)
{
    max = arr[i];
    index = i;
}
```

প্রথম `12`:

```text
index = 1
```

দ্বিতীয় `12`:

```text
12 >= 12
        ↓
True
        ↓
index = 3
```

Final:

```text
3
```

কিন্তু First Index:

```text
1
```

Correct:

```c
if (arr[i] > max)
{
    max = arr[i];
    index = i;
}
```

Mental Rule:

```text
Strict Improvement
        ↓
Update
```

Equal Value-তে Update না করলে First Occurrence preserve হয়।

---

# Part 7 - Conditional Maximum/Minimum Bugs

# Lesson 23 - Invalid Initial Candidate

Problem:

> Largest Even Number বের করো।

Wrong:

```c
int max_even = arr[0];
```

Input:

```text
5
99 2 8 10 4
```

এখানে:

```text
arr[0] = 99
```

কিন্তু `99` Even না।

যদি Code হয়:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] % 2 == 0 && arr[i] > max_even)
    {
        max_even = arr[i];
    }
}
```

Even Values:

```text
2 8 10 4
```

কোনোটাই `99`-এর চেয়ে বড় না।

Final Answer:

```text
99
```

যা Invalid।

---

# Lesson 24 - Valid Candidate Pattern

Conditional Maximum-এর Safe Pattern:

```text
Traversal
↓
Check Condition
↓
First Valid Candidate?
↓
Initialize
↓
Future Valid Candidate
↓
Compare
↓
Update
```

Code:

```c
int found = 0;
int max_even;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (found == 0)
        {
            max_even = arr[i];
            found = 1;
        }
        else if (arr[i] > max_even)
        {
            max_even = arr[i];
        }
    }
}
```

শেষে:

```c
if (found == 1)
{
    printf("%d\n", max_even);
}
else
{
    printf("No even number\n");
}
```

---

# Lesson 25 - No Valid Candidate Edge Case

Problem:

> Smallest Positive Number বের করো।

Input:

```text
5
-8 -3 0 -10 -2
```

এখানে Positive Number নেই।

তাই Problem অনুযায়ী তোমাকে Handle করতে হতে পারে:

```text
No Positive Number
```

অথবা Judge যেটা নির্দিষ্ট করে:

```text
-1
```

অথবা অন্য কোনো required output।

Important Rule:

> **নিজে Output Format invent করবে না। Problem Statement যা বলে সেটাই follow করবে।**

---

# Part 8 - Arithmetic Bugs

# Lesson 26 - Integer Division Bug

Problem:

> Average বের করো।

ধরো:

```c
int sum = 65;
int count = 4;
```

এই Expression:

```c
sum / count
```

দুই Operand-ই `int`।

Result:

```text
16
```

`16.25` না।

যদি:

```c
double average = sum / count;
```

লিখো, তবুও Division আগে Integer Division হিসেবে হয়ে যাবে।

তারপর:

```text
16
```

`double`-এ Store হয়ে:

```text
16.0
```

হবে।

Correct:

```c
double average = (double)sum / count;
```

এখন:

```text
65.0 / 4
        ↓
16.25
```

---

# Lesson 27 - Division by Zero

Problem:

> Positive Number-এর Average বের করো।

Input:

```text
5
-5 -2 0 -8 -1
```

Positive Count:

```text
0
```

যদি করো:

```c
double average = (double)sum / count;
```

তাহলে:

```text
count = 0
```

Problem।

তাই আগে:

```c
if (count > 0)
{
    double average = (double)sum / count;
}
else
{
    // Handle according to problem statement
}
```

Mental Pipeline:

```text
Accumulator + Counter
        ↓
Need Division
        ↓
Check Denominator
        ↓
Non-zero?
   ↙          ↘
 Yes          No
  ↓            ↓
Divide        Handle Case
```

---

# Lesson 28 - Integer Overflow চিনে রাখা

ধরো:

```text
n = 100000
```

এবং প্রতিটি Value:

```text
1000000000
```

Sum:

```text
100000 × 1000000000
```

যা `int` Range-এর বাইরে।

তখন:

```c
int sum = 0;
```

safe না।

প্রয়োজন হতে পারে:

```c
long long sum = 0;
```

এখন তোমাকে সব Data Type Limit মুখস্থ করতে হবে না।

কিন্তু Problem Constraints দেখলে প্রশ্ন করবে:

```text
Maximum possible result কত বড় হতে পারে?
```

এটা CP-এর গুরুত্বপূর্ণ Habit।

---

# Part 9 - Output Format Bugs

# Lesson 29 - Online Judge তোমার Friend না 😄

Local Practice-এ তুমি লিখতে পারো:

```c
printf("Enter array size: ");
scanf("%d", &n);
```

তারপর:

```c
printf("The maximum number is: %d\n", max);
```

কিন্তু Online Judge যদি Expected Output দেয়:

```text
15
```

আর তুমি Print করো:

```text
The maximum number is: 15
```

তাহলে Wrong Answer হতে পারে।

Contest Code:

```c
printf("%d\n", max);
```

যদি Problem শুধু Number চায়।

Rule:

```text
Input Prompt
    ↓
Usually Don't Print

Expected Output
    ↓
Match Exactly
```

---

# Lesson 30 - Extra Space এবং Newline

বেশিরভাগ Judge trailing whitespace tolerate করতে পারে, কিন্তু Safe Habit:

```c
printf("%d\n", answer);
```

Output Requirement carefully পড়বে।

যদি চায়:

```text
1 2 3 4 5
```

তাহলে:

```text
1
2
3
4
5
```

একই Output না।

Formatting-ও Problem-এর অংশ।

---

# Part 10 - Edge Case Thinking

# Lesson 31 - Edge Case কী?

Edge Case মানে শুধু:

```text
অদ্ভুত Input
```

না।

Better Definition:

> **এমন Input যা তোমার Logic-এর Boundary, Assumption বা Weak Point পরীক্ষা করে।**

ধরো Maximum Problem।

Normal Test:

```text
5
1 4 7 2 3
```

এটা যথেষ্ট না।

কারণ তোমার Code অনেক ভুল নিয়েও এই Test Pass করতে পারে।

---

# Lesson 32 - Maximum Problem-এর Edge Cases

## Case 1 - Single Element

```text
1
10
```

Expected:

```text
10
```

Test করে:

```text
n = 1 handling
initialization
loop starting point
```

---

## Case 2 - All Negative

```text
5
-5 -2 -8 -1 -9
```

Expected:

```text
-1
```

Test করে:

```text
max = 0 bug
```

---

## Case 3 - All Equal

```text
5
7 7 7 7 7
```

Expected:

```text
7
```

Test করে:

```text
equality handling
```

---

## Case 4 - Maximum First

```text
5
100 5 4 3 2
```

Expected:

```text
100
```

Test করে:

```text
initial candidate preservation
```

---

## Case 5 - Maximum Last

```text
5
1 2 3 4 100
```

Expected:

```text
100
```

Test করে:

```text
full traversal
loop boundary
```

---

# Lesson 33 - Search Problem-এর Edge Cases

Problem:

> Target-এর First Index বের করো।

Test Set:

### Target First

```text
5
10 2 3 4 5
10
```

Expected:

```text
0
```

### Target Middle

```text
5
1 2 10 4 5
10
```

Expected:

```text
2
```

### Target Last

```text
5
1 2 3 4 10
10
```

Expected:

```text
4
```

### Target Missing

```text
5
1 2 3 4 5
10
```

Expected:

```text
-1
```

যদি Problem তাই specify করে।

### Target Repeated

```text
6
1 10 3 10 5 10
10
```

Expected First:

```text
1
```

Expected Last:

```text
5
```

---

# Lesson 34 - Counting Problem-এর Edge Cases

Problem:

> Even Number Count করো।

Test:

### Zero Match

```text
5
1 3 5 7 9
```

Expected:

```text
0
```

### One Match

```text
5
1 3 4 7 9
```

Expected:

```text
1
```

### All Match

```text
5
2 4 6 8 10
```

Expected:

```text
5
```

### Mixed

```text
6
2 3 4 5 6 7
```

Expected:

```text
3
```

Mental Pattern:

```text
0 Match
1 Match
Many Matches
All Match
```

এটা Counting Problem-এর useful Test Set।

---

# Lesson 35 - Conditional Best-এর Edge Cases

Problem:

> Largest Even Number।

Test Cases:

### One Valid Candidate

```text
5
1 3 8 5 7
```

Expected:

```text
8
```

### Many Valid Candidates

```text
6
3 8 12 5 20 7
```

Expected:

```text
20
```

### No Valid Candidate

```text
5
1 3 5 7 9
```

Special handling required।

### Negative Even Values

```text
5
-8 -2 -10 -4 -6
```

Expected:

```text
-2
```

এই Case ধরতে পারে:

```text
max_even = 0
```

Bug।

---

# Part 11 - Counterexample Thinking

# Lesson 36 - Counterexample কী?

ধরো তুমি Claim করলে:

> `max = 0` দিয়ে Maximum সবসময় বের করা যায়।

আমরা এমন একটি Input খুঁজব যেখানে Claim fail করে।

```text
3
-5 -2 -8
```

এই Input হলো:

# **Counterexample**

Competitive Programming-এ powerful Skill:

```text
Code দেখে জিজ্ঞেস করো:

"কোন ছোট Input-এ এটা ভাঙতে পারে?"
```

---

# Lesson 37 - Smallest Failing Test

বড় Input দিয়ে Debugging কঠিন।

ধরো First Occurrence Code:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

Fail দেখানোর জন্য 100 Element দরকার নেই।

Small Test:

```text
2
5 5
5
```

Expected First Index:

```text
0
```

Code Result:

```text
1
```

এটাই Minimal Counterexample-এর মতো চিন্তা।

Small Failing Test-এর সুবিধা:

```text
কম Iteration
↓
Easy Dry Run
↓
Bug দ্রুত দেখা যায়
```

---

# Lesson 38 - Assumption Hunting

Bug খোঁজার সময় নিজের Code-এর Hidden Assumption ধরো।

Example:

```c
int max = 0;
```

Hidden Assumption:

```text
There is at least one value >= 0
```

কিন্তু Problem কি এটা guarantee করেছে?

যদি না করে:

```text
Bug Risk
```

Example:

```c
int max_even = arr[0];
```

Hidden Assumption:

```text
arr[0] is even
```

Problem কি Guarantee করেছে?

না।

তাই Bug।

Debugging Question:

```text
আমার Code কোন জিনিস সত্য ধরে নিচ্ছে?
        ↓
Problem Statement কি সেটা Guarantee করেছে?
```

---

# Part 12 - Dry Run Debugging

# Lesson 39 - Dry Run শুধু শেখার জন্য না

অনেকে মনে করে Dry Run Beginner-এর কাজ।

আসলে Dry Run হলো Debugging Tool।

তুমি State Transition দেখবে।

Example:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

Input:

```text
5
2 3 6 7 8
```

Dry Run:

|  `i` | `arr[i]` | Even? | `count` before | `count` after |
| ---: | -------: | ----- | -------------: | ------------: |
|    0 |        2 | Yes   |              0 |             1 |
|    1 |        3 | No    |              1 |             1 |
|    2 |        6 | Yes   |              1 |             2 |
|    3 |        7 | No    |              2 |             2 |
|    4 |        8 | Yes   |              2 |             3 |

Final:

```text
3
```

---

# Lesson 40 - Debugging Table কীভাবে বানাবে?

Problem অনুযায়ী Column select করবে।

Maximum Problem:

|  `i` | Current | Max Before | Condition | Max After |
| ---: | ------: | ---------: | --------- | --------: |

Counting Problem:

|  `i` | Current | Match? | Count Before | Count After |
| ---: | ------: | ------ | -----------: | ----------: |

Search Problem:

|  `i` | Current | Match? | Found Before | Found After |
| ---: | ------: | ------ | -----------: | ----------: |

Index Problem:

|  `i` | Current | Match? | Index Before | Index After |
| ---: | ------: | ------ | -----------: | ----------: |

Combined Pattern:

|  `i` | Current | Condition | State 1 | State 2 |
| ---: | ------: | --------- | ------: | ------: |

অর্থাৎ:

> **Dry Run Table-এ সেই State-গুলো রাখবে যেগুলো Answer তৈরি করছে।**

---

# Part 13 - Systematic Debugging Workflow

# Lesson 41 - Random Debugging কেন খারাপ?

Beginner Workflow:

```text
Wrong Answer
    ↓
একটা if বদলাই
    ↓
Run
    ↓
আরেকটা loop বদলাই
    ↓
Run
    ↓
break সরাই
    ↓
Run
    ↓
কেন কাজ করছে জানি না
```

এতে দুইটা Problem হয়:

```text
1. Bug-এর কারণ শেখা হয় না

2. নতুন Bug তৈরি হতে পারে
```

Better Workflow:

```text
Wrong Answer
    ↓
Find Failing Test
    ↓
Find Expected Output
    ↓
Find Actual Output
    ↓
Classify Pattern
    ↓
List State Variables
    ↓
Dry Run
    ↓
Find First Wrong State
    ↓
Find Cause
    ↓
Fix
    ↓
Retest
```

---

# Lesson 42 - First Wrong State Principle

ধরো Final Output ভুল।

শুধু Final Output দেখলে সবসময় Bug বোঝা যায় না।

তাই State Track করো।

Example:

```text
Expected:
max = -2

Actual:
max = 0
```

Dry Run-এ দেখলে:

```text
Initial State থেকেই max = 0
```

Problem শুরু থেকেই।

তাই Bug:

```text
Initialization
```

আর যদি Initial State ঠিক কিন্তু একটি Iteration-এর পরে ভুল হয়:

```text
Condition বা Update Rule
```

হতে পারে।

Mental Rule:

> **যে মুহূর্তে State প্রথম ভুল হয়, Bug সাধারণত তার কাছাকাছি।**

---

# Lesson 43 - Bug Classification Checklist

Wrong Answer হলে এই Order-এ Check করতে পারো:

```text
Wrong Answer
│
├── Did I understand the output correctly?
│
├── Is initialization valid?
│
├── Is loop boundary correct?
│
├── Is condition correct?
│
├── Is update rule correct?
│
├── Is state accidentally reset?
│
├── Is break correct?
│
├── Is first/last logic correct?
│
├── Is a valid candidate guaranteed?
│
├── Can denominator be zero?
│
├── Is integer division happening?
│
├── Can int overflow?
│
└── Is output format exact?
```

সব Problem-এ সব Check দরকার হবে না।

Relevantগুলো Check করবে।

---

# Part 14 - Bug Hunt Session

এখন কিছু Buggy Code দেখব।

প্রথমে নিজে Bug ধরার চেষ্টা করবে।

---

# Lesson 44 - Bug Hunt 1

Problem:

> Find Maximum.

Code:

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

Questions:

```text
1. কোন Input Category-তে fail করবে?

2. Bug Category কী?

3. Smallest Failing Test বানাও।

4. Fix কী?
```

Answer:

```text
Fail:
All values negative

Bug:
Invalid Initialization

Possible Small Test:
1
-5

Fix:
max = arr[0]
```

---

# Lesson 45 - Bug Hunt 2

Problem:

> Count Target Occurrences.

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
        break;
    }
}
```

Bug:

```text
Wrong break
```

Failing Test:

```text
3
5 5 5
5
```

Expected:

```text
3
```

Actual:

```text
1
```

---

# Lesson 46 - Bug Hunt 3

Problem:

> First Target Index.

Code:

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

Bug:

```text
Update continues after first match
```

Actual Pattern:

```text
Last Occurrence
```

Small Test:

```text
2
7 7
7
```

Expected First:

```text
0
```

Actual:

```text
1
```

---

# Lesson 47 - Bug Hunt 4

Problem:

> Average of Positive Values.

Code:

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > 0)
    {
        sum += arr[i];
        count++;
    }
}

double average = sum / count;
```

Potential Bugs:

```text
1. Integer Division

2. Division by Zero
```

Need:

```c
if (count > 0)
{
    double average = (double)sum / count;
}
```

তারপর No-positive Case Problem Statement অনুযায়ী handle করতে হবে।

---

# Lesson 48 - Bug Hunt 5

Problem:

> Largest Even Number.

Code:

```c
int max_even = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] % 2 == 0 && arr[i] > max_even)
    {
        max_even = arr[i];
    }
}
```

Bug:

```text
arr[0] may not be a valid candidate
```

Failing Test:

```text
3
99 2 8
```

Expected:

```text
8
```

Actual:

```text
99
```

Need:

```text
Valid Candidate Initialization
```

---

# Lesson 49 - Bug Hunt 6

Problem:

> Count Numbers Divisible by 2 and Divisible by 3 separately.

Code:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}
else if (arr[i] % 3 == 0)
{
    count3++;
}
```

Failing Value:

```text
6
```

`6` দুই Category-তেই Count হওয়া উচিত।

কিন্তু `else if` দ্বিতীয় Check বন্ধ করে দেয়।

Fix:

```c
if (arr[i] % 2 == 0)
{
    count2++;
}

if (arr[i] % 3 == 0)
{
    count3++;
}
```

---

# Part 15 - Edge Case Generation Framework

# Lesson 50 - নিজে Test Case বানানোর Formula

Problem দেখার পরে এই Categories থেকে Relevant Test বেছে নাও:

```text
SIZE
│
├── Minimum Size
└── Small Normal Size

VALUE
│
├── Negative
├── Zero
├── Positive
├── All Same
└── Extreme Values

POSITION
│
├── Answer First
├── Answer Middle
└── Answer Last

MATCH
│
├── No Match
├── One Match
├── Multiple Matches
└── All Match

ORDER
│
├── Increasing
├── Decreasing
└── Mixed

VALIDITY
│
├── Valid Candidate Exists
└── No Valid Candidate
```

সব Test সব Problem-এর জন্য না।

Problem অনুযায়ী select করবে।

---

# Lesson 51 - Pattern-Based Edge Case Map

## Traversal

```text
n = 1
answer at last index
```

## Accumulation

```text
zero values
negative values
large values
```

## Counting

```text
zero matches
one match
all match
```

## Maximum

```text
all negative
all equal
max first
max last
```

## Minimum

```text
all positive
all equal
min first
min last
```

## Search

```text
target first
target last
target absent
target repeated
```

## Conditional Best

```text
one valid candidate
many valid candidates
no valid candidate
negative valid candidates
```

## Average

```text
count = 0
fractional result
large sum
```

---

# Part 16 - Contest Debugging Strategy

# Lesson 52 - Contest-এ Wrong Answer এলে

Contest-এর সময় Panic Debugging করলে সময় নষ্ট হয়।

Workflow:

```text
WA
↓
Read Output Requirement Again
↓
Check Constraints
↓
Check Initialization
↓
Check Boundary
↓
Check Equality Cases
↓
Check No-match Case
↓
Create Small Counterexample
↓
Dry Run
↓
Fix Exact Cause
↓
Retest Sample
↓
Retest Counterexample
↓
Submit
```

---

# Lesson 53 - Sample Passed মানে Correct না

Sample Test-এর উদ্দেশ্য:

```text
Problem বোঝাতে সাহায্য করা
```

Sample Test:

```text
Proof of Correctness
```

না।

তোমার Code:

```text
Sample 1 Passed
Sample 2 Passed
```

তবুও Hidden Test-এ fail করতে পারে।

তাই:

```text
Sample Tests
      +
Own Tests
      +
Edge Cases
      =
Better Confidence
```

---

# Lesson 54 - Debug Print ব্যবহার

Local Debugging-এ Temporary Print ব্যবহার করতে পারো।

Example:

```c
printf("i=%d value=%d max=%d\n", i, arr[i], max);
```

এতে State Change দেখা যায়।

কিন্তু Submit করার আগে Debug Print remove করবে।

কারণ Expected:

```text
10
```

তুমি যদি Print করো:

```text
i=0 value=5 max=5
i=1 value=10 max=10
10
```

Judge Wrong Answer দেবে।

Mental Rule:

```text
Debug Output
    ↓
Local Only

Final Output
    ↓
Judge Requirement Only
```

---

# Part 17 - Chapter 8 Practice Session

এখন নিচের Problem-গুলোতে Code-এর Bug খুঁজবে।

সরাসরি Correct Code লিখবে না।

প্রথমে এই Format:

```text
Bug Category:
...

Failing Input:
...

Expected Output:
...

Actual/Incorrect Behaviour:
...

Why It Fails:
...

Fix Idea:
...
```

---

## Practice 1 - Maximum Bug

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

নিজে:

```text
Bug Category:
???

Failing Input:
???

Why:
???

Fix:
???
```

---

## Practice 2 - Boundary Bug

```c
for (int i = 0; i <= n; i++)
{
    sum += arr[i];
}
```

নিজে Explain করবে:

```text
Valid Last Index:
???

Invalid Access:
???

Correct Condition:
???
```

---

## Practice 3 - Counter Reset Bug

```c
for (int i = 0; i < n; i++)
{
    int count = 0;

    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

Questions:

```text
1. State কেন survive করছে না?

2. count কোথায় declare করা উচিত?

3. কোন Bug Category?
```

---

## Practice 4 - Search Bug

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

Explain:

```text
একটি Element Match না করা
কেন পুরো Search fail হওয়ার প্রমাণ না?
```

---

## Practice 5 - Average Bug

```c
double average = sum / count;
```

দুইটি Risk লিখবে।

```text
Risk 1:
...

Risk 2:
...
```

---

## Practice 6 - First Index Bug

```c
if (arr[i] == target)
{
    index = i;
}
```

Full Traversal-এর পরে এটা কোন Index রাখবে?

```text
First?
Last?
```

কারণ লিখবে।

---

## Practice 7 - Conditional Maximum Bug

```c
int max_even = arr[0];
```

Question:

```text
কোন Hidden Assumption করা হয়েছে?

Problem কি সেটা Guarantee করেছে?

Failing Test বানাও।
```

---

## Practice 8 - `if/else if` Bug

```c
if (x % 2 == 0)
{
    count2++;
}
else if (x % 3 == 0)
{
    count3++;
}
```

Input Value:

```text
6
```

Dry Run করে Explain করবে।

---

# Part 18 - Chapter 8 Assignment

# Task 1 - Build an Edge Case Table

Problem:

> Find Maximum Value and its First Index.

এই Table Complete করবে:

| Test Type      | Input Idea | What It Tests |
| -------------- | ---------- | ------------- |
| Single Element | `???`      | `???`         |
| All Negative   | `???`      | `???`         |
| All Equal      | `???`      | `???`         |
| Max First      | `???`      | `???`         |
| Max Last       | `???`      | `???`         |
| Max Repeated   | `???`      | `???`         |

---

# Task 2 - Find the Counterexample

Code:

```c
int min = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

তোমার কাজ:

```text
Smallest Simple Failing Input:

...

Expected:

...

Actual:

...

Hidden Assumption:

...

Correct Initialization:

...
```

---

# Task 3 - Search Debugging

Buggy Code:

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
    }
    else
    {
        found = 0;
    }
}
```

Questions:

```text
1. এই Code final-এ আসলে কী Information ধরে রাখছে?

2. কোন Input-এ Target আগে থাকবে কিন্তু Last Element Target হবে না?

3. তখন Result কী হবে?

4. Correct State Update Rule কী হওয়া উচিত?
```

Hint:

```text
Once Found
    ↓
Should it become Not Found again?
```

---

# Task 4 - First vs Last Bug

Problem:

> Find First Index of Maximum.

Code:

```c
int max = arr[0];
int index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] >= max)
    {
        max = arr[i];
        index = i;
    }
}
```

Answer করবে:

```text
Bug:
...

Failing Test:
...

Expected Index:
...

Actual Index:
...

Correct Operator:
...

Why:
...
```

---

# Task 5 - Average Safety Analysis

Problem:

> Average of Even Numbers.

Code লেখার আগে লিখবে:

```text
States:
1. ...
2. ...

Condition:
...

Possible Division Problem:
...

How to prevent:
...

Possible Integer Division Problem:
...

How to prevent:
...

No Even Number Edge Case:
...
```

---

# Task 6 - Design Tests for Largest Negative

Problem:

> Largest Negative Number বের করো।

কমপক্ষে ৫টি Test Case বানাবে।

Categories:

```text
1. One negative

2. Multiple negatives

3. All negative

4. Mixed positive and negative

5. No negative
```

প্রতিটির Expected Output লিখবে।

---

# Task 7 - Bug Classification

নিচের প্রতিটি Bug-কে Category দাও:

```text
1. max = 0 for all-negative array

2. i <= n

3. count declared inside loop

4. break after first match while counting all matches

5. sum / count where both are int

6. divide when count == 0

7. >= used while preserving first maximum index

8. else if used for overlapping conditions

9. printing "Not Found" for every non-matching element

10. using arr[0] as largest-even initial value without checking parity
```

Possible Categories:

```text
Initialization Bug
Boundary Bug
State Reset Bug
Break Bug
Arithmetic Bug
Division by Zero Bug
Update Rule Bug
Condition Structure Bug
Search Logic Bug
Invalid Candidate Bug
```

---

# Task 8 - Dry Run Assignment

Buggy Code:

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

Input:

```text
4
-5 -2 -8 -1
```

এই Table নিজে Fill করবে:

|  `i` | `arr[i]` | `max` before | `arr[i] > max` | `max` after |
| ---: | -------: | -----------: | -------------- | ----------: |
|    0 |       -5 |            ? | ?              |           ? |
|    1 |       -2 |            ? | ?              |           ? |
|    2 |       -8 |            ? | ?              |           ? |
|    3 |       -1 |            ? | ?              |           ? |

তারপর লিখবে:

```text
Expected:
...

Actual:
...

First Wrong State:
...

Bug Category:
...

Fix:
...
```

---

# Task 9 - Build Your Debugging Checklist

নিজের `Day_2_assignment.md`-এ এই Section বানাবে:

```markdown
# My Debugging Checklist

Before changing code randomly, I will check:

1. Did I understand the required output?
2. Is my initialization valid?
3. Is my loop boundary correct?
4. Is my condition correct?
5. Is my state update correct?
6. Am I resetting any state accidentally?
7. Is `break` logically valid?
8. Am I preserving first or last occurrence correctly?
9. Is my initial candidate valid for conditional max/min?
10. Can division by zero happen?
11. Is integer division losing precision?
12. Can the result exceed `int`?
13. Is my output format exact?
14. Have I tested a small counterexample?
15. Have I dry-run the first failing test?
```

এটা ভবিষ্যতে Contest-এর আগে Revision Checklist হিসেবেও কাজে লাগবে।

---

# Task 10 - Final Bug Hunt Challenge

Problem:

> Find the largest even number and count how many times it occurs.

Buggy Code:

```c
int max_even = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (arr[i] > max_even)
        {
            max_even = arr[i];
        }

        if (arr[i] == max_even)
        {
            count++;
        }
    }
}
```

তোমার কাজ Code Rewrite করা না।

প্রথমে Analyse করবে:

```text
1. max_even = 0 কোন Case-এ fail করতে পারে?

2. New Maximum পাওয়া গেলে পুরোনো Maximum-এর count কী হবে?

3. count কি reset দরকার?

4. Negative Even Numbers থাকলে কী হবে?

5. No Even Number থাকলে কী হবে?

6. একটি Small Failing Test বানাও।

7. Beginner হিসেবে One-pass নাকি Two-pass Solution clearer?

8. Two-pass হলে Phase 1 এবং Phase 2 কী করবে?
```

এই Challenge-এর Goal:

```text
Code দেখেই
Bug Fix করা না
        ↓
State Relationship বোঝা
        ↓
Failing Case বানানো
        ↓
তারপর Solution Design করা
```

---

# 🧠 Chapter 8 Bug Map

```text
                         WRONG ANSWER
                              │
          ┌───────────────────┼───────────────────┐
          │                   │                   │
       STATE                LOOP               LOGIC
          │                   │                   │
    Initialization         Start Index        Condition
    State Reset            End Condition      Update Rule
    Invalid Candidate      Boundary           break
    Wrong Initial Flag     Full Traversal     if / else if
          │                                       │
          └───────────────────┬───────────────────┘
                              │
                          ARITHMETIC
                              │
                      Integer Division
                      Division by Zero
                      Overflow Risk
                              │
                              ↓
                           OUTPUT
                              │
                       Extra Text
                       Wrong Format
                       Debug Prints
```

---

# 📌 Chapter 8 Quick Revision

## Bug 1 - Maximum Initialization

Wrong:

```c
int max = 0;
```

Safe for unconditional maximum:

```c
int max = arr[0];
```

---

## Bug 2 - Array Boundary

Wrong:

```c
i <= n
```

Normal full traversal:

```c
i < n
```

---

## Bug 3 - Counter Reset

Wrong:

```c
for (...)
{
    int count = 0;
}
```

Correct Structure:

```c
int count = 0;

for (...)
{
    // update count
}
```

---

## Bug 4 - Search Output

Wrong Mental Model:

```text
Current Element Not Match
        ↓
Target Not Found
```

Correct:

```text
Whole Search Complete
        +
No Match Found
        ↓
Target Not Found
```

---

## Bug 5 - Wrong Break

```text
Need only existence?
        ↓
Break possible
```

```text
Need all matches?
        ↓
No break
```

---

## Bug 6 - First vs Last

First:

```text
Match
↓
Save
↓
Stop
```

Last:

```text
Match
↓
Update
↓
Continue
```

---

## Bug 7 - Conditional Best

Wrong:

```text
Use arbitrary candidate
```

Correct:

```text
Find first valid candidate
↓
Initialize
↓
Compare future valid candidates
```

---

## Bug 8 - Average

Need:

```text
Sum
+
Count
+
count != 0
+
Floating-point division
```

---

# 🎯 Edge Case Master Checklist

Problem Submit করার আগে Relevant Questions:

```text
□ Minimum input size হলে?

□ n = 1 হলে?

□ সব Number negative হলে?

□ সব Number positive হলে?

□ Zero থাকলে?

□ সব Number equal হলে?

□ Answer first position-এ হলে?

□ Answer last position-এ হলে?

□ Target না থাকলে?

□ Target একবার থাকলে?

□ Target multiple times থাকলে?

□ সব Element match করলে?

□ কোনো valid candidate না থাকলে?

□ Equal best value repeated হলে?

□ First occurrence নাকি last occurrence দরকার?

□ Division denominator zero হতে পারে?

□ Fractional answer integer division-এ হারিয়ে যাবে?

□ int range exceed করতে পারে?

□ Loop boundary ঠিক?

□ break-এর পরেও কি future element দরকার?

□ Output format exact?
```

---

# 🧪 Chapter 8 Self-Test

নিজের ভাষায় উত্তর দেবে।

### Question 1

`max = 0` কেন সব Input-এর জন্য safe না?

### Question 2

`i < n` এবং `i <= n`-এর Array Traversal Difference কী?

### Question 3

State Variable Loop-এর ভিতরে Initialize করলে কী Problem হতে পারে?

### Question 4

একটি Element Target-এর সমান না হলেই কেন `Not Found` বলা যায় না?

### Question 5

First Occurrence এবং Last Occurrence-এর Update Rule কীভাবে আলাদা?

### Question 6

Largest Even Problem-এ `arr[0]` দিয়ে Initialize করা কেন unsafe হতে পারে?

### Question 7

`sum / count` কখন Integer Division করবে?

### Question 8

Average Problem-এ `count == 0` কেন Check করতে হবে?

### Question 9

Counterexample কী?

### Question 10

Wrong Answer পাওয়ার পরে Random Code Change না করে তোমার Workflow কী হবে?

Expected Mental Flow:

```text
Wrong Answer
↓
Find Failing Input
↓
Expected vs Actual
↓
Classify Bug
↓
Track States
↓
Dry Run
↓
Find First Wrong State
↓
Fix Exact Cause
↓
Retest
```

---

# 🏁 Chapter 8 Completion Checklist

```text
[ ] Compile Error এবং Wrong Answer-এর পার্থক্য বুঝি

[ ] Array Boundary Bug বুঝি

[ ] i < n কেন বুঝি

[ ] max = 0 Bug বুঝি

[ ] min = 0 Bug বুঝি

[ ] State Reset Bug বুঝি

[ ] = এবং == পার্থক্য বুঝি

[ ] if এবং else if কখন ব্যবহার করতে হয় বুঝি

[ ] Wrong break চিনতে পারি

[ ] First এবং Last Occurrence Bug চিনতে পারি

[ ] Conditional Best-এর Valid Candidate Problem বুঝি

[ ] Integer Division বুঝি

[ ] Division by Zero Risk বুঝি

[ ] Overflow Risk সম্পর্কে Basic Idea আছে

[ ] Output Format Bug বুঝি

[ ] নিজে Edge Case বানাতে পারি

[ ] Small Failing Test বানাতে পারি

[ ] Counterexample কী বুঝি

[ ] Dry Run Table বানাতে পারি

[ ] Bug Category চিনতে পারি

[ ] Chapter 8 Practice শেষ করেছি

[ ] Chapter 8 Assignment শেষ করেছি
```

---

# 🎓 Chapter 8 Final Mental Model

আজকের সবচেয়ে গুরুত্বপূর্ণ শিক্ষা:

```text
Sample Passed
    ≠
Solution Correct
```

তোমার নতুন Workflow হবে:

```text
Write Solution
      ↓
Run Sample
      ↓
Create Own Tests
      ↓
Test Boundaries
      ↓
Test Missing Cases
      ↓
Test Repeated Cases
      ↓
Test Negative / Zero Cases
      ↓
Find Failure?
   ↙          ↘
 Yes          No
  ↓            ↓
Dry Run      Submit
  ↓
Find First Wrong State
  ↓
Classify Bug
  ↓
Fix Cause
  ↓
Retest
```

আর Debugging-এর সময়:

```text
Don't ask only:

"Code কেন কাজ করছে না?"
```

বরং প্রশ্ন করবে:

```text
Expected State কী ছিল?

Actual State কী হলো?

কোন Iteration-এ প্রথম ভুল হলো?

কোন Rule সেই State Update করেছে?

Bug কি Initialization-এ?

Boundary-তে?

Condition-এ?

Update-এ?

break-এ?

Arithmetic-এ?

Output-এ?
```

এই চিন্তাটা তৈরি হলে Debugging আর:

```text
Guessing Game
```

থাকবে না।

এটা হয়ে যাবে:

```text
Observe
↓
Classify
↓
Reproduce
↓
Trace
↓
Locate
↓
Fix
↓
Verify
```

---

# 🗺️ Day 2 Progress

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation Pattern
│
├── ✅ Chapter 4 - Counting Pattern
│
├── ✅ Chapter 5 - Maximum & Minimum Pattern
│
├── ✅ Chapter 6 - Searching Pattern
│
├── ✅ Chapter 7 - Combining Patterns
│
├── ✅ Chapter 8 - Common Bugs & Edge Cases
│
├── ⏳ Chapter 9 - Problem Solving Session
│
├── ⏳ Chapter 10 - Pattern Library Update
│
└── ⏳ Chapter 11 - Assignment & Reflection
```

**Day 2 - Chapter 8 এখানেই শেষ।** Chapter 9 হবে Theory-heavy Chapter না; ওটা হবে **Problem Solving Session**-যেখানে Problem দেখার পর `Problem → Pattern → State → Pipeline → Dry Run → Code → Test` পুরো workflow practice করা হবে।

---

# Day 2 - Chapter 9

# 🧠 Problem Solving Session

Chapter 1–8 পর্যন্ত আমরা অনেক Concept এবং Pattern শিখেছি।

এখন সবচেয়ে গুরুত্বপূর্ণ প্রশ্ন:

> **Problem সামনে এলে আমি আসলে কী করব?**

কারণ Pattern-এর নাম জানা আর Problem Solve করতে পারা এক জিনিস না।

তুমি হয়তো জানো:

```text
Traversal
Accumulator
Counter
Maximum
Minimum
Linear Search
Flag
Index Tracking
Pattern Combination
Edge Case
Dry Run
```

কিন্তু Contest-এ Problem সামনে এলে যদি এমন হয়:

```text
Problem পড়লাম
        ↓
কিছুই মাথায় আসছে না
        ↓
Code Editor-এর দিকে তাকিয়ে আছি
        ↓
একটা for loop লিখলাম
        ↓
তারপর কী করব জানি না
```

তাহলে Pattern শেখার আসল উদ্দেশ্য পূরণ হয়নি।

এই Chapter-এ আমরা নতুন কোনো বড় C Syntax শিখব না।

আমরা শিখব:

# **Problem থেকে Code পর্যন্ত যাওয়ার Complete Workflow**

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি পারবে:

* Problem Statement থেকে Input, Output এবং Goal আলাদা করতে;
* Constraint দেখে Solution সম্পর্কে Basic Decision নিতে;
* Example manually solve করতে;
* Problem-এর ভিতরের ছোট Task বের করতে;
* Pattern Signal চিনতে;
* State Variable select করতে;
* Pattern Pipeline লিখতে;
* One Pass এবং Multi Pass-এর মধ্যে সিদ্ধান্ত নিতে;
* Code লেখার আগে Pseudocode তৈরি করতে;
* Dry Run করতে;
* নিজের Test Case বানাতে;
* Wrong Answer হলে Debugging Workflow follow করতে;
* Contest-এ একটি Unknown Problem systematically attack করতে।

আজকের সবচেয়ে গুরুত্বপূর্ণ Mental Model:

```text
READ
  ↓
UNDERSTAND
  ↓
SIMULATE
  ↓
DECOMPOSE
  ↓
RECOGNIZE PATTERN
  ↓
CHOOSE STATE
  ↓
BUILD PIPELINE
  ↓
WRITE PSEUDOCODE
  ↓
CODE
  ↓
TEST
  ↓
SUBMIT
```

---

# Part 1 - Problem Solving মানে কী?

# Lesson 1 - Code লেখা Problem Solving-এর প্রথম Step না

Beginner-এর Common Habit:

```text
Problem Open
    ↓
Input দেখি
    ↓
Code লেখা শুরু
```

এটা dangerous।

Better Workflow:

```text
Problem Open
    ↓
Problem কী চাইছে বুঝি
    ↓
Example হাতে Solve করি
    ↓
Required Information বের করি
    ↓
Pattern চিনে নিই
    ↓
State Variable ঠিক করি
    ↓
তারপর Code
```

একটা গুরুত্বপূর্ণ Rule:

> **Code হলো Solution-এর Implementation। Code নিজে Solution না।**

অর্থাৎ:

```text
Thinking
    ↓
Solution Design
    ↓
Algorithm
    ↓
Code
```

---

# Lesson 2 - Problem Solve করার ৩টি Layer

একটি CP Problem-কে তিনটি Layer-এ ভাবতে পারো।

## Layer 1 - Story

Problem যেভাবে লেখা আছে।

Example:

> A teacher has recorded the marks of `n` students. Find the highest mark.

---

## Layer 2 - Mathematical / Logical Goal

Story বাদ দিলে:

```text
Given n numbers
Find the maximum
```

---

## Layer 3 - Programming Pattern

```text
Traversal
↓
Maximum Tracking
```

এই Transformation খুব গুরুত্বপূর্ণ।

```text
Story
    ↓
Core Task
    ↓
Pattern
    ↓
Code
```

Contest-এ Story দেখে ভয় পেলে:

> Story বাদ দিয়ে Data এবং Required Output দেখো।

---

# Part 2 - The Complete Problem Solving Workflow

# Lesson 3 - Step 1: Read the Problem

Problem একবার দ্রুত পড়বে।

প্রথম Reading-এর Goal:

```text
এই Problem মোটামুটি কী নিয়ে?
```

দ্বিতীয়বার পড়বে:

```text
Input কী?

Output কী?

Exactly কী বের করতে হবে?
```

তৃতীয়বার দরকার হলে:

```text
Constraints কী?

Special Conditions কী?
```

Mental Checklist:

```text
What is given?
        ↓
What is required?
        ↓
What conditions apply?
        ↓
What should be printed?
```

---

# Lesson 4 - Step 2: Input এবং Output আলাদা করো

ধরো Problem:

> Given an array of `n` integers, find how many elements are greater than `k`.

Input:

```text
n
array elements
k
```

Output:

```text
count of elements > k
```

এখন Story বাদ দিয়ে Core Task:

```text
Traverse Array
↓
Compare Each Value with k
↓
Count Matches
```

Pattern:

```text
Traversal
+
Condition
+
Counter
```

---

# Lesson 5 - Step 3: নিজের ভাষায় Problem বলো

Problem পড়ার পরে নিজেকে জিজ্ঞেস করবে:

> **আমাকে আসলে কী করতে বলেছে?**

Example:

Original:

> Given `n` integers, determine the number of elements that are divisible by both 2 and 3.

নিজের ভাষায়:

```text
Array-এর প্রতিটা Number দেখব
        ↓
2 এবং 3 দুইটা দিয়েই ভাগ যায় কিনা দেখব
        ↓
গেলে Count বাড়াব
```

এখন Pattern প্রায় বের হয়ে গেছে:

```text
Traversal
↓
Condition
↓
Counter
```

Code এখনো লিখিনি।

কিন্তু Solution Direction পরিষ্কার।

---

# Lesson 6 - Step 4: Example হাতে Solve করো

Problem:

> Count numbers greater than 10.

Input:

```text
6
5 12 8 20 10 15
```

নিজে হাতে:

```text
5   → No
12  → Yes → count = 1
8   → No
20  → Yes → count = 2
10  → No
15  → Yes → count = 3
```

Answer:

```text
3
```

এখন নিজের Manual Process দেখো।

তুমি কী করেছ?

```text
একটা একটা Value দেখেছ
        ↓
Condition Check করেছ
        ↓
Match হলে Count বাড়িয়েছ
```

অর্থাৎ Algorithm:

```text
Traversal
↓
Condition
↓
Counter
```

অনেক Beginner Problem-এ:

> **তুমি হাতে যেভাবে Solve করো, Algorithm-এর Basic Idea সেখানেই থাকে।**

---

# Lesson 7 - Step 5: Problem Decompose করো

Problem:

> Find the average of positive numbers.

একবারে Code চিন্তা করবে না।

ভাঙো:

```text
Task 1
Positive Number চিনতে হবে
        ↓
Condition
```

```text
Task 2
Positive Number-এর Sum দরকার
        ↓
Accumulator
```

```text
Task 3
Positive Number-এর Count দরকার
        ↓
Counter
```

```text
Task 4
Average বের করতে হবে
        ↓
sum / count
```

Combined Pipeline:

```text
Traversal
↓
Positive?
↓
Sum Update + Count Update
↓
Check count
↓
Calculate Average
```

---

# Lesson 8 - Step 6: Pattern Signal খুঁজো

Problem Statement-এর কিছু শব্দ Pattern-এর Signal দিতে পারে।

| Problem Signal             | Possible Pattern       |
| -------------------------- | ---------------------- |
| sum, total                 | Accumulator            |
| count, how many            | Counter                |
| largest, highest, maximum  | Maximum                |
| smallest, lowest, minimum  | Minimum                |
| find, exists, contains     | Search                 |
| first occurrence           | Search + Index + Stop  |
| last occurrence            | Search + Index Update  |
| how many times             | Search + Counter       |
| only positive              | Condition / Filter     |
| only even                  | Condition / Filter     |
| average                    | Sum + Count + Division |
| position, index            | Index Tracking         |
| first valid                | Flag / Sentinel        |
| maximum among valid values | Condition + Maximum    |
| minimum among valid values | Condition + Minimum    |

কিন্তু সতর্কতা:

> Keyword দেখে blindly Pattern select করবে না।

Problem-এর Goal বুঝে Pattern confirm করবে।

---

# Lesson 9 - Step 7: State Variable select করো

State মানে:

> Traversal চলার সময় কোন Information মনে রাখতে হবে?

Problem:

> Count even numbers.

State:

```text
count
```

---

Problem:

> Find maximum.

State:

```text
max
```

---

Problem:

> Sum and count positive numbers.

States:

```text
sum
count
```

---

Problem:

> First and last target index.

States:

```text
first
last
```

---

Problem:

> Largest even number.

Possible States:

```text
found
max_even
```

Mental Question:

```text
একটা Element process করার পরে
কোন Information future-এর জন্য মনে রাখতে হবে?
```

সেই Information-ই State হওয়ার Candidate।

---

# Lesson 10 - Step 8: Dependency Check

Problem:

> Find maximum and minimum.

দুটো State:

```text
max
min
```

এরা Independent।

একই Traversal-এ Update করা যায়।

```text
One Pass
```

---

Problem:

> Find average, then count values greater than average.

এখানে:

```text
Count Above Average
```

করতে Average আগে জানা দরকার।

Dependency:

```text
Find Sum
↓
Calculate Average
↓
Use Average as Threshold
↓
Count Values Above Average
```

তাই Beginner-friendly:

```text
Multi Pass
```

Decision Question:

```text
Phase 2 শুরু করতে
Phase 1-এর Final Result দরকার?
```

যদি Yes:

```text
Dependency আছে
```

---

# Lesson 11 - Step 9: Pattern Pipeline লিখো

Code-এর আগে ৫–১০ সেকেন্ডে Pipeline লিখতে শিখবে।

Problem:

> Count negative numbers.

```text
Traversal
↓
Condition: value < 0
↓
Counter
```

Problem:

> First target index.

```text
Traversal
↓
Compare with Target
↓
Match?
↓
Save Index
↓
Break
```

Problem:

> Smallest Positive Number.

```text
Traversal
↓
Positive?
↓
First Valid Candidate?
↓
Initialize Minimum
↓
Compare Future Positive Values
↓
Update
```

Pipeline তোমার Code-এর Blueprint।

---

# Lesson 12 - Step 10: Pseudocode লিখো

Pseudocode হলো Code না।

এটা Human-readable Algorithm।

Problem:

> Count even numbers.

Pseudocode:

```text
read n
read array

count = 0

for every element:
    if element is even:
        increase count

print count
```

এরপর C Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}

printf("%d\n", count);
```

Pseudocode-এর উদ্দেশ্য:

```text
Logic ঠিক করা
    ↓
Syntax পরে লেখা
```

---

# Part 3 - Full Guided Problem Solving

# Problem 1 - Sum of Even Numbers

## Problem

Given `n` integers, find the sum of all even numbers.

Input:

```text
6
3 8 5 10 7 4
```

Expected Output:

```text
22
```

---

## Step 1 - নিজের ভাষায় Problem

```text
সব Number দেখব
        ↓
Even হলে Sum-এর সঙ্গে যোগ করব
```

---

## Step 2 - Required Information

Final Output:

```text
sum
```

State:

```text
sum
```

---

## Step 3 - Pattern

```text
Traversal
+
Condition
+
Accumulator
```

---

## Step 4 - Pipeline

```text
Read Input
↓
sum = 0
↓
Traverse Array
↓
Even?
↓
sum += value
↓
Print sum
```

---

## Step 5 - Pseudocode

```text
sum = 0

for each value:
    if value is even:
        add value to sum

print sum
```

---

## Step 6 - Dry Run

Input:

```text
3 8 5 10 7 4
```

| Current | Even? | Sum Before | Sum After |
| ------: | ----- | ---------: | --------: |
|       3 | No    |          0 |         0 |
|       8 | Yes   |          0 |         8 |
|       5 | No    |          8 |         8 |
|      10 | Yes   |          8 |        18 |
|       7 | No    |         18 |        18 |
|       4 | Yes   |         18 |        22 |

Answer:

```text
22
```

---

## Step 7 - Code

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}
```

---

## Step 8 - Own Tests

### No Even Number

```text
5
1 3 5 7 9
```

Expected:

```text
0
```

### All Even

```text
4
2 4 6 8
```

Expected:

```text
20
```

### Negative Even

```text
4
-2 -4 3 5
```

Expected:

```text
-6
```

---

# Problem 2 - Maximum and Minimum

## Problem

Given an array, print the maximum and minimum values.

Input:

```text
6
8 3 15 2 10 7
```

Expected:

```text
15 2
```

---

## Step 1 - Required Information

```text
Maximum
Minimum
```

States:

```text
max
min
```

---

## Step 2 - Dependency

Question:

```text
Minimum বের করতে Maximum আগে দরকার?
```

No।

```text
Maximum বের করতে Minimum আগে দরকার?
```

No।

তাই:

```text
Independent States
```

---

## Step 3 - Pattern

```text
Traversal
+
Maximum Tracking
+
Minimum Tracking
```

---

## Step 4 - Pipeline

```text
Initialize max = arr[0]
Initialize min = arr[0]
↓
Traverse remaining elements
↓
Compare with max
↓
Compare with min
↓
Update states
↓
Print max and min
```

---

## Step 5 - Pseudocode

```text
max = first element
min = first element

for every remaining element:
    if current > max:
        update max

    if current < min:
        update min

print max and min
```

---

## Step 6 - Edge Cases

```text
Single Element
All Negative
All Equal
Maximum First
Maximum Last
Minimum First
Minimum Last
```

---

# Problem 3 - Count Maximum Occurrences

## Problem

Find the maximum value and count how many times it appears.

Input:

```text
8
5 12 7 12 3 12 8 2
```

Expected:

```text
12 3
```

---

## Step 1 - Decomposition

```text
Task 1
Find Maximum

Task 2
Count Maximum
```

---

## Step 2 - Dependency

Count করার Target:

```text
Maximum Value
```

কিন্তু Maximum শুরুতে জানা নেই।

তাই:

```text
Find Maximum
↓
Maximum becomes Target
↓
Count Target
```

---

## Step 3 - Beginner-friendly Decision

```text
Multi Pass
```

---

## Step 4 - Pipeline

```text
Pass 1
Traversal
↓
Maximum Tracking
↓
Maximum Known

Pass 2
Traversal
↓
Compare with Maximum
↓
Counter
```

---

## Step 5 - Pseudocode

```text
max = first element

for remaining elements:
    update max when needed

count = 0

for every element:
    if element equals max:
        increase count

print max and count
```

---

## Step 6 - Important Edge Case

Input:

```text
5
7 7 7 7 7
```

Expected:

```text
7 5
```

---

# Problem 4 - First and Last Target Index

## Problem

Given an array and target, find its first and last index.

Input:

```text
8
5 2 7 2 9 2 10 2
2
```

Expected:

```text
1 7
```

---

## Step 1 - Required Information

```text
first
last
```

---

## Step 2 - Initialization

```text
first = -1
last = -1
```

Meaning:

```text
Target has not been found yet
```

---

## Step 3 - Pattern

```text
Traversal
+
Search
+
Index Tracking
```

---

## Step 4 - Pipeline

```text
Traverse
↓
Target Match?
↓
Is first unset?
    ↓ Yes
Set first
↓
Update last
↓
Continue Traversal
```

---

## Step 5 - Why No `break`?

কারণ:

```text
First Match Found
        ↓
First is complete
        ↓
Last is still unknown
        ↓
Future matches matter
```

তাই:

```text
No break
```

---

# Problem 5 - Largest Even Number

## Problem

Find the largest even number.

Input:

```text
7
3 8 5 12 7 10 1
```

Expected:

```text
12
```

---

## Step 1 - Core Task

```text
Maximum
```

কিন্তু সব Number-এর মধ্যে না।

শুধু:

```text
Even Numbers
```

তাই:

```text
Condition
+
Maximum
```

---

## Step 2 - Initialization Problem

এই Code unsafe:

```c
int max_even = arr[0];
```

কারণ:

```text
arr[0] odd হতে পারে
```

তাই দরকার:

```text
found
max_even
```

---

## Step 3 - Pipeline

```text
Traverse
↓
Even?
↓
First Even?
    ↓
Initialize max_even
↓
Otherwise Compare
↓
Update if Larger
```

---

## Step 4 - Edge Cases

```text
One Even
Many Even
All Even
Negative Even
No Even
```

---

# Part 4 - Semi-Guided Problem Solving

এখন থেকে Solution পুরো দেওয়া হবে না।

তুমি Workflow follow করবে।

---

# Problem 6 - Count Values Greater Than Average

## Problem

Given an array, count how many values are greater than the average of all elements.

Input:

```text
5
10 20 30 40 50
```

Average:

```text
30
```

Values Greater Than Average:

```text
40 50
```

Expected:

```text
2
```

---

## তোমার Analysis Format

```text
Input:
...

Output:
...

Required Information:
...

Subproblems:
1. ...
2. ...

Dependency:
...

States:
...

Pattern 1:
...

Pattern 2:
...

One Pass / Multi Pass:
...

Pipeline:
...
```

Hint:

```text
Can you compare with average
before average is known?
```

---

# Problem 7 - Smallest Positive Number

Input:

```text
7
-5 8 3 -2 10 1 7
```

Expected:

```text
1
```

তোমার কাজ:

```text
1. Problem Core Goal
2. Filter Condition
3. Pattern
4. States
5. Initialization Strategy
6. No-valid-candidate Case
7. Pipeline
8. Pseudocode
9. Three Custom Tests
```

---

# Problem 8 - Count Minimum Occurrences

Input:

```text
8
5 2 7 2 9 2 10 3
```

Expected:

```text
2 3
```

তোমার Workflow:

```text
Problem
↓
Decompose
↓
Dependency Check
↓
Pattern Selection
↓
State Selection
↓
Pass Decision
↓
Pipeline
↓
Pseudocode
↓
Code
↓
Test
```

---

# Part 5 - Independent Problem Solving Session

এখন Hint কমে যাবে।

এই Section-এর উদ্দেশ্য:

> **নিজে Problem Analysis করা।**

---

# Problem 9 - Count Numbers Between Min and Max

Given an array, count how many values are strictly greater than the minimum and strictly less than the maximum.

Input:

```text
7
2 5 8 3 10 7 2
```

Minimum:

```text
2
```

Maximum:

```text
10
```

Values strictly between them:

```text
5 8 3 7
```

Expected:

```text
4
```

তোমার কাজ:

```text
No Code First
```

আগে লিখবে:

```text
Required Information:

...

Dependency:

...

States:

...

Phase 1:

...

Phase 2:

...

Edge Cases:

...
```

---

# Problem 10 - First Positive Maximum Index

Problem:

> Find the first index of the largest positive number.

Input:

```text
8
-5 8 3 12 -2 12 7 1
```

Expected:

```text
3
```

নিজে চিন্তা করবে:

```text
Condition কী?

Best-value Pattern কী?

Index State কী?

First occurrence preserve করতে
> নাকি >= ব্যবহার করবে?

No positive number থাকলে কী করবে?
```

---

# Problem 11 - Sum of Values Equal to Target

Input:

```text
7
5 2 5 8 5 3 5
5
```

Matching Values:

```text
5 5 5 5
```

Expected Sum:

```text
20
```

নিজে বের করবে:

```text
Traversal
+
???
+
???
```

---

# Problem 12 - Count Elements Equal to Min or Max

Input:

```text
8
2 5 10 2 7 10 4 10
```

Minimum:

```text
2
```

Maximum:

```text
10
```

Matching Count:

```text
5
```

নিজে Complete Workflow করবে।

---

# Part 6 - Time-boxed Problem Solving

# Lesson 13 - একটি Problem-এ কতক্ষণ বসবে?

Practice-এর সময় Problem দেখেই Solution দেখে ফেলবে না।

Beginner হিসেবে একটি সহজ Problem-এর জন্য:

```text
0–5 min
    ↓
Understand + Manual Solve

5–10 min
    ↓
Pattern + State + Pipeline

10–20 min
    ↓
Pseudocode + Code + Test
```

যদি আটকে যাও:

```text
Problem আবার পড়ো
↓
Example হাতে Solve করো
↓
নিজে কী Steps নিচ্ছো লিখো
↓
Required Information লিখো
↓
Known Pattern-এর সঙ্গে Match করো
```

সরাসরি Solution দেখার আগে চেষ্টা করবে:

```text
At least one serious analysis attempt
```

---

# Lesson 14 - Stuck হলে কী করবে?

Problem দেখে কিছুই মাথায় না এলে এই Ladder follow করবে:

```text
Level 1
Problem নিজের ভাষায় বলো
        ↓
Level 2
একটা Example হাতে Solve করো
        ↓
Level 3
প্রতিটি Manual Step লিখো
        ↓
Level 4
কোন Information মনে রাখছো দেখো
        ↓
Level 5
Pattern Library-এর সঙ্গে Match করো
        ↓
Level 6
Pseudocode লিখো
        ↓
Level 7
Code
```

এটাকে বলা যায়:

# **Stuck Recovery Ladder**

---

# Lesson 15 - Code না আসলে Syntax Problem নাকি Logic Problem?

নিজেকে জিজ্ঞেস করবে:

```text
আমি কি জানি কী করতে হবে,
কিন্তু C-তে লিখতে পারছি না?
```

যদি Yes:

```text
Syntax / Implementation Gap
```

Example:

```text
Logic জানি:
Even হলে count বাড়াতে হবে

কিন্তু modulo syntax ভুলে গেছি
```

এটা Logic Problem না।

---

যদি:

```text
আমি জানিই না কী Information দরকার
```

তাহলে:

```text
Problem Understanding / Algorithm Gap
```

এই দুইটা আলাদা করা খুব জরুরি।

---

# Part 7 - Problem Solving Journal

# Lesson 16 - প্রতিটি Problem-এর পরে কী লিখবে?

তোমার Bootcamp Repo-তে Problem Solve করার পরে ছোট Review রাখবে।

Format:

````markdown
## Problem Review

### Problem
...

### Core Goal
...

### Pattern
...

### State Variables
...

### Pipeline

```text
...
↓
...
↓
...
````

### Mistake

...

### Edge Case I Missed

...

### What I Learned

...

````

এটা প্রতিটি trivial Problem-এর জন্য দরকার নেই।

কিন্তু:

```text
যে Problem-এ আটকে গেছ
যে Problem-এ WA পেয়েছ
যে Problem নতুন Pattern শিখিয়েছে
````

সেগুলোর জন্য Review লিখবে।

---

# Lesson 17 - Wrong Answer Journal

একই Bug বারবার করলে আলাদা Note রাখবে।

Example:

````markdown
# Mistake Log

## 01 - Maximum Initialization

### Wrong Habit

```c
int max = 0;
````

### Why It Fails

Fails when all values are negative.

### Better Pattern

```c
int max = arr[0];
```

### Counterexample

```text
3
-5 -2 -8
```

````

এর উদ্দেশ্য:

```text
Mistake
↓
Understand
↓
Record
↓
Recognize Faster Next Time
↓
Stop Repeating
````

---

# Part 8 - Contest Simulation Workflow

# Lesson 18 - Contest Problem Open করার পরে

তোমার Workflow:

```text
1. Read Problem
        ↓
2. Read Input Format
        ↓
3. Read Output Format
        ↓
4. Read Constraints
        ↓
5. Manually Solve Sample
        ↓
6. Restate Problem
        ↓
7. Identify Pattern
        ↓
8. Choose States
        ↓
9. Build Pipeline
        ↓
10. Code
        ↓
11. Compile
        ↓
12. Run Sample
        ↓
13. Run Own Tests
        ↓
14. Submit
```

---

# Lesson 19 - Contest-এ Problem Selection

তুমি যেহেতু Beginner, Contest শুরু হলে সব Problem একসঙ্গে Solve করতে যেও না।

প্রথমে Problem Statements দ্রুত scan করবে।

খুঁজবে:

```text
Simple Input
Simple Output
Array Traversal
Counting
Sum
Max / Min
Basic Search
Simple Conditions
```

যে Problem দেখে মনে হয়:

```text
আমি অন্তত বুঝতে পারছি কী করতে বলছে
```

সেটা আগে attack করবে।

Mental Strategy:

```text
Easy Point First
        ↓
Build Confidence
        ↓
Then Try Harder Problem
```

---

# Lesson 20 - Contest-এ একটি Problem-এ আটকে গেলে

ধরো ২৫ মিনিট ধরে একই জায়গায় আছো।

তখন:

```text
Re-read statement
↓
Check misunderstood condition
↓
Try tiny example
↓
Check pattern
↓
Check state
↓
Check edge case
```

তবুও Progress না হলে অন্য Problem scan করা ভালো হতে পারে।

কারণ:

```text
One Problem
    ↓
Can consume entire contest
```

Contest Strategy-তে Problem Switching-ও Skill।

---

# Part 9 - Full Problem Solving Template

এখন থেকে নতুন Beginner Problem Solve করার সময় এই Template ব্যবহার করতে পারো।

````markdown
# Problem Analysis

## 1. What is Given?

...

## 2. What is Required?

...

## 3. Manual Example

```text
...
````

## 4. Problem Breakdown

1. ...
2. ...
3. ...

## 5. Pattern Detection

```text
...
+
...
+
...
```

## 6. State Variables

| State | Purpose |
| ----- | ------- |
| `...` | ...     |
| `...` | ...     |

## 7. Dependency

...

## 8. Pass Decision

```text
One Pass / Multi Pass
```

Reason:

...

## 9. Pattern Pipeline

```text
...
↓
...
↓
...
```

## 10. Pseudocode

```text
...
```

## 11. Edge Cases

* ...
* ...
* ...

## 12. Complexity

```text
Time: O(...)
Space: O(...)
```

## 13. Final Code

```c
...
```

## 14. Mistake Review

...

````

---

# Part 10 - Complexity-এর Basic Connection

Day 2-তে Complexity নিয়ে Deep Theory দরকার নেই।

কিন্তু একটা Basic Connection বুঝবে।

একটি Array একবার Traverse:

```c
for (int i = 0; i < n; i++)
{
    // constant work
}
````

Basic Time Complexity:

```text
O(n)
```

দুইবার আলাদা Traversal:

```text
Pass 1 → O(n)
Pass 2 → O(n)
```

Total:

```text
O(n) + O(n)
= O(2n)
= O(n)
```

তাই:

> **দুইটা clear linear pass দেখেই ভয় পাওয়ার দরকার নেই।**

Example:

```text
Find Maximum
↓
Count Maximum
```

Two Pass হলেও:

```text
O(n)
```

Order of Growth হিসেবে Linear।

---

# Lesson 21 - Nested Loop দেখলেই কি ভুল?

না।

কিন্তু Basic Awareness:

```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        // work
    }
}
```

এখানে Roughly:

```text
n × n
```

Operations।

Complexity:

```text
O(n²)
```

Day 2-তে Goal:

```text
One Traversal Problem
    ↓
Accidentally unnecessary nested loop লিখবে না
```

Example:

> Maximum বের করতে Nested Loop দরকার নেই।

Pattern:

```text
Traversal + State
```

যথেষ্ট।

---

# Part 11 - Chapter 9 Main Practice Set

এখন তোমার আসল Practice Session।

এই Problem-গুলো Order অনুযায়ী করবে।

---

## Problem 1 - Count Positive Numbers

Goal:

```text
Traversal
+
Condition
+
Counter
```

---

## Problem 2 - Sum Negative Numbers

Goal:

```text
Traversal
+
Condition
+
Accumulator
```

---

## Problem 3 - Maximum and Minimum

Goal:

```text
Independent State Combination
```

---

## Problem 4 - First Target Index

Goal:

```text
Search
+
Index
+
break
```

---

## Problem 5 - Last Target Index

Goal:

```text
Search
+
Index Update
+
Full Traversal
```

---

## Problem 6 - Target Occurrence Count

Goal:

```text
Search
+
Counter
```

---

## Problem 7 - Largest Even Number

Goal:

```text
Condition
+
Valid Candidate
+
Maximum
```

---

## Problem 8 - Smallest Positive Number

Goal:

```text
Condition
+
Valid Candidate
+
Minimum
```

---

## Problem 9 - Count Maximum

Goal:

```text
Dependency
+
Multi Pass
```

---

## Problem 10 - Count Values Above Average

Goal:

```text
Accumulator
+
Average
+
Dependency
+
Counter
```

---

# 🧪 Chapter 9 Assignment

# Task 1 - Full Workflow Analysis

Problem:

> Given an array, find the sum and count of numbers divisible by 3.

Code লিখবে না।

শুধু:

```text
Input:
...

Output:
...

Core Goal:
...

Patterns:
...

States:
...

Dependency:
...

Pass Decision:
...

Pipeline:
...

Edge Cases:
...
```

---

# Task 2 - Manual Simulation

Problem:

> Count values greater than 5.

Input:

```text
7
3 8 5 10 2 6 5
```

এই Table Fill করবে:

|  `i` | Value | `> 5`? | Count Before | Count After |
| ---: | ----: | ------ | -----------: | ----------: |
|    0 |     3 | ?      |            ? |           ? |
|    1 |     8 | ?      |            ? |           ? |
|    2 |     5 | ?      |            ? |           ? |
|    3 |    10 | ?      |            ? |           ? |
|    4 |     2 | ?      |            ? |           ? |
|    5 |     6 | ?      |            ? |           ? |
|    6 |     5 | ?      |            ? |           ? |

তারপর Final Answer লিখবে।

---

# Task 3 - Pattern Detection

নিচের Problem-গুলোর Pattern লিখবে।

### A

> Sum all positive numbers.

### B

> Count target occurrences.

### C

> Find smallest value.

### D

> Find first target index.

### E

> Find largest odd number.

### F

> Find average of negative numbers.

### G

> Count values equal to maximum.

Format:

```text
Problem A:

Traversal
↓
...
↓
...
```

---

# Task 4 - State Selection

নিচের Problem-গুলোর State Variable লিখবে।

```text
1. Count even numbers

2. Find maximum

3. Sum and count positives

4. First and last target index

5. Largest even number

6. Count maximum occurrences

7. Count values above average
```

প্রতিটি State-এর Purpose লিখবে।

---

# Task 5 - Dependency Analysis

নিচের Problem-গুলো:

```text
1. Maximum + Minimum

2. Sum + Count of Positive Values

3. Count Maximum Occurrences

4. Count Values Above Average

5. Even Count + Odd Count

6. Minimum + First Minimum Index
```

প্রতিটির জন্য লিখবে:

```text
Independent / Dependent
```

এবং এক লাইনের কারণ।

---

# Task 6 - Build Pipelines

এই Problem-গুলোর Pipeline লিখবে।

### Problem A

> First target index.

### Problem B

> Largest even number.

### Problem C

> Count maximum occurrences.

### Problem D

> Average of positive numbers.

### Problem E

> First and last target index.

---

# Task 7 - Pseudocode Practice

Problem:

> Find the smallest negative number.

শুধু Pseudocode লিখবে।

Requirement:

```text
Handle:
No negative number
```

Code না।

---

# Task 8 - Edge Case Design

Problem:

> Find Maximum and its First Index.

কমপক্ষে ৬টি Test Case বানাবে।

Categories:

```text
1. Single Element

2. All Negative

3. All Equal

4. Maximum First

5. Maximum Last

6. Maximum Repeated
```

প্রতিটির Expected Output লিখবে।

---

# Task 9 - Complete Problem Solve

Problem:

> Find the minimum value and count how many times it appears.

Input Example:

```text
8
5 2 7 2 9 2 10 3
```

Expected:

```text
2 3
```

এই Complete Workflow follow করবে:

```text
1. Restate Problem

2. Manual Solve

3. Decompose

4. Detect Patterns

5. Select States

6. Check Dependency

7. Choose Pass Strategy

8. Write Pipeline

9. Write Pseudocode

10. Write C Code

11. Build 5 Custom Tests

12. Dry Run One Test

13. Write Time Complexity

14. Write Mistake Review
```

---

# Task 10 - Independent Challenge

Problem:

> Find the largest positive number and its first and last index.

Input:

```text
9
-5 8 3 12 -2 12 7 12 1
```

Expected:

```text
Maximum Positive: 12
First Index: 3
Last Index: 7
```

তুমি Code দিয়ে শুরু করবে না।

প্রথমে:

```text
Problem Breakdown:

...

Patterns:

...

States:

...

Dependency:

...

One Pass / Multi Pass:

...

Pipeline:

...

First Index Update Rule:

...

Last Index Update Rule:

...

No Positive Edge Case:

...
```

তারপর Code লিখবে।

---

# 🧠 Problem Solving Decision Tree

```text
                    PROBLEM
                       ↓
              What is the output?
                       ↓
            What information is needed?
                       ↓
              Can I solve manually?
                       ↓
              Break into small tasks
                       ↓
            Match tasks with patterns
                       ↓
                Choose state variables
                       ↓
               Check dependencies
                 ↙            ↘
          Independent        Dependent
               ↓                 ↓
        Combine if clear    Arrange phases
               ↓                 ↓
               └────────┬────────┘
                        ↓
                  Build Pipeline
                        ↓
                 Write Pseudocode
                        ↓
                     Dry Run
                        ↓
                      Code
                        ↓
                     Compile
                        ↓
                  Sample Test
                        ↓
                    Own Tests
                        ↓
                 Edge Cases
                        ↓
                    Submit
```

---

# 📌 Chapter 9 Quick Revision

## Problem Reading

```text
Given কী?
↓
Required কী?
↓
Condition কী?
↓
Output Format কী?
```

---

## Manual Solve

```text
Example Input
↓
নিজে Solve
↓
নিজের Steps Observe
↓
Algorithm Idea
```

---

## Decomposition

```text
Big Problem
↓
Small Tasks
↓
Pattern per Task
```

---

## State Selection

```text
Traversal-এর পরে
কোন Information মনে রাখতে হবে?
        ↓
State Variable
```

---

## Dependency

```text
Task B কি Task A-এর Final Result চায়?
        ↓
Yes → Dependent
No  → Possibly Independent
```

---

## Pipeline

```text
Pattern Order
↓
State Update Order
↓
Solution Blueprint
```

---

## Pseudocode

```text
Logic First
↓
Syntax Later
```

---

## Testing

```text
Sample
+
Own Normal Test
+
Edge Cases
+
Counterexample
```

---

## Debugging

```text
Failing Test
↓
Expected vs Actual
↓
Dry Run
↓
First Wrong State
↓
Bug Cause
↓
Fix
↓
Retest
```

---

# 🎯 Chapter 9 Self-Test

নিজের ভাষায় উত্তর দেবে।

### Question 1

Problem পড়ার পর সরাসরি Code লেখা কেন ভালো Habit না?

### Question 2

Story থেকে Core Task কীভাবে বের করবে?

### Question 3

Manual Simulation কীভাবে Pattern চিনতে সাহায্য করে?

### Question 4

State Variable কী?

### Question 5

Problem Dependency কী?

### Question 6

Pattern Pipeline কেন Code-এর আগে লিখবে?

### Question 7

Pseudocode এবং C Code-এর পার্থক্য কী?

### Question 8

Count Maximum Problem Beginner হিসেবে Two Pass-এ করা কেন পরিষ্কার?

### Question 9

Stuck হলে কোন Steps follow করবে?

### Question 10

Sample Pass করলেই Submit করার আগে আর কী কী Check করবে?

---

# 🏁 Chapter 9 Completion Checklist

```text
[ ] Problem থেকে Input এবং Output আলাদা করতে পারি

[ ] Problem নিজের ভাষায় বলতে পারি

[ ] Example manually solve করতে পারি

[ ] Problem Decompose করতে পারি

[ ] Basic Pattern Signal চিনতে পারি

[ ] State Variable select করতে পারি

[ ] Dependency চিনতে পারি

[ ] One Pass / Multi Pass সিদ্ধান্ত নিতে পারি

[ ] Pattern Pipeline লিখতে পারি

[ ] Pseudocode লিখতে পারি

[ ] Code-এর আগে Logic Design করতে পারি

[ ] Dry Run করতে পারি

[ ] নিজের Test Case বানাতে পারি

[ ] Edge Case select করতে পারি

[ ] Small Counterexample বানাতে পারি

[ ] Wrong Answer Debugging Workflow জানি

[ ] Problem Solving Journal লিখতে পারি

[ ] Chapter 9 Practice Set শেষ করেছি

[ ] Chapter 9 Assignment শেষ করেছি

[ ] Independent Challenge চেষ্টা করেছি
```

---

# 🎓 Chapter 9 Final Mental Model

Chapter 9-এর সবচেয়ে গুরুত্বপূর্ণ শিক্ষা হলো:

```text
Problem Solving
      ≠
Immediately Writing Code
```

সঠিক Flow:

```text
Problem
    ↓
Understand
    ↓
Restate
    ↓
Manual Solve
    ↓
Decompose
    ↓
Recognize Pattern
    ↓
Choose State
    ↓
Check Dependency
    ↓
Build Pipeline
    ↓
Pseudocode
    ↓
Dry Run
    ↓
Code
    ↓
Test
    ↓
Debug
    ↓
Submit
```

Contest-এ Problem দেখে যদি কিছুই মাথায় না আসে, তখন Blank হয়ে বসে থাকবে না।

তোমার Recovery Flow:

```text
আমি কী পেয়েছি?
        ↓
আমাকে কী বের করতে হবে?
        ↓
একটা ছোট Example হাতে কীভাবে Solve করব?
        ↓
আমি কোন Information মনে রাখছি?
        ↓
এটা কোন Pattern-এর মতো?
        ↓
কোন State দরকার?
        ↓
Pattern Order কী?
        ↓
Pseudocode কী?
        ↓
এখন Code
```

এই Chapter-এর পর থেকে লক্ষ্য হবে:

```text
Problem দেখলাম
        ↓
Code মনে পড়ছে কি?
```

এই Question না।

বরং:

```text
Problem দেখলাম
        ↓
Goal কী?
        ↓
Information কী?
        ↓
Pattern কী?
        ↓
State কী?
        ↓
Pipeline কী?
```

তারপর Code।

---

# 🗺️ Day 2 Progress

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation Pattern
│
├── ✅ Chapter 4 - Counting Pattern
│
├── ✅ Chapter 5 - Maximum & Minimum Pattern
│
├── ✅ Chapter 6 - Searching Pattern
│
├── ✅ Chapter 7 - Combining Patterns
│
├── ✅ Chapter 8 - Common Bugs & Edge Cases
│
├── ✅ Chapter 9 - Problem Solving Session
│
├── ⏳ Chapter 10 - Pattern Library Update
│
└── ⏳ Chapter 11 - Assignment & Reflection
```

**Day 2 - Chapter 9 এখানেই শেষ।** এখন Chapter 10-এ Day 2-তে শেখা Pattern-গুলোকে তোমার `21_Pattern_Library/core_pattern.md`-এ reusable reference হিসেবে organize করার কাজ হবে।

---

# 📘 Day 2 - Chapter 10

# 🧩 Pattern Library Update

Day 2-এর Chapter 1–9 পর্যন্ত আমরা শুধু Array নিয়ে Code লিখিনি।

আমরা ধীরে ধীরে একটি **Problem-Solving Language** তৈরি করেছি।

এখন তুমি এই শব্দগুলো চেনো:

```text
Traversal
Accumulator
Counter
Maximum
Minimum
Linear Search
Flag
Index Tracking
First Occurrence
Last Occurrence
Conditional Best
Pattern Combination
State
Dependency
Single Pass
Multi Pass
Edge Case
Counterexample
Dry Run
Pattern Pipeline
```

কিন্তু একটা সমস্যা আছে।

আজকে এগুলো মনে আছে।

৭ দিন পরে?

১৫ দিন পরে?

Contest-এর আগে?

তখন যদি আবার পুরো `day_2.md` খুলে কয়েক হাজার Line পড়তে হয়, তাহলে সেটা efficient না।

এই কারণে আমাদের Repository-তে আছে:

```text
21_Pattern_Library/
└── core_pattern.md
```

Chapter 10-এ আমরা Day 2-তে শেখা Core Pattern-গুলোকে **Reusable Pattern Card** হিসেবে সেখানে সংরক্ষণ করব।

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি:

* Pattern Library কী বুঝবে;
* Pattern এবং Solution-এর পার্থক্য বুঝবে;
* Pattern Card তৈরি করতে পারবে;
* Problem Signal থেকে Pattern খুঁজতে পারবে;
* Pattern-এর State চিনতে পারবে;
* Initialization Rule লিখতে পারবে;
* Update Rule লিখতে পারবে;
* Stop Condition লিখতে পারবে;
* Common Bug সংরক্ষণ করতে পারবে;
* Edge Case Map তৈরি করতে পারবে;
* এক Problem-এর Code copy না করে reusable Skeleton রাখতে পারবে;
* নিজের `core_pattern.md` update করতে পারবে;
* নতুন Pattern শেখার পরে Library-তে কীভাবে add করতে হয় বুঝবে।

আজকের Main Mental Model:

```text
Solve Problem
      ↓
Understand the Technique
      ↓
Extract Reusable Idea
      ↓
Name the Pattern
      ↓
Record Signal
      ↓
Record State
      ↓
Record Pipeline
      ↓
Record Skeleton
      ↓
Record Bugs
      ↓
Record Edge Cases
      ↓
Reuse Later
```

---

# Part 1 - Pattern Library কী?

# Lesson 1 - Problem Collection আর Pattern Library এক না

ধরো তুমি ১০০টা Problem Solve করলে।

তোমার Folder:

```text
Codeforces/
├── problem_01.c
├── problem_02.c
├── problem_03.c
├── problem_04.c
├── problem_05.c
└── ...
```

এটা:

# **Problem Collection**

এখানে তুমি দেখতে পারবে:

```text
আমি কোন কোন Problem Solve করেছি?
```

কিন্তু Pattern Library-এর Question আলাদা:

```text
এই ধরনের Problem আবার এলে
আমি কীভাবে চিনব?

কোন Pattern লাগবে?

কোন State লাগবে?

Initialization কী হবে?

Update Rule কী হবে?

কোন Bug হতে পারে?
```

তাই:

```text
Problem Collection
        ↓
Specific Solutions
```

আর:

```text
Pattern Library
        ↓
Reusable Thinking Models
```

---

# Lesson 2 - Pattern Library কেন দরকার?

ধরো আজকে Problem:

> Count positive numbers.

তুমি Solve করলে:

```text
Traversal
↓
Condition
↓
Counter
```

কাল Problem:

> Count numbers greater than `k`.

আবার:

```text
Traversal
↓
Condition
↓
Counter
```

পরের দিন:

> Count values divisible by 3.

আবার:

```text
Traversal
↓
Condition
↓
Counter
```

Problem আলাদা।

কিন্তু Pattern:

```text
Traversal
↓
Condition
↓
Counter
```

একই।

এটাই Pattern Library-এর Value।

```text
Many Different Problems
          ↓
Same Structural Idea
          ↓
One Reusable Pattern
```

---

# Lesson 3 - Pattern Memorize না, Recognize করতে হবে

Pattern Library-এর উদ্দেশ্য:

```text
Code মুখস্থ করা
```

না।

উদ্দেশ্য:

```text
Problem Signal
      ↓
Pattern Recognition
      ↓
State Selection
      ↓
Pipeline Recall
      ↓
Implementation
```

ধরো Problem-এ লেখা:

> How many elements satisfy...

Brain:

```text
"How many"
     ↓
Counting Signal
     ↓
Need Counter State
```

Problem:

> Find the largest...

Brain:

```text
"Largest"
    ↓
Maximum Pattern
    ↓
Need Best-so-far State
```

Problem:

> Find the first occurrence...

Brain:

```text
First Occurrence
       ↓
Search + Index
       ↓
Stop after first valid match
```

এটাই Pattern Recognition।

---

# Part 2 - Pattern Card Design

# Lesson 4 - প্রতিটি Pattern কীভাবে লিখব?

আমাদের Pattern Library-এর প্রতিটি Entry এই Structure follow করবে:

```text
Pattern Name
│
├── Purpose
├── Problem Signals
├── Core Idea
├── Required State
├── Initialization
├── Update Rule
├── Pattern Pipeline
├── Code Skeleton
├── Common Bugs
├── Edge Cases
├── Complexity
└── Example Problems
```

Markdown Template:

````markdown
# Pattern Name

## Purpose

...

## Problem Signals

- ...
- ...
- ...

## Core Idea

...

## Required State

| State | Purpose |
| ----- | ------- |
| `...` | ...     |

## Initialization

```c
...
```

## Update Rule

...

## Pattern Pipeline

```text
...
↓
...
↓
...
```

## Code Skeleton

```c
...
```

## Common Bugs

- ...
- ...
- ...

## Edge Cases

- ...
- ...
- ...

## Complexity

```text
Time: O(...)
Space: O(...)
```

## Example Problem Types

- ...
- ...
- ...
````

এই Template আমরা সবসময় mechanically follow করব না।

Simple Pattern হলে ছোট Entry হতে পারে।

Complex Pattern হলে Full Entry হবে।

---

# Lesson 5 - Pattern Card-এর সবচেয়ে গুরুত্বপূর্ণ অংশ

সব Section useful।

কিন্তু Beginner হিসেবে সবচেয়ে গুরুত্বপূর্ণ:

```text
1. Signal
2. State
3. Initialization
4. Update Rule
5. Pipeline
6. Common Bug
7. Edge Case
```

কারণ Problem Solve করার সময় Flow:

```text
Signal
   ↓
Pattern
   ↓
State
   ↓
Initialization
   ↓
Update
   ↓
Final Answer
```

আর Wrong Answer হলে:

```text
Common Bug
+
Edge Case
```

তোমাকে সাহায্য করবে।

---

# Part 3 - Pattern 01: Traversal

# Pattern 01 - Array Traversal

## Purpose

Array-এর প্রতিটি Element একবার করে Process করা।

---

## Problem Signals

```text
all elements
each element
every number
array elements
for every value
```

---

## Core Idea

```text
Start at index 0
        ↓
Process current element
        ↓
Move to next index
        ↓
Stop before index n
```

---

## Required State

Traversal নিজে সাধারণত শুধু:

```text
i
```

Index ব্যবহার করে।

---

## Pattern Pipeline

```text
Start
↓
i = 0
↓
Check i < n
↓
Process arr[i]
↓
i++
↓
Repeat
```

---

## Code Skeleton

```c
for (int i = 0; i < n; i++)
{
    // Process arr[i]
}
```

---

## Common Bugs

```text
i <= n
```

ব্যবহার করা।

Wrong:

```c
for (int i = 0; i <= n; i++)
```

কারণ শেষবার:

```text
arr[n]
```

Access হবে।

Valid Last Index:

```text
n - 1
```

---

## Edge Cases

```text
n = 1
answer at first index
answer at last index
```

---

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 4 - Pattern 02: Accumulation

# Pattern 02 - Accumulator

## Purpose

একাধিক Value থেকে Running Result তৈরি করা।

Common Examples:

```text
Sum
Product
Total Score
Total Cost
```

---

## Problem Signals

```text
sum
total
combined value
product
```

---

## Core Idea

```text
Initial State
      ↓
Read Current Value
      ↓
Combine with Previous State
      ↓
Store Updated State
```

---

## Required State

For Sum:

```text
sum
```

For Product:

```text
product
```

---

## Initialization

Sum:

```c
int sum = 0;
```

Product:

```c
int product = 1;
```

---

## Update Rule

Sum:

```c
sum += arr[i];
```

Equivalent:

```c
sum = sum + arr[i];
```

---

## Pattern Pipeline

```text
Initialize Accumulator
↓
Traversal
↓
Read Current Value
↓
Update Accumulator
↓
Continue
↓
Final Accumulated Result
```

---

## Code Skeleton

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

---

## Common Bugs

### Bug 1

Wrong Initialization:

```c
int sum = 1;
```

### Bug 2

State Reset:

```c
for (int i = 0; i < n; i++)
{
    int sum = 0;
}
```

### Bug 3

Possible Overflow:

```c
int sum = 0;
```

যখন Constraints অনুযায়ী Result `int` Range ছাড়াতে পারে।

তখন প্রয়োজন হতে পারে:

```c
long long sum = 0;
```

---

## Edge Cases

```text
Single Element
Negative Values
Zero Values
Large Values
```

---

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 5 - Pattern 03: Counting

# Pattern 03 - Counter

## Purpose

কোনো Condition কতবার True হয়েছে তা Count করা।

---

## Problem Signals

```text
how many
count
number of elements
frequency
occurrences
```

---

## Required State

```text
count
```

---

## Initialization

```c
int count = 0;
```

Meaning:

```text
No matching element found yet
```

---

## Update Rule

```c
if (condition)
{
    count++;
}
```

---

## Pattern Pipeline

```text
count = 0
↓
Traversal
↓
Check Condition
↓
Match?
↓ Yes
count++
↓
Continue
↓
Print Final Count
```

---

## Code Skeleton

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        count++;
    }
}
```

---

## Example

Count Even Numbers:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

---

## Common Bugs

### Wrong Reset

```c
for (int i = 0; i < n; i++)
{
    int count = 0;
}
```

### Wrong Break

```c
if (arr[i] == target)
{
    count++;
    break;
}
```

যদি সব Occurrence Count করতে হয়, `break` দেওয়া যাবে না।

---

## Edge Cases

```text
Zero Match
One Match
Multiple Matches
All Match
```

---

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 6 - Pattern 04: Maximum

# Pattern 04 - Maximum Tracking

## Purpose

Array-এর Largest Value বের করা।

---

## Problem Signals

```text
maximum
largest
highest
greatest
biggest
```

---

## Core Idea

একটি State রাখব:

```text
best value seen so far
```

প্রতিটি Element-এর সঙ্গে Compare করব।

---

## Required State

```text
max
```

---

## Initialization

```c
int max = arr[0];
```

---

## Update Rule

```c
if (arr[i] > max)
{
    max = arr[i];
}
```

---

## Pattern Pipeline

```text
Initialize max from valid input
↓
Traverse Remaining Elements
↓
Current > max?
↓ Yes
Update max
↓
Continue
↓
Final max
```

---

## Code Skeleton

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

---

## Common Bug

Wrong:

```c
int max = 0;
```

Fails:

```text
All Negative Array
```

Counterexample:

```text
3
-5 -2 -8
```

Expected:

```text
-2
```

Wrong Code Result:

```text
0
```

---

## Edge Cases

```text
Single Element
All Negative
All Equal
Maximum First
Maximum Last
Maximum Repeated
```

---

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 7 - Pattern 05: Minimum

# Pattern 05 - Minimum Tracking

## Purpose

Array-এর Smallest Value বের করা।

---

## Problem Signals

```text
minimum
smallest
lowest
least
```

---

## Required State

```text
min
```

---

## Initialization

```c
int min = arr[0];
```

---

## Update Rule

```c
if (arr[i] < min)
{
    min = arr[i];
}
```

---

## Pattern Pipeline

```text
Initialize min
↓
Traversal
↓
Current < min?
↓ Yes
Update min
↓
Continue
↓
Final min
```

---

## Common Bug

Wrong:

```c
int min = 0;
```

Fails when all values are positive.

Counterexample:

```text
3
5 2 8
```

Expected:

```text
2
```

Wrong Result:

```text
0
```

---

## Edge Cases

```text
Single Element
All Positive
All Equal
Minimum First
Minimum Last
Minimum Repeated
```

---

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 8 - Pattern 06: Linear Search

# Pattern 06 - Linear Search

## Purpose

Array-এর মধ্যে Target আছে কি না খুঁজে বের করা।

---

## Problem Signals

```text
find
exists
contains
present
search
```

---

## Required State

Possible:

```text
found
```

অথবা:

```text
index
```

Goal-এর উপর নির্ভর করে।

---

## Version A - Existence Search

### State

```c
int found = 0;
```

### Pipeline

```text
Traversal
↓
Compare Current with Target
↓
Match?
↓ Yes
found = 1
↓
break
```

### Skeleton

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}
```

---

## Version B - Index Search

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

---

## Common Bug

Wrong:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

কারণ:

```text
Current Element Not Match
        ≠
Target Absent from Entire Array
```

---

## Edge Cases

```text
Target First
Target Middle
Target Last
Target Missing
Target Repeated
```

---

## Complexity

Worst Case:

```text
Time: O(n)
Extra Space: O(1)
```

---

# Part 9 - Pattern 07: First Occurrence

# Pattern 07 - First Occurrence

## Purpose

Target-এর প্রথম Position বা Index বের করা।

---

## Problem Signals

```text
first occurrence
first position
first index
earliest occurrence
```

---

## Required State

```text
index
```

---

## Initialization

```c
int index = -1;
```

Meaning:

```text
Not Found Yet
```

---

## Update Rule

```text
First Match
↓
Save Index
↓
Stop Search
```

---

## Code Skeleton

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

---

## Common Bug

Full Traversal-এ প্রতিটি Match-এ:

```c
index = i;
```

করলে Last Occurrence পাওয়া যাবে।

---

## Edge Cases

```text
Target First
Target Last
Target Missing
Target Repeated
```

---

# Part 10 - Pattern 08: Last Occurrence

# Pattern 08 - Last Occurrence

## Purpose

Target-এর শেষ Position বের করা।

---

## Required State

```text
index
```

---

## Initialization

```c
int index = -1;
```

---

## Update Rule

```text
Every Match
↓
Update Index
↓
Continue Traversal
```

---

## Code Skeleton

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

---

## Pattern Pipeline

```text
Traversal
↓
Target Match?
↓ Yes
Update index
↓
Continue
↓
Final saved index = Last Occurrence
```

---

## Common Bug

```c
break;
```

দিলে First Occurrence-এ Search শেষ হয়ে যাবে।

---

# Part 11 - Pattern 09: First and Last Together

# Pattern 09 - First + Last Occurrence

## Purpose

এক Traversal-এ Target-এর First এবং Last Index বের করা।

---

## Required States

```text
first
last
```

---

## Initialization

```c
int first = -1;
int last = -1;
```

---

## Update Rule

```text
Match
  ↓
First unset?
  ↓ Yes
Set First
  ↓
Always Update Last
  ↓
Continue
```

---

## Code Skeleton

```c
int first = -1;
int last = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        if (first == -1)
        {
            first = i;
        }

        last = i;
    }
}
```

---

## Common Bug

First Match পাওয়ার পরে:

```c
break;
```

করা।

কারণ:

```text
First Complete
        ↓
Last Still Depends on Future Elements
```

---

## Edge Cases

```text
Target Missing
Target Once
Target Twice
Target Many Times
All Values Target
```

---

# Part 12 - Pattern 10: Conditional Accumulation

# Pattern 10 - Filter + Accumulator

## Purpose

শুধু নির্দিষ্ট Condition Match করা Value-গুলোর Sum বা Total বের করা।

---

## Problem Signals

```text
sum of even values
sum of positive values
sum of values greater than k
total of matching values
```

---

## Required State

```text
sum
```

---

## Pipeline

```text
Traversal
↓
Condition
↓
Valid?
↓ Yes
Accumulator Update
```

---

## Code Skeleton

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        sum += arr[i];
    }
}
```

---

## Example

```c
if (arr[i] > 0)
{
    sum += arr[i];
}
```

---

## Common Bugs

```text
Wrong Condition
Wrong Accumulator Initialization
Possible Overflow
```

---

# Part 13 - Pattern 11: Filter + Counter

# Pattern 11 - Conditional Counting

## Purpose

নির্দিষ্ট Condition Match করা Element-এর সংখ্যা বের করা।

---

## Problem Signals

```text
how many positive
how many even
count values greater than k
number of matching elements
```

---

## Required State

```text
count
```

---

## Pipeline

```text
Traversal
↓
Condition
↓
Match?
↓ Yes
count++
```

---

## Skeleton

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        count++;
    }
}
```

---

## Edge Cases

```text
No Match
One Match
Many Matches
All Match
```

---

# Part 14 - Pattern 12: Filter + Sum + Count

# Pattern 12 - Conditional Average Foundation

## Purpose

Filtered Group-এর Sum এবং Count একসঙ্গে বের করা।

Useful for:

```text
Average of Positive Values
Average of Negative Values
Average of Even Values
```

---

## Required States

```text
sum
count
```

---

## Pipeline

```text
Traversal
↓
Condition
↓
Valid?
↓ Yes
Sum Update + Count Update
↓
Traversal Complete
↓
Check count
↓
Calculate Average
```

---

## Skeleton

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        sum += arr[i];
        count++;
    }
}

if (count > 0)
{
    double average = (double)sum / count;
}
```

---

## Common Bugs

### Integer Division

Wrong:

```c
double average = sum / count;
```

Better:

```c
double average = (double)sum / count;
```

### Division by Zero

Need:

```c
if (count > 0)
```

---

# Part 15 - Pattern 13: Conditional Maximum / Minimum

# Pattern 13 - Conditional Best

## Purpose

সব Element-এর মধ্যে না, শুধু Valid Candidate-গুলোর মধ্যে Maximum বা Minimum বের করা।

Examples:

```text
Largest Even
Largest Negative
Smallest Positive
Smallest Odd
```

---

## Problem Signals

```text
largest even
smallest positive
maximum negative
minimum among valid values
```

---

## Required States

```text
found
best
```

Example:

```text
found
max_even
```

---

## Why Normal Initialization Fails

Wrong:

```c
int max_even = arr[0];
```

কারণ:

```text
arr[0]
```

Even নাও হতে পারে।

---

## Pipeline

```text
Traversal
↓
Check Filter Condition
↓
Valid Candidate?
↓
First Valid?
    ↓ Yes
Initialize Best
Set Found
    ↓
Otherwise Compare
    ↓
Update if Better
```

---

## Maximum Skeleton

```c
int found = 0;
int best;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        if (found == 0)
        {
            best = arr[i];
            found = 1;
        }
        else if (arr[i] > best)
        {
            best = arr[i];
        }
    }
}
```

---

## Minimum Version

শুধু Comparison বদলাবে:

```c
else if (arr[i] < best)
{
    best = arr[i];
}
```

---

## Common Bugs

```text
Invalid Initial Candidate
No Valid Candidate Handling Missing
best = 0 assumption
```

---

## Edge Cases

```text
One Valid Candidate
Many Valid Candidates
No Valid Candidate
Negative Valid Candidates
Repeated Best Candidate
```

---

# Part 16 - Pattern 14: Maximum/Minimum + Index

# Pattern 14 - Best Value + Index Tracking

## Purpose

Maximum বা Minimum Value-এর সঙ্গে তার Position Track করা।

---

## Required States

Maximum Example:

```text
max
max_index
```

---

## Initialization

```c
int max = arr[0];
int max_index = 0;
```

---

## First Maximum Index

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        max_index = i;
    }
}
```

Strict Comparison:

```text
>
```

Equal Maximum-এ Index Update হবে না।

তাই First Maximum Index preserve হবে।

---

## Last Maximum Index

একটি Approach:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        max_index = i;
    }
    else if (arr[i] == max)
    {
        max_index = i;
    }
}
```

---

## Mental Rule

```text
New Best Value
      ↓
Update Value + Index
```

```text
Equal Best Value
      ↓
Goal কী?
  ↙          ↘
First        Last
 ↓            ↓
Ignore       Update Index
```

---

# Part 17 - Pattern 15: Best Value + Frequency

# Pattern 15 - Maximum/Minimum Occurrence Count

## Purpose

Maximum বা Minimum Value কতবার আছে তা বের করা।

---

## Beginner-Friendly Strategy

```text
Phase 1
Find Best Value
        ↓
Phase 2
Count Best Value
```

---

## Example Pipeline

Maximum Count:

```text
Pass 1
Traversal
↓
Maximum Tracking
↓
Maximum Known

Pass 2
Traversal
↓
arr[i] == max?
↓
Counter
```

---

## Skeleton

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}

int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        count++;
    }
}
```

---

## Dependency

```text
Count Target
    ↓
Target = Maximum
    ↓
Maximum must be known
```

---

## Complexity

```text
Pass 1: O(n)
Pass 2: O(n)

Total:
O(n)
```

---

## Common Beginner Mistake

সবসময় One Pass করার চেষ্টা করা।

One Pass সম্ভব হলেও Beginner-এর জন্য:

```text
Clear Two-Pass Solution
```

অনেক সময় Better।

---

# Part 18 - Pattern 16: Dependent Multi-Pass

# Pattern 16 - Result → Threshold → Second Pass

## Purpose

প্রথম Phase-এর Result দ্বিতীয় Phase-এর Condition বা Target হিসেবে ব্যবহার করা।

---

## Example Problems

```text
Count values above average
Count maximum occurrences
Count minimum occurrences
Sum values greater than average
Count values between min and max
```

---

## General Pipeline

```text
Phase 1
Find Required Information
        ↓
Calculate Result / Threshold / Target
        ↓
Phase 2
Traverse Again
        ↓
Use Previous Result
        ↓
Build Final Answer
```

---

## Signal

নিজেকে জিজ্ঞেস করবে:

```text
Second Task শুরু করার আগে
First Task-এর Final Result জানা দরকার?
```

যদি Yes:

```text
Dependent Pattern
```

---

# Part 19 - Pattern Combination Map

এখন Pattern-গুলোকে আলাদা Box হিসেবে না দেখে Combination হিসেবে দেখো।

```text
Traversal
│
├── + Accumulator
│      └── Sum
│
├── + Counter
│      └── Count
│
├── + Condition
│      ├── Conditional Sum
│      ├── Conditional Count
│      └── Conditional Average
│
├── + Comparison
│      ├── Maximum
│      └── Minimum
│
├── + Search
│      ├── Existence
│      ├── First Index
│      ├── Last Index
│      └── Frequency
│
├── + Condition + Comparison
│      └── Conditional Best
│
├── + Best + Index
│      └── Best Position
│
└── + Dependency
       └── Multi-Pass Solution
```

এটা খুব গুরুত্বপূর্ণ।

কারণ ভবিষ্যতে তুমি দেখবে:

> অনেক নতুন Problem আসলে পুরোনো Pattern-এর নতুন Combination।

---

# Part 20 - Signal → Pattern Table

`core_pattern.md`-এ এই Quick Lookup Table রাখতে পারো।

| Problem Signal           | First Pattern to Consider          |
| ------------------------ | ---------------------------------- |
| `sum`, `total`           | Accumulator                        |
| `count`, `how many`      | Counter                            |
| `largest`, `maximum`     | Maximum                            |
| `smallest`, `minimum`    | Minimum                            |
| `exists`, `find target`  | Linear Search                      |
| `first occurrence`       | Search + Index + Stop              |
| `last occurrence`        | Search + Index Update              |
| `how many times`         | Search + Counter                   |
| `only even/positive/...` | Filter / Condition                 |
| `average`                | Sum + Count + Division             |
| `largest even`           | Filter + Maximum                   |
| `smallest positive`      | Filter + Minimum                   |
| `maximum and index`      | Maximum + Index                    |
| `count maximum`          | Maximum + Counter                  |
| `above average`          | Accumulator + Dependency + Counter |
| `first and last`         | Search + Multiple States           |

Rule:

> Table দেখে Answer copy করবে না। Table শুধু প্রথম Direction দেবে।

---

# Part 21 - State Selection Table

| Goal               | Typical State    |
| ------------------ | ---------------- |
| Running sum        | `sum`            |
| Number of matches  | `count`          |
| Best large value   | `max`            |
| Best small value   | `min`            |
| Search existence   | `found`          |
| Found position     | `index`          |
| First position     | `first`          |
| Last position      | `last`           |
| Conditional best   | `found` + `best` |
| Average            | `sum` + `count`  |
| Best with position | `best` + `index` |

Mental Rule:

```text
Output কী?
    ↓
কী Information দরকার?
    ↓
Traversal-এর সময় কী মনে রাখতে হবে?
    ↓
State Variable
```

---

# Part 22 - Initialization Table

| State                 | Common Initialization |
| --------------------- | --------------------- |
| Sum                   | `0`                   |
| Count                 | `0`                   |
| Product               | `1`                   |
| Found Flag            | `0`                   |
| Missing Index         | `-1`                  |
| First Index           | `-1`                  |
| Last Index            | `-1`                  |
| Unconditional Maximum | `arr[0]`              |
| Unconditional Minimum | `arr[0]`              |
| Conditional Best      | First valid candidate |

এখানে সবচেয়ে গুরুত্বপূর্ণ:

```text
Initialization
      ↓
Must Have Meaning
```

Random Initialization না।

---

# Part 23 - Stop Condition Map

সব Traversal শেষ পর্যন্ত যাবে না।

## Existence Search

```text
Found
↓
Answer Complete
↓
break
```

---

## First Occurrence

```text
First Match
↓
Answer Complete
↓
break
```

---

## Last Occurrence

```text
Future Match Can Change Answer
↓
No break
```

---

## Count All Occurrences

```text
Future Match Can Increase Count
↓
No break
```

---

## First + Last Together

```text
First Found
↓
Last Still Unknown
↓
No break
```

Decision Rule:

```text
Can any future element change the final answer?
        ↓
    ┌───┴───┐
    ↓       ↓
   Yes      No
    ↓       ↓
Continue   break may be possible
```

---

# Part 24 - Edge Case Library

Pattern Library শুধু Code Skeleton-এর জায়গা না।

Edge Case Library-ও থাকবে।

## Traversal

```text
n = 1
answer at last index
```

## Maximum

```text
all negative
all equal
max first
max last
max repeated
```

## Minimum

```text
all positive
all equal
min first
min last
min repeated
```

## Counter

```text
zero match
one match
many matches
all match
```

## Search

```text
target first
target middle
target last
target absent
target repeated
```

## Conditional Best

```text
one valid
many valid
no valid
negative valid values
repeated best
```

## Average

```text
count = 0
fractional result
large sum
```

এই List Contest-এর আগে খুব useful হবে।

---

# Part 25 - Common Bug Library

`core_pattern.md`-এর শেষে একটি Bug Map রাখা যেতে পারে।

```text
Bug
│
├── Initialization
│   ├── max = 0
│   ├── min = 0
│   └── invalid conditional candidate
│
├── Boundary
│   └── i <= n
│
├── State
│   ├── counter reset inside loop
│   └── found reset incorrectly
│
├── Search
│   ├── Not Found inside loop
│   ├── wrong break
│   └── first vs last confusion
│
├── Condition
│   ├── = vs ==
│   ├── > vs >=
│   └── if vs else if
│
├── Arithmetic
│   ├── integer division
│   ├── division by zero
│   └── overflow
│
└── Output
    ├── extra prompt
    ├── debug print
    └── wrong formatting
```

---

# Part 26 - Pattern Extraction

# Lesson 6 - Solved Problem থেকে Pattern কীভাবে Extract করবে?

ধরো তুমি Problem Solve করলে:

> Count numbers divisible by both 3 and 5.

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
    {
        count++;
    }
}
```

এখন পুরো Code Pattern Library-তে copy করবে?

না।

Extract করবে:

```text
Specific Condition:
value divisible by 3 and 5
```

General Pattern:

```text
Traversal
↓
Condition
↓
Counter
```

General Skeleton:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        count++;
    }
}
```

এটাই Abstraction।

---

# Lesson 7 - Specific Code বনাম General Skeleton

Specific:

```c
if (arr[i] % 2 == 0)
{
    count++;
}
```

General:

```c
if (condition)
{
    count++;
}
```

Specific:

```c
if (arr[i] > k)
{
    sum += arr[i];
}
```

General:

```c
if (condition)
{
    accumulator += value;
}
```

Pattern Library-তে দুটোই থাকতে পারে।

কিন্তু General Skeleton বেশি reusable।

---

# Lesson 8 - Pattern Entry কখন Add করবে?

প্রতিটি Problem Solve করার পরে নতুন Pattern add করবে না।

কারণ:

```text
100 Problems
      ↓
100 Fake Patterns
      ↓
Pattern Library becomes useless
```

নতুন Entry add করবে যখন:

```text
1. নতুন State Model শিখেছ

2. নতুন Update Rule শিখেছ

3. নতুন Stop Rule শিখেছ

4. নতুন Pattern Combination শিখেছ

5. একই Structure একাধিক Problem-এ দেখেছ

6. কোনো Bug বারবার হচ্ছে

7. কোনো Edge Case বিশেষভাবে গুরুত্বপূর্ণ
```

---

# Lesson 9 - Pattern Library Clean রাখবে কীভাবে?

Pattern Library-তে এই ধরনের Entry avoid করবে:

```text
Pattern:
Problem 123 Solution

Pattern:
Problem 124 Solution

Pattern:
Problem 125 Solution
```

বরং:

```text
Counting Pattern
Maximum Pattern
Conditional Maximum
First Occurrence
Best Value + Index
Dependent Multi-Pass
```

অর্থাৎ:

```text
Problem Name
    ↓
Too Specific
```

```text
Reusable Structure
    ↓
Good Pattern Entry
```

---

# Part 27 - Recommended `core_pattern.md` Structure

তোমার File:

```text
21_Pattern_Library/
└── core_pattern.md
```

Recommended Structure:

```text
Core Pattern Library
│
├── 01. Traversal
├── 02. Accumulator
├── 03. Counter
├── 04. Maximum
├── 05. Minimum
├── 06. Linear Search
├── 07. First Occurrence
├── 08. Last Occurrence
├── 09. First + Last
├── 10. Conditional Accumulation
├── 11. Conditional Counting
├── 12. Filter + Sum + Count
├── 13. Conditional Best
├── 14. Best Value + Index
├── 15. Best Value + Frequency
├── 16. Dependent Multi-Pass
├── Signal Map
├── State Map
├── Initialization Map
├── Stop Condition Map
├── Edge Case Map
└── Common Bug Map
```

---

# Part 28 - Copy-Paste Starter Version

নিচের অংশটি চাইলে সরাসরি তোমার:

```text
21_Pattern_Library/core_pattern.md
```

File-এ Base Structure হিসেবে রাখতে পারো।

````markdown
# 🧩 Core Pattern Library

> A reusable collection of problem-solving patterns learned during the CP Bootcamp.

---

# Pattern Index

1. Traversal
2. Accumulator
3. Counter
4. Maximum
5. Minimum
6. Linear Search
7. First Occurrence
8. Last Occurrence
9. First + Last Occurrence
10. Conditional Accumulation
11. Conditional Counting
12. Filter + Sum + Count
13. Conditional Best
14. Best Value + Index
15. Best Value + Frequency
16. Dependent Multi-Pass

---

# 01 - Traversal

## Signal

- each element
- every value
- all elements

## State

```text
index
```

## Pipeline

```text
Start at 0
↓
Process Current Element
↓
Move Forward
↓
Stop Before n
```

## Skeleton

```c
for (int i = 0; i < n; i++)
{
    // process arr[i]
}
```

## Common Bug

```text
i <= n
```

## Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

# 02 - Accumulator

## Signal

- sum
- total
- product

## State

```text
sum
```

## Pipeline

```text
Initialize
↓
Traversal
↓
Update Running Result
↓
Final Result
```

## Skeleton

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

## Common Bugs

- Wrong initialization
- State reset inside loop
- Overflow

---

# 03 - Counter

## Signal

- count
- how many
- frequency
- occurrences

## State

```text
count
```

## Pipeline

```text
count = 0
↓
Traversal
↓
Condition
↓
Match
↓
count++
```

## Skeleton

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        count++;
    }
}
```

## Edge Cases

- Zero match
- One match
- Multiple matches
- All match

---

# 04 - Maximum

## Signal

- maximum
- largest
- highest

## State

```text
max
```

## Initialization

```c
int max = arr[0];
```

## Pipeline

```text
Initialize from valid input
↓
Traversal
↓
Compare
↓
Update if larger
```

## Skeleton

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

## Edge Cases

- Single element
- All negative
- All equal
- Maximum first
- Maximum last
- Maximum repeated

---

# 05 - Minimum

## Signal

- minimum
- smallest
- lowest

## State

```text
min
```

## Initialization

```c
int min = arr[0];
```

## Skeleton

```c
int min = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }
}
```

## Edge Cases

- Single element
- All positive
- All equal
- Minimum first
- Minimum last
- Minimum repeated

---

# 06 - Linear Search

## Signal

- find
- exists
- contains
- present

## States

```text
found
```

or:

```text
index
```

## Existence Skeleton

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}
```

## Index Skeleton

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

## Edge Cases

- Target first
- Target middle
- Target last
- Target missing
- Target repeated

---

# 07 - First Occurrence

## Pipeline

```text
Traversal
↓
Match
↓
Save Index
↓
Break
```

## Skeleton

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
        break;
    }
}
```

---

# 08 - Last Occurrence

## Pipeline

```text
Traversal
↓
Match
↓
Update Index
↓
Continue
```

## Skeleton

```c
int index = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        index = i;
    }
}
```

---

# 09 - First + Last Occurrence

## States

```text
first
last
```

## Skeleton

```c
int first = -1;
int last = -1;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        if (first == -1)
        {
            first = i;
        }

        last = i;
    }
}
```

## Key Rule

```text
First Found
≠
Whole Problem Complete
```

Future matches may still change `last`.

---

# 10 - Conditional Accumulation

## Pipeline

```text
Traversal
↓
Condition
↓
Accumulator Update
```

## Skeleton

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        sum += arr[i];
    }
}
```

---

# 11 - Conditional Counting

## Pipeline

```text
Traversal
↓
Condition
↓
Counter Update
```

## Skeleton

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        count++;
    }
}
```

---

# 12 - Filter + Sum + Count

## States

```text
sum
count
```

## Pipeline

```text
Traversal
↓
Condition
↓
Sum Update + Count Update
↓
Check Count
↓
Final Calculation
```

## Skeleton

```c
int sum = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        sum += arr[i];
        count++;
    }
}

if (count > 0)
{
    double average = (double)sum / count;
}
```

---

# 13 - Conditional Best

## Examples

- Largest even
- Smallest positive
- Largest negative

## States

```text
found
best
```

## Pipeline

```text
Traversal
↓
Condition
↓
Valid Candidate
↓
First Valid?
↓
Initialize
↓
Compare Future Candidates
↓
Update Best
```

## Maximum Skeleton

```c
int found = 0;
int best;

for (int i = 0; i < n; i++)
{
    if (condition)
    {
        if (found == 0)
        {
            best = arr[i];
            found = 1;
        }
        else if (arr[i] > best)
        {
            best = arr[i];
        }
    }
}
```

## Common Bug

Using an invalid initial candidate.

---

# 14 - Best Value + Index

## States

```text
best
index
```

## First Maximum Index Skeleton

```c
int max = arr[0];
int index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        index = i;
    }
}
```

## Key Rule

```text
Strict comparison
↓
Preserve first occurrence
```

---

# 15 - Best Value + Frequency

## Beginner Strategy

```text
Pass 1
Find Best Value
↓
Pass 2
Count Best Value
```

## Skeleton

```c
int max = arr[0];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}

int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        count++;
    }
}
```

---

# 16 - Dependent Multi-Pass

## Signal

```text
Phase 2 needs Phase 1 final result
```

## Pipeline

```text
Phase 1
Find Required Information
↓
Calculate Target / Threshold
↓
Phase 2
Traverse Again
↓
Use Previous Result
↓
Build Final Answer
```

## Examples

- Count maximum occurrences
- Count minimum occurrences
- Count values above average
- Sum values above average
- Count values between minimum and maximum

---

# ⚡ Signal Map

| Signal               | Pattern                |
| -------------------- | ---------------------- |
| sum / total          | Accumulator            |
| count / how many     | Counter                |
| largest / maximum    | Maximum                |
| smallest / minimum   | Minimum                |
| exists / find        | Search                 |
| first occurrence     | Search + Index + Stop  |
| last occurrence      | Search + Index Update  |
| how many times       | Search + Counter       |
| only valid values    | Condition / Filter     |
| average              | Sum + Count + Division |
| largest valid value  | Conditional Maximum    |
| smallest valid value | Conditional Minimum    |

---

# 🧠 State Map

| Goal             | State           |
| ---------------- | --------------- |
| Sum              | `sum`           |
| Count            | `count`         |
| Maximum          | `max`           |
| Minimum          | `min`           |
| Existence        | `found`         |
| Position         | `index`         |
| First position   | `first`         |
| Last position    | `last`          |
| Conditional best | `found`, `best` |
| Average          | `sum`, `count`  |
| Best position    | `best`, `index` |

---

# 🚦 Stop Condition Map

```text
Existence Search
↓
First Match
↓
break
```

```text
First Occurrence
↓
First Match
↓
break
```

```text
Last Occurrence
↓
Future Match Matters
↓
No break
```

```text
Count All Matches
↓
Future Match Matters
↓
No break
```

---

# 🧪 Edge Case Map

## Maximum

- All negative
- All equal
- Maximum first
- Maximum last
- Maximum repeated

## Minimum

- All positive
- All equal
- Minimum first
- Minimum last
- Minimum repeated

## Search

- Target first
- Target middle
- Target last
- Target absent
- Target repeated

## Counter

- Zero match
- One match
- Multiple matches
- All match

## Conditional Best

- One valid candidate
- Many valid candidates
- No valid candidate
- Negative valid candidates

## Average

- Count is zero
- Fractional result
- Large sum

---

# 🐞 Common Bug Map

## Initialization

- `max = 0`
- `min = 0`
- Invalid conditional candidate

## Boundary

- `i <= n`

## State

- Resetting state inside loop
- Resetting `found` after it becomes true

## Search

- Printing `Not Found` inside loop
- Wrong `break`
- First vs last confusion

## Condition

- `=` instead of `==`
- `>` vs `>=`
- Wrong `if / else if` structure

## Arithmetic

- Integer division
- Division by zero
- Integer overflow

## Output

- Extra prompt text
- Debug prints
- Wrong formatting
````

---

# Part 29 - Pattern Library Update Workflow

নতুন Problem Solve করার পরে সবসময় Library Update করবে না।

এই Workflow follow করবে:

```text
Problem Solved
      ↓
Did I learn something reusable?
      ↓
   ┌──┴──┐
   ↓     ↓
  No     Yes
   ↓      ↓
Stop   Existing Pattern?
           ↓
       ┌───┴───┐
       ↓       ↓
      Yes      No
       ↓        ↓
Update Bug/   Create New
Edge Case     Pattern Entry
/Example
```

---

# Lesson 10 - Existing Pattern Update Example

ধরো Pattern Library-তে আগে ছিল:

```text
Maximum Pattern
```

তারপর তুমি একটি Problem-এ এই Bug করলে:

```c
int max = 0;
```

এবং All-negative Case-এ WA পেলে।

নতুন Pattern বানাবে না:

```text
All Negative Maximum Pattern
```

বরং Existing Maximum Entry-তে add করবে:

````markdown
## Common Bug

Do not assume:

```c
int max = 0;
````

This fails when all values are negative.

````

এটাই Clean Library Maintenance।

---

# Lesson 11 - Mistake থেকে Pattern Library Update

একটি powerful Workflow:

```text
Wrong Answer
↓
Find Counterexample
↓
Understand Root Cause
↓
Fix Code
↓
Ask:
"Is this mistake reusable knowledge?"
↓
Yes
↓
Add to Pattern Library
````

Example:

```text
WA:
First Maximum Index

Cause:
Used >= instead of >

Lesson:
Strict comparison preserves first best occurrence

Library Update:
Best Value + Index → Update Rule
```

এইভাবে তোমার Pattern Library তোমার নিজের Experience দিয়ে grow করবে।

---

# Part 30 - Pattern Library এবং Glossary-এর পার্থক্য

তোমার Repository-তে আছে:

```text
20_Glossary/
└── CP_Dictionary.md
```

এবং:

```text
21_Pattern_Library/
└── core_pattern.md
```

দুটোর কাজ আলাদা।

## Glossary

Question:

```text
এই শব্দের অর্থ কী?
```

Example:

```text
Traversal কী?
Accumulator কী?
State কী?
Counterexample কী?
```

---

## Pattern Library

Question:

```text
এই Problem Structure কীভাবে Solve করব?
```

Example:

```text
Maximum কীভাবে Track করব?
First Occurrence কীভাবে বের করব?
Conditional Best কীভাবে Initialize করব?
Count Maximum কেন Multi-pass হতে পারে?
```

Mental Difference:

```text
Glossary
    ↓
Meaning
```

```text
Pattern Library
    ↓
Application
```

---

# Part 31 - Pattern Library Revision Strategy

Contest-এর আগে পুরো Day 2 পড়ার দরকার নেই।

Revision Flow:

```text
Signal Map
    ↓
Pattern Index
    ↓
Weak Patterns
    ↓
Common Bug Map
    ↓
Edge Case Map
```

Quick Revision:

```text
10 minutes
│
├── 2 min → Signal Map
├── 3 min → Core Pattern Pipeline
├── 2 min → Initialization Rules
├── 1 min → Stop Conditions
└── 2 min → Bug + Edge Case Map
```

তোমার Bootcamp-এর ১৬ দিনের শেষে এই Library অনেক বড় হবে।

কিন্তু Goal হবে:

```text
Large Notes
    ≠
Good Library
```

বরং:

```text
Small
Clear
Searchable
Reusable
Personal
```

---

# 🧪 Chapter 10 Exercise

এখন Theory থেকে Library Building Practice।

---

## Exercise 1 - Extract the Pattern

Problem:

> Count how many numbers are divisible by 7.

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 7 == 0)
    {
        count++;
    }
}
```

লিখবে:

```text
Specific Problem:
...

General Pattern:
...

State:
...

Pipeline:
...

Reusable Skeleton:
...
```

---

## Exercise 2 - Extract the Pattern

Problem:

> Find the sum of positive values.

লিখবে:

```text
Problem Signal:
...

Patterns:
...

State:
...

Initialization:
...

Update Rule:
...

Edge Cases:
...
```

---

## Exercise 3 - Pattern Comparison

Compare:

```text
First Occurrence
```

and:

```text
Last Occurrence
```

Table Complete করবে:

| Feature              | First Occurrence | Last Occurrence |
| -------------------- | ---------------- | --------------- |
| Initial Index        | ?                | ?               |
| Update on Match      | ?                | ?               |
| `break`              | ?                | ?               |
| Full Traversal       | ?                | ?               |
| Future Match Matters | ?                | ?               |

---

## Exercise 4 - State Selection

Problem:

> Find the largest odd number and its first index.

লিখবে:

```text
Pattern Combination:

...

States:

1. ...
2. ...
3. ...

Why each state is needed:

...

Initialization Strategy:

...

Update Rule:

...

First Index Preservation Rule:

...
```

---

## Exercise 5 - Dependency Extraction

Problem:

> Count values smaller than the average.

লিখবে:

```text
Phase 1:
...

Intermediate Result:
...

Phase 2:
...

Why Dependent:
...

States:
...

Complexity:
...
```

---

## Exercise 6 - Bug Library Update

Problem:

> First Maximum Index.

Bug:

```c
if (arr[i] >= max)
{
    max = arr[i];
    index = i;
}
```

Pattern Library Entry হিসেবে লিখবে:

```text
Pattern:
...

Bug:
...

Counterexample:
...

Why It Fails:
...

Correct Rule:
...

Reusable Lesson:
...
```

---

## Exercise 7 - Edge Case Extraction

Problem:

> Smallest Positive Number.

কমপক্ষে ৫টি Edge Case Category লিখবে।

Format:

```text
1. One Valid Candidate
   Input Idea:
   Expected Behaviour:

2. ...

3. ...

4. ...

5. ...
```

---

## Exercise 8 - Pattern Combination

Problem:

> Find the minimum value and count its occurrences.

লিখবে:

```text
Pattern 1:
...

Pattern 2:
...

Dependency:
...

Beginner Strategy:
...

Pipeline:

...
↓
...
↓
...
```

---

# 📝 Chapter 10 Assignment

# Task 1 - Create or Update the File

Repository:

```text
CP-Bootcamp-2026/
└── 21_Pattern_Library/
    └── core_pattern.md
```

যদি File আগে থেকেই থাকে:

```text
Update Existing File
```

না থাকলে:

```bash
touch 21_Pattern_Library/core_pattern.md
```

---

# Task 2 - Add Pattern Index

তোমার `core_pattern.md`-এ কমপক্ষে এই Index থাকবে:

```text
01. Traversal
02. Accumulator
03. Counter
04. Maximum
05. Minimum
06. Linear Search
07. First Occurrence
08. Last Occurrence
09. First + Last Occurrence
10. Conditional Accumulation
11. Conditional Counting
12. Filter + Sum + Count
13. Conditional Best
14. Best Value + Index
15. Best Value + Frequency
16. Dependent Multi-Pass
```

---

# Task 3 - Complete Five Core Cards Yourself

নিচের পাঁচটি Pattern নিজের ভাষায় লিখবে:

```text
1. Traversal
2. Counter
3. Maximum
4. Linear Search
5. Conditional Best
```

প্রতিটিতে থাকবে:

```text
Purpose
Signal
State
Initialization
Pipeline
Skeleton
Common Bug
Edge Cases
Complexity
```

**Chapter থেকে blind copy করবে না।**

নিজের ভাষায় লিখবে।

কারণ Goal:

```text
Read
↓
Understand
↓
Reconstruct
```

---

# Task 4 - Build Signal Map

কমপক্ষে ১০টি Signal add করবে।

Example Format:

| Signal             | Pattern               |
| ------------------ | --------------------- |
| `how many`         | Counter               |
| `largest`          | Maximum               |
| `first occurrence` | Search + Index + Stop |
| `...`              | `...`                 |

---

# Task 5 - Build State Map

কমপক্ষে এই Goal-গুলোর State লিখবে:

```text
Sum
Count
Maximum
Minimum
Existence
First Position
Last Position
Conditional Best
Average
Best Value + Index
```

---

# Task 6 - Build Initialization Map

Table:

| Pattern/State    | Initialization | Reason |
| ---------------- | -------------- | ------ |
| Sum              | `0`            | `...`  |
| Count            | `0`            | `...`  |
| Product          | `1`            | `...`  |
| Found            | `0`            | `...`  |
| Missing Index    | `-1`           | `...`  |
| Maximum          | `arr[0]`       | `...`  |
| Minimum          | `arr[0]`       | `...`  |
| Conditional Best | `???`          | `...`  |

নিজে Complete করবে।

---

# Task 7 - Build Stop Condition Map

এই Problem-গুলোর জন্য `break` Decision লিখবে:

```text
1. Target Exists?
2. First Target Index
3. Last Target Index
4. Count All Target Occurrences
5. First and Last Target Index
```

Format:

```text
Problem:
Break? Yes / No
Reason:
Can future elements change the answer?
```

---

# Task 8 - Add Personal Mistake Log

`core_pattern.md`-এর শেষে:

```markdown
# 🐞 Personal Mistake Log
```

Section তৈরি করবে।

Format:

````markdown
## Mistake 01 - Title

### Pattern

...

### Wrong Code

```c
...
```

### Failing Test

```text
...
```

### Why It Failed

...

### Correct Rule

...

### Reusable Lesson

...
````

এখন পর্যন্ত নিজের করা Mistake থাকলে সেগুলো add করবে।

না থাকলে Chapter 8-এর Practice থেকে কমপক্ষে ৩টি Bug analyse করে add করবে।

---

# Task 9 - Pattern Extraction Challenge

এই তিনটি Problem-এর জন্য নতুন Pattern বানাবে না।

Existing Pattern দিয়ে Explain করবে।

### Problem A

> Count numbers greater than `k`.

### Problem B

> Sum numbers divisible by 5.

### Problem C

> Find first index of the largest value.

প্রতিটির জন্য:

```text
Problem:
...

Existing Patterns Used:
...

States:
...

Pipeline:
...
```

---

# Task 10 - Final Library Review

শেষে নিজেকে Check করবে:

```text
[ ] Pattern names clear?

[ ] Duplicate patterns আছে?

[ ] Specific problem solution-কে ভুল করে pattern বানিয়েছি?

[ ] Signal section আছে?

[ ] State section আছে?

[ ] Initialization meaningful?

[ ] Pipeline readable?

[ ] Skeleton reusable?

[ ] Common bugs recorded?

[ ] Edge cases recorded?

[ ] Complexity written?

[ ] Personal mistakes added?

[ ] File easy to scan?
```

---

# Part 32 - Git Workflow

Chapter 10-এর কাজ শেষ হলে Repository Root-এ যাবে।

Check:

```bash
git status
```

তারপর:

```bash
git add 21_Pattern_Library/core_pattern.md
```

যদি Day 2-এর অন্য File-ও update করে থাকো এবং সব Change push করতে চাও:

```bash
git add .
```

তারপর:

```bash
git status
```

Commit:

```bash
git commit -m "docs: update Day 2 core pattern library"
```

Push:

```bash
git push origin main
```

Workflow:

```text
Edit
↓
Save
↓
git status
↓
git add
↓
git status
↓
git commit
↓
git push
```

---

# 🧠 Chapter 10 Self-Test

নিজের ভাষায় উত্তর দেবে।

### Question 1

Problem Collection এবং Pattern Library-এর পার্থক্য কী?

### Question 2

Pattern Library-তে পুরো Specific Solution রাখার বদলে General Skeleton কেন useful?

### Question 3

Pattern Card-এর সবচেয়ে গুরুত্বপূর্ণ অংশগুলো কী?

### Question 4

Problem Signal কী?

### Question 5

State Variable কীভাবে select করবে?

### Question 6

Maximum Pattern-এর Initialization কী এবং কেন?

### Question 7

Conditional Maximum-এর Initialization সাধারণ Maximum থেকে আলাদা কেন?

### Question 8

First Occurrence এবং Last Occurrence-এর Stop Rule কীভাবে আলাদা?

### Question 9

Dependent Multi-Pass Pattern কখন দরকার হয়?

### Question 10

একটি নতুন Problem Solve করার পরে কখন Pattern Library update করবে?

### Question 11

Glossary এবং Pattern Library-এর পার্থক্য কী?

### Question 12

Wrong Answer কীভাবে Pattern Library-কে improve করতে পারে?

---

# 🏁 Chapter 10 Completion Checklist

```text
[ ] Pattern Library-এর Purpose বুঝি

[ ] Problem Collection এবং Pattern Library আলাদা করতে পারি

[ ] Pattern Signal চিনতে পারি

[ ] Pattern State লিখতে পারি

[ ] Initialization Rule লিখতে পারি

[ ] Update Rule লিখতে পারি

[ ] Pipeline লিখতে পারি

[ ] General Skeleton তৈরি করতে পারি

[ ] Common Bug add করতে পারি

[ ] Edge Case add করতে পারি

[ ] Traversal Card তৈরি করেছি

[ ] Accumulator Card তৈরি করেছি

[ ] Counter Card তৈরি করেছি

[ ] Maximum Card তৈরি করেছি

[ ] Minimum Card তৈরি করেছি

[ ] Search Card তৈরি করেছি

[ ] First Occurrence Card তৈরি করেছি

[ ] Last Occurrence Card তৈরি করেছি

[ ] Conditional Best Card তৈরি করেছি

[ ] Dependent Multi-Pass Card তৈরি করেছি

[ ] Signal Map তৈরি করেছি

[ ] State Map তৈরি করেছি

[ ] Initialization Map তৈরি করেছি

[ ] Stop Condition Map তৈরি করেছি

[ ] Edge Case Map তৈরি করেছি

[ ] Personal Mistake Log তৈরি করেছি

[ ] core_pattern.md update করেছি

[ ] Git commit করেছি

[ ] GitHub-এ push করেছি
```

---

# 🎓 Chapter 10 Final Mental Model

এখন পর্যন্ত তোমার Learning Flow হয়তো ছিল:

```text
Problem
↓
Solve
↓
Next Problem
↓
Solve
↓
Next Problem
```

এখন থেকে Better Flow:

```text
Problem
↓
Solve
↓
Understand
↓
Extract Pattern
↓
Record Reusable Knowledge
↓
Record Bug
↓
Record Edge Case
↓
Next Problem
```

এর ফলে:

```text
10 Problems Solved
```

শুধু ১০টা `.c` File হবে না।

বরং:

```text
10 Problems
      ↓
Repeated Structures Detected
      ↓
Patterns Extracted
      ↓
Mistakes Recorded
      ↓
Edge Cases Collected
      ↓
Reusable Mental Library
```

তোমার লক্ষ্য Pattern মুখস্থ করা না।

লক্ষ্য:

```text
Problem Signal
      ↓
Pattern Recognition
      ↓
State Selection
      ↓
Initialization
      ↓
Update Rule
      ↓
Pipeline
      ↓
Code
      ↓
Test
```

আর নতুন Problem Solve করার পরে:

```text
Did I learn a new reusable idea?
        ↓
    ┌───┴───┐
    ↓       ↓
   No       Yes
    ↓        ↓
Continue   Update Library
```

সবচেয়ে গুরুত্বপূর্ণ কথা:

```text
Pattern Library
      ≠
Code Dump
```

বরং:

```text
Pattern Library
      =
Your Compressed Problem-Solving Experience
```

---

# 🗺️ Day 2 Progress

```text
Day 2
│
├── ✅ Chapter 1 - Array Mental Model
│
├── ✅ Chapter 2 - Traversal Pattern
│
├── ✅ Chapter 3 - Accumulation Pattern
│
├── ✅ Chapter 4 - Counting Pattern
│
├── ✅ Chapter 5 - Maximum & Minimum Pattern
│
├── ✅ Chapter 6 - Searching Pattern
│
├── ✅ Chapter 7 - Combining Patterns
│
├── ✅ Chapter 8 - Common Bugs & Edge Cases
│
├── ✅ Chapter 9 - Problem Solving Session
│
├── ✅ Chapter 10 - Pattern Library Update
│
└── ⏳ Chapter 11 - Assignment & Reflection
```

**Day 2 - Chapter 10 এখানেই শেষ।**

Chapter 11 হবে Day 2-এর **Final Assessment & Reflection**। সেখানে নতুন Theory যোগ না করে Day 2-এর পুরো Array foundation-`Traversal → State → Pattern → Combination → Edge Case → Debugging → Problem Solving Workflow`-সবকিছুর উপর Final Assignment থাকবে।

---

# 📘 Day 2 - Chapter 11

# 🏁 Final Assignment, Assessment & Reflection

Day 2-এর Chapter 1–10 পর্যন্ত তুমি Array-এর উপর শুধু কিছু `for` loop লেখা শেখোনি।

তুমি একটি complete foundation তৈরি করেছ:

```text
Array Mental Model
        ↓
Traversal
        ↓
State Variable
        ↓
Accumulator
        ↓
Counter
        ↓
Maximum / Minimum
        ↓
Linear Search
        ↓
Index Tracking
        ↓
Pattern Combination
        ↓
Edge Case
        ↓
Debugging
        ↓
Problem Solving Workflow
        ↓
Pattern Library
```

এখন Chapter 11-এর কাজ হলো:

> **Day 2-তে শেখা জিনিসগুলো সত্যিই বুঝেছ কি না, সেটা যাচাই করা।**

এই Chapter-এ নতুন বড় Theory থাকবে না।

এখানে তুমি:

```text
Recall
↓
Explain
↓
Recognize
↓
Design
↓
Code
↓
Test
↓
Debug
↓
Reflect
```

করবে।

---

# 🎯 Chapter Goal

এই Chapter শেষে তুমি যাচাই করতে পারবে:

* Array-এর Mental Model পরিষ্কার কি না;
* Traversal নিজে লিখতে পারো কি না;
* Problem দেখে Pattern চিনতে পারো কি না;
* State Variable নির্বাচন করতে পারো কি না;
* Initialization-এর কারণ বুঝো কি না;
* Accumulator এবং Counter আলাদা করতে পারো কি না;
* Maximum ও Minimum safely বের করতে পারো কি না;
* Linear Search-এর বিভিন্ন Goal আলাদা করতে পারো কি না;
* First এবং Last Occurrence-এর পার্থক্য বুঝো কি না;
* একাধিক Pattern combine করতে পারো কি না;
* Dependency চিনতে পারো কি না;
* One Pass এবং Multi Pass-এর মধ্যে সিদ্ধান্ত নিতে পারো কি না;
* Edge Case বানাতে পারো কি না;
* Wrong Answer systematically debug করতে পারো কি না;
* Problem থেকে Pipeline এবং Pseudocode বানাতে পারো কি না;
* নিজের Pattern Library maintain করতে পারো কি না।

Chapter 11-এর Mental Model:

```text
Learned
   ↓
Can I Explain It?
   ↓
Can I Recognize It?
   ↓
Can I Apply It?
   ↓
Can I Debug It?
   ↓
Can I Reuse It?
```

---

# 📖 Chapter Map

```text
Chapter 11
│
├── Part 1  - Day 2 Knowledge Audit
│
├── Part 2  - Concept Recall Test
│
├── Part 3  - Pattern Recognition Test
│
├── Part 4  - State Selection Test
│
├── Part 5  - Initialization Test
│
├── Part 6  - Pipeline Building Test
│
├── Part 7  - Dry Run Test
│
├── Part 8  - Bug Hunting Test
│
├── Part 9  - Edge Case Design
│
├── Part 10 - Coding Assignment
│
├── Part 11 - Final Challenge
│
├── Part 12 - Pattern Library Review
│
├── Part 13 - Reflection
│
└── Part 14 - Day 2 Completion Protocol
```

---

# Part 1 - Day 2 Knowledge Audit

# Lesson 1 - শেখা আর পারা এক জিনিস না

একটি Pattern দেখে মনে হতে পারে:

```text
হ্যাঁ, এটা তো বুঝি।
```

কিন্তু যখন Blank Editor সামনে আসে:

```text
#include <stdio.h>

int main()
{



}
```

তখন হয়তো মনে হয়:

```text
এখন কী করব?
```

এই Gap খুব গুরুত্বপূর্ণ।

```text
Recognition
    ≠
Recall
    ≠
Application
```

### Recognition

Code দেখে বলতে পারা:

```text
এটা Maximum Pattern।
```

### Recall

Code না দেখে Pattern-এর Logic বলতে পারা:

```text
First element দিয়ে max initialize করব
↓
Remaining elements traverse করব
↓
Larger value পেলে update করব
```

### Application

নতুন Problem-এ Pattern ব্যবহার করতে পারা:

> Find the largest negative number.

এখানে শুধু Normal Maximum না।

দরকার:

```text
Traversal
+
Condition
+
Valid Candidate
+
Maximum Tracking
```

এই Chapter তিনটি Skill-ই Test করবে।

---

# Lesson 2 - Day 2-এর Core Skill Tree

Day 2-এর Skill Tree:

```text
ARRAY
│
├── Understand
│   ├── Index
│   ├── Value
│   ├── Size
│   └── Boundary
│
├── Traverse
│   ├── Full Traversal
│   ├── Partial Traversal
│   └── Early Stop
│
├── Maintain State
│   ├── Sum
│   ├── Count
│   ├── Maximum
│   ├── Minimum
│   ├── Flag
│   └── Index
│
├── Search
│   ├── Exists
│   ├── First
│   ├── Last
│   └── Frequency
│
├── Combine
│   ├── Filter + Count
│   ├── Filter + Sum
│   ├── Filter + Best
│   ├── Best + Index
│   └── Best + Frequency
│
├── Design
│   ├── Decompose
│   ├── Dependency Check
│   ├── One Pass
│   ├── Multi Pass
│   ├── Pipeline
│   └── Pseudocode
│
└── Validate
    ├── Dry Run
    ├── Edge Case
    ├── Counterexample
    ├── Debugging
    └── Reflection
```

Chapter 11-এর Assignment এই পুরো Tree-এর উপর হবে।

---

# Part 2 - Concept Recall Test

## Rule

এই Section করার সময়:

```text
Day 2 Notes বন্ধ রাখবে
Pattern Library বন্ধ রাখবে
Internet Search করবে না
```

প্রথমে নিজের Knowledge দিয়ে Answer করবে।

পরে Notes-এর সঙ্গে Compare করবে।

---

# Task 1 - Array Mental Model

নিজের ভাষায় উত্তর দাও।

### Question 1

Array কী?

### Question 2

এই Declaration:

```c
int arr[5];
```

এখানে:

```text
Size = ?
First Index = ?
Last Index = ?
```

### Question 3

কেন:

```c
arr[5]
```

invalid?

### Question 4

`arr[i]` এবং `i`-এর পার্থক্য কী?

### Question 5

এই Loop কী করে?

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

### Question 6

কেন:

```c
i < n
```

সাধারণ Full Traversal-এর জন্য correct boundary?

---

# Task 2 - Traversal Understanding

নিচের প্রশ্নগুলোর উত্তর দাও।

### A

Traversal কী?

### B

সব Problem-এ Full Traversal দরকার?

### C

কখন `break` করা যায়?

### D

কখন `break` করা যাবে না?

### E

এই Problem-এ `break` করা যাবে?

> Check whether target exists.

### F

এই Problem-এ?

> Count all target occurrences.

### G

এই Problem-এ?

> Find last target index.

### H

এই Problem-এ?

> Find first target index.

---

# Task 3 - State Understanding

নিজের ভাষায় লিখবে:

> State Variable কী?

তারপর Table Complete করবে।

| Problem Goal         | Required State |
| -------------------- | -------------- |
| Sum                  | `?`            |
| Count                | `?`            |
| Maximum              | `?`            |
| Minimum              | `?`            |
| Target Exists        | `?`            |
| Target Index         | `?`            |
| First and Last Index | `?`, `?`       |
| Average              | `?`, `?`       |
| Conditional Maximum  | `?`, `?`       |

---

# Part 3 - Pattern Recognition Test

এই Section-এ Code লিখবে না।

শুধু Pattern চিনবে।

---

# Task 4 - Identify the Pattern

## Problem A

> Find the sum of all array elements.

Pattern:

```text
???
```

---

## Problem B

> Count how many elements are negative.

Pattern:

```text
???
+
???
+
???
```

---

## Problem C

> Find the largest element.

Pattern:

```text
???
+
???
```

---

## Problem D

> Check whether `x` exists.

Pattern:

```text
???
+
???
+
???
```

---

## Problem E

> Find the first occurrence of `x`.

Pattern:

```text
???
+
???
+
???
```

---

## Problem F

> Find the last occurrence of `x`.

Pattern:

```text
???
+
???
+
???
```

---

## Problem G

> Find the sum of all even values.

Pattern:

```text
???
+
???
+
???
```

---

## Problem H

> Find the largest odd number.

Pattern:

```text
???
+
???
+
???
+
???
```

---

## Problem I

> Count how many times the maximum value occurs.

Pattern:

```text
???
↓
???
```

---

## Problem J

> Count how many values are greater than the average.

Pattern:

```text
???
↓
???
↓
???
```

---

# Task 5 - Same Pattern, Different Story

নিচের Problem-গুলোর মধ্যে কোনগুলো একই Structural Pattern ব্যবহার করে তা Group করবে।

```text
1. Count even numbers

2. Count positive marks

3. Count values greater than k

4. Find maximum value

5. Count numbers divisible by 7

6. Find smallest value

7. Count target occurrences

8. Count negative values
```

Format:

```text
Group A:

Problems:
...

Shared Pattern:
...

State:
...
```

---

# Part 4 - State Selection Test

# Task 6 - Choose the State

নিচের প্রতিটি Problem-এর জন্য State Variable select করবে।

## Problem 1

> Sum all positive numbers.

```text
State:
Reason:
```

---

## Problem 2

> Find maximum and minimum.

```text
States:
Reason:
```

---

## Problem 3

> Find first and last target index.

```text
States:
Reason:
```

---

## Problem 4

> Find largest even number.

```text
States:
Reason:
```

---

## Problem 5

> Find average of negative values.

```text
States:
Reason:
```

---

## Problem 6

> Count maximum occurrences.

```text
Phase 1 State:
Phase 2 State:
Dependency:
```

---

## Problem 7

> Find the largest positive value and its first index.

```text
States:

1.
2.
3.

Purpose of each:
...
```

---

# Part 5 - Initialization Test

Initialization মুখস্থ করার বিষয় না।

প্রতিটি Initialization-এর Meaning থাকতে হবে।

---

# Task 7 - Fill the Initialization Table

| Goal                | State           | Initialization |
| ------------------- | --------------- | -------------- |
| Sum                 | `sum`           | `?`            |
| Count               | `count`         | `?`            |
| Product             | `product`       | `?`            |
| Search Flag         | `found`         | `?`            |
| Missing Index       | `index`         | `?`            |
| Maximum             | `max`           | `?`            |
| Minimum             | `min`           | `?`            |
| Conditional Maximum | `found`, `best` | `?`            |

---

# Task 8 - Explain Why

নিজের ভাষায় Explain করবে।

### A

কেন:

```c
int sum = 0;
```

### B

কেন:

```c
int product = 1;
```

### C

কেন:

```c
int index = -1;
```

### D

কেন:

```c
int max = arr[0];
```

সাধারণত:

```c
int max = 0;
```

এর চেয়ে safer?

### E

Largest Even Problem-এ কেন:

```c
int max_even = arr[0];
```

unsafe হতে পারে?

---

# Part 6 - Pipeline Building Test

এই Section খুব গুরুত্বপূর্ণ।

Code লিখবে না।

শুধু Problem থেকে Pipeline বানাবে।

---

# Task 9 - Build the Pipeline

## Problem A - Count Positive Numbers

```text
...
↓
...
↓
...
↓
...
```

---

## Problem B - Sum Negative Numbers

```text
...
↓
...
↓
...
↓
...
```

---

## Problem C - First Target Index

```text
...
↓
...
↓
...
↓
...
↓
...
```

---

## Problem D - Last Target Index

```text
...
↓
...
↓
...
↓
...
```

---

## Problem E - Largest Even Number

Pipeline-এ অবশ্যই থাকবে:

```text
Filter
First Valid Candidate
Initialization
Comparison
Update
```

---

## Problem F - Count Maximum Occurrences

Pipeline-এ Phase আলাদা করে লিখবে।

```text
Phase 1
...
↓
...

Phase 2
...
↓
...
```

---

## Problem G - Count Values Above Average

নিজে Complete Pipeline লিখবে।

Hint শুধু এটুকু:

```text
Average আগে জানা দরকার।
```

---

# Part 7 - Dry Run Test

# Task 10 - Counter Dry Run

Problem:

> Count values greater than `5`.

Input:

```text
7
3 8 5 10 2 6 5
```

Table Complete করবে।

|  `i` | `arr[i]` | `arr[i] > 5` | Count Before | Count After |
| ---: | -------: | ------------ | -----------: | ----------: |
|    0 |        3 | ?            |            ? |           ? |
|    1 |        8 | ?            |            ? |           ? |
|    2 |        5 | ?            |            ? |           ? |
|    3 |       10 | ?            |            ? |           ? |
|    4 |        2 | ?            |            ? |           ? |
|    5 |        6 | ?            |            ? |           ? |
|    6 |        5 | ?            |            ? |           ? |

Final Answer:

```text
?
```

---

# Task 11 - Maximum Dry Run

Input:

```text
6
-5 -2 -8 -1 -9 -3
```

Initial State:

```text
max = ?
```

Table:

| Current Value | Max Before | Update? | Max After |
| ------------: | ---------: | ------- | --------: |
|            -2 |          ? | ?       |         ? |
|            -8 |          ? | ?       |         ? |
|            -1 |          ? | ?       |         ? |
|            -9 |          ? | ?       |         ? |
|            -3 |          ? | ?       |         ? |

Final Maximum:

```text
?
```

---

# Task 12 - Search Dry Run

Problem:

> Find first index of `7`.

Input:

```text
8
3 5 7 2 7 9 7 1
```

Initial:

```text
index = -1
```

Table:

|  `i` | Value | Match? | Index After | Stop? |
| ---: | ----: | ------ | ----------: | ----- |
|    0 |     3 | ?      |           ? | ?     |
|    1 |     5 | ?      |           ? | ?     |
|    2 |     7 | ?      |           ? | ?     |

তারপর Explain করবে:

```text
Why does traversal stop here?
```

---

# Part 8 - Bug Hunting Test

এখানে Code দেখে Bug খুঁজবে।

সরাসরি Correct Code লিখবে না।

প্রথমে:

```text
Bug
↓
Failing Test
↓
Why It Fails
↓
Correct Rule
↓
Then Fix
```

---

# Task 13 - Bug Hunt 1

```c
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
}
```

লিখবে:

```text
Bug:
...

Failing Input:
...

Expected:
...

Actual:
...

Root Cause:
...

Correct Rule:
...
```

---

# Task 14 - Bug Hunt 2

```c
int count;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        count++;
    }
}
```

Find:

```text
Bug:
...

Why dangerous:
...

Correct initialization:
...
```

---

# Task 15 - Bug Hunt 3

```c
for (int i = 0; i <= n; i++)
{
    printf("%d\n", arr[i]);
}
```

Explain:

```text
Valid Index Range:
...

Invalid Access:
...

Correct Boundary:
...
```

---

# Task 16 - Bug Hunt 4

Problem:

> Count all target occurrences.

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;
        break;
    }
}
```

Explain:

```text
Bug:
...

What answer does this code effectively produce?
...

Why future elements matter:
...

Correct rule:
...
```

---

# Task 17 - Bug Hunt 5

Problem:

> Find target existence.

Code:

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
```

Explain:

```text
Why wrong:
...

What does one mismatch actually mean?
...

What state is needed?
...

When should final result be printed?
...
```

---

# Task 18 - Bug Hunt 6

Problem:

> Find first maximum index.

Code:

```c
int max = arr[0];
int index = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] >= max)
    {
        max = arr[i];
        index = i;
    }
}
```

Test:

```text
5
10 3 10 5 10
```

Answer:

```text
Expected Index:
?

Actual Index:
?
```

Explain:

```text
Why:
...

Correct comparison:
...

Reusable lesson:
...
```

---

# Part 9 - Edge Case Design

# Lesson 3 - Edge Case মানে Random Test না

Random Test:

```text
5
3 8 2 9 4
```

Useful হতে পারে।

কিন্তু Edge Case intentionally তৈরি করা হয়।

Example:

Maximum Problem:

```text
All Negative
Maximum First
Maximum Last
Maximum Repeated
Single Element
All Equal
```

প্রতিটি Test একটি specific Risk check করে।

---

# Task 19 - Maximum Edge Cases

এই Categories-এর জন্য Input এবং Expected Output বানাবে।

```text
1. Single Element

2. All Negative

3. All Equal

4. Maximum First

5. Maximum Last

6. Maximum Repeated
```

Format:

````markdown
## Test 1 - Single Element

### Input

```text
...
```

### Expected Output

```text
...
```

### What This Tests

...
````

---

# Task 20 - Search Edge Cases

Target Search-এর জন্য Test বানাও:

```text
1. Target First
2. Target Middle
3. Target Last
4. Target Missing
5. Target Repeated
```

---

# Task 21 - Conditional Best Edge Cases

Problem:

> Find largest even number.

Test বানাবে:

```text
1. One Even Value
2. Many Even Values
3. All Even
4. Negative Even Values
5. No Even Value
6. Largest Even Repeated
```

প্রতিটির Expected Behaviour লিখবে।

---

# Part 10 - Coding Assignment

এখন Code লেখা শুরু।

Rule:

```text
Problem
↓
Analysis
↓
Pattern
↓
State
↓
Pipeline
↓
Pseudocode
↓
Code
↓
Test
```

সরাসরি Code দিয়ে শুরু করবে না।

---

# Problem 1 - Sum of Positive Values

## Problem

Given `n` integers, print the sum of all positive values.

### Example

Input:

```text
6
-5 10 3 -2 7 0
```

Output:

```text
20
```

### Required Submission

```text
1. Pattern
2. State
3. Pipeline
4. Code
5. Three Tests
```

---

# Problem 2 - Count Negative Values

Input:

```text
7
-5 3 -2 8 -1 0 10
```

Output:

```text
3
```

Required:

```text
Pattern:
State:
Initialization:
Pipeline:
Code:
Edge Cases:
```

---

# Problem 3 - Maximum and Minimum

Input:

```text
6
8 3 15 2 10 7
```

Output:

```text
Maximum: 15
Minimum: 2
```

### Requirement

Try to solve using:

```text
One Traversal
+
Two Independent States
```

---

# Problem 4 - Target Frequency

Input:

```text
8
5 2 7 2 9 2 10 2
2
```

Output:

```text
4
```

### Goal

Recognize:

```text
Traversal
+
Search Condition
+
Counter
```

---

# Problem 5 - First and Last Occurrence

Input:

```text
8
5 2 7 2 9 2 10 2
2
```

Output:

```text
First: 1
Last: 7
```

### Handle

Target Missing:

```text
First: -1
Last: -1
```

---

# Problem 6 - Largest Even Number

Input:

```text
7
3 8 5 12 7 10 1
```

Output:

```text
12
```

Must Handle:

```text
No Even Number
```

Required Pattern:

```text
Traversal
+
Condition
+
Valid Candidate
+
Maximum
```

---

# Problem 7 - Smallest Positive Number

Input:

```text
7
-5 8 3 -2 10 1 7
```

Output:

```text
1
```

Must Handle:

```text
No Positive Number
```

---

# Problem 8 - Count Maximum Occurrences

Input:

```text
8
5 12 7 12 3 12 8 2
```

Output:

```text
Maximum: 12
Count: 3
```

### Recommended Beginner Strategy

```text
Pass 1
Find Maximum
↓
Pass 2
Count Maximum
```

---

# Problem 9 - Average of Positive Values

Input:

```text
7
-5 10 20 -3 30 0 40
```

Positive Values:

```text
10 20 30 40
```

Average:

```text
25.00
```

Must Handle:

```text
No Positive Value
```

Potential Bugs:

```text
Integer Division
Division by Zero
```

---

# Problem 10 - Count Values Above Average

Input:

```text
5
10 20 30 40 50
```

Average:

```text
30
```

Values Above Average:

```text
40 50
```

Output:

```text
2
```

Required Analysis:

```text
Why is there a dependency?

What is Phase 1?

What is Phase 2?

Why is Multi Pass natural here?
```

---

# Part 11 - Final Challenge

# 🏆 Day 2 Final Problem

## Problem - Array Analysis Report

Given an array of `n` integers, determine:

```text
1. Sum of all values
2. Count of positive values
3. Count of negative values
4. Count of zero values
5. Maximum value
6. Minimum value
7. First index of maximum
8. Last index of maximum
9. Number of maximum occurrences
10. Number of values strictly between minimum and maximum
```

---

## Example Input

```text
10
5 -2 10 0 3 10 -7 8 10 0
```

---

## Expected Analysis

```text
Sum: 37

Positive Count: 6

Negative Count: 2

Zero Count: 2

Maximum: 10

Minimum: -7

First Maximum Index: 2

Last Maximum Index: 8

Maximum Count: 3

Between Min and Max Count: 5
```

---

# Step 1 - Do Not Code Yet

প্রথমে লিখবে:

```text
Required Outputs:

1.
2.
3.
...
```

---

# Step 2 - Identify States

Table বানাবে:

| Information         | State |
| ------------------- | ----- |
| Sum                 | `...` |
| Positive Count      | `...` |
| Negative Count      | `...` |
| Zero Count          | `...` |
| Maximum             | `...` |
| Minimum             | `...` |
| First Maximum Index | `...` |
| Last Maximum Index  | `...` |
| Maximum Frequency   | `...` |
| Between Count       | `...` |

---

# Step 3 - Dependency Analysis

এই Question-এর Answer লিখবে:

```text
Which outputs can be calculated immediately?

Which outputs require max or min to be known first?

Which outputs are independent?

Which outputs are dependent?
```

---

# Step 4 - Design Phases

একটি Possible Design:

```text
Phase 1
│
├── Sum
├── Positive Count
├── Negative Count
├── Zero Count
├── Maximum
└── Minimum

        ↓

Phase 2
│
├── First Maximum Index
├── Last Maximum Index
├── Maximum Count
└── Between Min and Max Count
```

এটা একমাত্র Solution না।

কিন্তু Beginner হিসেবে clear এবং safe।

---

# Step 5 - Build Pipeline

নিজে Complete করবে:

```text
Read Input
↓
Initialize States
↓
Phase 1 Traversal
↓
...
↓
...
↓
Phase 1 Complete
↓
Max and Min Known
↓
Phase 2 Traversal
↓
...
↓
...
↓
Print Report
```

---

# Step 6 - Pseudocode

নিজে লিখবে।

Format:

```text
read n
read array

initialize states

for each value:
    ...
    ...
    ...

initialize phase 2 states

for each value:
    ...
    ...
    ...

print results
```

---

# Step 7 - Code

File Suggestion:

```text
Day_2/
└── Assignment_and_Exercise/
    └── day_2_final.c
```

অথবা তোমার Repository Structure অনুযায়ী:

```text
18_Contest/
└── Practice/
    └── day_2_final.c
```

তবে Bootcamp Day Assignment হলে প্রথম Location বেশি logical।

---

# Step 8 - Required Test Cases

Final Challenge Code-এর জন্য কমপক্ষে:

```text
1. Normal Mixed Array

2. Single Element

3. All Positive

4. All Negative

5. All Zero

6. All Equal

7. Maximum Repeated

8. Maximum First

9. Maximum Last

10. Min and Max Only
```

Test করবে।

---

# Part 12 - Pattern Library Review

Chapter 10-এ তৈরি:

```text
21_Pattern_Library/
└── core_pattern.md
```

এখন Final Review করবে।

---

# Task 22 - Pattern Library Audit

Check:

```text
[ ] Traversal আছে

[ ] Accumulator আছে

[ ] Counter আছে

[ ] Maximum আছে

[ ] Minimum আছে

[ ] Linear Search আছে

[ ] First Occurrence আছে

[ ] Last Occurrence আছে

[ ] First + Last আছে

[ ] Conditional Accumulation আছে

[ ] Conditional Counting আছে

[ ] Conditional Best আছে

[ ] Best + Index আছে

[ ] Best + Frequency আছে

[ ] Dependent Multi-Pass আছে
```

---

# Task 23 - Quality Check

প্রতিটি Important Pattern-এর জন্য Check:

```text
[ ] Purpose clear?

[ ] Signal আছে?

[ ] State আছে?

[ ] Initialization আছে?

[ ] Pipeline আছে?

[ ] Skeleton reusable?

[ ] Common Bug আছে?

[ ] Edge Cases আছে?

[ ] Complexity আছে?
```

---

# Task 24 - Personal Mistake Update

Day 2 করতে গিয়ে নিজের যেসব Mistake হয়েছে, সেগুলো Add করবে।

Suggested Format:

````markdown
# 🐞 Personal Mistake Log

## Mistake 01 - Maximum Initialization

### Wrong Idea

```c
int max = 0;
```

### Why It Fails

Fails when every value is negative.

### Counterexample

```text
3
-5 -2 -8
```

### Correct Rule

Initialize from a valid candidate.

```c
int max = arr[0];
```

### Reusable Lesson

Best-value tracking needs a valid initial candidate.
````

নিজের Mistake হলে সবচেয়ে ভালো।

কারণ:

```text
Personal Mistake
        ↓
Emotional Memory
        ↓
Stronger Recall
```

---

# Part 13 - Reflection

Reflection মানে:

```text
আজকে ভালো লেগেছে
```

এতটুকু না।

Useful Reflection:

```text
What did I understand?
What can I apply?
Where did I struggle?
What mistake repeated?
What should I revise?
```

---

# Task 25 - Day 2 Reflection

এই Template Complete করবে।

````markdown
# 🧠 Day 2 Reflection

## 1. What I Learned

Today I learned:

- ...
- ...
- ...

---

## 2. Patterns I Can Recognize

I can now recognize:

- ...
- ...
- ...

---

## 3. Patterns I Can Implement Without Notes

- ...
- ...
- ...

---

## 4. Patterns I Still Need to Practice

- ...
- ...
- ...

---

## 5. My Most Common Mistake

...

---

## 6. A Bug I Understand Better Now

### Bug

...

### Why It Happens

...

### Counterexample

```text
...
```

### Correct Rule

...

---

## 7. My Strongest Topic Today

...

---

## 8. My Weakest Topic Today

...

---

## 9. Problem-Solving Workflow I Will Follow

```text
Read
↓
Understand
↓
Manual Solve
↓
Decompose
↓
Recognize Pattern
↓
Choose State
↓
Check Dependency
↓
Build Pipeline
↓
Pseudocode
↓
Code
↓
Test
↓
Debug
```

---

## 10. Day 2 Confidence Score

```text
Array Mental Model:       ?/10
Traversal:                ?/10
Accumulator:              ?/10
Counter:                  ?/10
Maximum & Minimum:        ?/10
Linear Search:            ?/10
Index Tracking:           ?/10
Pattern Combination:      ?/10
Edge Cases:               ?/10
Debugging:                ?/10
Problem Analysis:         ?/10
Pattern Recognition:      ?/10
```

---

## 11. What I Will Revise

Before Day 3, I will revise:

- ...
- ...
- ...

---

## 12. Final Reflection

...
````

---

# Part 14 - Day 2 Final Assignment Structure

তোমার Assignment File:

```text
Day_2/
└── Assignment_and_Exercise/
    └── Day_2_assignment.md
```

Recommended Structure:

```text
Day 2 Assignment
│
├── Part A - Concept Questions
│
├── Part B - Pattern Detection
│
├── Part C - State Selection
│
├── Part D - Initialization
│
├── Part E - Pipeline Building
│
├── Part F - Dry Run
│
├── Part G - Bug Hunting
│
├── Part H - Edge Case Design
│
├── Part I - Coding Problems
│
├── Part J - Final Challenge
└── Part K - Reflection
```

---

# 📂 Recommended Day 2 Repository Structure

```text
Day_2/
│
├── Assignment_and_Exercise/
│   ├── Day_2_assignment.md
│   ├── Day_2_exercise.md
│   └── day_2_final.c
│
├── day_2.md
│
└── day_2.pdf
```

যদি PDF এখন না বানাও:

```text
Day_2/
│
├── Assignment_and_Exercise/
│   ├── Day_2_assignment.md
│   ├── Day_2_exercise.md
│   └── day_2_final.c
│
└── day_2.md
```

এটাও ঠিক আছে।

---

# ⏱️ Chapter 11 Completion Strategy

সব Assignment একসঙ্গে random order-এ করবে না।

Recommended Order:

```text
Phase 1 - Recall
│
├── Concept Test
├── Pattern Recognition
├── State Selection
└── Initialization

        ↓

Phase 2 - Design
│
├── Pipeline Building
├── Dry Run
└── Edge Case Design

        ↓

Phase 3 - Debug
│
└── Bug Hunting

        ↓

Phase 4 - Implementation
│
├── Coding Problems
└── Final Challenge

        ↓

Phase 5 - Consolidation
│
├── Pattern Library Review
├── Mistake Log
└── Reflection
```

---

# 🚦Self-Evaluation System

প্রতিটি Skill-কে তিনটি Level-এ Evaluate করবে।

## 🔴 Level 1 - Need Revision

```text
Concept দেখেছি
কিন্তু নিজে Explain করতে পারি না
```

---

## 🟡 Level 2 - Understand but Slow

```text
নিজে করতে পারি
কিন্তু সময় লাগে
বা Notes দেখতে হয়
```

---

## 🟢 Level 3 - Ready to Use

```text
Problem দেখে Pattern চিনতে পারি
State select করতে পারি
Pipeline বানাতে পারি
Code লিখতে পারি
Test করতে পারি
```

Self-Evaluation Table:

| Skill               | 🔴   | 🟡   | 🟢   |
| ------------------- | --- | --- | --- |
| Traversal           |     |     |     |
| Accumulator         |     |     |     |
| Counter             |     |     |     |
| Maximum             |     |     |     |
| Minimum             |     |     |     |
| Search              |     |     |     |
| First/Last          |     |     |     |
| Conditional Best    |     |     |     |
| Pattern Combination |     |     |     |
| Dependency          |     |     |     |
| Pipeline            |     |     |     |
| Edge Cases          |     |     |     |
| Debugging           |     |     |     |

Goal:

```text
সব Green হতে হবে
```

এটা না।

Goal:

```text
নিজের Weak Area
      ↓
সঠিকভাবে Identify করা
      ↓
Targeted Revision
```

---

# 🧪 Day 2 Mini Mock Test

সব Main Assignment শেষ করার পরে এই Mini Mock Test করবে।

## Rule

```text
Time Limit: 60 Minutes

No AI
No Solution Search
Own Notes allowed only after first 40 minutes
```

---

## Problem 1 - Easy

> Count values divisible by both 2 and 3.

Target Time:

```text
5–8 minutes
```

---

## Problem 2 - Easy

> Find maximum and minimum.

Target Time:

```text
8–10 minutes
```

---

## Problem 3 - Easy-Medium

> Find first and last occurrence of target.

Target Time:

```text
10–12 minutes
```

---

## Problem 4 - Medium for Current Level

> Find the largest negative number and count its occurrences.

Target Time:

```text
12–15 minutes
```

Think:

```text
Filter
+
Best
+
Frequency
```

---

## Problem 5 - Medium for Current Level

> Count how many values are strictly between the minimum and maximum.

Target Time:

```text
15–20 minutes
```

Think:

```text
What must be known first?
```

---

# 🧠 Mini Mock Reflection

Mock শেষে লিখবে:

```text
Solved:
?/5

Solved without help:
?/5

Pattern recognized correctly:
?/5

Wrong Answers:
?

Compilation Errors:
?

Logic Errors:
?

Edge Cases missed:
?

Slowest problem:
?

Strongest pattern:
?

Weakest pattern:
?
```

তারপর সবচেয়ে গুরুত্বপূর্ণ:

```text
Why did I fail where I failed?
```

Possible Categories:

```text
Problem Understanding
Pattern Recognition
State Selection
Initialization
Condition
Loop Boundary
Dependency
Implementation
Testing
Output Format
```

---

# 📊 Day 2 Final Skill Matrix

| Topic               | Understand | Explain | Code | Debug |
| ------------------- | ---------- | ------- | ---- | ----- |
| Traversal           | ⬜          | ⬜       | ⬜    | ⬜     |
| Accumulator         | ⬜          | ⬜       | ⬜    | ⬜     |
| Counter             | ⬜          | ⬜       | ⬜    | ⬜     |
| Maximum             | ⬜          | ⬜       | ⬜    | ⬜     |
| Minimum             | ⬜          | ⬜       | ⬜    | ⬜     |
| Search              | ⬜          | ⬜       | ⬜    | ⬜     |
| First Occurrence    | ⬜          | ⬜       | ⬜    | ⬜     |
| Last Occurrence     | ⬜          | ⬜       | ⬜    | ⬜     |
| Conditional Best    | ⬜          | ⬜       | ⬜    | ⬜     |
| Multi-Pass          | ⬜          | ⬜       | ⬜    | ⬜     |
| Edge Cases          | ⬜          | ⬜       | ⬜    | ⬜     |
| Pattern Combination | ⬜          | ⬜       | ⬜    | ⬜     |

নিজেকে অতিরিক্ত Score দেবে না।

আবার অকারণে কমও দেবে না।

Evidence-based হবে:

```text
আমি Code না দেখে করতে পারি?
        ↓
Yes → Code Skill checked

আমি Bug দেখলে কারণ বলতে পারি?
        ↓
Yes → Debug Skill checked
```

---

# 📝 Day 2 Final Reflection Questions

নিজের ভাষায় Answer করবে।

### Question 1

Day 2-এর আগে Array Problem দেখলে কীভাবে চিন্তা করতে?

### Question 2

এখন Array Problem দেখলে প্রথম পাঁচটি Question কী করবে?

### Question 3

Traversal এবং Pattern-এর Relationship কী?

### Question 4

Accumulator এবং Counter-এর পার্থক্য কী?

### Question 5

State Variable Problem Solving-এ কেন গুরুত্বপূর্ণ?

### Question 6

Maximum এবং Minimum Initialization কেন গুরুত্বপূর্ণ?

### Question 7

First Occurrence এবং Last Occurrence-এর মূল Structural Difference কী?

### Question 8

Conditional Best Problem কেন Normal Maximum-এর চেয়ে tricky?

### Question 9

Dependency কীভাবে Multi-Pass Solution-এর দিকে নিয়ে যায়?

### Question 10

Sample Test Pass করলেই কেন Solution correct বলা যায় না?

### Question 11

Counterexample কীভাবে Bug বুঝতে সাহায্য করে?

### Question 12

Pattern Library কীভাবে future Problem Solving improve করবে?

### Question 13

Day 2-এর সবচেয়ে কঠিন Topic কোনটা ছিল?

### Question 14

কোন Mistake সবচেয়ে বেশি repeat হয়েছে?

### Question 15

Day 3-এ যাওয়ার আগে কোন Topic আরেকবার revise করা দরকার?

---

# 🏁 Day 2 Master Completion Checklist

## Chapter Completion

```text
[ ] Chapter 1 - Array Mental Model

[ ] Chapter 2 - Traversal Pattern

[ ] Chapter 3 - Accumulation Pattern

[ ] Chapter 4 - Counting Pattern

[ ] Chapter 5 - Maximum & Minimum Pattern

[ ] Chapter 6 - Searching Pattern

[ ] Chapter 7 - Combining Patterns

[ ] Chapter 8 - Common Bugs & Edge Cases

[ ] Chapter 9 - Problem Solving Session

[ ] Chapter 10 - Pattern Library Update

[ ] Chapter 11 - Assignment & Reflection
```

---

## Concept Skills

```text
[ ] Array Index বুঝি

[ ] Array Boundary বুঝি

[ ] Traversal নিজে লিখতে পারি

[ ] State Variable চিনতে পারি

[ ] Accumulator ব্যবহার করতে পারি

[ ] Counter ব্যবহার করতে পারি

[ ] Maximum safely বের করতে পারি

[ ] Minimum safely বের করতে পারি

[ ] Linear Search করতে পারি

[ ] First Occurrence বের করতে পারি

[ ] Last Occurrence বের করতে পারি

[ ] Frequency Count করতে পারি

[ ] Conditional Best handle করতে পারি

[ ] Best Value + Index track করতে পারি

[ ] Dependency চিনতে পারি

[ ] Multi-Pass Solution design করতে পারি
```

---

## Problem Solving Skills

```text
[ ] Problem নিজের ভাষায় বলতে পারি

[ ] Input এবং Output আলাদা করতে পারি

[ ] Manual Simulation করতে পারি

[ ] Problem Decompose করতে পারি

[ ] Pattern চিনতে পারি

[ ] State select করতে পারি

[ ] Dependency check করতে পারি

[ ] Pipeline লিখতে পারি

[ ] Pseudocode লিখতে পারি

[ ] Code লিখতে পারি

[ ] Dry Run করতে পারি

[ ] Edge Case বানাতে পারি

[ ] Counterexample বানাতে পারি

[ ] Wrong Answer debug করতে পারি
```

---

## Repository Skills

```text
[ ] Day_2 folder organized

[ ] Day_2_assignment.md created

[ ] Day_2_exercise.md created

[ ] day_2_final.c completed

[ ] core_pattern.md updated

[ ] Personal Mistake Log updated

[ ] Reflection completed

[ ] Git status checked

[ ] Changes committed

[ ] Changes pushed
```

---

# 🔄 Final Git Workflow

সব কাজ শেষ হলে Repository Root থেকে:

```bash
git status
```

Changes review করবে।

তারপর:

```bash
git add .
```

আবার:

```bash
git status
```

Commit:

```bash
git commit -m "docs: complete Day 2 array patterns and assignments"
```

Push:

```bash
git push origin main
```

Final Workflow:

```text
Complete Tasks
↓
Review Files
↓
Run C Programs
↓
Check Outputs
↓
Update Pattern Library
↓
Update Reflection
↓
git status
↓
git add .
↓
git status
↓
git commit
↓
git push
```

---

# 🎓 Day 2 Final Mental Model

Day 2-এর সবচেয়ে বড় শিক্ষা:

```text
Array Problem
      ≠
Just Write a Loop
```

Better Mental Model:

```text
Array Problem
      ↓
What must I inspect?
      ↓
Traversal
      ↓
What must I remember?
      ↓
State
      ↓
How should state change?
      ↓
Update Rule
      ↓
Does another result need to be known first?
      ↓
Dependency
      ↓
What order should operations happen?
      ↓
Pipeline
      ↓
How do I express it?
      ↓
Pseudocode
      ↓
Code
      ↓
How can it fail?
      ↓
Edge Cases + Counterexamples
      ↓
Test
      ↓
Debug
```

আর Pattern Recognition-এর Mental Model:

```text
Problem Statement
        ↓
Remove Story
        ↓
Find Core Goal
        ↓
Break Into Tasks
        ↓
Match Each Task With Pattern
        ↓
Choose States
        ↓
Combine Patterns
        ↓
Check Dependencies
        ↓
Build Solution
```

---

# 🧠 The Most Important Day 2 Question

এখন থেকে Array Problem দেখলে নিজেকে জিজ্ঞেস করবে না:

```text
কোন Code লিখব?
```

প্রথমে জিজ্ঞেস করবে:

```text
আমি কী খুঁজছি?
        ↓
কোন Elements দেখতে হবে?
        ↓
কোন Information মনে রাখতে হবে?
        ↓
কোন Pattern সেই Information update করবে?
        ↓
Future Element কি Answer পরিবর্তন করতে পারে?
        ↓
কোন Result আগে জানা দরকার?
```

এই Questions-এর Answer পরিষ্কার হলে Code অনেক সহজ হয়ে যায়।

---

# 🏆 Day 2 Completion

```text
DAY 2
│
├── Array Mental Model              ✅
├── Traversal                       ✅
├── Accumulation                    ✅
├── Counting                        ✅
├── Maximum & Minimum               ✅
├── Searching                       ✅
├── Pattern Combination             ✅
├── Bugs & Edge Cases               ✅
├── Problem Solving Workflow        ✅
├── Pattern Library                 ✅
└── Final Assignment & Reflection   ✅
```

# 🎉 Day 2 Complete

```text
Day 0
│
└── CP Mindset & Foundation
        ↓
Day 1
│
└── Problem-Solving Foundation
        ↓
Day 2
│
└── Array Patterns & State Thinking
        ↓
Next
│
└── More Problem Structures
```

Day 2-এর শেষে তোমার লক্ষ্য **সব Problem পারা** না।

লক্ষ্য হলো:

```text
Unknown Problem
        ↓
Panic না করা
        ↓
Read
        ↓
Understand
        ↓
Manual Solve
        ↓
Recognize Structure
        ↓
Choose State
        ↓
Build Pipeline
        ↓
Code
        ↓
Test
        ↓
Debug
```

এটাই Day 2-এর আসল অর্জন।