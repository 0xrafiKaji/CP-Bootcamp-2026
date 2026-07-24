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

# 🚀 CP Bootcamp 2026 - Day 4

# **Functions, Problem Decomposition, Recursion Basics & Prefix Sum Foundation**
> **Language:** C
> **Level:** Beginner → Early Competitive Programming
> **Main Focus:** Function Thinking + Problem Decomposition + Basic Recursion + Prefix Sum

---

তোমার Day 2 এবং Day 3-এর progression দেখে আমি Day 4 একটু carefully design করছি। Day 2-তে Array patterns এবং Day 3-তে String patterns হয়েছে।  

Day 4-কে শুধু:

```text
Functions
+
Recursion
```

দিয়ে শেষ করলে তোমার contest preparation-এর valuable একটা দিন পুরোপুরি কাজে লাগবে না।

আবার একদিনে:

```text
Functions
Recursion
Sorting
Prefix Sum
Binary Search
```

সব ঢুকিয়ে দিলে কোনো কিছুই properly শেখা হবে না।

তাই Day 4 হবে:

```text
Functions
        ↓
Problem Decomposition
        ↓
Reusable Logic
        ↓
Recursion Mental Model
        ↓
Base Case
        ↓
Call Stack Intuition
        ↓
Prefix Sum Introduction
        ↓
Range Query
        ↓
Mixed Problem Solving
```

---

# 📖 Day 4 Chapter Map

```text
Day 4
│
├── Chapter 1 - Function Mental Model
│
├── Chapter 2 - Parameters, Arguments & Return Values
│
├── Chapter 3 - Problem Decomposition with Functions
│
├── Chapter 4 - Arrays & Strings with Functions
│
├── Chapter 5 - Recursion Mental Model
│
├── Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── Chapter 7 - Prefix Sum Pattern
│
├── Chapter 8 - Range Query & Prefix Sum Problems
│
├── Chapter 9 - Pattern Combination Session
│
└── Chapter 10 - Assignment, Mini Contest & Reflection
```

এটা **10 Chapter**, কিন্তু Day 3-এর মতো বিশাল 11টা heavy chapter না।

সময় ভাগ হবে:

| Section                  |          Time |
| ------------------------ | ------------: |
| Function Foundation      |        1h 30m |
| Function Problem Solving |            1h |
| Recursion                |        1h 30m |
| Prefix Sum               |        1h 15m |
| Practice                 |           45m |
| Mini Contest + Review    |            1h |
| **Total**                | **≈ 7 Hours** |

---

# Chapter 1 - Function Mental Model

## 1.1 Function আসলে কী?

তুমি আগে এমন Code লিখেছ:

```c
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("%d\n", sum);

    return 0;
}
```

এখানে সব কাজ `main()`-এর ভিতরে।

ছোট Problem-এর জন্য সমস্যা নেই।

কিন্তু ধরো:

```text
Input
↓
Check Prime
↓
Find Maximum
↓
Count Even
↓
Print Result
```

সবকিছু এক জায়গায় লিখলে:

```text
main()
│
├── input
├── prime logic
├── maximum logic
├── counting logic
├── search logic
├── output
└── debugging nightmare
```

Function ব্যবহার করলে:

```text
main()
│
├── isPrime()
├── findMax()
├── countEven()
└── searchTarget()
```

এখন প্রত্যেক Function-এর **একটা নির্দিষ্ট দায়িত্ব**।

---

## 1.2 Function-এর Mental Model

Function-কে একটি Machine হিসেবে ভাবো:

```text
        Input
          ↓
    ┌───────────┐
    │ Function  │
    │  Process  │
    └───────────┘
          ↓
        Output
```

Example:

```text
5, 7
 ↓
add()
 ↓
12
```

Code:

```c
int add(int a, int b)
{
    return a + b;
}
```

Use:

```c
int result = add(5, 7);
```

---

# 1.3 Function-এর Anatomy

```c
int add(int a, int b)
{
    int sum = a + b;

    return sum;
}
```

Breakdown:

```text
int       → Return Type

add       → Function Name

a, b      → Parameters

{ ... }   → Function Body

return    → Result ফেরত পাঠানো
```

Mental Map:

```text
Return Type
     ↓
int add(int a, int b)
     ↑         ↑
    Name    Parameters
```

---

# 1.4 চার ধরনের Basic Function

এগুলো University exam এবং C foundation-দুই জায়গাতেই useful।

## Type 1 - No Parameter, No Return

```c
void greet()
{
    printf("Hello\n");
}
```

Call:

```c
greet();
```

Mental Model:

```text
No Input
↓
Do Something
↓
No Result Returned
```

---

## Type 2 - Parameter, No Return

```c
void printSquare(int n)
{
    printf("%d\n", n * n);
}
```

Call:

```c
printSquare(5);
```

Mental Model:

```text
Input
↓
Process
↓
Direct Action
```

---

## Type 3 - No Parameter, Return Value

```c
int getNumber()
{
    int n;
    scanf("%d", &n);

    return n;
}
```

Use:

```c
int x = getNumber();
```

---

## Type 4 - Parameter + Return Value

CP-তে সবচেয়ে useful:

```c
int square(int n)
{
    return n * n;
}
```

Use:

```c
int result = square(5);
```

Flow:

```text
5
↓
square(5)
↓
25
↓
result
```

---

# 1.5 Function Call কীভাবে Think করবে?

Code:

```c
int square(int n)
{
    return n * n;
}

int main()
{
    int x = 5;

    int ans = square(x);

    printf("%d", ans);
}
```

Flow:

```text
main()
↓
x = 5
↓
square(x)
↓
n receives 5
↓
n * n
↓
25 returned
↓
ans = 25
↓
print
```

Function call দেখলে mentally এই movement দেখতে হবে।

---

# 🧪 Chapter 1 Drill

Code না লিখে Answer করো।

### Problem A

```text
Input: 7
Function: cube()
Output: 343
```

Identify:

```text
Function Name:
Parameter:
Return Type:
Returned Value:
```

### Problem B

একটি Function দুইটি Number নিয়ে Maximum return করবে।

Mental Model:

```text
Two Numbers
↓
?
↓
?
```

### Problem C

একটি Function Number even হলে `1`, না হলে `0` return করবে।

Expected signature নিজে লেখো।

---

# Chapter 2 - Parameters, Arguments & Return Values

এখানে Beginner-দের terminology confusion হয়।

Function:

```c
int add(int a, int b)
{
    return a + b;
}
```

Call:

```c
int result = add(x, y);
```

এখানে:

```text
a, b
=
Parameters
```

আর:

```text
x, y
=
Arguments
```

সহজ ভাষায়:

```text
Parameter
=
Function কী Receive করবে তার Placeholder

Argument
=
Function Call-এর সময় Actual Value
```

---

## 2.1 Return মানে Print না

এই distinction খুব important।

```c
int add(int a, int b)
{
    return a + b;
}
```

এটা result **return** করছে।

আর:

```c
void add(int a, int b)
{
    printf("%d", a + b);
}
```

এটা result **print** করছে।

Difference:

```text
Return
↓
Caller Result ব্যবহার করতে পারে
```

```text
Print
↓
শুধু Screen-এ দেখানো হয়
```

Example:

```c
int result = add(5, 10);

if (result > 10)
{
    // use result
}
```

Reusable logic-এর জন্য return অনেক useful।

---

## 2.2 Boolean-Style Function in C

C-তে basic level-এ আমরা:

```text
1 → True
0 → False
```

ব্যবহার করতে পারি।

Example:

```c
int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }

    return 0;
}
```

Use:

```c
if (isEven(n))
{
    printf("Even");
}
```

Mental Model:

```text
n
↓
isEven()
↓
Question Answer
↓
1 or 0
```

এই type-এর Function CP-তে common:

```text
isPrime()
isPalindrome()
isSorted()
containsTarget()
isVowel()
```

---

## 2.3 Function Design Rule

Problem:

> Count how many even numbers exist in an array.

Possible decomposition:

```text
Array
↓
Traverse
↓
For each value
↓
isEven(value)
↓
If True
↓
count++
```

এখানে:

```text
Traversal
=
Main Logic
```

এবং:

```text
isEven()
=
Helper Function
```

Code structure:

```c
int isEven(int n)
{
    return n % 2 == 0;
}
```

তারপর:

```c
for (int i = 0; i < n; i++)
{
    if (isEven(arr[i]))
    {
        count++;
    }
}
```

এখানে নতুন Pattern না।

পুরোনো Pattern-কে function দিয়ে clean করা হয়েছে:

```text
Traversal
+
Classification Function
+
Counter
```

---

# Chapter 3 - Problem Decomposition with Functions

এটা আজকের সবচেয়ে important Function chapter।

Function শেখার লক্ষ্য শুধু:

```text
int add()
```

লেখা না।

লক্ষ্য:

> **একটা বড় Problem-কে ছোট ছোট independent কাজের মধ্যে ভাঙতে শেখা।**

এটাকে বলা যায়:

```text
Problem Decomposition
```

---

## 3.1 Example - Prime Numbers in Array

Problem:

> একটি Array থেকে কয়টি Prime Number আছে বের করো।

Beginner চিন্তা:

```text
একটা বড় Code লিখতে হবে
```

Better Thinking:

```text
Problem
↓
Need Array Traversal
↓
For Each Element
↓
Need Prime Check
↓
If Prime
↓
Count
```

Decomposition:

```text
countPrime(arr, n)
        │
        └── uses → isPrime(value)
```

Pattern Chain:

```text
Traversal
↓
Classification
↓
Counter
```

Helper:

```text
isPrime()
```

---

## 3.2 Decomposition Questions

Problem দেখলে জিজ্ঞেস করবে:

```text
1. পুরো Problem-এর Main Goal কী?

2. কোনো ছোট কাজ বারবার হচ্ছে?

3. ছোট কাজটাকে আলাদা Function করা যায়?

4. Function কী Input নেবে?

5. Function কী Return করবে?

6. Main Pattern কী?

7. Helper Function কোন Decision নেয়?
```

---

## 3.3 Example - Palindrome Strings Count

ধরো একাধিক String আছে।

কয়টি Palindrome?

Thinking:

```text
Multiple Strings
↓
Traverse Strings
↓
For Each String
↓
isPalindrome()
↓
True?
↓
count++
```

এখানে Day 3-এর Pattern:

```text
Two Pointer
+
Comparison
+
Flag
```

একটি Function-এর ভিতরে চলে যাচ্ছে।

এটাই Knowledge Reuse।

---

# 🧠 Function Pattern Map

```text
Problem
│
├── Need Calculation?
│      └── Return Result
│
├── Need Yes/No Decision?
│      └── Return 1/0
│
├── Repeated Logic?
│      └── Helper Function
│
├── Large Problem?
│      └── Decompose
│
└── Same Operation Many Times?
       └── Reusable Function
```

---

# Chapter 4 - Arrays & Strings with Functions

এখানে একটা গুরুত্বপূর্ণ C concept আছে।

---

## 4.1 Array Function-এ Pass করা

Example:

```c
int findSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}
```

Call:

```c
int result = findSum(arr, n);
```

Mental Model:

```text
Array + Size
↓
findSum()
↓
Traversal
↓
Accumulation
↓
Return Sum
```

---

## 4.2 কেন `n` আলাদা দিতে হয়?

Function:

```c
int findMax(int arr[], int n)
```

কারণ Function-কে জানতে হবে:

```text
কতগুলো Element Process করবে?
```

Mental Rule:

```text
Array Function
=
Array
+
Size
```

Beginner stage-এ এটা follow করবে।

---

## 4.3 Maximum Function

```c
int findMax(int arr[], int n)
{
    int maxValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}
```

Pattern:

```text
Traversal
↓
Comparison
↓
Update
↓
Return
```

Day 2-এর Pattern বদলায়নি।

শুধু reusable হয়েছে।

---

## 4.4 String Function

String Function-এ pass করা যায়:

```c
int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' ||
            ch == 'u')
        {
            count++;
        }
    }

    return count;
}
```

Pattern:

```text
String Traversal
↓
Classification
↓
Counter
↓
Return
```

Day 3 knowledge reuse।

---

# 🧪 Chapter 4 Practice

নিজে লিখবে:

```text
1. findMin(arr, n)

2. countPositive(arr, n)

3. searchTarget(arr, n, target)

4. countDigits(str)

5. isPalindrome(str)
```

প্রতিটির আগে লিখবে:

```text
Input:
Output:
Primary Pattern:
State:
Return Value:
```

---

# Chapter 5 - Recursion Mental Model

এখন আজকের নতুন এবং একটু abstract topic।

## Recursion কী?

যখন একটি Function নিজেকেই call করে:

```text
Function
↓
Calls Itself
↓
Smaller Problem
↓
Smaller Problem
↓
...
↓
Stop
```

Example:

```c
void countDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);

    countDown(n - 1);
}
```

Call:

```c
countDown(3);
```

Flow:

```text
countDown(3)
↓
print 3
↓
countDown(2)
↓
print 2
↓
countDown(1)
↓
print 1
↓
countDown(0)
↓
stop
```

Output:

```text
3
2
1
```

---

## 5.1 Recursion-এর দুইটি বাধ্যতামূলক অংশ

```text
Recursion
│
├── Base Case
│
└── Recursive Case
```

### Base Case

কখন stop করবে?

```c
if (n == 0)
{
    return;
}
```

### Recursive Case

Problem-কে ছোট করে আবার call:

```c
countDown(n - 1);
```

Mental Model:

```text
Current Problem
↓
Solve One Small Part
↓
Send Smaller Remaining Problem
↓
Same Function
```

---

## 5.2 Base Case না থাকলে?

```c
void test(int n)
{
    printf("%d\n", n);

    test(n - 1);
}
```

Flow:

```text
test(5)
↓
test(4)
↓
test(3)
↓
test(2)
↓
...
↓
Never Stops
↓
Stack Overflow
```

Rule:

> Recursive Function লেখার আগে Base Case লিখবে।

---

# Chapter 6 - Recursion Call Flow

এখানে শুধু Code দেখলে হবে না।

Call flow বুঝতে হবে।

---

## 6.1 Print Before Recursive Call

```c
void fun(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    fun(n - 1);
}
```

Call:

```c
fun(3);
```

Flow:

```text
fun(3)
│
├── print 3
└── fun(2)
      │
      ├── print 2
      └── fun(1)
            │
            ├── print 1
            └── fun(0)
```

Output:

```text
3 2 1
```

---

## 6.2 Print After Recursive Call

```c
void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);

    printf("%d ", n);
}
```

Flow:

```text
fun(3)
↓
fun(2)
↓
fun(1)
↓
fun(0)
↓
return
↓
print 1
↓
return
↓
print 2
↓
return
↓
print 3
```

Output:

```text
1 2 3
```

এই difference খুব important:

```text
Work Before Recursive Call
↓
Forward / Descending Phase
```

```text
Work After Recursive Call
↓
Return / Unwinding Phase
```

---

## 6.3 Recursive Sum

Problem:

```text
1 + 2 + 3 + ... + n
```

Mathematical thinking:

```text
sum(n)
=
n + sum(n - 1)
```

Example:

```text
sum(4)
=
4 + sum(3)

=
4 + 3 + sum(2)

=
4 + 3 + 2 + sum(1)
```

Base:

```text
sum(0) = 0
```

Code:

```c
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}
```

---

## 6.4 Factorial

Definition:

```text
n!
=
n × (n - 1)!
```

Base:

```text
0! = 1
```

Code:

```c
long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

Mental flow:

```text
factorial(4)
↓
4 × factorial(3)
↓
4 × 3 × factorial(2)
↓
4 × 3 × 2 × factorial(1)
↓
4 × 3 × 2 × 1 × factorial(0)
↓
4 × 3 × 2 × 1 × 1
↓
24
```

---

# ⚠️ Important Bootcamp Decision

আজ আমরা Recursion-এর শুধু Foundation করছি।

আজ **করছি না**:

```text
Recursive Backtracking
Subsets
Permutations
DFS
Recursive DP
Tower of Hanoi Deep Analysis
```

কারণ:

```text
One-Day Goal
+
Contest Preparation
+
Current Level
```

অনুযায়ী এখন তোমার দরকার:

```text
Understand Recursion
↓
Trace Calls
↓
Write Base Case
↓
Reduce Problem
```

এটাই যথেষ্ট।

---

# 🧪 Recursion Drill

Code করার আগে Call Tree/Dry Run করবে:

```text
1. Print n to 1

2. Print 1 to n

3. Sum 1 to n

4. Factorial

5. Count digits recursively
```

শেষেরটা নিজে চিন্তা করবে:

```text
1234
↓
123
↓
12
↓
1
↓
0
```

কোন operation number ছোট করছে?

```text
n / 10
```

---

# Chapter 7 - Prefix Sum Pattern

এখন Day 4-এর সবচেয়ে contest-useful নতুন Pattern।

Array:

```text
2 4 1 5 3
```

Question:

> Index 1 থেকে 3 পর্যন্ত Sum কত?

Normal approach:

```text
4 + 1 + 5 = 10
```

একটা Query হলে সমস্যা নেই।

কিন্তু যদি 100,000 Query থাকে?

প্রতিবার Range traverse করলে slow হতে পারে।

এখানে Prefix Sum।

---

## 7.1 Prefix মানে কী?

Array:

```text
Index:    0   1   2   3   4

Array:    2   4   1   5   3
```

Prefix:

```text
Prefix:   2   6   7  12  15
```

কারণ:

```text
prefix[0] = 2

prefix[1] = 2 + 4 = 6

prefix[2] = 2 + 4 + 1 = 7

prefix[3] = 2 + 4 + 1 + 5 = 12

prefix[4] = 2 + 4 + 1 + 5 + 3 = 15
```

Mental Model:

```text
prefix[i]
=
Beginning থেকে i পর্যন্ত Sum
```

---

## 7.2 Building Prefix Sum

```c
prefix[0] = arr[0];

for (int i = 1; i < n; i++)
{
    prefix[i] = prefix[i - 1] + arr[i];
}
```

Pattern:

```text
Previous Result
+
Current Value
↓
Current Prefix
```

এখানে একটা নতুন mental term:

```text
Preprocessing
```

Meaning:

> Query আসার আগে Data-কে এমনভাবে prepare করা যাতে পরে Answer দ্রুত পাওয়া যায়।

---

## 7.3 Range Sum

ধরো চাই:

```text
L = 1
R = 3
```

Array:

```text
2 4 1 5 3
```

Expected:

```text
4 + 1 + 5 = 10
```

আমাদের:

```text
prefix[3] = 12
```

কিন্তু এর মধ্যে index 0-ও আছে।

তাই:

```text
prefix[3] - prefix[0]
```

Result:

```text
12 - 2 = 10
```

General Formula:

[
\text{RangeSum}(L,R)
====================

## \text{prefix}[R]

\text{prefix}[L-1]
]

কিন্তু `L = 0` হলে?

তখন:

```text
L - 1 = -1
```

Invalid index।

তাই:

```c
if (L == 0)
{
    answer = prefix[R];
}
else
{
    answer = prefix[R] - prefix[L - 1];
}
```

---

# 7.4 Cleaner Prefix Style

CP-তে অনেক সময় size `n + 1` prefix array ব্যবহার করা হয়।

```c
prefix[0] = 0;

for (int i = 0; i < n; i++)
{
    prefix[i + 1] = prefix[i] + arr[i];
}
```

Array:

```text
arr:
2 4 1 5 3
```

Prefix:

```text
0 2 6 7 12 15
```

তখন range formula cleaner:

[
\text{RangeSum}(L,R)
====================

## \text{prefix}[R+1]

\text{prefix}[L]
]

Example:

```text
L = 1
R = 3

prefix[4] - prefix[1]

12 - 2

= 10
```

আমার recommendation:

> Bootcamp-এর জন্য `n + 1` Prefix Style শেখো।

কারণ boundary handling cleaner।

---

# Chapter 8 - Range Query & Prefix Sum Problems

## 8.1 Direct Range Sum

Problem:

```text
Array দেওয়া আছে।
Q টি query দেওয়া হবে।
প্রতিটি query:
L R
Range sum print করো।
```

Thinking:

```text
Many Range Sum Queries
↓
Repeated Traversal would repeat work
↓
Need Preprocessing
↓
Prefix Sum
↓
O(1) Query
```

---

## 8.2 Complexity

Without Prefix:

```text
Each Query
→ O(n) worst case

Q Queries
→ O(Q × n)
```

With Prefix:

```text
Build Prefix
→ O(n)

Each Query
→ O(1)

Q Queries
→ O(Q)

Total
→ O(n + Q)
```

এখানে প্রথমবার Complexity optimization-এর practical benefit দেখতে পাচ্ছ।

---

## 8.3 Count Pattern + Prefix Sum

Prefix শুধু Sum-এর জন্য না।

Problem:

> Range `L` থেকে `R`-এর মধ্যে কয়টি Even Number আছে?

Transform array mentally:

```text
Original:
2 7 4 9 6

Even Marker:
1 0 1 0 1
```

এখন Prefix:

```text
0 1 1 2 2 3
```

Query:

```text
How many even values in range?
```

এখন Range Sum formula।

Pattern Chain:

```text
Classification
↓
Binary Marker
↓
Prefix Sum
↓
Range Query
```

এটাই Pattern Combination।

---

# Chapter 9 - Pattern Combination Session

এখন Day 2 + Day 3 + Day 4 combine করব।

---

## Problem Type 1 - Count Prime Numbers in Array

```text
Array
↓
Traversal
↓
isPrime()
↓
Counter
```

Patterns:

```text
Traversal
+
Classification Function
+
Counter
```

---

## Problem Type 2 - Count Palindrome Strings

```text
Multiple Strings
↓
Traversal
↓
isPalindrome()
↓
Counter
```

Patterns:

```text
Outer Traversal
+
Two Pointer Helper
+
Flag
+
Counter
```

---

## Problem Type 3 - Multiple Range Sum Queries

```text
Array
↓
Preprocessing
↓
Prefix Sum
↓
Range Query
```

---

## Problem Type 4 - Number of Even Elements in Multiple Ranges

```text
Array
↓
Classification
↓
0/1 Transformation
↓
Prefix Sum
↓
Range Query
```

---

## Problem Type 5 - Recursive Digit Sum

Example:

```text
1234
```

Thinking:

```text
Last Digit
=
n % 10
```

Remaining Number:

```text
n / 10
```

Relation:

```text
digitSum(n)
=
n % 10
+
digitSum(n / 10)
```

Pattern:

```text
Extract One Part
↓
Reduce Problem
↓
Recursive Call
↓
Combine Result
```

---

# 🧠 Day 4 Master Pattern Map

```text
                    PROBLEM
                       │
                       ▼
             Can I break it down?
                       │
                 ┌─────┴─────┐
                 │           │
                Yes          No
                 │           │
                 ▼           ▼
             Function    Core Pattern
                 │
        ┌────────┼────────┐
        │        │        │
        ▼        ▼        ▼
   Calculation  Decision  Repeated Logic
        │        │        │
        ▼        ▼        ▼
     Return     1 / 0    Helper Function


               RECURSIVE PROBLEM
                       │
                       ▼
                 Base Case?
                       │
                       ▼
               Reduce Problem Size
                       │
                       ▼
                Recursive Call
                       │
                       ▼
                 Combine Result


               RANGE QUERY PROBLEM
                       │
                       ▼
                Many Queries?
                       │
                       ▼
                  Preprocess
                       │
                       ▼
                  Prefix Sum
                       │
                       ▼
                   O(1) Query
```

---

# Chapter 10 - Day 4 Assignment, Mini Contest & Reflection

## 📝 Task 1 - Function Foundation

নিজে লিখবে:

```text
1. isEven(n)
2. maximum(a, b)
3. minimum(a, b)
4. absoluteValue(n)
5. isVowel(ch)
```

Rule:

প্রতিটির আগে comment:

```c
/*
Input:
Output:
Function Type:
Return Value:
*/
```

---

## 📝 Task 2 - Array Functions

নিজে implement করবে:

```text
1. arraySum(arr, n)
2. findMax(arr, n)
3. findMin(arr, n)
4. countEven(arr, n)
5. searchTarget(arr, n, target)
```

প্রতিটির Pattern Chain লিখবে।

---

## 📝 Task 3 - String Functions

Day 3 revision হিসেবে:

```text
1. countVowels(str)
2. countDigits(str)
3. findFirst(str, target)
4. isPalindrome(str)
```

এগুলো function হিসেবে লিখবে।

---

## 📝 Task 4 - Recursion Dry Run

Code run করার আগে হাতে Dry Run:

```text
fun(4)
```

যেখানে:

```c
void fun(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    fun(n - 1);
}
```

তারপর এই version:

```c
void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);

    printf("%d ", n);
}
```

দুটোর output আগে predict করবে।

তারপর run করবে।

---

## 📝 Task 5 - Basic Recursion

নিজে লিখবে:

```text
1. Print n to 1
2. Print 1 to n
3. Sum 1 to n
4. Factorial
5. Count Digits
```

আজ Fibonacci recursion mandatory না।

কারণ beginner-রা recursion শিখেই Fibonacci নিয়ে unnecessary confusion-এ পড়ে।

আগে:

```text
Base Case
+
Problem Reduction
+
Call Flow
```

solid করো।

---

## 📝 Task 6 - Prefix Sum Build

Input:

```text
5

2 4 1 5 3
```

নিজে Prefix বানাবে:

```text
0 2 6 7 12 15
```

তারপর Code করবে।

---

## 📝 Task 7 - Range Queries

Input:

```text
5
2 4 1 5 3

3
1 3
0 4
2 2
```

Expected:

```text
10
15
1
```

`n + 1` prefix style ব্যবহার করবে।

---

# 🏆 Day 4 Mini Contest

## Duration

```text
75 Minutes
```

## Problems

```text
A - Function Based Maximum

B - Count Prime Numbers in Array

C - Palindrome Checker Function

D - Recursive Digit Sum

E - Multiple Range Sum Queries

F - Count Even Numbers in Multiple Ranges
```

Target:

```text
Minimum Goal:
3 / 6

Good:
4 / 6

Excellent:
5 / 6

Perfect:
6 / 6
```

তোমার জন্য realistic target:

```text
4 Problems
```

৪টা clean solve করতে পারলে Day 4 successful।

---

# 📓 Day 4 Reflection Template

````markdown
# 🧠 Day 4 Reflection

## Main Topics

- Functions
- Problem Decomposition
- Recursion Basics
- Prefix Sum
- Range Query

---

## 1. What I Learned

1.
2.
3.
4.
5.

---

## 2. My Function Mental Model

```text
Input
↓
...
↓
...
```

---

## 3. Parameter vs Argument

### Parameter

...

### Argument

...

---

## 4. Return vs Print

### Return

...

### Print

...

---

## 5. Problem Decomposition Means

...

---

## 6. My Recursion Mental Model

```text
Problem
↓
...
↓
...
↓
Base Case
```

---

## 7. Base Case Means

...

---

## 8. Recursive Case Means

...

---

## 9. My Biggest Recursion Confusion

...

---

## 10. Prefix Sum Mental Model

```text
Array
↓
...
↓
...
↓
Fast Query
```

---

## 11. Why Prefix Sum Helps

...

---

## 12. Formula I Learned

```text
Range Sum [L, R]
=
...
```

---

## 13. Patterns I Combined Today

1.
2.
3.

---

## 14. Mini Contest Result

```text
Total:
Attempted:
Solved:
Wrong Attempts:
```

---

## 15. Biggest Mistake

...

---

## 16. What I Need to Revise

...

---

## Confidence

```text
Functions:               ?/10
Parameters:              ?/10
Return Values:           ?/10
Problem Decomposition:   ?/10
Array Functions:         ?/10
String Functions:        ?/10
Recursion Concept:       ?/10
Base Case:               ?/10
Call Flow:               ?/10
Prefix Sum:              ?/10
Range Query:             ?/10
Pattern Recognition:     ?/10
```
````

---

# ⏱️ Exact One-Day Schedule

তুমি যেহেতু বলেছ ৬–৭ ঘণ্টা পড়তে সমস্যা নেই, আমি এই schedule recommend করছি:

| Session   | Topic                   |   Time |
| --------- | ----------------------- | -----: |
| Session 1 | Chapter 1–2             | 60 min |
| Break     | Rest                    | 10 min |
| Session 2 | Chapter 3–4 + Practice  | 75 min |
| Break     | Rest                    | 15 min |
| Session 3 | Chapter 5–6 Recursion   | 90 min |
| Break     | Food/Rest               | 30 min |
| Session 4 | Chapter 7–8 Prefix Sum  | 75 min |
| Break     | Rest                    | 10 min |
| Session 5 | Chapter 9 + Assignments | 60 min |
| Session 6 | Mini Contest            | 75 min |
| Final     | Review + Reflection     | 30 min |

Effective Study:

```text
≈ 7 Hours
```

Break সহ পুরো Day:

```text
≈ 8 Hours
```

---

# ✅ Day 4 Completion Checklist

```text
[ ] Function-এর Mental Model বুঝি

[ ] Function Anatomy বুঝি

[ ] Parameter এবং Argument-এর difference বুঝি

[ ] Return এবং Print-এর difference বুঝি

[ ] 1/0 Decision Function লিখতে পারি

[ ] Problem Decompose করতে পারি

[ ] Array Function-এ পাঠাতে পারি

[ ] String Function-এ পাঠাতে পারি

[ ] isEven() নিজে লিখতে পারি

[ ] isPrime() নিজে লিখতে পারি

[ ] isPalindrome() Function হিসেবে লিখতে পারি

[ ] Recursion কী বুঝি

[ ] Base Case বুঝি

[ ] Recursive Case বুঝি

[ ] Call Flow Dry Run করতে পারি

[ ] Print n to 1 recursion দিয়ে পারি

[ ] Print 1 to n recursion দিয়ে পারি

[ ] Recursive Sum বুঝি

[ ] Factorial recursion বুঝি

[ ] Prefix Sum কী বুঝি

[ ] Prefix Array নিজে বানাতে পারি

[ ] n + 1 Prefix Style বুঝি

[ ] Range Sum Formula বুঝি

[ ] Multiple Query কেন Prefix চায় বুঝি

[ ] Even Count Range Query চিন্তা করতে পারি

[ ] Assignment শেষ করেছি

[ ] Mini Contest দিয়েছি

[ ] Wrong Problems review করেছি

[ ] Reflection লিখেছি
```

---

# 🏁 Day 4 Final Position

তোমার Bootcamp progression এখন হবে:

```text
Day 0
Setup & Environment
        ↓
Day 1
Problem-Solving Language
        ↓
Day 2
Array Core Patterns
        ↓
Day 3
String Core Patterns
        ↓
Day 4
Functions
+
Problem Decomposition
+
Recursion Foundation
+
Prefix Sum
        ↓
Day 5
Sorting Fundamentals
+
Frequency-Based Problems
+
Pair Thinking
```

একটা বিষয় আমি Day 4-এ intentionally করেছি: **Recursion-কে অতিরিক্ত বড় করিনি।** তোমার ১৬ দিনের CP preparation-এর লক্ষ্য অনুযায়ী basic recursion বোঝা দরকার, কিন্তু এই মুহূর্তে recursion-এর deep rabbit hole-এ ১–২ দিন নষ্ট করা ঠিক হবে না। Prefix Sum এখন শেখা contest-এর জন্য বেশি practical value দেবে।

এই Day 4 versionটা আগের Day 2/3-এর মতো শুধু compressed summary না; আবার আগের বিশাল book-style chapters-এর মতো একদিনে অসম্ভবও না। **৬–৭ ঘণ্টার focused study-তে theory + coding + mini contestসহ শেষ করার মতো করেই scope রাখা হয়েছে।**


---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 2 - Parameters, Arguments, Return Values & Function Design

> **Day 4 Theme:** Functions → Problem Decomposition → Recursion Basics → Prefix Sum
> **Chapter Goal:** Function-এ data কীভাবে যায়, result কীভাবে ফিরে আসে, এবং CP problem-এ function কীভাবে design করতে হয়-এগুলো পরিষ্কারভাবে শেখা।

---

# 🎯 Chapter Mission

Chapter 1-এ তুমি Function-এর basic mental model দেখেছ:

```text
Input
  ↓
Function
  ↓
Process
  ↓
Output
```

এখন আমরা বুঝব:

```text
Function কী Receive করে?
        ↓
Parameter

Function Call-এর সময় কী পাঠাই?
        ↓
Argument

Function কী Result ফেরত দেয়?
        ↓
Return Value
```

এই Chapter শেষে তুমি বুঝতে পারবে:

```text
Problem
↓
Function দরকার?
↓
কী Input নেবে?
↓
কী Return করবে?
↓
Main Function Result কীভাবে ব্যবহার করবে?
```

---

# 1. Parameter এবং Argument

শুরু করি একটি simple function দিয়ে।

```c
int add(int a, int b)
{
    return a + b;
}
```

Call:

```c
int result = add(10, 20);
```

এখানে:

```text
int add(int a, int b)
            ↑      ↑
         Parameters
```

আর:

```text
add(10, 20)
    ↑   ↑
 Arguments
```

---

## সহজ Definition

### Parameter

Function definition-এর মধ্যে যে variable দিয়ে incoming data receive করা হয়।

```c
int square(int n)
```

এখানে:

```text
n = Parameter
```

---

### Argument

Function call করার সময় যে actual value পাঠানো হয়।

```c
square(5);
```

এখানে:

```text
5 = Argument
```

---

## Mental Model

```text
Argument
   5
   ↓
square(5)
   ↓
Parameter n receives 5
   ↓
n * n
   ↓
25
```

---

# 2. Parameter vs Argument - আরেকটি Example

```c
int maximum(int x, int y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}
```

Main:

```c
int main()
{
    int a = 10;
    int b = 25;

    int ans = maximum(a, b);

    printf("%d\n", ans);

    return 0;
}
```

এখানে:

```text
Function Definition:

maximum(int x, int y)
            ↑      ↑
         Parameters
```

Function Call:

```text
maximum(a, b)
         ↑  ↑
      Arguments
```

Flow:

```text
a = 10
b = 25
   ↓
maximum(a, b)
   ↓
x = 10
y = 25
   ↓
Compare
   ↓
25
   ↓
return
   ↓
ans = 25
```

---

# 3. Return Value কী?

এই function দেখো:

```c
int square(int n)
{
    return n * n;
}
```

Call:

```c
int ans = square(5);
```

Function-এর ভিতরে:

```text
n * n
=
5 * 5
=
25
```

তারপর:

```c
return 25;
```

মানে:

```text
square(5)
↓
25
```

তাই:

```c
int ans = square(5);
```

conceptually হয়ে যায়:

```c
int ans = 25;
```

---

# 4. Return এবং Print এক জিনিস না

এটা খুব গুরুত্বপূর্ণ।

## Version A - Print

```c
void add(int a, int b)
{
    printf("%d\n", a + b);
}
```

এখানে function:

```text
Calculate
↓
Print
↓
শেষ
```

Result caller-এর কাছে ফেরত যাচ্ছে না।

---

## Version B - Return

```c
int add(int a, int b)
{
    return a + b;
}
```

এখন:

```c
int result = add(10, 20);
```

তারপর result reuse করা যায়:

```c
printf("%d\n", result);

if (result > 20)
{
    printf("Large Sum\n");
}
```

Mental Difference:

```text
PRINT
│
└── Screen-এ Output দেখায়
```

```text
RETURN
│
└── Result Caller-এর কাছে পাঠায়
```

---

# 5. CP-তে Return কেন গুরুত্বপূর্ণ?

ধরো Problem:

> একটি Array-এর মধ্যে কয়টি Prime Number আছে?

আমাদের একটি helper function থাকতে পারে:

```c
int isPrime(int n)
{
    // prime checking logic
}
```

এই function-এর কাজ:

```text
Number
↓
Prime Check
↓
Yes / No
```

তাই return হতে পারে:

```text
Prime
→ 1

Not Prime
→ 0
```

তারপর main logic:

```c
if (isPrime(arr[i]))
{
    count++;
}
```

Flow:

```text
arr[i]
↓
isPrime()
↓
1 or 0
↓
if condition
↓
count update
```

এই ধরনের function CP-তে খুব useful।

---

# 6. Boolean-Style Function in C

C-তে basic CP code-এ আমরা প্রায়ই ব্যবহার করি:

```text
1 = True
0 = False
```

Example:

```c
int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }

    return 0;
}
```

Main:

```c
int n;

scanf("%d", &n);

if (isEven(n))
{
    printf("Even\n");
}
else
{
    printf("Odd\n");
}
```

---

## Dry Run

Input:

```text
8
```

Flow:

```text
n = 8
↓
isEven(8)
↓
8 % 2 == 0
↓
True
↓
return 1
↓
if (1)
↓
Even
```

Input:

```text
7
```

Flow:

```text
n = 7
↓
isEven(7)
↓
7 % 2 == 0
↓
False
↓
return 0
↓
if (0)
↓
Odd
```

---

# 7. Decision Function Pattern

এখন নতুন একটি reusable mental pattern মনে রাখো:

```text
Question About Value
        ↓
Decision Function
        ↓
    1 or 0
```

Examples:

```text
Is number even?
↓
isEven()
```

```text
Is number prime?
↓
isPrime()
```

```text
Is character vowel?
↓
isVowel()
```

```text
Is string palindrome?
↓
isPalindrome()
```

```text
Is array sorted?
↓
isSorted()
```

এগুলোকে mentalভাবে ভাববে:

```text
isSomething()
↓
Answer a Question
↓
Yes / No
```

---

# 8. Function Naming

CP-তে function name এমন হওয়া ভালো যাতে দেখেই কাজ বোঝা যায়।

Good:

```c
isPrime()
```

```c
findMax()
```

```c
countEven()
```

```c
searchTarget()
```

```c
calculateSum()
```

Bad:

```c
fun1()
```

```c
abc()
```

```c
doSomething()
```

Contest code ছোট হতে পারে, কিন্তু নিজের learning phase-এ clear naming ব্যবহার করবে।

---

# 9. Function কী Return করবে?

Function design করার সময় প্রথমে প্রশ্ন:

> এই function-এর কাজ শেষে আমার কী দরকার?

---

## Case 1 - একটি Calculated Value দরকার

Problem:

> দুইটি Number-এর Maximum বের করো।

Function:

```c
int maximum(int a, int b)
```

Return:

```text
Maximum Value
```

---

## Case 2 - Yes/No Answer দরকার

Problem:

> Number Prime কি না?

Function:

```c
int isPrime(int n)
```

Return:

```text
1 or 0
```

---

## Case 3 - কোনো Position দরকার

Problem:

> Target-এর index বের করো।

Function:

```c
int searchTarget(int arr[], int n, int target)
```

Return:

```text
Found
→ Index

Not Found
→ -1
```

এখানে Day 2-এর Sentinel Value concept ফিরে এসেছে।

---

## Case 4 - শুধু Action দরকার

Example:

```c
void printArray(int arr[], int n)
```

এর কাজ:

```text
Receive Array
↓
Traverse
↓
Print
```

কোনো calculated result return করার দরকার নেই।

তাই:

```text
void
```

---

# 10. Function Design Framework

এখন থেকে কোনো Function লেখার আগে এই ৫টি Question করবে:

```text
1. Function-এর Goal কী?

2. কী Input দরকার?

3. Input-এর Type কী?

4. কী Result দরকার?

5. Return Type কী হবে?
```

---

## Example - Count Vowels

Problem:

> একটি String-এ কয়টি vowel আছে?

### Step 1 - Goal

```text
Count Vowels
```

### Step 2 - Input

```text
String
```

### Step 3 - Result

```text
Count
```

### Step 4 - Return Type

```text
int
```

### Function Signature

```c
int countVowels(char str[])
```

Mental Model:

```text
String
↓
countVowels()
↓
Traversal
↓
Classification
↓
Counter
↓
Return Count
```

---

# 11. Function + Existing Pattern

Function নিজে সবসময় নতুন Algorithm না।

ধরো:

```c
int countEven(int arr[], int n)
```

এর ভিতরের Pattern:

```text
Traversal
+
Classification
+
Counter
```

অর্থাৎ:

```text
Function
≠
Pattern
```

বরং:

```text
Function
=
একটি Logic বা Pattern-কে Organized Unit হিসেবে রাখা
```

Example:

```text
countEven()
│
├── Traversal
├── Condition
└── Counter
```

আর:

```text
findMax()
│
├── Traversal
├── Comparison
└── Update
```

আর:

```text
searchTarget()
│
├── Traversal
├── Comparison
├── Index
└── Early Exit
```

তুমি Day 2 এবং Day 3-তে যা শিখেছ, এখন সেগুলো Function-এর ভিতরে reuse করতে শিখছ।

---

# 12. Common Mistake - Return Type Mismatch

Wrong:

```c
void square(int n)
{
    return n * n;
}
```

Problem:

```text
Function বলছে:
আমি কিছু Return করব না

কিন্তু ভিতরে:
Value Return করছে
```

Correct:

```c
int square(int n)
{
    return n * n;
}
```

---

# 13. Common Mistake - Missing Return

Wrong:

```c
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
}
```

যদি:

```text
a <= b
```

হয়?

তখন কোনো value return হচ্ছে না।

Correct:

```c
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
```

Mental Rule:

```text
Non-void Function
↓
Every Possible Path
↓
Must Produce Correct Return Value
```

---

# 14. Common Mistake - Print করে Return আশা করা

ধরো:

```c
void square(int n)
{
    printf("%d", n * n);
}
```

তারপর:

```c
int ans = square(5);
```

এটা logical design error।

কারণ:

```text
square()
↓
Print করছে

কিন্তু
↓
Value Return করছে না
```

যদি result variable-এ দরকার হয়:

```c
int square(int n)
{
    return n * n;
}
```

---

# 15. Common Mistake - Wrong Argument Order

Function:

```c
int power(int base, int exponent)
```

Call:

```c
power(2, 3);
```

মানে:

```text
2³
```

কিন্তু:

```c
power(3, 2);
```

মানে:

```text
3²
```

তাই argument-এর order important।

Mental Rule:

```text
Function Definition Order
=
Function Call Value Order
```

---

# 16. Mini Problem - Maximum of Three Numbers

আমরা একটি helper function ব্যবহার করতে পারি:

```c
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
```

তিনটি Number:

```text
a, b, c
```

Thinking:

```text
Maximum of a and b
↓
temporary result
↓
Compare with c
↓
Final maximum
```

Code:

```c
int result = maximum(maximum(a, b), c);
```

এটা প্রথমে একটু strange লাগতে পারে।

ভেঙে দেখি:

```text
maximum(5, 10)
↓
10
```

তারপর:

```text
maximum(10, 7)
↓
10
```

অর্থাৎ:

```text
maximum(maximum(5, 10), 7)
```

শেষ result:

```text
10
```

---

# 17. Function Composition-এর Basic Idea

একটি Function-এর result অন্য Function-এর input হতে পারে।

```text
Function A
↓
Result
↓
Function B
↓
Final Result
```

Example:

```c
int ans = square(maximum(a, b));
```

ধরো:

```text
a = 3
b = 5
```

Flow:

```text
maximum(3, 5)
↓
5
↓
square(5)
↓
25
↓
ans = 25
```

এখনই complicated composition করার দরকার নেই।

শুধু concept বুঝবে।

---

# 🧪 Practice Session

এখন Notes না দেখে নিচের Functionগুলো লিখবে।

---

## Task 1 - `isPositive()`

Requirement:

```text
Input:
Integer n

Return:
1 if positive
0 otherwise
```

Expected signature:

```c
int isPositive(int n)
```

---

## Task 2 - `minimum()`

Requirement:

```text
Input:
Two integers

Return:
Smaller value
```

Expected signature:

```c
int minimum(int a, int b)
```

---

## Task 3 - `isVowel()`

Requirement:

```text
Input:
Character

Return:
1 if vowel
0 otherwise
```

Expected signature:

```c
int isVowel(char ch)
```

Lowercase দিয়েই শুরু করো।

Bonus হিসেবে uppercase support add করতে পারো।

---

## Task 4 - `absoluteValue()`

Examples:

```text
absoluteValue(5)
→ 5
```

```text
absoluteValue(-7)
→ 7
```

Expected signature:

```c
int absoluteValue(int n)
```

---

## Task 5 - `lastDigit()`

Example:

```text
Input:
1234

Return:
4
```

Pattern:

```text
Number
↓
Modulo
↓
Last Digit
```

Expected signature:

```c
int lastDigit(int n)
```

---

# 🧠 Pattern Recognition Drill

Code লিখবে না।

শুধু Function Design করবে।

---

## Problem 1

> একটি Number Prime কি না check করতে হবে।

Fill:

```text
Function Name:

Input:

Return:

Return Type:

Function Category:
```

---

## Problem 2

> একটি Array-এর Maximum return করতে হবে।

Fill:

```text
Function Name:

Input:

Return:

Primary Pattern:

State:
```

---

## Problem 3

> একটি String Palindrome কি না check করতে হবে।

Fill:

```text
Function Name:

Input:

Return:

Primary Pattern:

State:
```

---

## Problem 4

> Array-তে target-এর first index return করতে হবে।

Fill:

```text
Function Name:

Input:

Return if Found:

Return if Not Found:

Primary Pattern:

State:
```

---

# 📝 Chapter 2 Assignment

এই Chapter-এর assignment intentionally ছোট রাখা হলো, কারণ Day 4-এর পরের Chapterগুলোতেও coding থাকবে।

## Assignment A - Implement

নিজে লিখবে:

```text
1. isEven()
2. maximum()
3. minimum()
4. isPositive()
5. isVowel()
6. absoluteValue()
```

---

## Assignment B - Explain in Your Own Words

নিজের ভাষায় Answer করবে:

```text
1. Parameter কী?

2. Argument কী?

3. Return কী?

4. Return এবং Print-এর difference কী?

5. void কখন ব্যবহার করা হয়?

6. Decision Function কী?

7. isPrime() কেন একটি Decision Function?

8. Non-void Function-এ missing return problem কেন?

9. Function এবং Pattern কি একই জিনিস?

10. Function লেখার আগে কোন ৫টি প্রশ্ন করতে হবে?
```

---

## Assignment C - Predict Before Running

Code:

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x = add(2, 3);
    int y = multiply(x, 4);

    printf("%d\n", y);

    return 0;
}
```

Run করার আগে লিখবে:

```text
add(2, 3)
↓
?

x
↓
?

multiply(x, 4)
↓
?

y
↓
?

Final Output
↓
?
```

তারপর compile করে verify করবে।

---

# 📚 Chapter 2 Glossary Update

তোমার `CP_Dictionary.md`-এ add করবে:

```text
Parameter
Argument
Return Value
Return Type
void
Helper Function
Decision Function
Function Call
Caller
Reusable Logic
```

খুব বড় explanation দরকার নেই।

প্রতিটির জন্য:

```text
Simple Meaning
+
Small Example
```

যথেষ্ট।

---

# 🏁 Chapter 2 Final Mental Model

```text
Problem
↓
Need Separate Logic?
↓
Design Function
↓
What Data Does It Need?
↓
Parameters
↓
What Actual Values Are Sent?
↓
Arguments
↓
Function Processes Data
↓
What Result Is Needed?
↓
Return Value
↓
Caller Uses Result
```

আর Decision Function-এর জন্য:

```text
Question
↓
isSomething()
↓
Check Condition
↓
1 or 0
↓
Main Logic Makes Decision
```

---

# ✅ Chapter 2 Completion Checklist

```text
[ ] Parameter বুঝি

[ ] Argument বুঝি

[ ] Parameter এবং Argument আলাদা করতে পারি

[ ] Return Value বুঝি

[ ] Return এবং Print-এর difference বুঝি

[ ] void কখন ব্যবহার করতে হয় জানি

[ ] 1/0 Decision Function বুঝি

[ ] isEven() নিজে লিখতে পারি

[ ] maximum() নিজে লিখতে পারি

[ ] isVowel() নিজে লিখতে পারি

[ ] Function কী Return করবে decide করতে পারি

[ ] Missing Return Bug বুঝি

[ ] Return Type Mismatch বুঝি

[ ] Function এবং Pattern-এর difference বুঝি

[ ] Assignment complete করেছি
```

---

## 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments, Return Values & Function Design
│
├── ⬜ Chapter 3 - Problem Decomposition with Functions
│
├── ⬜ Chapter 4 - Arrays & Strings with Functions
│
├── ⬜ Chapter 5 - Recursion Mental Model
│
├── ⬜ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ⬜ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

**Chapter 2-এর মূল অর্জন:** এখন Function দেখলে শুধু syntax দেখবে না। চিন্তা করবে-

```text
কী যাচ্ছে?
↓
Parameter

কী পাঠানো হচ্ছে?
↓
Argument

কী ফিরে আসছে?
↓
Return Value

কেন Function বানানো হয়েছে?
↓
Specific Responsibility
```

এই foundation-টাই **Chapter 3 - Problem Decomposition with Functions**-এ ব্যবহার হবে।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 3 - Problem Decomposition with Functions

> **Chapter Goal:** বড় Problem দেখে ভয় না পেয়ে সেটাকে ছোট ছোট কাজ বা **Subproblem**-এ ভাগ করতে শেখা।

---

# 🎯 Chapter Mission

Chapter 1-এ শিখেছ:

```text
Function কী?
```

Chapter 2-এ শিখেছ:

```text
Parameter
Argument
Return Value
Function Design
```

এখন সেগুলো ব্যবহার করে শিখবে:

```text
Big Problem
      ↓
Break into Small Tasks
      ↓
Identify Reusable Logic
      ↓
Design Helper Functions
      ↓
Combine Everything
      ↓
Final Solution
```

এই পুরো চিন্তার পদ্ধতিই:

```text
Problem Decomposition
```

সহজ ভাষায়:

> একটি বড় Problem-কে কয়েকটি ছোট, পরিষ্কার এবং manageable Problem-এ ভাগ করা।

---

# 1. কেন Problem Decomposition দরকার?

ধরো Problem:

> একটি Array-তে কয়টি Prime Number আছে এবং সবচেয়ে বড় Prime Number কোনটি বের করো।

Beginner অনেক সময় Problem-টা দেখে একসঙ্গে চিন্তা করে:

```text
Input নিতে হবে
Prime check করতে হবে
Count করতে হবে
Maximum বের করতে হবে
Output দিতে হবে

সব একসঙ্গে কীভাবে করব?
😵
```

এখানেই Problem Decomposition দরকার।

Problem-টাকে ভাঙি:

```text
Main Problem
│
├── Array Input
│
├── Each Number Visit
│
├── Check Prime
│
├── Count Prime
│
└── Track Maximum Prime
```

আরও পরিষ্কারভাবে:

```text
Array
↓
Traversal
↓
Current Number
↓
isPrime()?
│
├── No → Continue
│
└── Yes
      ↓
    count++
      ↓
    Update Maximum
```

এখন Problem আর বিশাল মনে হচ্ছে না।

---

# 2. Decomposition-এর প্রথম Rule

Problem পড়ার পর সরাসরি Code লিখবে না।

প্রথমে জিজ্ঞেস করবে:

```text
এই Problem-এ আলাদা আলাদা কাজ কী কী?
```

ধরো:

> একটি Array-এর সব Palindrome Number-এর Sum বের করো।

একসঙ্গে চিন্তা করলে:

```text
Palindrome check + Array + Sum
```

ভেঙে চিন্তা করলে:

```text
Array Traverse
↓
Current Number
↓
isPalindrome(number)
↓
If True
↓
sum += number
```

এখানে:

```text
Main Pattern
=
Traversal + Accumulation
```

Helper Logic:

```text
isPalindrome()
```

এটাই decomposition।

---

# 3. Main Logic এবং Helper Logic

এই দুইটা term খুব গুরুত্বপূর্ণ।

## Main Logic

Problem-এর overall flow।

Example:

```text
Traverse Array
↓
Check Condition
↓
Update State
```

## Helper Logic

একটি নির্দিষ্ট ছোট কাজ।

Example:

```text
isPrime(n)
```

এর একমাত্র কাজ:

```text
Number Receive
↓
Prime Check
↓
Return 1 or 0
```

---

## Mental Model

```text
Main Solution
│
├── Controls Overall Flow
│
└── Uses Helper Functions
        │
        ├── isPrime()
        ├── isEven()
        ├── isPalindrome()
        └── maximum()
```

---

# 4. Example 1 - Count Even Numbers

Problem:

> একটি Array-তে কয়টি Even Number আছে?

এখানে Function ছাড়াও সহজে solve করা যায়।

Basic Pattern:

```text
Traversal
↓
Classification
↓
Counter
```

Code:

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

এখন helper function ব্যবহার করি:

```c
int isEven(int n)
{
    return n % 2 == 0;
}
```

Main logic:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (isEven(arr[i]))
    {
        count++;
    }
}
```

Decomposition:

```text
Count Even Numbers
│
├── Traverse Array
├── isEven()
└── Counter
```

### গুরুত্বপূর্ণ কথা

এখানে Function ব্যবহার করা বাধ্যতামূলক নয়।

কারণ condition খুব ছোট:

```c
arr[i] % 2 == 0
```

তবুও example-টি decomposition বোঝার জন্য useful।

Contest-এ প্রতিটি ছোট condition-এর জন্য function বানানোর দরকার নেই।

---

# 5. কখন Helper Function বানাব?

একটি practical rule:

```text
Logic Complex?
      │
      ├── Yes → Function Consider করো
      │
      └── No
           ↓
Logic Repeated?
      │
      ├── Yes → Function Consider করো
      │
      └── No → Inline Logic Fine
```

### Function useful হতে পারে যখন:

* Logic বড় বা complex
* একই Logic বারবার দরকার
* Yes/No decision আলাদা করা useful
* Main code অনেক messy হয়ে যাচ্ছে
* Problem-কে ছোট unit-এ ভাবলে বুঝতে সুবিধা হয়

Example:

```text
isEven()
```

খুব simple।

কিন্তু:

```text
isPrime()
```

তুলনামূলক complex।

তাই `isPrime()` helper function হিসেবে বেশি useful।

---

# 6. Example 2 - Count Prime Numbers in Array

Problem:

> Array-তে কয়টি Prime Number আছে?

---

## Step 1 - Core Goal

```text
Count Prime Numbers
```

---

## Step 2 - Required Operations

```text
Traverse Array
↓
Check Each Number
↓
Prime?
↓
Count
```

---

## Step 3 - Identify Helper Logic

Prime check একটি independent কাজ।

তাই:

```text
isPrime(n)
```

---

## Step 4 - Pattern Chain

```text
Traversal
↓
Classification
↓
Counter
```

Classification করছে:

```text
isPrime()
```

---

## Step 5 - Code Structure

```c
#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

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
        if (isPrime(arr[i]))
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# 7. `isPrime()` Function বুঝি

```c
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
```

Mental Model:

```text
n
↓
n < 2?
├── Yes → Not Prime
└── No
      ↓
Check Possible Divisors
      ↓
Divisor Found?
├── Yes → Return 0
└── No Divisor Found
          ↓
        Return 1
```

এখানে:

```text
return 0
```

মানে:

```text
Decision Complete
↓
Function Ends Immediately
```

---

# 8. Decomposition Tree

Problem decomposition করার সময় এই ধরনের Tree বানাতে পারো।

Problem:

> Array-এর Prime Numbers-এর Sum বের করো।

```text
Prime Sum
│
├── Input
│
├── Traversal
│
├── Prime Check
│      └── isPrime()
│
├── Accumulation
│      └── sum += arr[i]
│
└── Output
```

Pattern Chain:

```text
Traversal
+
Decision Function
+
Accumulator
```

এখানে নতুন algorithm নেই।

Day 2-এর Pattern এবং Day 4-এর Function combine হয়েছে।

---

# 9. Count এবং Sum Problem-এর Difference

দুটি Problem compare করি।

## Problem A

> Prime Number কয়টি?

State:

```c
int count = 0;
```

Update:

```c
count++;
```

Pattern:

```text
Counter
```

---

## Problem B

> Prime Numberগুলোর Sum কত?

State:

```c
int sum = 0;
```

Update:

```c
sum += arr[i];
```

Pattern:

```text
Accumulator
```

---

## Compare

```text
Same:
Traversal + isPrime()

Different:
State Update
```

Mental Map:

```text
Prime Check
      ↓
   isPrime()
      ↓
Condition True
      │
      ├── Need Quantity?
      │       ↓
      │     count++
      │
      └── Need Total?
              ↓
          sum += value
```

এটাই Pattern Selection।

---

# 10. Example 3 - Maximum Prime Number

Problem:

> Array-এর সবচেয়ে বড় Prime Number বের করো।

Decomposition:

```text
Array
↓
Traversal
↓
isPrime()
↓
Prime Found
↓
Maximum Update
```

Patterns:

```text
Traversal
+
Decision Function
+
Maximum Pattern
```

Possible State:

```c
int found = 0;
int maxPrime;
```

Main logic:

```c
for (int i = 0; i < n; i++)
{
    if (isPrime(arr[i]))
    {
        if (!found || arr[i] > maxPrime)
        {
            maxPrime = arr[i];
            found = 1;
        }
    }
}
```

এখানে `found` দরকার কারণ Array-তে কোনো Prime Number নাও থাকতে পারে।

Mental Model:

```text
Prime Found?
↓
First Prime?
├── Yes → Initialize maxPrime
└── No
      ↓
Compare
      ↓
Update if Larger
```

---

# 11. একটি Problem-এ Multiple States

Problem:

> Array-তে কয়টি Prime Number আছে এবং তাদের Sum কত?

এখানে:

```text
State 1
↓
count
```

```text
State 2
↓
sum
```

Flow:

```text
Traverse
↓
isPrime()?
├── No → Continue
└── Yes
      ↓
    count++
      ↓
    sum += arr[i]
```

Code:

```c
int count = 0;
int sum = 0;

for (int i = 0; i < n; i++)
{
    if (isPrime(arr[i]))
    {
        count++;
        sum += arr[i];
    }
}
```

Pattern Chain:

```text
Traversal
+
Decision Function
+
Counter
+
Accumulator
```

একটি Problem-এ একাধিক Pattern থাকতে পারে।

এটা Day 2 থেকেই তুমি শিখছ, এখন Function-এর সঙ্গে combine হচ্ছে।

---

# 12. Example 4 - String Problem Decomposition

Problem:

> একটি String-এ কয়টি Vowel আছে?

Possible decomposition:

```text
String
↓
Traversal
↓
Current Character
↓
isVowel()
↓
Counter
```

Helper:

```c
int isVowel(char ch)
{
    return ch == 'a' ||
           ch == 'e' ||
           ch == 'i' ||
           ch == 'o' ||
           ch == 'u';
}
```

Main:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (isVowel(str[i]))
    {
        count++;
    }
}
```

Pattern:

```text
String Traversal
+
Character Classification
+
Counter
```

Function:

```text
isVowel()
=
Classification Helper
```

---

# 13. Problem Decomposition Workflow

এখন থেকে বড় Problem দেখলে এই workflow follow করবে:

```text
Step 1
Read Problem
↓
Step 2
Find Final Goal
↓
Step 3
List Small Operations
↓
Step 4
Identify Main Pattern
↓
Step 5
Identify Repeated / Complex Logic
↓
Step 6
Design Helper Function
↓
Step 7
Choose State
↓
Step 8
Write Main Flow
↓
Step 9
Code
↓
Step 10
Test Each Part
```

Short version:

```text
Goal
↓
Break
↓
Pattern
↓
Helper
↓
State
↓
Combine
```

এই ৬টা শব্দ মনে রাখবে।

---

# 14. Function Design Card

কোনো Helper Function বানানোর আগে লিখবে:

```text
Function Name:
Purpose:
Input:
Return:
Return Type:
Pattern Used Inside:
```

Example:

```text
Function Name:
isPrime

Purpose:
Check whether a number is prime

Input:
Integer n

Return:
1 if prime
0 otherwise

Return Type:
int

Pattern Used Inside:
Divisor checking + Early exit
```

---

# 15. Example 5 - First Vowel Position

Problem:

> String-এর first vowel-এর index print করো। Vowel না থাকলে `-1`।

Decomposition:

```text
String
↓
Traversal
↓
isVowel(current character)
↓
First Match
↓
Save Index
↓
Break
```

Pattern Chain:

```text
Traversal
+
Classification Function
+
First Occurrence
```

State:

```c
int index = -1;
```

Main logic:

```c
int index = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (isVowel(str[i]))
    {
        index = i;
        break;
    }
}
```

এখানে Day 3-এর First Occurrence Pattern reuse হয়েছে।

---

# 16. Example 6 - Count Palindrome Strings

ধরো তোমাকে কয়েকটি word দেওয়া হলো।

Task:

> কয়টি word Palindrome?

Decomposition:

```text
Multiple Strings
↓
Process Each String
↓
isPalindrome()
↓
True?
↓
count++
```

Helper Function:

```text
isPalindrome()
```

তার ভিতরের Pattern:

```text
Two Pointer
+
Comparison
+
Early Exit
```

Overall Problem Pattern:

```text
Outer Traversal
+
Palindrome Helper
+
Counter
```

খেয়াল করো:

```text
Main Problem Pattern
```

এবং:

```text
Helper Function-এর Internal Pattern
```

আলাদা হতে পারে।

এটা গুরুত্বপূর্ণ concept।

---

# 17. Over-Decomposition কী?

Problem decomposition useful, কিন্তু অতিরিক্ত function বানানোও ভালো না।

এই Code:

```c
int addOne(int x)
{
    return x + 1;
}

int increaseCount(int count)
{
    return addOne(count);
}
```

তারপর:

```c
count = increaseCount(count);
```

এটা simple CP problem-এর জন্য unnecessary।

সরাসরি:

```c
count++;
```

যথেষ্ট।

Rule:

```text
Function makes logic clearer?
        ↓
       Yes
        ↓
     Use it
```

```text
Function makes simple logic harder to follow?
        ↓
       Yes
        ↓
     Don't use it
```

---

# 18. Common Mistake - Code First, Think Later

Wrong workflow:

```text
Read Problem
↓
Immediately Open Editor
↓
Write Random Loop
↓
Add Conditions
↓
Add More Variables
↓
Confusion
↓
Debug Randomly
```

Better:

```text
Read
↓
Goal
↓
Break into Tasks
↓
Pattern
↓
State
↓
Helper Function
↓
Code
```

Contest-এ সবসময় paper-এ full diagram আঁকতে হবে না।

Practice-এর সময় diagram বানাবে।

পরে brain automatically ছোট version করবে:

```text
Array → Traverse → Prime Check → Count
```

---

# 19. Common Mistake - Function আছে, Responsibility পরিষ্কার না

Bad idea:

```c
int processEverything(...)
```

যেখানে function:

```text
Input নেয়
Prime check করে
Sum করে
Maximum বের করে
Print করে
```

এটা আবার একটা mini-`main()` হয়ে গেল।

Better responsibility:

```text
isPrime()
→ শুধু Prime Check
```

```text
findMax()
→ শুধু Maximum Find
```

```text
countVowels()
→ শুধু Vowel Count
```

Mental Rule:

> একটি Helper Function-এর কাজ এক বাক্যে explain করতে পারা উচিত।

---

# 20. Problem Decomposition Drill

এখন Code লিখবে না।

শুধু Problem ভাঙবে।

---

## Drill 1

> Array-তে কয়টি Positive Even Number আছে?

Fill:

```text
Main Goal:

Main Pattern:

Conditions:

State:

Helper Function Needed?

Pattern Chain:
```

Possible mental direction:

```text
Traverse
↓
Positive?
↓
Even?
↓
Count
```

---

## Drill 2

> Array-এর Prime Numbers-এর Maximum বের করো।

Fill:

```text
Main Goal:

Main Pattern:

Helper Function:

State:

No Prime Case:

Pattern Chain:
```

---

## Drill 3

> String-এর first uppercase vowel-এর index বের করো।

Think:

```text
Traversal
↓
?
↓
?
↓
First Match
```

নিজে decomposition করবে।

---

## Drill 4

> একটি Number Palindrome এবং Even দুটোই কি না check করো।

Possible structure:

```text
Number
│
├── isEven()
└── isPalindromeNumber()
```

তারপর:

```text
Both True?
↓
Final Decision
```

---

# 🧪 Coding Practice

এই Chapter-এর জন্য শুধু **৪টি focused coding task**।

কারণ Day 4-এ আরও অনেক Chapter বাকি আছে।

---

## Task 1 - Count Prime Numbers

Input:

```text
6
2 4 5 8 11 15
```

Output:

```text
3
```

Required decomposition:

```text
Traversal
+
isPrime()
+
Counter
```

---

## Task 2 - Sum of Even Numbers

Input:

```text
5
2 7 4 9 6
```

Output:

```text
12
```

Pattern:

```text
Traversal
+
Classification
+
Accumulator
```

তুমি decide করবে `isEven()` function ব্যবহার করবে কি না।

---

## Task 3 - First Vowel Position

Input:

```text
rhythmical
```

Expected Output:

```text
6
```

যদি zero-based index ব্যবহার করো:

```text
r h y t h m i
0 1 2 3 4 5 6
```

Pattern:

```text
String Traversal
+
isVowel()
+
First Occurrence
```

---

## Task 4 - Count Palindrome Numbers

Input:

```text
5
121 45 7 1331 123
```

Output:

```text
3
```

কারণ:

```text
121  → Palindrome
45   → Not Palindrome
7    → Palindrome
1331 → Palindrome
123  → Not Palindrome
```

Decomposition:

```text
Array Traversal
+
isPalindromeNumber()
+
Counter
```

---

# 📝 Chapter 3 Assignment

Assignment ছোট কিন্তু important।

## Assignment A - Decompose Before Coding

নিচের তিনটি Problem-এর জন্য শুধু Analysis লিখবে:

```text
1. Count Prime Numbers in Array

2. Find Maximum Even Number

3. Find First Digit in a String
```

Format:

````markdown
## Problem

### Goal

...

### Input

...

### Output

...

### Small Tasks

1. ...
2. ...
3. ...

### Main Pattern

...

### Helper Function

...

### State

...

### Pattern Chain

```text
...
↓
...
↓
...
````

````

---

## Assignment B - Implement Two Problems

শুধু এই দুইটি mandatory:

```text
1. Count Prime Numbers in Array

2. Count Palindrome Numbers
````

Extra time থাকলে:

```text
3. Maximum Prime Number
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Problem Decomposition
Subproblem
Main Logic
Helper Function
Responsibility
Reusable Logic
Over-Decomposition
```

প্রতিটির জন্য শুধু:

```text
Simple Meaning
+
One Small Example
```

যথেষ্ট।

---

# 🧠 Chapter 3 Master Mental Model

```text
                BIG PROBLEM
                     │
                     ▼
                Final Goal
                     │
                     ▼
              Break into Tasks
                     │
          ┌──────────┼──────────┐
          │          │          │
          ▼          ▼          ▼
       Input      Main Flow   Small Logic
                       │          │
                       ▼          ▼
                    Pattern    Helper Function
                       │          │
                       └────┬─────┘
                            ▼
                       Choose State
                            │
                            ▼
                       Combine Logic
                            │
                            ▼
                           Code
                            │
                            ▼
                           Test
```

---

# 🔥 Chapter 3 Key Lesson

একটা Problem দেখলে:

```text
“Code কী?”
```

এই প্রশ্ন দিয়ে শুরু করবে না।

শুরু করবে:

```text
Problem-এর Final Goal কী?
        ↓
কাজগুলো কী কী?
        ↓
কোন Pattern লাগবে?
        ↓
কোন Logic আলাদা Function হতে পারে?
        ↓
কোন State লাগবে?
        ↓
সবকিছু কীভাবে Combine হবে?
```

Example:

```text
Count Prime Numbers
        ↓
Array Traversal
        ↓
Need Prime Decision
        ↓
isPrime()
        ↓
Need Quantity
        ↓
Counter
        ↓
Final Pattern

Traversal
+
Decision Function
+
Counter
```

এটাই এই Chapter-এর মূল skill।

---

# ✅ Chapter 3 Completion Checklist

```text
[ ] Problem Decomposition কী বুঝি

[ ] বড় Problem ছোট Task-এ ভাগ করতে পারি

[ ] Main Logic এবং Helper Logic-এর difference বুঝি

[ ] Helper Function কখন useful বুঝি

[ ] Over-Decomposition বুঝি

[ ] Problem থেকে Main Pattern identify করতে পারি

[ ] Problem থেকে State identify করতে পারি

[ ] isPrime() helper হিসেবে ব্যবহার করতে পারি

[ ] Counter এবং Accumulator-এর difference মনে আছে

[ ] Multiple Pattern combine করতে পারি

[ ] Main Pattern এবং Helper Internal Pattern আলাদা হতে পারে বুঝি

[ ] Coding Practice complete করেছি

[ ] Assignment complete করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments, Return Values & Function Design
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ⬜ Chapter 4 - Arrays & Strings with Functions
│
├── ⬜ Chapter 5 - Recursion Mental Model
│
├── ⬜ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ⬜ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

**Chapter 3-এর পর তোমার নতুন চিন্তার নিয়ম:**

```text
Don't Attack the Whole Problem
              ↓
          Break It
              ↓
        Solve Small Parts
              ↓
        Combine the Parts
              ↓
          Final Solution
```

পরের **Day 4 - Chapter 4**-এ এই decomposition skill ব্যবহার করে **Array ও String-এর সঙ্গে Function কীভাবে কাজ করে**, array pass করা, size parameter, string function design এবং Day 2–3-এর pattern reuse শেখা হবে।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 4 - Arrays & Strings with Functions

> **Chapter Goal:** Day 2-এর Array এবং Day 3-এর String patterns-কে Function-এর সঙ্গে ব্যবহার করা।
> **Estimated Time:** 45–60 minutes
> **Focus:** Array Passing → Size Parameter → String Passing → Pattern Reuse

---

# 🎯 Chapter Mission

এখন পর্যন্ত তুমি শিখেছ:

```text
Chapter 1
Function Mental Model

        ↓

Chapter 2
Parameter
Argument
Return Value

        ↓

Chapter 3
Problem Decomposition

        ↓

Chapter 4
Array + String + Function
```

এই Chapter-এর মূল লক্ষ্য:

```text
আগের Pattern
+
Function
=
Reusable Solution
```

তুমি নতুন কোনো বড় Algorithm শিখছ না।

বরং শিখছ:

```text
Day 2 Array Patterns
+
Day 3 String Patterns
+
Day 4 Functions
```

একসঙ্গে ব্যবহার করতে।

---

# 1. Array Function-এ Pass করা

সাধারণ variable Function-এ পাঠিয়েছ:

```c
int square(int n)
{
    return n * n;
}
```

Call:

```c
int ans = square(5);
```

Array-ও Function-এ পাঠানো যায়।

Example:

```c
int findSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}
```

Call:

```c
int result = findSum(arr, n);
```

Mental Model:

```text
Array + Size
      ↓
   findSum()
      ↓
   Traversal
      ↓
 Accumulation
      ↓
  Return Sum
```

---

# 2. কেন Array-এর সঙ্গে `n` পাঠাতে হয়?

Function:

```c
int findSum(int arr[], int n)
```

এখানে:

```text
arr
↓
Array Data

n
↓
Number of Elements to Process
```

Function-কে জানতে হবে:

> Array-এর কয়টি element নিয়ে কাজ করতে হবে?

কারণ traversal:

```c
for (int i = 0; i < n; i++)
```

`n` ছাড়া loop কোথায় stop করবে সেটা Function জানে না।

তাই beginner CP mental rule:

```text
Array Function
=
Array
+
Size
```

Example:

```c
findSum(arr, n);
findMax(arr, n);
findMin(arr, n);
countEven(arr, n);
```

Search হলে extra information লাগতে পারে:

```c
searchTarget(arr, n, target);
```

Mental Model:

```text
Array
+
Size
+
Target
↓
searchTarget()
↓
Index or -1
```

---

# 3. Array Sum Function

Day 2-এর Accumulation Pattern মনে করো:

```text
Traversal
↓
Accumulator
↓
Update
```

এখন Function-এর মধ্যে:

```c
int arraySum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}
```

Main:

```c
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = arraySum(arr, n);

    printf("%d\n", result);

    return 0;
}
```

Pattern ভিতরে:

```text
arraySum()
│
├── Traversal
├── Accumulator
├── Update
└── Return
```

---

# 4. Maximum Function

Problem:

> Array-এর Maximum value return করো।

Function:

```c
int findMax(int arr[], int n)
{
    int maxValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}
```

Mental Model:

```text
Array
↓
Initialize Candidate
↓
Traversal
↓
Comparison
↓
Update
↓
Return Maximum
```

Pattern Chain:

```text
Traversal
+
Comparison
+
Update
```

---

## কেন `maxValue = 0` না?

Wrong:

```c
int maxValue = 0;
```

Array:

```text
-5 -2 -8 -1
```

এখন কোনো value-ই `0` থেকে বড় না।

তাই wrong result:

```text
0
```

যদিও `0` Array-তেই নেই।

Correct:

```c
int maxValue = arr[0];
```

তারপর:

```c
for (int i = 1; i < n; i++)
```

কারণ index `0` already candidate হিসেবে নেওয়া হয়েছে।

---

# 5. Minimum Function

Maximum-এর same structure:

```c
int findMin(int arr[], int n)
{
    int minValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    return minValue;
}
```

Compare:

```text
Maximum:
arr[i] > maxValue

Minimum:
arr[i] < minValue
```

Pattern একই:

```text
Traversal
+
Comparison
+
Conditional Update
```

শুধু condition বদলেছে।

---

# 6. Counting Function

Problem:

> Array-তে কয়টি Even Number আছে?

Function:

```c
int countEven(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
```

Mental Model:

```text
Array
↓
Traversal
↓
Classification
↓
Match?
├── Yes → count++
└── No  → Continue
↓
Return Count
```

Pattern:

```text
Traversal
+
Classification
+
Counter
```

---

## `isEven()` ব্যবহার করা যাবে?

হ্যাঁ:

```c
int isEven(int n)
{
    return n % 2 == 0;
}
```

তারপর:

```c
int countEven(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            count++;
        }
    }

    return count;
}
```

কিন্তু এই simple case-এ দুটো version-ই acceptable।

### Version A

```c
if (arr[i] % 2 == 0)
```

### Version B

```c
if (isEven(arr[i]))
```

Rule:

```text
Simple Condition
↓
Inline is Fine

Complex / Repeated Logic
↓
Helper Function Useful
```

---

# 7. Search Function

Problem:

> Array-তে Target-এর first index return করো।

Function:

```c
int searchTarget(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}
```

Mental Flow:

```text
Array + Target
↓
Traversal
↓
Compare
↓
Match?
├── Yes → Return Index
└── No  → Continue
↓
Traversal Ends
↓
Return -1
```

Pattern:

```text
Traversal
+
Comparison
+
First Occurrence
+
Early Return
+
Sentinel Value
```

এখানে:

```text
-1
```

মানে:

```text
Target Not Found
```

কারণ valid index:

```text
0 থেকে n - 1
```

তাই `-1` একটি useful sentinel value।

---

# 8. Early Return বুঝি

এই Function দেখো:

```c
int searchTarget(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}
```

ধরো:

```text
Array:
5 8 2 9 4

Target:
2
```

Flow:

```text
i = 0
5 == 2?
No

↓

i = 1
8 == 2?
No

↓

i = 2
2 == 2?
Yes

↓

return 2

↓

Function Ends
```

এরপর:

```text
9
4
```

check করার দরকার নেই।

কারণ Problem চেয়েছে:

```text
First Occurrence
```

---

# 9. Array Function Design Pattern

Array problem দেখলে এইভাবে চিন্তা করতে পারো:

```text
What Does the Function Need?
          │
          ▼
       Array Data
          +
         Size
          │
          ▼
     What Is the Goal?
          │
    ┌─────┼──────┬────────┐
    │     │      │        │
    ▼     ▼      ▼        ▼
   Sum   Count   Max     Search
    │     │      │        │
    ▼     ▼      ▼        ▼
 Accum. Counter Compare   Index
```

Examples:

| Goal    | Function         | Return       |
| ------- | ---------------- | ------------ |
| Total   | `arraySum()`     | Sum          |
| Count   | `countEven()`    | Count        |
| Maximum | `findMax()`      | Value        |
| Minimum | `findMin()`      | Value        |
| Search  | `searchTarget()` | Index / `-1` |

---

# 10. String Function-এ Pass করা

C-তে String হচ্ছে:

```text
Character Array
```

Example:

```c
char str[100];
```

Function-এ pass:

```c
int countVowels(char str[])
```

Call:

```c
int result = countVowels(str);
```

এখানে অনেক common string traversal-এ আলাদা `n` না পাঠিয়েও কাজ করা যায়।

কারণ String-এর end marker:

```text
'\0'
```

তাই traversal:

```c
for (int i = 0; str[i] != '\0'; i++)
```

Mental Model:

```text
String
↓
Function
↓
Traverse Until '\0'
↓
Process Characters
↓
Return Result
```

---

# 11. Count Vowels Function

Helper:

```c
int isVowel(char ch)
{
    return ch == 'a' ||
           ch == 'e' ||
           ch == 'i' ||
           ch == 'o' ||
           ch == 'u';
}
```

Main Function:

```c
int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]))
        {
            count++;
        }
    }

    return count;
}
```

Decomposition:

```text
countVowels()
│
├── String Traversal
├── isVowel()
└── Counter
```

Pattern Chain:

```text
Traversal
+
Classification Helper
+
Counter
```

---

# 12. Count Digits in String

Problem:

> String-এর মধ্যে কয়টি digit character আছে?

Example:

```text
abc123x7
```

Output:

```text
4
```

Function:

```c
int countDigits(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }

    return count;
}
```

Pattern:

```text
String Traversal
+
Range Classification
+
Counter
```

খেয়াল করো:

```text
Number Digit
```

এবং:

```text
Digit Character
```

একই জিনিস না।

String-এ:

```c
'0'
'1'
'2'
...
'9'
```

character হিসেবে থাকে।

---

# 13. First Character Search

Problem:

> String-এ একটি character-এর first index return করো।

Function:

```c
int findFirst(char str[], char target)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            return i;
        }
    }

    return -1;
}
```

Pattern:

```text
String Traversal
+
Comparison
+
First Occurrence
+
Early Return
+
Sentinel
```

Array Search এবং String Search compare করো:

```text
Array Search:
arr[i] == target
```

```text
String Search:
str[i] == target
```

Core Pattern একই।

Data Type আলাদা।

এটা Pattern Recognition-এর গুরুত্বপূর্ণ অংশ।

---

# 14. Palindrome Function

Day 3-এর Palindrome Pattern এখন Function হিসেবে লিখি।

```c
#include <string.h>

int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}
```

Mental Model:

```text
String
↓
Left Pointer
+
Right Pointer
↓
Compare
↓
Mismatch?
├── Yes → Return 0
└── No
      ↓
 Move Inward
      ↓
All Pairs Match
      ↓
Return 1
```

Pattern:

```text
Two Pointer
+
Comparison
+
Early Return
```

---

# 15. Full Palindrome Example

```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main()
{
    char str[100];

    scanf("%99s", str);

    if (isPalindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
```

Input:

```text
level
```

Flow:

```text
l == l
↓
e == e
↓
Pointers Meet
↓
return 1
```

Output:

```text
Palindrome
```

---

# 16. Array Pattern এবং String Pattern Compare

এখন সবচেয়ে গুরুত্বপূর্ণ observation।

## Array Sum

```text
Array
↓
Traversal
↓
Accumulator
```

## Count Vowels

```text
String
↓
Traversal
↓
Classification
↓
Counter
```

## Array Search

```text
Array
↓
Traversal
↓
Comparison
↓
First Match
```

## Character Search

```text
String
↓
Traversal
↓
Comparison
↓
First Match
```

## Palindrome

```text
String
↓
Two Pointer
↓
Comparison
↓
Decision
```

অর্থাৎ Data Structure বদলাতে পারে, কিন্তু অনেক Core Pattern একই থাকে।

```text
Different Problem
      ↓
Different Data
      ↓
Same Core Pattern Possible
```

এই skill-টাই Competitive Programming-এ খুব দরকারি।

---

# 17. Function দিয়ে Pattern Hide হয় না

একটি important point।

এই Code:

```c
int findMax(int arr[], int n)
```

দেখে শুধু:

```text
এটা একটা Function
```

ভাবলে হবে না।

ভিতরের Pattern দেখতে হবে:

```text
Traversal
+
Comparison
+
Update
```

একইভাবে:

```c
int countVowels(char str[])
```

এর ভিতরে:

```text
Traversal
+
Classification
+
Counter
```

আর:

```c
int isPalindrome(char str[])
```

এর ভিতরে:

```text
Two Pointer
+
Comparison
+
Early Return
```

Mental Rule:

> Function হচ্ছে Container, Pattern হচ্ছে Solution Logic।

```text
Function
┌────────────────────────┐
│                        │
│      Core Pattern      │
│                        │
└────────────────────────┘
```

---

# 18. Modification vs Return

Array Function নিয়ে একটি গুরুত্বপূর্ণ basic concept।

এই Function:

```c
void makeZero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}
```

Call:

```c
makeZero(arr, n);
```

তারপর original array-এর values পরিবর্তিত থাকবে।

Example:

```text
Before:
5 8 2 9

After:
0 0 0 0
```

Beginner mental rule:

```text
Array Function-এ পাঠিয়ে
Element Modify করলে

Original Array-তেও
Change দেখা যায়
```

এই Chapter-এ pointer mechanics deep-এ যাচ্ছি না।

এখন শুধু behaviour বুঝবে।

---

# 19. Value Parameter-এর সঙ্গে Difference

Normal integer:

```c
void change(int x)
{
    x = 100;
}
```

Main:

```c
int a = 5;

change(a);

printf("%d", a);
```

Output:

```text
5
```

কারণ Function-এর `x` পরিবর্তন করলেও `a` পরিবর্তন হয় না।

কিন্তু Array:

```c
void changeFirst(int arr[])
{
    arr[0] = 100;
}
```

Call:

```c
changeFirst(arr);
```

এখন original array-এর first element change হবে।

এই difference এখন শুধু observe করবে।

Pointer Chapter-এ কারণ আরও deeply বুঝবে।

---

# 20. Common Mistakes

## Mistake 1 - Size Pass না করা

Wrong mental design:

```c
int findMax(int arr[])
```

তারপর Function-এর ভিতরে:

```text
Loop কতদূর যাবে?
```

সেটা জানা নেই।

Better:

```c
int findMax(int arr[], int n)
```

---

## Mistake 2 - Maximum `0` দিয়ে Initialize করা

Wrong:

```c
int maxValue = 0;
```

Better:

```c
int maxValue = arr[0];
```

যদি `n > 0` guaranteed থাকে।

---

## Mistake 3 - Search-এ Not Found Handle না করা

Wrong:

```c
int searchTarget(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
}
```

Problem:

```text
Target না থাকলে কী Return করবে?
```

Correct:

```c
return -1;
```

---

## Mistake 4 - String Traversal-এ `'\0'` ভুলে যাওয়া

Correct:

```c
for (int i = 0; str[i] != '\0'; i++)
```

---

## Mistake 5 - Function-এর Goal unclear রাখা

এই ধরনের function avoid করো:

```c
void process(int arr[], int n)
```

যদি function-এর কাজ কী সেটা নাম দেখে বোঝা না যায়।

Better:

```c
int findMax(int arr[], int n);
```

```c
int countEven(int arr[], int n);
```

```c
int searchTarget(int arr[], int n, int target);
```

---

# 🧪 Practice Session

এই Chapter-এর practice intentionally focused রাখা হয়েছে।

## Task 1 - `findMin()`

Signature:

```c
int findMin(int arr[], int n)
```

Pattern:

```text
Traversal
+
Comparison
+
Update
```

---

## Task 2 - `countPositive()`

Signature:

```c
int countPositive(int arr[], int n)
```

Pattern:

```text
Traversal
+
Classification
+
Counter
```

---

## Task 3 - `searchTarget()`

Signature:

```c
int searchTarget(int arr[], int n, int target)
```

Return:

```text
Found
→ First Index

Not Found
→ -1
```

---

## Task 4 - `countDigits()`

Signature:

```c
int countDigits(char str[])
```

Example:

```text
Input:
abc12x9

Output:
3
```

---

## Task 5 - `isPalindrome()`

Signature:

```c
int isPalindrome(char str[])
```

Return:

```text
Palindrome
→ 1

Not Palindrome
→ 0
```

---

# 🧠 Pattern Recognition Drill

Code লিখবে না।

শুধু Pattern identify করবে।

### Problem 1

> Array-এর সব element-এর total বের করো।

```text
Primary Pattern:
State:
Return:
```

### Problem 2

> Array-এর প্রথম Negative Number-এর index বের করো।

```text
Primary Pattern:
State:
Sentinel:
Early Exit Needed:
```

### Problem 3

> String-এর মধ্যে কয়টি uppercase character আছে?

```text
Primary Pattern:
Classification:
State:
```

### Problem 4

> String palindrome কি না check করো।

```text
Primary Pattern:
Pointers:
Return:
```

---

# 📝 Chapter 4 Assignment

এই Chapter-এর জন্য ৪টি mandatory function:

```text
1. findMax(arr, n)

2. countEven(arr, n)

3. searchTarget(arr, n, target)

4. isPalindrome(str)
```

প্রতিটি Function-এর আগে comment লিখবে:

```c
/*
Goal:
Input:
Return:
Primary Pattern:
State:
*/
```

Example:

```c
/*
Goal:
Find maximum value in an array

Input:
Array and size

Return:
Maximum value

Primary Pattern:
Traversal + Comparison + Update

State:
maxValue
*/
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Array Parameter
Size Parameter
String Parameter
Early Return
Modification
Pattern Reuse
```

প্রতিটির জন্য:

```text
Simple Meaning
+
One Small Example
```

যথেষ্ট।

---

# 🧠 Chapter 4 Master Mental Model

```text
                 DATA
                   │
          ┌────────┴────────┐
          │                 │
          ▼                 ▼
        Array             String
          │                 │
          ▼                 ▼
     Array + Size       Until '\0'
          │                 │
          └────────┬────────┘
                   ▼
               Function
                   │
                   ▼
             Core Pattern
                   │
       ┌───────────┼───────────┐
       │           │           │
       ▼           ▼           ▼
   Accumulate     Count       Search
       │           │           │
       ▼           ▼           ▼
     Result       Result      Index
                               │
                               ▼
                          Index / -1
```

আর সবচেয়ে গুরুত্বপূর্ণ:

```text
Function
≠
Algorithm
```

বরং:

```text
Function
=
Logic-এর Organized Container
```

এবং:

```text
Inside Function
↓
Still Look for Patterns
```

---

# ✅ Chapter 4 Completion Checklist

```text
[ ] Array Function-এ pass করতে পারি

[ ] Array-এর সঙ্গে size কেন লাগে বুঝি

[ ] arraySum() লিখতে পারি

[ ] findMax() লিখতে পারি

[ ] findMin() লিখতে পারি

[ ] countEven() লিখতে পারি

[ ] searchTarget() লিখতে পারি

[ ] Early Return বুঝি

[ ] -1 Sentinel বুঝি

[ ] String Function-এ pass করতে পারি

[ ] '\0' পর্যন্ত traversal বুঝি

[ ] countVowels() logic বুঝি

[ ] countDigits() লিখতে পারি

[ ] findFirst() logic বুঝি

[ ] isPalindrome() Function হিসেবে লিখতে পারি

[ ] Array এবং String-এর মধ্যে Pattern reuse চিনতে পারি

[ ] Array modify করলে original array change হতে পারে-এটা জানি

[ ] Mandatory Assignment শেষ করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ⬜ Chapter 5 - Recursion Mental Model
│
├── ⬜ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ⬜ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

## Chapter 4-এর মূল শিক্ষা

এখন কোনো Function দেখলে শুধু syntax দেখবে না:

```text
findMax()
```

দেখে চিন্তা করবে:

```text
Traversal
+
Comparison
+
Update
```

`countVowels()` দেখলে:

```text
String Traversal
+
Classification
+
Counter
```

`searchTarget()` দেখলে:

```text
Traversal
+
Comparison
+
First Occurrence
+
Early Return
```

`isPalindrome()` দেখলে:

```text
Two Pointer
+
Comparison
+
Decision
```

এইভাবে **Function-এর নামের পেছনে থাকা Pattern দেখতে শেখা**-টাই Chapter 4-এর আসল উদ্দেশ্য।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 5 - Recursion Mental Model

> **Chapter Goal:** Recursion মুখস্থ করা নয়-একটি recursive function কীভাবে problem ছোট করে, কখন থামে এবং কেন নিজেকেই call করে সেটা বোঝা।
> **Estimated Time:** 45–60 minutes
> **Focus:** Recursion Idea → Smaller Problem → Base Case → Recursive Case → Basic Tracing

---

# 🎯 Chapter Mission

এখন পর্যন্ত Day 4-এ:

```text
Function
    ↓
Parameter & Return
    ↓
Problem Decomposition
    ↓
Array & String Functions
    ↓
Recursion
```

Recursion প্রথম দেখলে অদ্ভুত লাগতে পারে:

```c
void fun(int n)
{
    fun(n - 1);
}
```

কারণ প্রশ্ন আসে:

> Function আবার নিজেকেই কেন call করছে?

এই Chapter শেষে তোমার mental model হবে:

```text
Big Problem
     ↓
Solve / Handle One Small Part
     ↓
Reduce Problem Size
     ↓
Give Smaller Problem
to the Same Function
     ↓
Eventually Stop
```

---

# 1. Recursion কী?

সহজ সংজ্ঞা:

> যখন একটি Function একটি ছোট হয়ে আসা problem solve করার জন্য নিজেকেই call করে, তাকে Recursion বলে।

Example:

```c
void countDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);

    countDown(n - 1);
}
```

Call:

```c
countDown(3);
```

Output:

```text
3
2
1
```

প্রথমে শুধু flow দেখো:

```text
countDown(3)
        ↓
countDown(2)
        ↓
countDown(1)
        ↓
countDown(0)
        ↓
STOP
```

---

# 2. Recursion-এর সবচেয়ে গুরুত্বপূর্ণ Mental Model

Recursion-কে এভাবে চিন্তা করবে না:

```text
Function নিজেকে Call করছে
😵
```

বরং:

```text
Current Problem
      ↓
Smaller Same-Type Problem
      ↓
Even Smaller Problem
      ↓
Smallest Problem
      ↓
Stop
```

Example:

```text
Print 3 to 1
```

Problem:

```text
Print:
3 2 1
```

এটাকে ভাঙি:

```text
Print 3
+
Print 2 to 1
```

আবার:

```text
Print 2 to 1
=
Print 2
+
Print 1 to 1
```

আবার:

```text
Print 1 to 1
=
Print 1
+
Nothing Left
```

তাই:

```text
Print n to 1
        ↓
Print n
        +
Print n-1 to 1
```

এই second part:

```text
Print n-1 to 1
```

একই ধরনের problem, শুধু ছোট।

সেখানেই Recursion useful।

---

# 3. Recursion-এর দুইটি বাধ্যতামূলক অংশ

প্রায় প্রতিটি basic recursive function-এ তুমি খুঁজবে:

```text
Recursion
│
├── Base Case
│
└── Recursive Case
```

---

## Base Case

Base Case বলে:

> কখন Function আর নিজেকে call করবে না?

Example:

```c
if (n == 0)
{
    return;
}
```

এটা stop condition।

---

## Recursive Case

Recursive Case বলে:

> Problem কীভাবে ছোট হবে?

Example:

```c
countDown(n - 1);
```

এখানে:

```text
n
↓
n - 1
↓
n - 2
↓
n - 3
↓
...
↓
0
```

Problem size ছোট হচ্ছে।

---

# 4. প্রথম Complete Example

```c
#include <stdio.h>

void countDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    countDown(n - 1);
}

int main()
{
    countDown(5);

    return 0;
}
```

Output:

```text
5 4 3 2 1
```

এখন dry run করি।

---

## Call 1

```text
countDown(5)
```

Check:

```text
5 == 0?
No
```

তাই:

```text
Print 5
```

তারপর:

```text
countDown(4)
```

---

## Call 2

```text
countDown(4)
```

Check:

```text
4 == 0?
No
```

Print:

```text
4
```

Next:

```text
countDown(3)
```

এভাবে:

```text
countDown(5)
│
├── print 5
│
└── countDown(4)
      │
      ├── print 4
      │
      └── countDown(3)
            │
            ├── print 3
            │
            └── countDown(2)
                  │
                  ├── print 2
                  │
                  └── countDown(1)
                        │
                        ├── print 1
                        │
                        └── countDown(0)
                              │
                              └── return
```

Final Output:

```text
5 4 3 2 1
```

---

# 5. Base Case কেন এত গুরুত্বপূর্ণ?

এই Function দেখো:

```c
void countDown(int n)
{
    printf("%d ", n);

    countDown(n - 1);
}
```

Call:

```c
countDown(3);
```

Flow:

```text
3
↓
2
↓
1
↓
0
↓
-1
↓
-2
↓
-3
↓
...
```

এটা থামছে না।

কারণ:

```text
No Base Case
```

Eventually program crash করতে পারে।

এই ধরনের সমস্যাকে সাধারণভাবে:

```text
Stack Overflow
```

বলা হয়।

এখন stack mechanics deep-এ শেখার দরকার নেই। শুধু এইটুকু মনে রাখো:

```text
No Stop Condition
        ↓
Too Many Function Calls
        ↓
Program Failure
```

---

# 6. Recursion লেখার আগে তিনটি প্রশ্ন

Recursive solution লিখতে যাওয়ার আগে:

```text
1. Smallest Problem কোনটা?

2. সেখানে Answer কী?

3. Current Problem থেকে Smaller Problem-এ কীভাবে যাব?
```

Example:

```text
Print n to 1
```

### Question 1

Smallest useful situation?

```text
n == 0
```

### Question 2

তখন কী করব?

```text
Nothing
↓
return
```

### Question 3

Problem ছোট হবে কীভাবে?

```text
n
↓
n - 1
```

তাই:

```c
void printDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    printDown(n - 1);
}
```

---

# 7. Recursion মানেই Loop-এর Replacement না

এটা গুরুত্বপূর্ণ।

এই কাজ:

```text
1 থেকে n পর্যন্ত print
```

Loop দিয়েও করা যায়:

```c
for (int i = 1; i <= n; i++)
{
    printf("%d ", i);
}
```

Recursion দিয়েও করা যায়।

কিন্তু তার মানে এই নয়:

```text
Recursion
>
Loop
```

বা:

```text
Loop
>
Recursion
```

দুটো আলাদা technique।

বর্তমান Bootcamp stage-এ লক্ষ্য:

```text
Understand Recursive Thinking
```

না যে:

```text
সব Loop Recursion দিয়ে লিখতে হবে
```

Contest-এ simple traversal-এর জন্য loop সাধারণত বেশি natural।

---

# 8. Recursion-এর Problem Reduction

Recursion কাজ করার জন্য problem সাধারণত ছোট হতে হবে।

Good:

```text
n
↓
n - 1
↓
n - 2
↓
...
↓
0
```

আরেকটা example:

```text
12345
↓
1234
↓
123
↓
12
↓
1
↓
0
```

এখানে reduction:

```c
n / 10
```

আরেকটা:

```text
Array Range:
0 ... 9

↓

1 ... 9

↓

2 ... 9
```

এখানে reduction:

```text
index + 1
```

Mental Rule:

```text
Recursive Call
must move toward
Base Case
```

---

# 9. Wrong Recursive Direction

ধরো:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n + 1);
}
```

Call:

```c
fun(5);
```

Flow:

```text
5
↓
6
↓
7
↓
8
↓
...
```

কিন্তু Base Case:

```text
n == 0
```

Problem:

```text
Recursive Call
Base Case-এর দিকে যাচ্ছে না
```

বরং দূরে যাচ্ছে।

তাই শুধু Base Case থাকলেই যথেষ্ট না।

দরকার:

```text
Base Case
+
Progress Toward Base Case
```

---

# 10. Recursion as Problem Decomposition

Chapter 3-এ শিখেছিলে:

```text
Big Problem
↓
Break into Smaller Problems
```

Recursion হচ্ছে সেই idea-এর special form।

Difference:

### Normal Decomposition

```text
Problem
│
├── Input Task
├── Prime Check
├── Counting
└── Output
```

এখানে subproblem-এর ধরন আলাদা।

### Recursive Decomposition

```text
Problem of Size n
        ↓
Problem of Size n - 1
        ↓
Problem of Size n - 2
        ↓
...
```

এখানে:

```text
Same Type of Problem
+
Smaller Input
```

এটাই Recursion-এর core idea।

---

# 11. Example - Sum from 1 to n

Problem:

[
1 + 2 + 3 + \dots + n
]

ধরো:

[
\text{sum}(5)
]

আমরা লিখতে পারি:

[
\text{sum}(5)
=============

5 + \text{sum}(4)
]

আবার:

[
\text{sum}(4)
=============

4 + \text{sum}(3)
]

General Relation:

[
\text{sum}(n)
=============

n + \text{sum}(n-1)
]

Base Case:

[
\text{sum}(0)=0
]

Code:

```c
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumN(n - 1);
}
```

---

# 12. `sumN(4)` Dry Run

Call:

```text
sumN(4)
```

Expand:

```text
4 + sumN(3)
```

Then:

```text
4 + 3 + sumN(2)
```

Then:

```text
4 + 3 + 2 + sumN(1)
```

Then:

```text
4 + 3 + 2 + 1 + sumN(0)
```

Base Case:

```text
sumN(0)
=
0
```

তাই:

```text
4 + 3 + 2 + 1 + 0
=
10
```

Visual:

```text
sumN(4)
   ↓
4 + sumN(3)
        ↓
    3 + sumN(2)
            ↓
        2 + sumN(1)
                ↓
            1 + sumN(0)
                    ↓
                    0
```

Result ফিরে আসে:

```text
0
↓
1 + 0 = 1
↓
2 + 1 = 3
↓
3 + 3 = 6
↓
4 + 6 = 10
```

এখানে প্রথমবার একটি important idea দেখা যাচ্ছে:

```text
Calls Go Down
↓
Results Come Back Up
```

এটা Chapter 6-এ আরও পরিষ্কার হবে।

---

# 13. Example - Factorial

Factorial:

[
5! = 5 \times 4 \times 3 \times 2 \times 1
]

Relation:

[
n! = n \times (n-1)!
]

Base Case:

[
0! = 1
]

Code:

```c
long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

---

## Dry Run

```text
factorial(4)
```

Expansion:

```text
4 × factorial(3)
```

```text
4 × 3 × factorial(2)
```

```text
4 × 3 × 2 × factorial(1)
```

```text
4 × 3 × 2 × 1 × factorial(0)
```

Base:

```text
factorial(0)
=
1
```

Final:

```text
4 × 3 × 2 × 1 × 1
=
24
```

---

# 14. Example - Count Digits Recursively

Number:

```text
12345
```

একটা digit remove করতে:

```c
n / 10
```

Flow:

```text
12345
↓
1234
↓
123
↓
12
↓
1
↓
0
```

প্রতিটি step-এ:

```text
One Digit Counted
```

Relation:

```text
digitCount(n)
=
1 + digitCount(n / 10)
```

Simple version:

```c
int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return 1 + countDigits(n / 10);
}
```

Example:

```text
countDigits(1234)

=
1 + countDigits(123)

=
1 + 1 + countDigits(12)

=
1 + 1 + 1 + countDigits(1)

=
1 + 1 + 1 + 1 + countDigits(0)

=
4
```

### Edge Case

এই simple version-এ:

```text
countDigits(0)
```

return করবে:

```text
0
```

কিন্তু সাধারণভাবে number `0`-এর digit count:

```text
1
```

তাই real problem-এ `0` input আলাদাভাবে handle করতে হবে।

এই Chapter-এ মূল focus recursion mental model, তাই edge-case handling মনে রাখাই যথেষ্ট।

---

# 15. Recursion Pattern Recognition

সব Problem recursion চায় না।

Recursion consider করতে পারো যখন Problem-এ এমন relation দেখতে পাও:

```text
Current Answer
=
Current Part
+
Smaller Same Problem
```

Example:

### Sum

```text
sum(n)
=
n + sum(n - 1)
```

### Factorial

```text
fact(n)
=
n × fact(n - 1)
```

### Digit Count

```text
countDigits(n)
=
1 + countDigits(n / 10)
```

Mental Pattern:

```text
Current Problem
      ↓
Take / Handle One Part
      ↓
Reduce Input
      ↓
Call Same Function
```

---

# 16. Four Questions to Ask

Recursive problem দেখলে:

```text
1. Function কী represent করছে?

2. Base Case কী?

3. Problem ছোট হচ্ছে কীভাবে?

4. Current Work এবং Smaller Answer কীভাবে combine হচ্ছে?
```

Example:

```text
sumN(n)
```

Answer:

```text
Function Represents:
1 থেকে n পর্যন্ত sum

Base Case:
n == 0

Reduction:
n → n - 1

Combination:
n + sumN(n - 1)
```

---

# 17. Common Mistake - Base Case ভুল

Wrong:

```c
int sumN(int n)
{
    if (n == 1)
    {
        return 0;
    }

    return n + sumN(n - 1);
}
```

ধরো:

```text
sumN(3)
```

তাহলে:

```text
3 + sumN(2)
↓
3 + 2 + sumN(1)
↓
3 + 2 + 0
↓
5
```

কিন্তু correct answer:

```text
6
```

Base Case শুধু recursion stop করবে না।

Base Case-এর **answer-ও mathematically correct** হতে হবে।

Possible correct versions:

```c
if (n == 0)
{
    return 0;
}
```

অথবা:

```c
if (n == 1)
{
    return 1;
}
```

---

# 18. Common Mistake - Recursive Result ব্যবহার না করা

Wrong:

```c
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    sumN(n - 1);

    return n;
}
```

এখানে smaller problem solve হচ্ছে:

```c
sumN(n - 1);
```

কিন্তু result ব্যবহার হচ্ছে না।

Correct:

```c
return n + sumN(n - 1);
```

Mental Model:

```text
Smaller Problem Solved
        ↓
Get Its Answer
        ↓
Combine with Current Part
```

---

# 19. Common Mistake - Recursion Trace না করা

Beginner হিসেবে শুধু code দেখে:

```text
বুঝেছি
```

ধরে নেবে না।

কমপক্ষে এইগুলো হাতে trace করবে:

```text
countDown(3)

sumN(3)

factorial(4)

countDigits(123)
```

Dry Run format:

```text
Function Call:
sumN(3)

Expansion:
3 + sumN(2)

Expansion:
3 + 2 + sumN(1)

Expansion:
3 + 2 + 1 + sumN(0)

Base:
0

Result:
6
```

---

# 20. Loop vs Recursion - Quick Comparison

| Topic               | Loop            | Recursion          |
| ------------------- | --------------- | ------------------ |
| Repetition          | Iteration       | Function Calls     |
| Stop                | Loop Condition  | Base Case          |
| Progress            | `i++`, `i--`    | Smaller Argument   |
| Simple Traversal    | Usually Natural | Often Unnecessary  |
| Recursive Structure | Less Natural    | Often Natural      |
| Beginner Risk       | Infinite Loop   | Infinite Recursion |

বর্তমান Bootcamp-এর জন্য rule:

```text
Simple Array Traversal
↓
Prefer Loop
```

```text
Recursive Relation Clearly Visible
↓
Consider Recursion
```

---

# 🧪 Practice Session

এই Chapter-এ practice ছোট রাখা হচ্ছে। Chapter 6-এ call flow আরও detail-এ আসবে।

## Task 1 - Print n to 1

Example:

```text
Input:
5

Output:
5 4 3 2 1
```

Function:

```c
void printDown(int n)
```

Mental Pattern:

```text
Print Current
↓
Reduce
↓
Recursive Call
```

---

## Task 2 - Sum 1 to n

Example:

```text
Input:
5

Output:
15
```

Function:

```c
int sumN(int n)
```

Relation:

[
\text{sumN}(n)=n+\text{sumN}(n-1)
]

---

## Task 3 - Factorial

Example:

```text
Input:
5

Output:
120
```

Function:

```c
long long factorial(int n)
```

---

## Task 4 - Count Digits

Example:

```text
Input:
72891

Output:
5
```

Function:

```c
int countDigits(int n)
```

---

# 🧠 Dry Run Assignment

Code run করার আগে predict করবে।

## Problem A

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    fun(n - 1);
}
```

Call:

```c
fun(4);
```

নিজে লিখবে:

```text
Output:

Call Sequence:

Base Case Reached At:
```

---

## Problem B

```c
int mystery(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + mystery(n - 1);
}
```

Call:

```c
mystery(4);
```

নিজে লিখবে:

```text
Expansion:

Return Flow:

Final Answer:
```

---

# 📝 Chapter 5 Assignment

## Assignment A - নিজের ভাষায় Explain

```text
1. Recursion কী?

2. Base Case কী?

3. Recursive Case কী?

4. Problem Reduction কী?

5. Recursive Call কেন Base Case-এর দিকে যেতে হবে?

6. sumN(n) কীভাবে smaller problem ব্যবহার করে?

7. Base Case-এর return value correct হওয়া কেন জরুরি?
```

---

## Assignment B - Mandatory Code

শুধু এই ৪টি:

```text
1. printDown(n)

2. sumN(n)

3. factorial(n)

4. countDigits(n)
```

প্রতিটি Function-এর আগে লিখবে:

```c
/*
Function Meaning:
Base Case:
Reduction:
Combination:
*/
```

Example:

```c
/*
Function Meaning:
Returns sum from 1 to n

Base Case:
n == 0 → return 0

Reduction:
n → n - 1

Combination:
n + sumN(n - 1)
*/
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Recursion
Base Case
Recursive Case
Problem Reduction
Recursive Call
Call Sequence
Return Flow
Stack Overflow
```

প্রতিটির জন্য:

```text
Simple Meaning
+
Tiny Example
```

যথেষ্ট।

---

# 🧠 Chapter 5 Master Mental Model

```text
              PROBLEM OF SIZE n
                       │
                       ▼
              Is Base Case Reached?
                  │           │
                 Yes          No
                  │           │
                  ▼           ▼
            Return Answer   Handle Current Part
                                  │
                                  ▼
                          Reduce Problem Size
                                  │
                                  ▼
                           Recursive Call
                                  │
                                  ▼
                          Get Smaller Answer
                                  │
                                  ▼
                             Combine Result
                                  │
                                  ▼
                                Return
```

Short version:

```text
Base Case
+
Smaller Problem
+
Recursive Call
+
Combine Result
=
Basic Recursion
```

---

# 🔥 Chapter 5 Key Lesson

Recursion দেখলে এইভাবে চিন্তা করবে না:

```text
এই Function নিজেকে Call করছে!
এটা কীভাবে সম্ভব?
```

চিন্তা করবে:

```text
Function-এর Meaning কী?
        ↓
Smallest Case কী?
        ↓
Input কীভাবে ছোট হচ্ছে?
        ↓
Smaller Problem-এর Answer কীভাবে ব্যবহার হচ্ছে?
```

Example:

```text
sumN(5)
```

মানে:

```text
5 পর্যন্ত Sum
```

আর:

```text
sumN(4)
```

মানে:

```text
4 পর্যন্ত Sum
```

তাই:

```text
sumN(5)
=
5 + sumN(4)
```

এই **“smaller version of the same problem”** চিনতে পারাই recursion শেখার আসল foundation।

---

# ✅ Chapter 5 Completion Checklist

```text
[ ] Recursion কী বুঝি

[ ] Base Case identify করতে পারি

[ ] Recursive Case identify করতে পারি

[ ] Problem Reduction বুঝি

[ ] Recursive Call Base Case-এর দিকে যাচ্ছে কি না check করতে পারি

[ ] countDown() trace করতে পারি

[ ] sumN() relation বুঝি

[ ] factorial() relation বুঝি

[ ] countDigits() reduction বুঝি

[ ] Base Case-এর answer correct হওয়া কেন দরকার বুঝি

[ ] Recursive result combine করা বুঝি

[ ] Basic dry run করতে পারি

[ ] Mandatory 4টি code নিজে লিখেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ✅ Chapter 5 - Recursion Mental Model
│
├── ⬜ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ⬜ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

Chapter 5-এর পরে তোমার Recursion সম্পর্কে অন্তত এই চিন্তাটা পরিষ্কার থাকা উচিত:

```text
Recursion
=
Same Problem
on Smaller Input

until

Base Case
```

Chapter 6-এ এর পরের সবচেয়ে গুরুত্বপূর্ণ অংশ আসবে: **একই recursive code-এ `printf()` call-এর আগে বা পরে রাখলে output কেন সম্পূর্ণ উল্টে যায়, Call Phase ও Return Phase কীভাবে কাজ করে, এবং recursive execution হাতে trace করার নিয়ম।**

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 6 - Base Case, Recursive Case & Call Flow

> **Chapter Goal:** Recursive function আসলে কোন order-এ execute হয়, Call Phase ও Return Phase কী, এবং recursive code হাতে ধরে trace করতে শেখা।
> **Estimated Time:** 50–70 minutes
> **Focus:** Call Phase → Base Case → Return Phase → Before/After Recursive Call → Dry Run

---

# 🎯 Chapter Mission

Chapter 5-এ তুমি Recursion-এর basic mental model শিখেছ:

```text
Problem of Size n
        ↓
Smaller Problem
        ↓
Smaller Problem
        ↓
Base Case
        ↓
Stop
```

কিন্তু Recursion পুরোপুরি বুঝতে হলে আরও একটি জিনিস বুঝতে হবে:

```text
Function Call নিচে যায়
        ↓
Base Case-এ পৌঁছায়
        ↓
তারপর Function Return করতে করতে উপরে আসে
```

অর্থাৎ Recursive execution-এর দুটি গুরুত্বপূর্ণ phase আছে:

```text
Recursion Execution
│
├── 1. Call Phase
│
└── 2. Return Phase
```

এই Chapter শেষে তুমি বুঝতে পারবে:

```text
printf() Recursive Call-এর আগে থাকলে
কেন একরকম Output আসে?

printf() Recursive Call-এর পরে থাকলে
কেন উল্টো Output আসে?
```

এবং নিজে trace করতে পারবে:

```text
fun(3)
↓
fun(2)
↓
fun(1)
↓
fun(0)
↑
return
↑
return
↑
return
```

---

# 1. Chapter 5 Quick Recall

আমরা এই Function দেখেছিলাম:

```c
void countDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    countDown(n - 1);
}
```

Call:

```c
countDown(3);
```

Output:

```text
3 2 1
```

এখন প্রশ্ন:

> Output `3 2 1` কেন হলো?

কারণ:

```c
printf("%d ", n);
```

Recursive Call-এর **আগে** execute হয়েছে।

Order:

```text
Print
↓
Recursive Call
```

তাই:

```text
countDown(3)
│
├── Print 3
└── countDown(2)
      │
      ├── Print 2
      └── countDown(1)
            │
            ├── Print 1
            └── countDown(0)
                  │
                  └── Return
```

Output:

```text
3 2 1
```

এখন এই idea আরও deeply বুঝব।

---

# 2. Recursive Function-এর Execution সরল Line না

Normal code:

```c
printf("A");

printf("B");

printf("C");
```

Execution:

```text
A
↓
B
↓
C
```

কিন্তু Recursive Function:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    fun(n - 1);
}
```

এখানে execution:

```text
fun(3)
↓
fun(2)
↓
fun(1)
↓
fun(0)
```

তারপর:

```text
fun(0) returns
↑
fun(1) finishes
↑
fun(2) finishes
↑
fun(3) finishes
```

এখানে execution-এর direction দুইদিকে:

```text
Call Phase
    ↓↓↓

Return Phase
    ↑↑↑
```

---

# 3. Call Phase কী?

যখন Function একের পর এক Recursive Call করতে থাকে এবং Base Case-এর দিকে যায়, সেই journey-কে আমরা এখানে বলব:

```text
Call Phase
```

Example:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n - 1);
}
```

Call:

```c
fun(3);
```

Call Phase:

```text
fun(3)
   ↓
fun(2)
   ↓
fun(1)
   ↓
fun(0)
```

এই সময়ে:

```text
Problem Size
3
↓
2
↓
1
↓
0
```

অর্থাৎ:

```text
Call Phase
=
Moving Toward Base Case
```

---

# 4. Return Phase কী?

Base Case-এ পৌঁছানোর পরে Functionগুলো finish করতে করতে আগের Call-এ ফিরে আসে।

```text
fun(0)
   ↑
fun(1)
   ↑
fun(2)
   ↑
fun(3)
```

এটাকে আমরা বলব:

```text
Return Phase
```

Mental Model:

```text
CALL PHASE

fun(3)
   ↓
fun(2)
   ↓
fun(1)
   ↓
fun(0)

──────────────

RETURN PHASE

fun(0)
   ↑
fun(1)
   ↑
fun(2)
   ↑
fun(3)
```

সবচেয়ে গুরুত্বপূর্ণ rule:

```text
Calls:
3 → 2 → 1 → 0

Returns:
0 → 1 → 2 → 3
```

---

# 5. Before Recursive Call vs After Recursive Call

এখন Recursion-এর সবচেয়ে গুরুত্বপূর্ণ beginner concept।

দুটি Function compare করি।

---

## Version A - Print Before Recursive Call

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    fun(n - 1);
}
```

Call:

```c
fun(3);
```

Output:

```text
3 2 1
```

কারণ:

```text
Current Work
↓
Recursive Call
```

অর্থাৎ:

```text
Print 3
↓
Call fun(2)

Print 2
↓
Call fun(1)

Print 1
↓
Call fun(0)
```

---

## Version B - Print After Recursive Call

এখন শুধু দুইটি line-এর order change করি:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n - 1);

    printf("%d ", n);
}
```

Call:

```c
fun(3);
```

Output:

```text
1 2 3
```

প্রশ্ন:

> কেন?

কারণ `printf()` execute করার আগে smaller call complete হতে হবে।

Flow:

```text
fun(3)
↓
আগে fun(2) complete করো

fun(2)
↓
আগে fun(1) complete করো

fun(1)
↓
আগে fun(0) complete করো

fun(0)
↓
return
```

এখন Return Phase শুরু:

```text
Back to fun(1)
↓
Print 1

Back to fun(2)
↓
Print 2

Back to fun(3)
↓
Print 3
```

Output:

```text
1 2 3
```

---

# 6. সবচেয়ে গুরুত্বপূর্ণ Visual Model

এই code:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("Before %d\n", n);

    fun(n - 1);

    printf("After %d\n", n);
}
```

Call:

```c
fun(3);
```

এখন predict করো।

Execution:

```text
fun(3)
│
├── Before 3
│
└── fun(2)
      │
      ├── Before 2
      │
      └── fun(1)
            │
            ├── Before 1
            │
            └── fun(0)
                  │
                  └── return
            │
            └── After 1
      │
      └── After 2
│
└── After 3
```

Final Output:

```text
Before 3
Before 2
Before 1
After 1
After 2
After 3
```

এখান থেকে rule:

```text
Recursive Call-এর আগে থাকা Code
        ↓
Call Phase-এ execute হয়
```

আর:

```text
Recursive Call-এর পরে থাকা Code
        ↓
Return Phase-এ execute হয়
```

---

# 7. একটি সহজ Real-Life Mental Model

ধরো তিনটি Room আছে:

```text
Room 3
↓
Room 2
↓
Room 1
↓
Exit
```

তুমি প্রতিটি Room-এ ঢোকার সময় Room Number লিখছ।

তাহলে:

```text
Enter Room 3 → Write 3
Enter Room 2 → Write 2
Enter Room 1 → Write 1
```

Result:

```text
3 2 1
```

এটা:

```text
Work Before Recursive Call
```

এখন ধরো বের হওয়ার সময় Number লিখছ:

```text
Exit Room 1 → Write 1
Exit Room 2 → Write 2
Exit Room 3 → Write 3
```

Result:

```text
1 2 3
```

এটা:

```text
Work After Recursive Call
```

Recursion-এর mental picture:

```text
Entering
3 → 2 → 1

Exiting
1 → 2 → 3
```

---

# 8. Print `n` to `1`

Problem:

> `n` থেকে `1` পর্যন্ত print করো।

Example:

```text
Input:
5

Output:
5 4 3 2 1
```

আমাদের দরকার descending order।

তাই:

```text
Current Value আগে Print
↓
তারপর Smaller Problem
```

Code:

```c
void printDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    printDown(n - 1);
}
```

Structure:

```text
Base Case
↓
Current Work
↓
Recursive Call
```

---

# 9. Print `1` to `n`

Problem:

> `1` থেকে `n` পর্যন্ত print করো।

Example:

```text
Input:
5

Output:
1 2 3 4 5
```

এখন ছোট value আগে দরকার।

তাই:

```text
Smaller Problem আগে
↓
Current Value পরে
```

Code:

```c
void printUp(int n)
{
    if (n == 0)
    {
        return;
    }

    printUp(n - 1);

    printf("%d ", n);
}
```

Structure:

```text
Base Case
↓
Recursive Call
↓
Current Work
```

---

# 10. `printUp(4)` Full Trace

Code:

```c
void printUp(int n)
{
    if (n == 0)
    {
        return;
    }

    printUp(n - 1);

    printf("%d ", n);
}
```

Call:

```c
printUp(4);
```

## Call Phase

```text
printUp(4)
↓
printUp(3)
↓
printUp(2)
↓
printUp(1)
↓
printUp(0)
```

এখনও কিছু print হয়নি।

কারণ:

```c
printf()
```

Recursive Call-এর পরে।

---

## Base Case

```text
printUp(0)
↓
return
```

---

## Return Phase

```text
Back to printUp(1)
↓
Print 1

Back to printUp(2)
↓
Print 2

Back to printUp(3)
↓
Print 3

Back to printUp(4)
↓
Print 4
```

Output:

```text
1 2 3 4
```

---

# 11. Pending Work কী?

এই concept Recursion বোঝার জন্য useful।

Code:

```c
return n + sumN(n - 1);
```

যখন:

```text
sumN(4)
```

call হয়, তখন `4 +` কাজটা complete হতে পারে না।

কারণ আগে দরকার:

```text
sumN(3)
```

তাই conceptually:

```text
4 + [Waiting for sumN(3)]
```

তারপর:

```text
3 + [Waiting for sumN(2)]
```

তারপর:

```text
2 + [Waiting for sumN(1)]
```

তারপর:

```text
1 + [Waiting for sumN(0)]
```

এই waiting কাজগুলোকে mentalভাবে ভাবতে পারো:

```text
Pending Work
```

Visual:

```text
4 + ?
    ↓
  3 + ?
      ↓
    2 + ?
        ↓
      1 + ?
          ↓
          0
```

Base Case answer পাওয়ার পর pending work complete হয়:

```text
sumN(0) = 0

1 + 0 = 1

2 + 1 = 3

3 + 3 = 6

4 + 6 = 10
```

---

# 12. Return Value Flow

এই Function:

```c
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumN(n - 1);
}
```

Call:

```c
sumN(3);
```

Call Phase:

```text
sumN(3)
↓
sumN(2)
↓
sumN(1)
↓
sumN(0)
```

Return Value Flow:

```text
sumN(0)
returns 0
```

তারপর:

```text
sumN(1)
returns 1 + 0
returns 1
```

তারপর:

```text
sumN(2)
returns 2 + 1
returns 3
```

তারপর:

```text
sumN(3)
returns 3 + 3
returns 6
```

Compact Visual:

```text
CALL FLOW

sumN(3)
   ↓
sumN(2)
   ↓
sumN(1)
   ↓
sumN(0)


RETURN FLOW

sumN(0) → 0
   ↑
sumN(1) → 1
   ↑
sumN(2) → 3
   ↑
sumN(3) → 6
```

---

# 13. Function Call Frame - Beginner Mental Model

প্রতিটি Function Call-কে আলাদা একটি ছোট box হিসেবে ভাবো।

Call:

```c
fun(3);
```

Conceptually:

```text
┌─────────────────┐
│ fun(3)          │
│ n = 3           │
│ waiting...      │
└─────────────────┘
        ↓
┌─────────────────┐
│ fun(2)          │
│ n = 2           │
│ waiting...      │
└─────────────────┘
        ↓
┌─────────────────┐
│ fun(1)          │
│ n = 1           │
│ waiting...      │
└─────────────────┘
        ↓
┌─────────────────┐
│ fun(0)          │
│ Base Case       │
└─────────────────┘
```

তারপর নিচের box finish হয়:

```text
fun(0) Finished
        ↑
fun(1) Continues
        ↑
fun(2) Continues
        ↑
fun(3) Continues
```

প্রতিটি Call-এর নিজের parameter value আছে:

```text
fun(3) → n = 3

fun(2) → n = 2

fun(1) → n = 1

fun(0) → n = 0
```

এটা বুঝতে পারলে recursive tracing অনেক সহজ হয়ে যায়।

---

# 14. Base Case শুধু Stop না

Chapter 5-এ আমরা দেখেছি Base Case recursion stop করে।

কিন্তু return-value recursion-এ Base Case আরও একটি কাজ করে:

```text
Base Case
│
├── Stops Recursion
│
└── Provides Initial Answer
```

Example:

```c
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumN(n - 1);
}
```

এখানে:

```text
return 0
```

Return Flow শুরু করার জন্য initial answer দেয়।

Factorial:

```c
long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

এখানে Base Case:

```text
return 1
```

কারণ:

[
0! = 1
]

এবং multiplication-এর জন্য:

```text
1
```

correct starting value।

---

# 15. Sum এবং Factorial Compare

## Sum

Relation:

[
S(n)=n+S(n-1)
]

Base:

[
S(0)=0
]

Code:

```c
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumN(n - 1);
}
```

---

## Factorial

Relation:

[
F(n)=n\times F(n-1)
]

Base:

[
F(0)=1
]

Code:

```c
long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

Compare:

```text
Sum
↓
Combination Operator: +

Base Value: 0
```

```text
Factorial
↓
Combination Operator: ×

Base Value: 1
```

Mental observation:

```text
Recursive Structure Same

But

Combination Logic Different
```

---

# 16. Recursive Array Sum

এখন Day 2 Array + Day 4 Recursion combine করি।

Problem:

> Array-এর সব element-এর sum recursively বের করো।

Array:

```text
5 2 7 3
```

একভাবে চিন্তা:

```text
Sum from index 0
=
arr[0]
+
Sum from index 1
```

তারপর:

```text
Sum from index 1
=
arr[1]
+
Sum from index 2
```

Function:

```c
int arraySum(int arr[], int n, int index)
{
    if (index == n)
    {
        return 0;
    }

    return arr[index] + arraySum(arr, n, index + 1);
}
```

Call:

```c
int result = arraySum(arr, n, 0);
```

---

# 17. Recursive Array Sum Dry Run

Array:

```text
5 2 7
```

Call:

```text
arraySum(arr, 3, 0)
```

Expansion:

```text
arr[0]
+
arraySum(arr, 3, 1)
```

অর্থাৎ:

```text
5
+
arraySum(index 1)
```

তারপর:

```text
5
+
2
+
arraySum(index 2)
```

তারপর:

```text
5
+
2
+
7
+
arraySum(index 3)
```

Base Case:

```text
index == n

3 == 3
```

Return:

```text
0
```

তাই:

```text
5 + 2 + 7 + 0
=
14
```

Pattern:

```text
Current Element
+
Remaining Array Sum
```

Reduction:

```text
index
↓
index + 1
```

Base Case:

```text
index == n
```

---

# 18. Recursive String Length

String:

```text
hello
```

আমরা জানি String শেষ হয়:

```text
'\0'
```

Recursive relation:

```text
Length from current index
=
1
+
Length from next index
```

Function:

```c
int stringLength(char str[], int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }

    return 1 + stringLength(str, index + 1);
}
```

Call:

```c
int length = stringLength(str, 0);
```

For:

```text
hello
```

Expansion:

```text
1 + length("ello")
```

তারপর:

```text
1 + 1 + length("llo")
```

তারপর:

```text
1 + 1 + 1 + length("lo")
```

তারপর:

```text
1 + 1 + 1 + 1 + length("o")
```

তারপর:

```text
1 + 1 + 1 + 1 + 1 + length("")
```

Base:

```text
'\0'
↓
return 0
```

Final:

```text
5
```

---

# 19. দুই পাশে Code থাকলে কীভাবে Trace করবে?

এই code দেখো:

```c
void mystery(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    mystery(n - 1);

    printf("%d ", n);
}
```

Call:

```c
mystery(3);
```

অনুমান করে answer দেবে না।

Structure বানাও:

```text
mystery(3)

Print 3
↓
mystery(2)
↓
Print 3
```

তার ভিতরে:

```text
mystery(2)

Print 2
↓
mystery(1)
↓
Print 2
```

তার ভিতরে:

```text
mystery(1)

Print 1
↓
mystery(0)
↓
Print 1
```

Combine:

```text
3
2
1
1
2
3
```

Output:

```text
3 2 1 1 2 3
```

Mental Rule:

```text
Before Call Code
↓
Descending Order

After Call Code
↓
Ascending Return Order
```

---

# 20. Trace Table Method

Recursion বুঝতে না পারলে একটি table বানাতে পারো।

Function:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("A%d ", n);

    fun(n - 1);

    printf("B%d ", n);
}
```

Call:

```text
fun(3)
```

Trace:

| Event | Current Call | Action     |
| ----- | ------------ | ---------- |
| 1     | `fun(3)`     | Print `A3` |
| 2     | `fun(2)`     | Print `A2` |
| 3     | `fun(1)`     | Print `A1` |
| 4     | `fun(0)`     | Return     |
| 5     | `fun(1)`     | Print `B1` |
| 6     | `fun(2)`     | Print `B2` |
| 7     | `fun(3)`     | Print `B3` |

Final Output:

```text
A3 A2 A1 B1 B2 B3
```

এই table method recursion tracing-এর জন্য খুব useful।

---

# 21. Recursive Function Dry Run করার Standard Method

এখন থেকে recursive code দেখলে এই ৫ ধাপ follow করবে।

## Step 1 - Function Meaning লেখো

Example:

```text
sumN(n)
=
1 থেকে n পর্যন্ত Sum
```

---

## Step 2 - Base Case mark করো

```text
n == 0
↓
return 0
```

---

## Step 3 - Call Sequence লেখো

```text
sumN(3)
↓
sumN(2)
↓
sumN(1)
↓
sumN(0)
```

---

## Step 4 - Base Answer লেখো

```text
sumN(0)
=
0
```

---

## Step 5 - Return Flow লেখো

```text
sumN(1)
=
1 + 0
=
1

sumN(2)
=
2 + 1
=
3

sumN(3)
=
3 + 3
=
6
```

এই format follow করলে confusion অনেক কমে যাবে।

---

# 22. Common Mistake - শুধু Call Flow দেখা

অনেকে Recursion দেখলে শুধু:

```text
3
↓
2
↓
1
↓
0
```

দেখে।

কিন্তু return-value recursion-এ এটুকু যথেষ্ট না।

তোমাকে দুইটা flow দেখতে হবে:

```text
CALL FLOW
3 → 2 → 1 → 0
```

এবং:

```text
RETURN VALUE FLOW
0 → 1 → 3 → 6
```

`sumN(3)`-এর ক্ষেত্রে:

```text
Input Flow:
3 → 2 → 1 → 0

Answer Flow:
0 → 1 → 3 → 6
```

---

# 23. Common Mistake - Call-এর পরে Code ভুলে যাওয়া

Code:

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n - 1);

    printf("%d ", n);
}
```

Beginner অনেক সময় ভাবে:

```text
fun(3)
↓
fun(2)
↓
fun(1)
↓
fun(0)
↓
শেষ
```

এটা ভুল।

`fun(0)` শেষ হওয়ার পর:

```text
fun(1)-এর বাকি Code আছে
↓
printf(1)

fun(2)-এর বাকি Code আছে
↓
printf(2)

fun(3)-এর বাকি Code আছে
↓
printf(3)
```

তাই:

```text
Function Call শেষ
≠
সব Parent Function সঙ্গে সঙ্গে হারিয়ে গেছে
```

আগের Calls তাদের বাকি কাজ continue করে।

---

# 24. Common Mistake - Base Case Hit মানেই পুরো Program শেষ ভাবা

Base Case:

```c
if (n == 0)
{
    return;
}
```

এখানে `return` শুধু current call:

```text
fun(0)
```

শেষ করে।

তারপর control ফিরে যায়:

```text
fun(1)
```

এর কাছে।

তারপর:

```text
fun(2)
```

তারপর:

```text
fun(3)
```

অর্থাৎ:

```text
Base Case
↓
Stops Further Recursion

But
↓
Previous Calls Still Return Normally
```

---

# 25. Call Flow Pattern Recognition

Basic recursive functions-এ কয়েকটি common structure চিনে রাখো।

## Pattern A - Work Before Call

```c
work(n);

fun(n - 1);
```

Mental Effect:

```text
Large → Small
```

Example:

```text
5 4 3 2 1
```

---

## Pattern B - Work After Call

```c
fun(n - 1);

work(n);
```

Mental Effect:

```text
Small → Large
```

Example:

```text
1 2 3 4 5
```

---

## Pattern C - Combine Return Value

```c
return current + fun(smaller);
```

Mental Effect:

```text
Go Down
↓
Base Answer
↓
Build Result While Returning
```

Example:

```text
sum
factorial
digit count
array sum
```

---

## Pattern D - Work on Both Sides

```c
workBefore(n);

fun(n - 1);

workAfter(n);
```

Mental Effect:

```text
Descending Work
↓
Base Case
↓
Ascending Work
```

---

# 🧪 Practice Session

এই Chapter-এর practice মূলত tracing-focused।

কারণ Recursion শুধু code লিখে শেখা যায় না।

---

## Task 1 - Predict Output

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    fun(n - 1);
}
```

Call:

```c
fun(5);
```

লিখবে:

```text
Call Flow:

Output:

Return Order:
```

---

## Task 2 - Predict Output

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n - 1);

    printf("%d ", n);
}
```

Call:

```c
fun(5);
```

লিখবে:

```text
Call Flow:

Base Case:

Return Phase:

Output:
```

---

## Task 3 - Both Sides

```c
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    fun(n - 1);

    printf("%d ", n);
}
```

Call:

```c
fun(3);
```

Code run করার আগে output predict করবে।

---

## Task 4 - Return Value Trace

```c
int mystery(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + mystery(n - 1);
}
```

Call:

```c
mystery(5);
```

লিখবে:

```text
Call Sequence:

Expansion:

Base Answer:

Return Flow:

Final Answer:
```

---

# 💻 Coding Practice

## Problem 1 - Print 1 to n

Function:

```c
void printUp(int n)
```

Example:

```text
Input:
5

Output:
1 2 3 4 5
```

Condition:

> Loop ব্যবহার করবে না।

---

## Problem 2 - Print n to 1

Function:

```c
void printDown(int n)
```

Example:

```text
Input:
5

Output:
5 4 3 2 1
```

---

## Problem 3 - Recursive Array Sum

Function:

```c
int arraySum(int arr[], int n, int index)
```

Example:

```text
Array:
5 2 7 3

Result:
17
```

Call:

```c
arraySum(arr, n, 0);
```

---

## Problem 4 - Recursive String Length

Function:

```c
int stringLength(char str[], int index)
```

Example:

```text
Input:
competitive

Output:
11
```

`strlen()` ব্যবহার করবে না।

---

# 📝 Chapter 6 Assignment

## Assignment A - Trace by Hand

নিচের চারটি trace করবে:

```text
1. printDown(4)

2. printUp(4)

3. sumN(4)

4. factorial(4)
```

Format:

````markdown
## Function

### Function Meaning

...

### Base Case

...

### Call Flow

```text
...
↓
...
````

### Return Flow

```text
...
↑
...
```

### Final Result

...

````

---

## Assignment B - Explain in Your Own Words

নিজের ভাষায় উত্তর লিখবে:

```text
1. Call Phase কী?

2. Return Phase কী?

3. Recursive Call-এর আগে print করলে কী হয়?

4. Recursive Call-এর পরে print করলে কী হয়?

5. Pending Work কী?

6. Base Case hit করার পর previous calls-এর কী হয়?

7. Call Flow এবং Return Value Flow-এর difference কী?

8. কেন প্রতিটি recursive call-এর parameter value আলাদা?
````

---

## Assignment C - Mandatory Implementation

নিজে লিখবে:

```text
1. printDown(n)

2. printUp(n)

3. arraySum(arr, n, index)

4. stringLength(str, index)
```

এখানে copy-paste করবে না।

প্রথমে:

```text
Function Meaning
↓
Base Case
↓
Reduction
↓
Current Work Position
```

লিখে তারপর code করবে।

---

# 📚 Glossary Update

তোমার `CP_Dictionary.md`-এ add করবে:

```text
Call Phase
Return Phase
Call Flow
Return Flow
Pending Work
Call Frame
Base Answer
Execution Order
```

Format:

```text
Term
↓
Simple Meaning
↓
Tiny Example
```

---

# 🧠 Chapter 6 Master Mental Model

```text
                  fun(4)
                     │
                     ▼
                  fun(3)
                     │
                     ▼
                  fun(2)
                     │
                     ▼
                  fun(1)
                     │
                     ▼
                  fun(0)
                     │
                 BASE CASE
                     │
                     ▼
              Return to fun(1)
                     │
                     ▼
              Return to fun(2)
                     │
                     ▼
              Return to fun(3)
                     │
                     ▼
              Return to fun(4)
```

এটাকে দুই ভাগে:

```text
        CALL PHASE

4 → 3 → 2 → 1 → 0

              ↓

          BASE CASE

              ↓

       RETURN PHASE

0 → 1 → 2 → 3 → 4
```

আর code position-এর rule:

```text
work();

recursiveCall();
```

মানে:

```text
Work During Call Phase
```

আর:

```text
recursiveCall();

work();
```

মানে:

```text
Work During Return Phase
```

---

# 🔥 Chapter 6 Key Lesson

Recursive Function দেখলে line-by-line normal code-এর মতো ভাববে না।

এই চারটা জিনিস আলাদা করবে:

```text
1. Base Case কোথায়?

2. Input কীভাবে ছোট হচ্ছে?

3. Recursive Call-এর আগে কী কাজ হচ্ছে?

4. Recursive Call-এর পরে কী কাজ বাকি আছে?
```

তারপর trace করবে:

```text
Call Down
↓
↓
↓
Base Case
↑
↑
↑
Return Up
```

Recursion-এর সবচেয়ে গুরুত্বপূর্ণ visualization:

```text
Going Down
=
Calling Smaller Problems

Coming Back Up
=
Finishing Pending Work
```

---

# ✅ Chapter 6 Completion Checklist

```text
[ ] Call Phase বুঝি

[ ] Return Phase বুঝি

[ ] Call Flow লিখতে পারি

[ ] Return Flow লিখতে পারি

[ ] Base Case hit করার পর কী হয় বুঝি

[ ] Print Before Call trace করতে পারি

[ ] Print After Call trace করতে পারি

[ ] Both-Side Work trace করতে পারি

[ ] Pending Work বুঝি

[ ] sumN() return flow trace করতে পারি

[ ] factorial() return flow trace করতে পারি

[ ] Recursive Array Sum বুঝি

[ ] Recursive String Length বুঝি

[ ] Trace Table বানাতে পারি

[ ] Mandatory Assignment complete করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ✅ Chapter 5 - Recursion Mental Model
│
├── ✅ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ⬜ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

## Chapter 6-এর Final Rule

```text
Before Recursive Call
        ↓
Going Down-এর সময় কাজ

Recursive Call
        ↓
Smaller Problem

After Recursive Call
        ↓
Coming Back-এর সময় কাজ
```

এখন Recursion-এর foundation অংশ শেষ। **Chapter 7 - Prefix Sum Pattern** থেকে Day 4-এর দ্বিতীয় বড় topic শুরু হবে: repeated range sum query কেন normal loop দিয়ে slow হয়, prefix array কীভাবে build করতে হয়, এবং কীভাবে (O(n)) preprocessing-এর পরে প্রতিটি range sum (O(1))-এ answer করা যায়।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 7 - Prefix Sum Pattern

> **Chapter Goal:** Repeated Range Sum Query-এর সমস্যা চিনতে শেখা এবং Prefix Sum ব্যবহার করে efficient solution তৈরি করা।
> **Estimated Time:** 50–70 minutes
> **Focus:** Range Sum → Repeated Work → Precomputation → Prefix Array → Query Formula → Index Handling

---

# 🎯 Chapter Mission

Day 2-এ তুমি শিখেছিলে:

```text
Traversal
+
Accumulator
=
Array Sum
```

যেমন:

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

এটা পুরো Array-এর Sum বের করার জন্য perfect।

কিন্তু এখন Problem একটু বদলে দিই।

Array:

```text
2 4 1 7 3 6
```

Query:

```text
Index 1 থেকে 4 পর্যন্ত Sum কত?
```

তাহলে:

```text
4 + 1 + 7 + 3
=
15
```

একটা Query হলে loop চালিয়ে answer বের করা যায়।

কিন্তু যদি থাকে:

```text
100000 elements

100000 queries
```

এখন প্রতিটি Query-এর জন্য আবার loop চালালে?

```text
Repeated Work
        ↓
Too Much Work
        ↓
Slow Solution
```

এই সমস্যার solution:

# Prefix Sum

---

# 1. প্রথমে Problem বুঝি

ধরো Array:

```text
Index:   0  1  2  3  4
Array:   2  4  1  7  3
```

তোমাকে Query দেওয়া হলো:

```text
L = 1
R = 3
```

মানে:

```text
arr[1] + arr[2] + arr[3]
```

অর্থাৎ:

```text
4 + 1 + 7
=
12
```

এ ধরনের Problem-কে আমরা বলব:

```text
Range Sum Query
```

কারণ পুরো Array-এর Sum চাই না।

চাই:

```text
একটি নির্দিষ্ট Range-এর Sum
```

Mental Model:

```text
Array
↓
Choose L
↓
Choose R
↓
Sum from L to R
```

---

# 2. Normal Solution

প্রথমে সবচেয়ে simple solution দেখি।

```c
int rangeSum(int arr[], int left, int right)
{
    int sum = 0;

    for (int i = left; i <= right; i++)
    {
        sum += arr[i];
    }

    return sum;
}
```

Call:

```c
int result = rangeSum(arr, 1, 3);
```

Array:

```text
2 4 1 7 3
```

Calculation:

```text
arr[1]
+
arr[2]
+
arr[3]

=

4 + 1 + 7

=

12
```

একটা Query-এর জন্য এই solution ঠিক আছে।

---

# 3. Problem কোথায়?

ধরো Array:

```text
2 4 1 7 3
```

Queries:

```text
Query 1:
0 3

Query 2:
1 4

Query 3:
2 4
```

Normal Solution:

```text
Query 1
↓
Traverse 0 to 3

Query 2
↓
Traverse 1 to 4

Query 3
↓
Traverse 2 to 4
```

খেয়াল করো, একই elements বারবার যোগ হচ্ছে।

Example:

```text
arr[2]
```

Query 1-এ ব্যবহার হচ্ছে।

Query 2-এ ব্যবহার হচ্ছে।

Query 3-এও ব্যবহার হচ্ছে।

অর্থাৎ:

```text
Same Work
↓
Again
↓
Again
↓
Again
```

এটাই optimization-এর clue।

---

# 4. Prefix Sum-এর Core Idea

Prefix মানে:

> শুরু থেকে একটি নির্দিষ্ট position পর্যন্ত।

Array:

```text
2 4 1 7 3
```

আমরা একটি নতুন Array বানাব:

```text
prefix
```

যেখানে:

```text
prefix[i]
=
Array-এর শুরু থেকে i পর্যন্ত Sum
```

তাহলে:

```text
prefix[0]
=
2
```

```text
prefix[1]
=
2 + 4
=
6
```

```text
prefix[2]
=
2 + 4 + 1
=
7
```

```text
prefix[3]
=
2 + 4 + 1 + 7
=
14
```

```text
prefix[4]
=
2 + 4 + 1 + 7 + 3
=
17
```

তাই:

```text
Array:

2  4  1  7  3
```

Prefix:

```text
2  6  7  14  17
```

---

# 5. Prefix Array Table

| Index | `arr[i]` | `prefix[i]` |
| ----- | -------: | ----------: |
| 0     |        2 |           2 |
| 1     |        4 |           6 |
| 2     |        1 |           7 |
| 3     |        7 |          14 |
| 4     |        3 |          17 |

Mental Meaning:

```text
prefix[0]
=
Sum of index 0 to 0
```

```text
prefix[1]
=
Sum of index 0 to 1
```

```text
prefix[2]
=
Sum of index 0 to 2
```

```text
prefix[3]
=
Sum of index 0 to 3
```

General:

```text
prefix[i]
=
arr[0] + arr[1] + ... + arr[i]
```

---

# 6. Prefix Array কীভাবে Build করব?

আমরা জানি:

```text
prefix[0] = arr[0]
```

তারপর:

```text
prefix[1]
=
prefix[0] + arr[1]
```

```text
prefix[2]
=
prefix[1] + arr[2]
```

```text
prefix[3]
=
prefix[2] + arr[3]
```

General Formula:

[
prefix[i] = prefix[i-1] + arr[i]
]

Code:

```c
prefix[0] = arr[0];

for (int i = 1; i < n; i++)
{
    prefix[i] = prefix[i - 1] + arr[i];
}
```

---

# 7. Prefix Build Dry Run

Array:

```text
3 5 2 4
```

Start:

```text
prefix[0] = arr[0]
          = 3
```

Current:

```text
Array:
3 5 2 4

Prefix:
3
```

---

### `i = 1`

```text
prefix[1]
=
prefix[0] + arr[1]

=
3 + 5

=
8
```

Prefix:

```text
3 8
```

---

### `i = 2`

```text
prefix[2]
=
prefix[1] + arr[2]

=
8 + 2

=
10
```

Prefix:

```text
3 8 10
```

---

### `i = 3`

```text
prefix[3]
=
prefix[2] + arr[3]

=
10 + 4

=
14
```

Final:

```text
Array:
3 5 2 4

Prefix:
3 8 10 14
```

---

# 8. Prefix Sum আসলে কোন Pattern?

Prefix Sum একেবারে unfamiliar কিছু না।

Day 2-এর Accumulation Pattern মনে করো:

```c
int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
```

এখানে final Sum শুধু শেষে পাওয়া যায়।

কিন্তু Prefix Sum-এ:

```text
প্রতিটি Step-এর Running Sum
```

store করা হয়।

Compare:

## Normal Accumulation

```text
Array
↓
Running Sum
↓
Final Total
```

## Prefix Sum

```text
Array
↓
Running Sum
↓
Store Every Intermediate Sum
↓
Prefix Array
```

Mental Model:

```text
Prefix Sum
=
Accumulation
+
Store Intermediate Results
```

---

# 9. Range Sum Formula কোথা থেকে আসে?

এখন সবচেয়ে গুরুত্বপূর্ণ অংশ।

Array:

```text
Index:    0  1  2  3  4
Array:    2  4  1  7  3
Prefix:   2  6  7 14 17
```

আমাদের দরকার:

```text
L = 2
R = 4
```

অর্থাৎ:

```text
arr[2] + arr[3] + arr[4]
```

Expected:

```text
1 + 7 + 3
=
11
```

এখন:

```text
prefix[4]
=
arr[0] + arr[1] + arr[2] + arr[3] + arr[4]
```

অর্থাৎ:

```text
17
```

কিন্তু আমাদের দরকার নেই:

```text
arr[0] + arr[1]
```

এই unwanted অংশ:

```text
prefix[1]
=
6
```

তাই:

```text
prefix[4] - prefix[1]
=
17 - 6
=
11
```

General Formula:

[
RangeSum(L,R)=prefix[R]-prefix[L-1]
]

যখন:

```text
L > 0
```

---

# 10. Formula Visualize করি

ধরো:

```text
Array:

[ a0 ][ a1 ][ a2 ][ a3 ][ a4 ][ a5 ]
```

আমাদের দরকার:

```text
L = 2
R = 5
```

`prefix[5]` contains:

```text
[ a0 ][ a1 ][ a2 ][ a3 ][ a4 ][ a5 ]
```

`prefix[1]` contains:

```text
[ a0 ][ a1 ]
```

Subtract:

```text
prefix[5]
-
prefix[1]
```

Result:

```text
[ a2 ][ a3 ][ a4 ][ a5 ]
```

অর্থাৎ:

```text
Range L to R
```

তাই:

```text
prefix[R]
-
prefix[L - 1]
```

---

# 11. Special Case - `L == 0`

Formula:

```text
prefix[R] - prefix[L - 1]
```

যদি:

```text
L = 0
```

তাহলে:

```text
prefix[R] - prefix[-1]
```

কিন্তু:

```text
prefix[-1]
```

valid index না।

তাই special case:

```text
If L == 0

Answer = prefix[R]
```

Otherwise:

```text
Answer = prefix[R] - prefix[L - 1]
```

Code:

```c
int rangeSum(int prefix[], int left, int right)
{
    if (left == 0)
    {
        return prefix[right];
    }

    return prefix[right] - prefix[left - 1];
}
```

---

# 12. Complete 0-Based Prefix Sum Program

```c
#include <stdio.h>

int rangeSum(int prefix[], int left, int right)
{
    if (left == 0)
    {
        return prefix[right];
    }

    return prefix[right] - prefix[left - 1];
}

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    int prefix[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int q;

    scanf("%d", &q);

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        printf("%d\n", rangeSum(prefix, left, right));
    }

    return 0;
}
```

---

# 13. Full Example

Input:

```text
5
2 4 1 7 3
3
0 2
1 3
2 4
```

Array:

```text
2 4 1 7 3
```

Prefix:

```text
2 6 7 14 17
```

---

## Query 1

```text
0 2
```

Since:

```text
L == 0
```

Answer:

```text
prefix[2]
=
7
```

Check:

```text
2 + 4 + 1
=
7
```

---

## Query 2

```text
1 3
```

Formula:

```text
prefix[3] - prefix[0]
```

Calculation:

```text
14 - 2
=
12
```

Check:

```text
4 + 1 + 7
=
12
```

---

## Query 3

```text
2 4
```

Formula:

```text
prefix[4] - prefix[1]
```

Calculation:

```text
17 - 6
=
11
```

Check:

```text
1 + 7 + 3
=
11
```

Final Output:

```text
7
12
11
```

---

# 14. Time Complexity কেন গুরুত্বপূর্ণ?

এখন Prefix Sum কেন দরকার সেটা complexity দিয়ে বুঝি।

ধরো:

```text
n = Array Size
q = Number of Queries
```

---

## Normal Approach

প্রতিটি Query-এর জন্য worst case পুরো Array traverse করতে হতে পারে।

একটি Query:

[
O(n)
]

`q` Queries:

[
O(nq)
]

যদি:

```text
n = 100000
q = 100000
```

তাহলে worst-case operation scale:

[
100000 \times 100000
====================

10^{10}
]

এটা অনেক বেশি।

---

## Prefix Sum Approach

Prefix Build:

[
O(n)
]

Each Query:

[
O(1)
]

সব Query:

[
O(q)
]

Total:

[
O(n+q)
]

Mental Comparison:

```text
Normal:

Each Query
↓
Loop Again
↓
O(nq)
```

```text
Prefix Sum:

Build Once
↓
Reuse Many Times
↓
O(n + q)
```

---

# 15. Prefix Sum-এর আসল Optimization Idea

Prefix Sum শুধু formula না।

এর পেছনের বড় idea:

```text
Do Repeated Work Once
        ↓
Store the Result
        ↓
Reuse It Many Times
```

এটাকে বলা হয়:

```text
Precomputation
```

সহজ অর্থ:

> Future Query দ্রুত answer করার জন্য আগে থেকেই useful information calculate করে রাখা।

Mental Model:

```text
Expensive Repeated Work
        ↓
Can Something Be Precomputed?
        ↓
Build Once
        ↓
Answer Fast
```

এই চিন্তা ভবিষ্যতে অনেক Algorithm-এ দেখবে।

---

# 16. Prefix Sum Build as Function

Chapter 1–4-এর Function concepts ব্যবহার করি।

```c
void buildPrefix(int arr[], long long prefix[], int n)
{
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}
```

Query Function:

```c
long long rangeSum(long long prefix[], int left, int right)
{
    if (left == 0)
    {
        return prefix[right];
    }

    return prefix[right] - prefix[left - 1];
}
```

Main flow:

```text
Input Array
↓
buildPrefix()
↓
Read Query
↓
rangeSum()
↓
Print Answer
```

Decomposition:

```text
Range Query Problem
│
├── Input
├── Prefix Build
│      └── buildPrefix()
│
├── Query Processing
│      └── rangeSum()
│
└── Output
```

---

# 17. কেন `long long` ব্যবহার করা ভালো?

ধরো:

```text
n = 100000
```

প্রতিটি value:

```text
1000000000
```

অর্থাৎ:

[
10^9
]

Total Sum হতে পারে:

[
10^5 \times 10^9
================

10^{14}
]

এটা সাধারণ 32-bit `int`-এর range-এর বাইরে।

তাই Prefix Sum-এ অনেক সময়:

```c
long long prefix[n];
```

ব্যবহার করা safer।

Example:

```c
long long rangeSum(long long prefix[], int left, int right)
```

CP mental rule:

```text
Large Array Values
+
Sum / Multiplication
        ↓
Check Overflow Risk
        ↓
Consider long long
```

---

# 18. Cleaner Prefix Sum Design - 1-Based Prefix Array

এখন একটি alternative design দেখব।

এটা future CP problems-এ খুব common।

Array:

```text
Index:   0  1  2  3  4
Array:   2  4  1  7  3
```

আমরা prefix array বানাব size:

```text
n + 1
```

এবং:

```text
prefix[0] = 0
```

তারপর:

```text
prefix[1] = 2
prefix[2] = 6
prefix[3] = 7
prefix[4] = 14
prefix[5] = 17
```

তাই:

```text
Prefix:

0 2 6 7 14 17
```

এখানে:

```text
prefix[i]
=
First i Elements-এর Sum
```

এটা আগের definition থেকে একটু আলাদা।

---

# 19. `n + 1` Prefix Build

Code:

```c
prefix[0] = 0;

for (int i = 0; i < n; i++)
{
    prefix[i + 1] = prefix[i] + arr[i];
}
```

Array:

```text
2 4 1 7 3
```

Build:

```text
prefix[0] = 0
```

তারপর:

```text
prefix[1]
=
prefix[0] + arr[0]
=
0 + 2
=
2
```

```text
prefix[2]
=
prefix[1] + arr[1]
=
2 + 4
=
6
```

এভাবে:

```text
0 2 6 7 14 17
```

---

# 20. Cleaner Query Formula

এই design-এর সবচেয়ে বড় সুবিধা:

যদি Array-এর zero-based range:

```text
L থেকে R
```

এর sum দরকার হয়, formula:

[
prefix[R+1]-prefix[L]
]

Example:

```text
Array:
2 4 1 7 3

L = 1
R = 3
```

Need:

```text
4 + 1 + 7
=
12
```

Formula:

```text
prefix[R + 1]
-
prefix[L]
```

অর্থাৎ:

```text
prefix[4]
-
prefix[1]
```

Values:

```text
14 - 2
=
12
```

এখানে:

```text
L == 0
```

এর জন্য আলাদা special case দরকার নেই।

Example:

```text
L = 0
R = 2
```

Formula:

```text
prefix[3] - prefix[0]
```

Calculation:

```text
7 - 0
=
7
```

Clean।

---

# 21. দুইটি Prefix Style Compare

## Style A - Same Size

```text
prefix[i]
=
Sum from index 0 to i
```

Build:

```c
prefix[0] = arr[0];

for (int i = 1; i < n; i++)
{
    prefix[i] = prefix[i - 1] + arr[i];
}
```

Query:

```c
if (left == 0)
{
    answer = prefix[right];
}
else
{
    answer = prefix[right] - prefix[left - 1];
}
```

---

## Style B - Size `n + 1`

```text
prefix[i]
=
Sum of first i elements
```

Build:

```c
prefix[0] = 0;

for (int i = 0; i < n; i++)
{
    prefix[i + 1] = prefix[i] + arr[i];
}
```

Query:

```c
answer = prefix[right + 1] - prefix[left];
```

---

## Bootcamp Recommendation

এই Chapter-এ দুইটিই বুঝবে।

কিন্তু নিজের future template-এর জন্য আমি recommend করব:

```text
n + 1 Prefix Array
```

কারণ:

```text
No L == 0 Special Case
+
Cleaner Formula
+
Less Index Bug
```

---

# 22. Recommended Prefix Sum Template

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        prefix[i + 1] = prefix[i] + arr[i];
    }

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long answer =
            prefix[right + 1] - prefix[left];

        printf("%lld\n", answer);
    }

    return 0;
}
```

এখানে input নেওয়ার সময়ই prefix build হচ্ছে:

```text
Read arr[i]
↓
Update prefix[i + 1]
```

তাই আলাদা second traversal দরকার হয়নি।

---

# 23. Input Reading + Prefix Build Together

সাধারণভাবে:

```c
for (int i = 0; i < n; i++)
{
    scanf("%lld", &arr[i]);
}
```

তারপর:

```c
for (int i = 0; i < n; i++)
{
    prefix[i + 1] = prefix[i] + arr[i];
}
```

এটাও ঠিক।

কিন্তু চাইলে combine করা যায়:

```c
prefix[0] = 0;

for (int i = 0; i < n; i++)
{
    scanf("%lld", &arr[i]);

    prefix[i + 1] = prefix[i] + arr[i];
}
```

Mental Model:

```text
Read Value
↓
Previous Prefix
+
Current Value
↓
Store New Prefix
```

---

# 24. Pattern Recognition - কখন Prefix Sum ভাবব?

Problem Statement-এ এই ধরনের language দেখলে alert হবে:

```text
Given an Array
```

তারপর:

```text
Answer Q Queries
```

এবং Query:

```text
Find Sum from L to R
```

তখন mental trigger:

```text
Many Range Sum Queries
        ↓
Repeated Summation?
        ↓
Prefix Sum
```

Common signals:

```text
Multiple Queries
Range Sum
Subarray Sum Query
Sum between L and R
Repeated Interval Sum
```

কিন্তু শুধু:

```text
একটা Range-এর Sum বের করো
```

হলে Prefix Sum সবসময় দরকার নেই।

কারণ Prefix build করতেই:

[
O(n)
]

সময় লাগে।

একটা Query হলে direct traversal-ও যথেষ্ট হতে পারে।

---

# 25. Prefix Sum Decision Tree

```text
Need Range Sum?
       │
       ▼
How Many Queries?
       │
   ┌───┴────┐
   │        │
  One      Many
   │        │
   ▼        ▼
Direct    Prefix Sum
Loop      Consider
```

আরও precise:

```text
Repeated Static Range Queries
            ↓
      Prefix Sum Strong Candidate
```

এখানে `Static` মানে:

> Query-এর মাঝে Array values change হচ্ছে না।

Array update হলে situation বদলে যেতে পারে-সেটা future topic।

---

# 26. Common Mistake - Formula মুখস্থ, Meaning না বোঝা

শুধু এটা মুখস্থ করবে না:

```text
prefix[R] - prefix[L - 1]
```

বরং বুঝবে:

```text
Sum from Start to R
        -
Sum Before L
        =
Sum from L to R
```

Mental Formula:

```text
Wanted Range
=
Big Prefix
-
Unwanted Left Part
```

এটা বুঝলে formula ভুলে গেলেও derive করতে পারবে।

---

# 27. Common Mistake - `L` বাদ দেওয়া

ধরো:

```text
L = 2
R = 4
```

Wrong:

```text
prefix[R] - prefix[L]
```

Same-size prefix style-এ এটা `arr[L]`-কেও বাদ দিয়ে দেয়।

Correct:

```text
prefix[R] - prefix[L - 1]
```

কারণ বাদ দিতে হবে:

```text
L-এর আগ পর্যন্ত
```

অর্থাৎ:

```text
0 ... L - 1
```

`L` নিজে wanted range-এর অংশ।

---

# 28. Common Mistake - Indexing Styles Mix করা

এটা খুব common bug।

তুমি যদি build করো:

```text
prefix[i]
=
sum from 0 to i
```

তাহলে query formula:

```text
prefix[R] - prefix[L - 1]
```

কিন্তু যদি build করো:

```text
prefix[i]
=
sum of first i elements
```

তাহলে zero-based query formula:

```text
prefix[R + 1] - prefix[L]
```

দুইটা style mix করবে না।

Mental Rule:

```text
First Decide Prefix Meaning
        ↓
Then Derive Formula
```

---

# 29. Common Mistake - Overflow

Wrong for large constraints:

```c
int prefix[n + 1];
```

Safer when sums may be large:

```c
long long prefix[n + 1];
```

Example:

```text
100000 values
each around 1000000000
```

Total:

```text
100000000000000
```

যা `int`-এ রাখা যাবে না।

---

# 30. Common Mistake - Prefix Array Print করে Verify না করা

Learning phase-এ prefix build করার পর temporaryভাবে print করতে পারো:

```c
for (int i = 0; i <= n; i++)
{
    printf("%lld ", prefix[i]);
}
```

Input:

```text
5
2 4 1 7 3
```

Expected `n + 1` prefix:

```text
0 2 6 7 14 17
```

এটা debugging-এর জন্য useful।

Final submission-এর আগে debug print remove করবে।

---

# 🧪 Guided Practice

## Practice 1 - Build Prefix Manually

Array:

```text
5 2 8 1 4
```

`n + 1` style Prefix Array নিজে বানাও।

Start:

```text
prefix[0] = 0
```

তারপর fill করবে:

```text
0 ? ? ? ? ?
```

Expected process:

```text
0

0 + 5

5 + 2

7 + 8

15 + 1

16 + 4
```

---

## Practice 2 - Answer Query Manually

Array:

```text
5 2 8 1 4
```

Query:

```text
L = 1
R = 3
```

নিজে করবে:

```text
Prefix Array:

Formula:

Substitution:

Answer:
```

Direct check:

```text
2 + 8 + 1
```

দুই answer same হতে হবে।

---

## Practice 3 - Multiple Queries

Array:

```text
3 1 4 1 5 9
```

Queries:

```text
0 2
2 5
1 4
3 3
```

প্রথমে:

```text
n + 1 Prefix Array
```

বানাবে।

তারপর formula দিয়ে answer করবে।

---

# 💻 Coding Practice

## Problem 1 - Build and Print Prefix

Input:

```text
5
2 4 1 7 3
```

Output:

```text
0 2 6 7 14 17
```

Requirement:

```text
n + 1 style
```

---

## Problem 2 - One Range Query

Input:

```text
5
2 4 1 7 3
1 3
```

Output:

```text
12
```

Use:

```text
prefix[R + 1] - prefix[L]
```

---

## Problem 3 - Multiple Range Queries

Input:

```text
5 3
2 4 1 7 3
0 2
1 3
2 4
```

Output:

```text
7
12
11
```

---

## Problem 4 - Compare Normal vs Prefix

একই Array এবং Query-এর জন্য দুইটি function বানাও:

```c
long long normalRangeSum(
    long long arr[],
    int left,
    int right
);
```

এবং:

```c
long long prefixRangeSum(
    long long prefix[],
    int left,
    int right
);
```

তারপর নিজের Notes-এ লিখবে:

```text
Normal Query:
O(n)

Prefix Query:
O(1)
```

---

# 🧠 Pattern Recognition Drill

Code লিখবে না।

শুধু decide করবে Prefix Sum useful কি না।

### Problem 1

> Array-এর total sum একবার বের করো।

```text
Prefix Sum Needed?
Why?
```

---

### Problem 2

> 100000 range sum queries answer করো।

```text
Prefix Sum Needed?
Why?
```

---

### Problem 3

> Array-এর maximum element বের করো।

```text
Prefix Sum Needed?
Which Pattern?
```

---

### Problem 4

> Q queries, প্রতিটি Query-তে L থেকে R পর্যন্ত Sum বের করতে হবে। Array change হয় না।

```text
Optimization:

Precomputation:

Query Complexity:
```

---

### Problem 5

> শুধু index 5 থেকে 10 পর্যন্ত Sum একবার বের করো।

```text
Direct Traversal Enough?

Prefix Sum Mandatory?

Reason:
```

---

# 📝 Chapter 7 Assignment

## Assignment A - Concept Explanation

নিজের ভাষায় লিখবে:

```text
1. Prefix Sum কী?

2. Range Sum Query কী?

3. Repeated Work কোথায় হয়?

4. Precomputation কী?

5. prefix[i] কী represent করে?

6. Range Formula কেন কাজ করে?

7. L == 0 problem কী?

8. n + 1 prefix style কেন cleaner?

9. Prefix Sum build complexity কত?

10. Each Query complexity কত?
```

---

## Assignment B - Manual Work

Array:

```text
4 7 2 9 1 5
```

নিজে বের করবে:

```text
1. n + 1 Prefix Array

2. Sum from index 0 to 3

3. Sum from index 2 to 5

4. Sum from index 4 to 4

5. Sum of entire Array
```

প্রতিটি answer-এর জন্য লিখবে:

```text
Formula
↓
Values
↓
Answer
```

---

## Assignment C - Mandatory Implementation

নিজে code করবে:

```text
1. Build Prefix Array

2. Print Prefix Array

3. Answer One Query

4. Answer Multiple Queries
```

Copy-paste না করে প্রথমে এই mental flow লিখবে:

```text
Input
↓
Build Once
↓
Read Query
↓
Subtract Prefixes
↓
Answer
```

---

# 📚 Pattern Library Update

তোমার `core_pattern.md`-এ নতুন section add করবে:

````markdown
# Prefix Sum Pattern

## Trigger

Many range sum queries on a static array.

## Core Idea

Precompute cumulative sums once and reuse them.

## Build

```text
prefix[0] = 0

prefix[i + 1]
=
prefix[i] + arr[i]
````

## Query

```text
Range Sum L to R
=
prefix[R + 1] - prefix[L]
```

## Complexity

```text
Build:
O(n)

Each Query:
O(1)

Total:
O(n + q)
```

## Mental Model

```text
Wanted Range
=
Large Prefix
-
Unwanted Left Prefix
```

````

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Prefix
Prefix Sum
Cumulative Sum
Range
Range Query
Precomputation
Query
Static Array
````

প্রতিটির জন্য:

```text
Simple Meaning
+
Tiny Example
```

যথেষ্ট।

---

# 🧠 Chapter 7 Master Mental Model

```text
                 ARRAY
                   │
                   ▼
          Many Range Sum Queries?
                   │
             ┌─────┴─────┐
             │           │
            No          Yes
             │           │
             ▼           ▼
        Direct Loop   Repeated Work
                         │
                         ▼
                    Precompute
                         │
                         ▼
                    Prefix Array
                         │
                         ▼
                  Query [L, R]
                         │
                         ▼
             prefix[R + 1] - prefix[L]
                         │
                         ▼
                       O(1)
```

আর Prefix Build:

```text
Array:

a0   a1   a2   a3
```

```text
Prefix:

0

0 + a0

0 + a0 + a1

0 + a0 + a1 + a2

0 + a0 + a1 + a2 + a3
```

অর্থাৎ:

```text
prefix[i]
=
First i Elements-এর Sum
```

---

# 🔥 Chapter 7 Key Lesson

Prefix Sum-এর formula মুখস্থ করাই মূল লক্ষ্য না।

মূল চিন্তা:

```text
Problem-এ কি একই Sum
বারবার Calculate হচ্ছে?
        ↓
Yes
        ↓
Can I Calculate Useful Information Once?
        ↓
Yes
        ↓
Store It
        ↓
Reuse It
```

এই thinking pattern:

```text
Repeated Work
↓
Precompute
↓
Store
↓
Reuse
```

Prefix Sum-এর থেকেও বড় lesson।

---

# ✅ Chapter 7 Completion Checklist

```text
[ ] Range Sum Query কী বুঝি

[ ] Normal Range Sum লিখতে পারি

[ ] Repeated Work identify করতে পারি

[ ] Prefix Sum-এর meaning বুঝি

[ ] Prefix Array manually build করতে পারি

[ ] Same-size prefix style বুঝি

[ ] n + 1 prefix style বুঝি

[ ] Range formula derive করতে পারি

[ ] L == 0 edge case বুঝি

[ ] prefix[R + 1] - prefix[L] বুঝি

[ ] O(nq) এবং O(n + q) difference বুঝি

[ ] Precomputation concept বুঝি

[ ] Overflow risk চিনতে পারি

[ ] long long কখন দরকার বুঝি

[ ] Indexing styles mix না করার কারণ বুঝি

[ ] Mandatory coding practice complete করেছি

[ ] Pattern Library update করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ✅ Chapter 5 - Recursion Mental Model
│
├── ✅ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ✅ Chapter 7 - Prefix Sum Pattern
│
├── ⬜ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

## Chapter 7-এর Final Rule

```text
One Range Sum
↓
Direct Traversal may be enough
```

কিন্তু:

```text
Many Range Sum Queries
+
Array Does Not Change
        ↓
Think Prefix Sum
```

এবং recommended zero-based query formula:

[
\boxed{\text{RangeSum}(L,R)=prefix[R+1]-prefix[L]}
]

যেখানে:

```text
prefix[0] = 0
```

এবং:

```text
prefix[i]
=
First i Elements-এর Sum
```

**Chapter 8**-এ এই foundation ব্যবহার করে actual **Range Query problem-solving**, input format analysis, off-by-one errors, 0-based বনাম 1-based query conversion, এবং contest-style Prefix Sum problems solve করা হবে।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 8 - Range Query & Prefix Sum Problem Solving

> **Chapter Goal:** Prefix Sum formula জানার পর সেটাকে actual contest problem-এ সঠিকভাবে apply করা, input indexing বুঝে conversion করা, off-by-one error এড়ানো এবং Range Query problem step-by-step solve করা।
> **Estimated Time:** 60–80 minutes
> **Focus:** Problem Reading → Index Conversion → Prefix Build → Query Processing → Edge Cases → Contest Workflow

---

# 🎯 Chapter Mission

Chapter 7-এ আমরা Prefix Sum-এর foundation শিখেছি:

```text
Array
↓
Prefix Build Once
↓
Many Range Queries
↓
O(1) per Query
```

Recommended Prefix Style:

```text
prefix[0] = 0
```

এবং:

[
prefix[i+1]=prefix[i]+arr[i]
]

Zero-based inclusive query:

[
\boxed{
RangeSum(L,R)=prefix[R+1]-prefix[L]
}
]

কিন্তু contest problem-এ শুধু formula জানলেই হবে না।

কারণ problem statement এমন হতে পারে:

```text
Array Indexing:
1-based

Query:
L R

Both L and R are inclusive.
```

আবার code-এ Array:

```text
0-based
```

তখন সবচেয়ে common problem:

```text
Wrong Index Conversion
↓
Wrong Formula
↓
Wrong Answer
```

এই Chapter-এর লক্ষ্য:

```text
Prefix Sum জানি
        ↓
Problem চিনতে পারি
        ↓
Indexing বুঝতে পারি
        ↓
Correct Formula Apply করি
        ↓
Edge Case Test করি
        ↓
Submit
```

---

# 1. Chapter 7 Quick Recall

Array:

```text
Index:   0  1  2  3  4
Array:   2  4  1  7  3
```

Recommended Prefix:

```text
Prefix Index:  0  1  2  3  4   5
Prefix:        0  2  6  7  14  17
```

Meaning:

```text
prefix[0]
=
First 0 elements-এর sum
=
0
```

```text
prefix[1]
=
First 1 element-এর sum
=
2
```

```text
prefix[3]
=
First 3 elements-এর sum
=
2 + 4 + 1
=
7
```

General Meaning:

```text
prefix[k]
=
First k elements-এর Sum
```

এটাই Chapter 8-এর foundation।

---

# 2. Range Query Problem আসলে কী?

একটি Range Query Problem-এ সাধারণত:

```text
1. একটি Array থাকবে

2. একাধিক Query থাকবে

3. প্রতিটি Query একটি Range দেবে

4. সেই Range সম্পর্কে কিছু জানতে হবে
```

Example:

```text
Array:
5 2 7 3 6

Queries:
1 3
0 4
2 2
```

যদি Query-এর কাজ হয়:

```text
Find Sum from L to R
```

তাহলে:

```text
Range Sum Query
```

কিন্তু Range Query শুধু Sum-এর জন্য না।

Future-এ তুমি দেখবে:

```text
Range Sum
Range Minimum
Range Maximum
Range XOR
Range Update
```

বর্তমানে আমাদের focus:

```text
Static Array
+
Range Sum Query
```

---

# 3. Static Array বলতে কী বোঝায়?

ধরো:

```text
Array:
2 4 1 7 3
```

তারপর Query:

```text
Sum from 1 to 3
```

তারপর:

```text
Sum from 0 to 4
```

তারপর:

```text
Sum from 2 to 4
```

কিন্তু Query-এর মাঝে Array change হচ্ছে না।

অর্থাৎ:

```text
Original Array
      ↓
Remains Same
      ↓
Only Queries Change
```

এটাই এখানে:

```text
Static Array
```

Prefix Sum-এর জন্য strong signal:

```text
Static Array
+
Many Range Sum Queries
        ↓
Prefix Sum
```

---

# 4. Contest Problem Reading Strategy

একটি Range Query Problem পড়ার সময় সরাসরি code লিখবে না।

প্রথমে ৫টি প্রশ্নের উত্তর বের করবে:

```text
1. Array size n কত হতে পারে?

2. Query count q কত হতে পারে?

3. Query কী চাইছে?

4. Query indexing 0-based নাকি 1-based?

5. Range inclusive নাকি exclusive?
```

এই পাঁচটি question খুব important।

---

## Example Statement

ধরো problem বলছে:

> You are given an array of `n` integers and `q` queries.
> Each query contains two integers `l` and `r`.
> For each query, print the sum of elements from position `l` to `r`, inclusive.
> Positions are numbered from `1` to `n`.

এখন extract করবে:

```text
Data:
Array

Queries:
Multiple

Operation:
Range Sum

Indexing:
1-based

Boundary:
Inclusive
```

তারপর Pattern:

```text
Many Range Sum Queries
        ↓
Prefix Sum
```

---

# 5. Inclusive Range কী?

ধরো:

```text
L = 2
R = 5
```

Inclusive মানে:

```text
2, 3, 4, 5
```

সব position included।

Mathematical notation:

[
[L,R]
]

অর্থাৎ:

```text
L included
R included
```

Example:

```text
Array:
10 20 30 40 50
```

Zero-based query:

```text
L = 1
R = 3
```

Inclusive Range:

```text
arr[1]
+
arr[2]
+
arr[3]
```

অর্থাৎ:

```text
20 + 30 + 40
=
90
```

---

# 6. Exclusive Boundary সম্পর্কে Basic Idea

Future algorithms-এ তুমি এমন range দেখবে:

[
[L,R)
]

এটার অর্থ:

```text
L included
R excluded
```

Example:

```text
[1, 4)
```

Contains:

```text
1, 2, 3
```

Does not contain:

```text
4
```

বর্তমান Prefix Sum problems-এ সাধারণত Query থাকে:

```text
[L, R]
```

অর্থাৎ inclusive।

কিন্তু problem statement পড়ে confirm করবে।

Mental Rule:

```text
Never Assume Range Meaning
↓
Read Statement Carefully
```

---

# 7. সবচেয়ে গুরুত্বপূর্ণ Problem - Indexing

এখন আমরা ৩ ধরনের situation দেখব:

```text
Case A
Problem Query 0-based
```

```text
Case B
Problem Query 1-based
```

```text
Case C
Array 0-based, Prefix n+1 style
```

এগুলো পরিষ্কার না হলে Prefix Sum-এ off-by-one error হবেই।

---

# 8. Case A - Zero-Based Query

Array:

```text
Index:   0  1  2  3  4
Value:   2  4  1  7  3
```

Prefix:

```text
Index:    0  1  2  3  4   5
Prefix:   0  2  6  7  14  17
```

Query:

```text
L = 1
R = 3
```

Wanted:

```text
arr[1] + arr[2] + arr[3]
```

অর্থাৎ:

```text
4 + 1 + 7
=
12
```

Formula:

[
prefix[R+1]-prefix[L]
]

Substitute:

```text
prefix[4] - prefix[1]
```

```text
14 - 2
=
12
```

Code:

```c
long long answer = prefix[right + 1] - prefix[left];
```

---

# 9. Case B - One-Based Query

এখন একই Array problem statement-এ position দিয়ে দেখানো হলো:

```text
Position:  1  2  3  4  5
Value:     2  4  1  7  3
```

Query:

```text
L = 2
R = 4
```

Wanted:

```text
Position 2
+
Position 3
+
Position 4
```

অর্থাৎ:

```text
4 + 1 + 7
=
12
```

আমাদের `n + 1` prefix:

```text
Prefix:
0 2 6 7 14 17
```

Formula for one-based inclusive query:

[
\boxed{
prefix[R]-prefix[L-1]
}
]

Substitute:

```text
prefix[4] - prefix[1]
```

```text
14 - 2
=
12
```

Code:

```c
long long answer = prefix[right] - prefix[left - 1];
```

---

# 10. Zero-Based vs One-Based Formula

এটা খুব carefully বুঝবে।

## Zero-Based Inclusive Query

Query:

```text
L ... R
```

Formula:

[
\boxed{
prefix[R+1]-prefix[L]
}
]

Code:

```c
answer = prefix[right + 1] - prefix[left];
```

---

## One-Based Inclusive Query

Query:

```text
L ... R
```

Formula:

[
\boxed{
prefix[R]-prefix[L-1]
}
]

Code:

```c
answer = prefix[right] - prefix[left - 1];
```

---

# 11. Comparison Table

| Query Style          | Example        | Formula                     |
| -------------------- | -------------- | --------------------------- |
| Zero-Based Inclusive | `L = 1, R = 3` | `prefix[R + 1] - prefix[L]` |
| One-Based Inclusive  | `L = 2, R = 4` | `prefix[R] - prefix[L - 1]` |

এখানে দুই Query একই elements represent করছে।

```text
Zero-Based:
1 ... 3
```

Equivalent:

```text
One-Based:
2 ... 4
```

কারণ:

```text
One-Based Position
=
Zero-Based Index + 1
```

---

# 12. সবচেয়ে Safe Mental Model

Formula blindly মুখস্থ করার পরিবর্তে এইটা ভাবো:

```text
Range Sum
=
Sum up to Right Boundary
-
Sum before Left Boundary
```

অর্থাৎ:

```text
Wanted Part
=
Everything Until R
-
Everything Before L
```

Visual:

```text
[ unwanted ][ wanted wanted wanted ]
```

তাহলে:

```text
Full Prefix
-
Unwanted Left Prefix
=
Wanted Range
```

এই meaning বুঝলে indexing formula derive করা সহজ হবে।

---

# 13. Problem 1 - Basic Range Sum Queries

## Problem

তোমাকে একটি Array এবং `q` Queries দেওয়া হবে।

প্রতিটি Query:

```text
L R
```

Array-এর index `L` থেকে `R` পর্যন্ত Sum print করতে হবে।

Query zero-based।

---

## Example Input

```text
5 3
2 4 1 7 3
0 2
1 3
2 4
```

Expected Output:

```text
7
12
11
```

---

## Step 1 - Pattern Recognition

Problem says:

```text
Array
+
Multiple Queries
+
Range Sum
```

Trigger:

```text
Prefix Sum
```

---

## Step 2 - Build Prefix

Array:

```text
2 4 1 7 3
```

Prefix:

```text
0 2 6 7 14 17
```

---

## Step 3 - Query Formula

Since Query is zero-based:

[
answer=prefix[R+1]-prefix[L]
]

---

## Step 4 - Code

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        prefix[i + 1] =
            prefix[i] + arr[i];
    }

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long answer =
            prefix[right + 1] - prefix[left];

        printf("%lld\n", answer);
    }

    return 0;
}
```

---

# 14. Problem 1 Dry Run

Input:

```text
5 3

2 4 1 7 3

0 2
1 3
2 4
```

Prefix:

```text
0 2 6 7 14 17
```

### Query 1

```text
L = 0
R = 2
```

Formula:

```text
prefix[3] - prefix[0]
```

```text
7 - 0
=
7
```

---

### Query 2

```text
L = 1
R = 3
```

Formula:

```text
prefix[4] - prefix[1]
```

```text
14 - 2
=
12
```

---

### Query 3

```text
L = 2
R = 4
```

Formula:

```text
prefix[5] - prefix[2]
```

```text
17 - 6
=
11
```

---

# 15. Problem 2 - One-Based Range Queries

এবার Problem বলছে:

> Positions are numbered from `1` to `n`.

Example Input:

```text
5 3
2 4 1 7 3
1 3
2 4
3 5
```

Expected Output:

```text
7
12
11
```

এখানে Query:

```text
1 3
```

মানে:

```text
Position 1
+
Position 2
+
Position 3
```

অর্থাৎ:

```text
2 + 4 + 1
=
7
```

Formula:

[
answer=prefix[R]-prefix[L-1]
]

Code:

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        long long value;

        scanf("%lld", &value);

        prefix[i] =
            prefix[i - 1] + value;
    }

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long answer =
            prefix[right] - prefix[left - 1];

        printf("%lld\n", answer);
    }

    return 0;
}
```

---

# 16. একটি Important Observation

আগের code-এ:

```c
long long arr[n];
```

ছিল।

কিন্তু এই code-এ Array store না করেও Prefix বানানো হয়েছে:

```c
long long value;

scanf("%lld", &value);

prefix[i] =
    prefix[i - 1] + value;
```

কারণ future Query-এর জন্য আমাদের original Array দরকার হচ্ছে না।

শুধু দরকার:

```text
Prefix Array
```

এটা memory optimization-এর একটি simple example।

কিন্তু beginner stage-এ:

```text
arr[]
+
prefix[]
```

দুইটাই রাখা ভুল না।

Clarity বেশি গুরুত্বপূর্ণ।

---

# 17. Problem 3 - Single Element Query

Array:

```text
5 8 2 9 4
```

Query:

```text
L = 2
R = 2
```

Zero-based।

Wanted:

```text
arr[2]
=
2
```

Formula:

[
prefix[R+1]-prefix[L]
]

তাই:

```text
prefix[3] - prefix[2]
```

Prefix:

```text
0 5 13 15 24 28
```

Calculation:

```text
15 - 13
=
2
```

এখানে একটি important edge case:

```text
L == R
```

অর্থাৎ:

```text
Single Element Range
```

Prefix formula এটাও automatically handle করে।

---

# 18. Problem 4 - Entire Array Query

Array:

```text
3 5 2 8
```

Zero-based Query:

```text
L = 0
R = 3
```

Prefix:

```text
0 3 8 10 18
```

Formula:

```text
prefix[4] - prefix[0]
```

```text
18 - 0
=
18
```

Entire Array Query-এর জন্য:

```text
Zero-Based:
L = 0
R = n - 1
```

Formula:

```text
prefix[n] - prefix[0]
```

Since:

```text
prefix[0] = 0
```

Answer:

```text
prefix[n]
```

---

# 19. Problem 5 - Negative Numbers

অনেকে মনে করে Prefix Sum শুধু positive number-এর জন্য।

এটা ভুল।

Array:

```text
5 -2 3 -4 6
```

Prefix:

```text
0
5
3
6
2
8
```

অর্থাৎ:

```text
0 5 3 6 2 8
```

Query:

```text
L = 1
R = 3
```

Wanted:

```text
-2 + 3 - 4
=
-3
```

Formula:

```text
prefix[4] - prefix[1]
```

```text
2 - 5
=
-3
```

তাই:

```text
Prefix Sum works with:

Positive Numbers
Negative Numbers
Zero
Mixed Values
```

---

# 20. Prefix Sum Problem Solving Workflow

Contest-এ এই workflow follow করবে:

```text
Read Problem
     ↓
Identify Data
     ↓
Identify Query Type
     ↓
Check Number of Queries
     ↓
Check Array Updates
     ↓
Check Indexing
     ↓
Check Inclusive / Exclusive
     ↓
Choose Prefix Definition
     ↓
Build Prefix
     ↓
Process Queries
     ↓
Test Edge Cases
     ↓
Submit
```

এখন প্রতিটি step সংক্ষেপে দেখি।

---

## Step 1 - Data কী?

```text
Array?
String?
Grid?
```

বর্তমানে:

```text
Array
```

---

## Step 2 - Query কী চাইছে?

```text
Sum?
Count?
Maximum?
Minimum?
```

বর্তমানে:

```text
Range Sum
```

---

## Step 3 - Query কতগুলো?

```text
One Query
```

হলে direct loop যথেষ্ট হতে পারে।

```text
Many Queries
```

হলে Prefix Sum strong candidate।

---

## Step 4 - Array change হচ্ছে?

যদি:

```text
Query
Query
Query
```

এবং Array same থাকে:

```text
Static
```

Prefix Sum ভালো।

কিন্তু যদি:

```text
Update arr[3]
Query
Update arr[5]
Query
```

তাহলে basic Prefix Sum যথেষ্ট নাও হতে পারে।

কারণ একটি value change হলে তার পরের অনেক prefix value change করতে হবে।

এটা future data structure topic।

বর্তমানে মনে রাখবে:

```text
Many Static Range Sum Queries
↓
Prefix Sum
```

---

# 21. Constraint Analysis

ধরো constraints:

```text
1 ≤ n ≤ 100000
1 ≤ q ≤ 100000
```

এখন direct solution:

```text
For every query:
    Loop from L to R
```

Worst case:

[
O(nq)
]

Scale:

[
10^5\times10^5=10^{10}
]

এটা dangerous।

Prefix Sum:

```text
Build:
O(n)
```

Queries:

```text
q × O(1)
=
O(q)
```

Total:

[
O(n+q)
]

Scale roughly:

```text
100000 + 100000
=
200000
```

Difference:

```text
Direct:
~10,000,000,000 operations scale
```

vs

```text
Prefix:
~200,000 operations scale
```

এ কারণেই constraints পড়া important।

---

# 22. Prefix Sum-এর Pattern Trigger

Problem Statement-এ এই ধরনের wording দেখলে চিন্তা করবে:

```text
You are given q queries
```

```text
Find the sum between l and r
```

```text
For every query, output the sum of the subarray
```

```text
Answer multiple range sum queries
```

Mental Trigger:

```text
Multiple
+
Range
+
Sum
+
Static Array
        ↓
Prefix Sum
```

---

# 23. Common Bug 1 - Wrong Prefix Size

যদি use করো:

```text
n + 1 Prefix Style
```

তাহলে:

```c
long long prefix[n + 1];
```

দরকার।

কারণ valid prefix indices:

```text
0 ... n
```

যদি লিখো:

```c
long long prefix[n];
```

কিন্তু access করো:

```c
prefix[n]
```

তাহলে out-of-bounds access হবে।

Mental Rule:

```text
n + 1 Style
↓
Array Size n + 1
```

---

# 24. Common Bug 2 - `prefix[0]` Initialize না করা

Wrong:

```c
long long prefix[n + 1];

for (int i = 0; i < n; i++)
{
    prefix[i + 1] =
        prefix[i] + arr[i];
}
```

Problem:

```text
prefix[0]
```

initial value undefined।

Correct:

```c
prefix[0] = 0;
```

তারপর:

```c
for (int i = 0; i < n; i++)
{
    prefix[i + 1] =
        prefix[i] + arr[i];
}
```

Mental Rule:

```text
Prefix Build Needs Starting State
↓
prefix[0] = 0
```

---

# 25. Common Bug 3 - `right + 1` ভুলে যাওয়া

Zero-based inclusive query:

```text
L = 1
R = 3
```

Correct:

```c
prefix[right + 1] - prefix[left]
```

Wrong:

```c
prefix[right] - prefix[left]
```

কারণ `prefix[k]` represent করে:

```text
First k elements
```

`prefix[right]` পর্যন্ত গেলে `arr[right]` include নাও হতে পারে।

Example:

```text
Array:
2 4 1 7 3
```

Prefix:

```text
0 2 6 7 14 17
```

Query:

```text
1 3
```

Wrong:

```text
prefix[3] - prefix[1]
=
7 - 2
=
5
```

Correct:

```text
prefix[4] - prefix[1]
=
14 - 2
=
12
```

---

# 26. Common Bug 4 - 1-Based Query-তে Zero-Based Formula Blindly ব্যবহার

Problem Query:

```text
2 4
```

এবং statement বলছে:

```text
Positions are 1-based
```

তুমি যদি blindly করো:

```c
prefix[right + 1] - prefix[left]
```

তাহলে ভুল Range calculate হতে পারে।

One-based inclusive formula:

```c
prefix[right] - prefix[left - 1]
```

Mental Rule:

```text
Before Formula
↓
Determine Query Indexing
```

---

# 27. Common Bug 5 - `int` Overflow

ধরো:

```text
n = 100000
```

প্রতিটি element:

```text
1000000000
```

Maximum sum:

[
10^5\times10^9=10^{14}
]

তাই:

```c
int prefix[n + 1];
```

unsafe।

Use:

```c
long long prefix[n + 1];
```

Input:

```c
scanf("%lld", &arr[i]);
```

Output:

```c
printf("%lld\n", answer);
```

CP Habit:

```text
Check Constraints
↓
Estimate Maximum Sum
↓
Choose Data Type
```

---

# 28. Common Bug 6 - `L > R`

কিছু Problem guarantee করে:

```text
L ≤ R
```

কিছু problem নাও করতে পারে।

যদি guarantee না থাকে, handle করতে পারো:

```c
if (left > right)
{
    int temp = left;
    left = right;
    right = temp;
}
```

কিন্তু contest-এ unnecessary assumptions করবে না।

প্রথমে statement দেখবে।

যদি বলে:

```text
1 ≤ L ≤ R ≤ n
```

তাহলে swap দরকার নেই।

---

# 29. Common Bug 7 - Debug Output রেখে Submit করা

Learning-এর সময়:

```c
for (int i = 0; i <= n; i++)
{
    printf("%lld ", prefix[i]);
}
```

useful।

কিন্তু submission-এ যদি expected output শুধু:

```text
7
12
11
```

আর তুমি print করো:

```text
0 2 6 7 14 17
7
12
11
```

তাহলে:

```text
Wrong Answer
```

Mental Habit:

```text
Before Submit
↓
Remove Debug Output
```

---

# 30. Contest-Style Problem Analysis

ধরো Problem:

> Given `n` integers and `q` queries. Each query contains `l` and `r`. Print the sum of elements from `l` to `r`. Positions are 1-indexed.

Constraints:

```text
1 ≤ n, q ≤ 200000
|a[i]| ≤ 10^9
```

এখন analysis:

```text
n large
↓
q large
↓
Range Sum Queries
↓
Static Array
↓
Prefix Sum
```

Data Type:

```text
a[i] up to 10^9
n up to 2 × 10^5
```

Possible Sum scale:

[
2\times10^5\times10^9
=====================

2\times10^{14}
]

তাই:

```text
long long
```

Indexing:

```text
1-based Query
```

Formula:

```text
prefix[R] - prefix[L - 1]
```

Complexity:

```text
Build:
O(n)

Queries:
O(q)

Total:
O(n + q)
```

এটাই professional problem analysis flow।

---

# 31. Full Contest Solution Template - 1-Based Queries

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        long long value;

        scanf("%lld", &value);

        prefix[i] =
            prefix[i - 1] + value;
    }

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long answer =
            prefix[right] - prefix[left - 1];

        printf("%lld\n", answer);
    }

    return 0;
}
```

Mental Structure:

```text
Read n, q
↓
Initialize prefix[0]
↓
Read Values + Build Prefix
↓
Process q Queries
↓
Subtract Prefixes
↓
Print
```

---

# 32. Full Contest Solution Template - Zero-Based Queries

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        prefix[i + 1] =
            prefix[i] + arr[i];
    }

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long answer =
            prefix[right + 1] - prefix[left];

        printf("%lld\n", answer);
    }

    return 0;
}
```

---

# 33. Function-Based Version

Day 4-এর Function topic-এর সাথে combine করি।

```c
#include <stdio.h>

void buildPrefix(
    long long arr[],
    long long prefix[],
    int n
)
{
    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] =
            prefix[i] + arr[i];
    }
}

long long rangeSum(
    long long prefix[],
    int left,
    int right
)
{
    return prefix[right + 1] - prefix[left];
}

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    buildPrefix(arr, prefix, n);

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        printf(
            "%lld\n",
            rangeSum(prefix, left, right)
        );
    }

    return 0;
}
```

Decomposition:

```text
Problem
│
├── Input Array
│
├── buildPrefix()
│
├── Read Queries
│
├── rangeSum()
│
└── Output
```

এখানে Day 4-এর দুইটি topic combine হয়েছে:

```text
Functions
+
Prefix Sum
```

---

# 34. Problem Variation - Range Sum Divisible by X

এখন Pattern Combination-এর ছোট example দেখি।

Problem:

> প্রতিটি Query-এর Range Sum বের করো এবং বলো Sum `k` দিয়ে divisible কি না।

Flow:

```text
Query [L, R]
↓
Prefix Sum দিয়ে Range Sum
↓
Check sum % k
↓
YES / NO
```

Code idea:

```c
long long sum =
    prefix[right + 1] - prefix[left];

if (sum % k == 0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
```

Pattern Combination:

```text
Prefix Sum
+
Modulo Check
```

এটা গুরুত্বপূর্ণ।

কারণ real contest problem সবসময় সরাসরি বলবে না:

```text
Print Range Sum
```

কখনও Range Sum intermediate result হতে পারে।

---

# 35. Problem Variation - Count Queries with Sum Greater Than X

ধরো:

> `q` Queries দেওয়া আছে। কতগুলো Query-এর Range Sum `x`-এর চেয়ে বড়?

Pattern:

```text
Prefix Sum
+
Query Processing
+
Counting
```

Pseudo Flow:

```text
count = 0

For each query:
    sum = rangeSum(L, R)

    if sum > x:
        count++

Print count
```

এখানে Day 2-এর Counting Pattern এবং Day 4-এর Prefix Sum combine হচ্ছে।

---

# 36. Problem Variation - Maximum Query Sum

ধরো:

> `q` Range Queries-এর মধ্যে সবচেয়ে বড় Range Sum কত?

Pattern:

```text
Prefix Sum
+
Maximum Tracking
```

Flow:

```text
maxSum = very small value

For every query:
    currentSum = rangeSum(L, R)

    if currentSum > maxSum:
        maxSum = currentSum
```

এখানে:

```text
Range Query
+
Maximum Pattern
```

দুইটা Pattern combine হয়েছে।

---

# 37. Problem Variation - Query Sum Search

ধরো:

> `q` Queries-এর মধ্যে কোনো Query-এর Range Sum exactly `target` কি না।

Pattern:

```text
Prefix Sum
+
Searching
```

Flow:

```text
found = 0

For each query:
    sum = rangeSum(L, R)

    if sum == target:
        found = 1
        break
```

এখানে Day 2 Searching Pattern ফিরে এসেছে।

এই observation মনে রাখবে:

```text
New Pattern
does not replace
Old Patterns
```

বরং:

```text
Patterns Combine
```

---

# 38. Prefix Sum vs Direct Traversal Decision

সব Range Problem-এ Prefix Sum use করবে না।

Example:

```text
n = 10
q = 1
```

একটি Query:

```text
L = 2
R = 5
```

Direct loop:

```c
long long sum = 0;

for (int i = left; i <= right; i++)
{
    sum += arr[i];
}
```

Perfectly reasonable।

কিন্তু:

```text
n = 100000
q = 100000
```

তখন repeated traversal problematic।

Decision:

```text
Range Sum Needed?
        ↓
How Often?
        ↓
Once / Very Few
        │
        ▼
Direct Traversal May Be Enough

Many Times
        │
        ▼
Prefix Sum
```

---

# 39. Range Query Debugging Method

Wrong Answer পেলে random code change করবে না।

এই ৬-step debugging method follow করবে:

```text
1. Original Array print/check

2. Prefix Array manually calculate

3. Program Prefix print করে compare

4. One Query manually calculate

5. Formula indices substitute করো

6. Check Query indexing
```

Example:

```text
Array:
2 4 1 7 3
```

Expected Prefix:

```text
0 2 6 7 14 17
```

Query:

```text
L = 1
R = 3
```

Expected:

```text
12
```

Formula:

```text
prefix[4] - prefix[1]
=
14 - 2
=
12
```

যদি code অন্য answer দেয়, তখন bug location narrow হয়ে যায়।

---

# 40. Edge Case Checklist

Prefix Sum solution submit করার আগে test করবে:

```text
1. Single Element Array

2. Single Element Query

3. Entire Array Query

4. L = 0

5. R = n - 1

6. All Values Same

7. Negative Values

8. Large Values

9. Multiple Queries

10. First and Last Position
```

---

# 41. Edge Case Test Set

## Test 1 - Single Element

Input:

```text
1 1
5
0 0
```

Output:

```text
5
```

---

## Test 2 - Entire Array

Input:

```text
5 1
1 2 3 4 5
0 4
```

Output:

```text
15
```

---

## Test 3 - Single Position

Input:

```text
5 1
1 2 3 4 5
2 2
```

Output:

```text
3
```

---

## Test 4 - Negative Numbers

Input:

```text
5 3
5 -2 3 -4 6
0 4
1 3
3 4
```

Expected:

```text
8
-3
2
```

---

# 🧪 Guided Problem Solving Session

এখন নিজে চিন্তা করবে।

---

## Problem A - Zero-Based Queries

Array:

```text
6 3 8 2 7 4
```

Queries:

```text
0 2
1 4
3 5
2 2
```

তোমার কাজ:

```text
1. n + 1 Prefix Array বানাও

2. প্রতিটি Query-এর Formula লেখো

3. Values substitute করো

4. Final Answer বের করো
```

Format:

```text
Query:
L = ?
R = ?

Formula:
prefix[R + 1] - prefix[L]

Substitution:
...

Answer:
...
```

---

## Problem B - One-Based Queries

Array:

```text
4 7 2 9 1 5
```

Queries:

```text
1 3
2 5
4 6
6 6
```

তোমার কাজ:

```text
1. Prefix Build

2. Query Indexing identify

3. Correct Formula choose

4. Answer Queries
```

Formula:

```text
prefix[R] - prefix[L - 1]
```

---

# 💻 Coding Practice

## Problem 1 - Basic Zero-Based Range Sum

Input Format:

```text
n q

a1 a2 a3 ... an

L1 R1
L2 R2
...
Lq Rq
```

Queries zero-based।

Output:

```text
Each Range Sum
```

Requirement:

```text
Prefix Sum
O(n + q)
long long
```

---

## Problem 2 - One-Based Query Version

Same problem।

Difference:

```text
Queries are 1-based
```

তোমার কাজ:

```text
Formula নিজে select করবে
```

---

## Problem 3 - Count Large Range Sums

Problem:

```text
Given:
Array
q Queries
Target X
```

প্রতিটি Query-এর Range Sum বের করবে।

শেষে print করবে:

```text
কতটি Query-এর Sum > X
```

Patterns:

```text
Prefix Sum
+
Counting
```

---

## Problem 4 - Maximum Range Sum Among Given Queries

`q` Queries দেওয়া আছে।

প্রতিটি Query-এর Range Sum বের করবে।

শেষে:

```text
Maximum Query Sum
```

print করবে।

Patterns:

```text
Prefix Sum
+
Maximum Tracking
```

---

# 🧠 Pattern Recognition Drill

Code লিখবে না।

শুধু Pattern identify করবে।

---

## Scenario 1

> Array-এর সব elements-এর Sum একবার বের করতে হবে।

Answer format:

```text
Primary Pattern:

Prefix Sum Mandatory?

Reason:
```

---

## Scenario 2

> 200000 Range Sum Queries।

Answer format:

```text
Primary Pattern:

Precomputation:

Complexity:
```

---

## Scenario 3

> প্রতিটি Query-এর Range Sum বের করে Sum even কি না check করতে হবে।

Answer format:

```text
Pattern 1:

Pattern 2:
```

---

## Scenario 4

> Range Sum Queries-এর মধ্যে সবচেয়ে বড় Sum বের করতে হবে।

Answer format:

```text
Pattern 1:

Pattern 2:
```

---

## Scenario 5

> Query-এর মাঝে Array element update হচ্ছে।

Answer format:

```text
Basic Prefix Sum Ideal?

Why?

Future Topic Needed?
```

এখানে future algorithm-এর নাম এখন জানা mandatory না।

শুধু বুঝবে:

```text
Array Update
↓
Old Prefix Information May Become Invalid
```

---

# 📝 Chapter 8 Assignment

## Assignment A - Concept Questions

নিজের ভাষায় লিখবে:

```text
1. Range Query কী?

2. Static Array কী?

3. Inclusive Range কী?

4. Zero-Based Query এবং One-Based Query-এর difference কী?

5. Zero-Based Prefix Formula কী?

6. One-Based Prefix Formula কী?

7. Off-by-One Error কী?

8. Constraints দেখে Prefix Sum choose করব কীভাবে?

9. Array update হলে Basic Prefix Sum-এর সমস্যা কী?

10. Prefix Sum কীভাবে Counting Pattern-এর সাথে combine হতে পারে?
```

---

## Assignment B - Manual Calculation

Array:

```text
8 3 6 2 9 1 5
```

### Part 1

`n + 1` Prefix Array বানাও।

Format:

```text
Array:

Prefix:
```

### Part 2

Zero-based Queries:

```text
0 3
2 5
4 6
1 1
0 6
```

প্রতিটির জন্য লিখবে:

```text
Query:

Formula:

Substitution:

Answer:
```

---

## Assignment C - Index Conversion Practice

একই Range:

```text
Zero-Based:
L = 2
R = 5
```

এটাকে One-Based-এ convert করবে।

তারপর লিখবে:

```text
Zero-Based Formula:

One-Based Formula:

Do Both Give Same Answer?
```

---

## Assignment D - Mandatory Coding

নিজে implement করবে:

```text
1. Zero-Based Range Sum Queries

2. One-Based Range Sum Queries

3. Count Queries with Sum > X

4. Maximum Sum Among Given Queries
```

প্রতিটি solution-এর আগে comment লিখবে:

```c
/*
Pattern:
Query Indexing:
Prefix Meaning:
Query Formula:
Time Complexity:
Data Type:
*/
```

Example structure:

```c
/*
Pattern:
Prefix Sum

Query Indexing:
Zero-Based Inclusive

Prefix Meaning:
prefix[i] = sum of first i elements

Query Formula:
prefix[R + 1] - prefix[L]

Time Complexity:
O(n + q)

Data Type:
long long
*/
```

---

# 📚 Pattern Library Update

তোমার `core_pattern.md`-এ Prefix Sum section-এর নিচে add করবে:

````markdown
## Range Query Recognition

### Trigger

```text
Static Array
+
Many Range Sum Queries
````

### Zero-Based Inclusive Query

```text
Range [L, R]

Answer
=
prefix[R + 1] - prefix[L]
```

### One-Based Inclusive Query

```text
Range [L, R]

Answer
=
prefix[R] - prefix[L - 1]
```

### Decision Flow

```text
Need Range Sum
        ↓
Many Queries?
        ↓
Yes
        ↓
Array Static?
        ↓
Yes
        ↓
Prefix Sum
```

### Common Bugs

```text
Wrong Indexing
Wrong Prefix Size
Missing prefix[0] = 0
Integer Overflow
Mixing 0-Based and 1-Based Formula
Debug Output in Submission
```

````

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Range Query
Static Array
Dynamic Array
Inclusive Range
Exclusive Range
Zero-Based Indexing
One-Based Indexing
Off-by-One Error
Index Conversion
Query Processing
````

Format:

```text
Term
↓
Simple Meaning
↓
Tiny Example
```

---

# 🧠 Chapter 8 Master Mental Model

```text
                 PROBLEM
                    │
                    ▼
          Multiple Queries?
              │           │
             No          Yes
              │           │
              ▼           ▼
         Simple Loop    What Query?
                            │
                            ▼
                         Range Sum?
                            │
                            ▼
                       Array Static?
                        │         │
                       No        Yes
                        │         │
                  Other Tool     Prefix Sum
                                  │
                                  ▼
                           Check Indexing
                             │         │
                          0-Based    1-Based
                             │         │
                             ▼         ▼
                       R+1 and L    R and L-1
                             │         │
                             └────┬────┘
                                  ▼
                             O(1) Query
```

---

# 🔥 Chapter 8 Key Lesson

Prefix Sum problem solve করার সবচেয়ে important part শুধু এই formula না:

[
prefix[R+1]-prefix[L]
]

বরং পুরো thinking process:

```text
Problem Statement
        ↓
What is Repeated?
        ↓
Can I Precompute?
        ↓
What Does prefix[i] Mean?
        ↓
What Indexing Does Query Use?
        ↓
Which Formula Matches That Meaning?
        ↓
Test Edge Cases
        ↓
Submit
```

সবচেয়ে dangerous habit:

```text
Prefix Sum দেখলাম
↓
Formula মুখস্থ থেকে লিখলাম
↓
Submit
```

Better habit:

```text
Define Prefix Meaning
↓
Understand Query Indexing
↓
Derive Formula
↓
Manual Test
↓
Submit
```

---

# ✅ Chapter 8 Completion Checklist

```text
[ ] Range Query কী বুঝি

[ ] Static Array কী বুঝি

[ ] Inclusive Range বুঝি

[ ] Zero-Based Query বুঝি

[ ] One-Based Query বুঝি

[ ] Index Conversion করতে পারি

[ ] Zero-Based Prefix Formula ব্যবহার করতে পারি

[ ] One-Based Prefix Formula ব্যবহার করতে পারি

[ ] Off-by-One Error চিনতে পারি

[ ] Constraint দেখে Prefix Sum choose করতে পারি

[ ] O(nq) এবং O(n + q) compare করতে পারি

[ ] Single Element Query test করতে পারি

[ ] Entire Array Query test করতে পারি

[ ] Negative Value handle করতে পারি

[ ] long long কেন দরকার বুঝি

[ ] Prefix Sum + Counting combine করতে পারি

[ ] Prefix Sum + Maximum combine করতে পারি

[ ] Query debugging workflow follow করতে পারি

[ ] Mandatory Coding Assignment complete করেছি

[ ] Pattern Library update করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ✅ Chapter 5 - Recursion Mental Model
│
├── ✅ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ✅ Chapter 7 - Prefix Sum Pattern
│
├── ✅ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ⬜ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

## Chapter 8 Final Rules

### Rule 1

```text
Many Queries
+
Static Array
+
Range Sum
        ↓
Think Prefix Sum
```

### Rule 2

Zero-Based Inclusive Query:

[
\boxed{
RangeSum(L,R)=prefix[R+1]-prefix[L]
}
]

### Rule 3

One-Based Inclusive Query:

[
\boxed{
RangeSum(L,R)=prefix[R]-prefix[L-1]
}
]

### Rule 4

```text
Never Mix
0-Based Formula
and
1-Based Formula
```

### Rule 5

```text
Before Coding:

Check Constraints
Check Query Type
Check Indexing
Check Boundaries
Check Overflow
```

Chapter 8 শেষ হওয়ার পর তুমি শুধু Prefix Sum build করতে জানো-এমন না; এখন তোমার লক্ষ্য হওয়া উচিত **problem statement থেকে Range Query pattern detect করা, indexing অনুযায়ী formula choose করা এবং Prefix Sum-কে Counting, Searching ও Maximum Tracking-এর মতো আগের pattern-এর সঙ্গে combine করা**।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 9 - Pattern Combination Session

> **Chapter Goal:** একটি Problem-এ একাধিক পরিচিত Pattern একসাথে চিনতে এবং combine করতে শেখা।
> **Estimated Time:** 60–90 minutes
> **Focus:** Problem Decomposition → Primary Pattern → Secondary Pattern → Pattern Pipeline → Combined Solution

---

# 🎯 Chapter Mission

এখন পর্যন্ত তুমি আলাদা আলাদাভাবে অনেক Pattern শিখেছ।

Day 2 থেকে:

```text
Traversal
Accumulation
Counting
Maximum
Minimum
Searching
```

Day 3 থেকে:

```text
Digit Extraction
Digit Sum
Digit Count
Reverse Number
Palindrome Check
```

Day 4 থেকে:

```text
Function Decomposition
Recursion Mental Model
Prefix Sum
Range Query
```

কিন্তু Contest Problem সাধারণত এমন হবে না:

> এই Problem-এ Counting Pattern ব্যবহার করো।

অথবা:

> এই Problem-এ Maximum Tracking ব্যবহার করো।

তোমাকে নিজে Problem Statement থেকে চিনতে হবে:

```text
Problem
   ↓
What work is needed?
   ↓
Which Patterns are involved?
   ↓
In which order?
   ↓
Combine
   ↓
Solution
```

আজকের Chapter-এর মূল বিষয়:

# Pattern Combination

---

# 1. Pattern Combination কী?

ধরো Problem:

> একটি Array থেকে কতগুলো Even Number আছে এবং তাদের Sum কত-বের করো।

এখানে শুধু একটি Pattern নেই।

প্রথমে পুরো Array দেখতে হবে:

```text
Traversal
```

প্রতিটি Number check করতে হবে:

```text
Condition Check
```

Even হলে সংখ্যা গুনতে হবে:

```text
Counting
```

এবং Even Number-এর Sum করতে হবে:

```text
Accumulation
```

Complete Pattern Flow:

```text
Array
  ↓
Traversal
  ↓
Even Check
  ↓
 ┌───────────────┐
 │               │
 ▼               ▼
Count++       Sum += arr[i]
 │               │
 ▼               ▼
Counting      Accumulation
```

অর্থাৎ:

```text
One Problem
=
Multiple Patterns
```

---

# 2. Pattern Combination কেন দরকার?

Beginner অনেক সময় Problem দেখেই বলে:

```text
এই Problem-এর Algorithm কী?
```

কিন্তু অনেক beginner-level Problem-এর জন্য completely new algorithm দরকার হয় না।

বরং:

```text
Known Pattern A
+
Known Pattern B
+
Known Pattern C
=
Solution
```

Example:

> Largest Even Number বের করো।

এখানে:

```text
Traversal
+
Condition Check
+
Maximum Tracking
```

Example:

> Target value কতবার আছে?

এখানে:

```text
Traversal
+
Searching / Matching
+
Counting
```

Example:

> অনেক Range Query-এর মধ্যে সবচেয়ে বড় Range Sum বের করো।

এখানে:

```text
Prefix Sum
+
Query Processing
+
Maximum Tracking
```

এটাই Pattern Combination।

---

# 3. Primary Pattern এবং Secondary Pattern

Problem solve করার সময় Pattern-গুলোকে দুইভাবে ভাবতে পারো:

```text
Primary Pattern
```

এবং:

```text
Secondary Pattern
```

---

## Example

Problem:

> একটি Array-এর প্রতিটি Range Query-এর Sum বের করে Count করো কতগুলো Sum `100`-এর বেশি।

এখানে:

### Primary Pattern

```text
Prefix Sum
```

কারণ Range Sum efficiently বের করতে হবে।

### Secondary Pattern

```text
Counting
```

কারণ condition satisfy করা Query-এর সংখ্যা গুনতে হবে।

Complete Flow:

```text
Array
↓
Prefix Sum Build
↓
Read Query
↓
Calculate Range Sum
↓
sum > 100 ?
↓
Yes
↓
count++
```

---

# 4. Pattern Pipeline

একটি useful mental model:

```text
Input
  ↓
Transform / Precompute
  ↓
Traverse / Process
  ↓
Check Condition
  ↓
Update State
  ↓
Output
```

এটাকে আমরা এই Bootcamp-এ বলব:

# Pattern Pipeline

Example:

```text
Array Input
     ↓
Build Prefix
     ↓
Process Queries
     ↓
Calculate Range Sum
     ↓
Check sum % 2 == 0
     ↓
Count
     ↓
Print Count
```

Patterns:

```text
Prefix Sum
+
Query Processing
+
Condition
+
Counting
```

---

# 5. Problem Decomposition Before Coding

ধরো Problem:

> একটি Array এবং `q` Range Query দেওয়া আছে। প্রতিটি Query-এর Range Sum বের করো। সব Query Sum-এর মধ্যে সবচেয়ে বড় Even Sum print করো।

সরাসরি Code লিখবে না।

Problem-টাকে ভাঙো।

---

## Step 1 - Range Sum কীভাবে বের হবে?

```text
Many Range Queries
+
Static Array
        ↓
Prefix Sum
```

---

## Step 2 - কোন Query Result দরকার?

শুধু:

```text
Even Range Sum
```

তাই:

```text
sum % 2 == 0
```

---

## Step 3 - Even Sum-এর মধ্যে কী চাই?

```text
Largest
```

তাই:

```text
Maximum Tracking
```

---

## Final Pattern Combination

```text
Prefix Sum
+
Condition Check
+
Maximum Tracking
```

এখন Code-এর structure প্রায় পরিষ্কার:

```text
Build Prefix

For Each Query:
    Calculate Sum

    If Sum is Even:
        Update Maximum
```

এই decomposition skill-টাই Chapter 9-এর মূল লক্ষ্য।

---

# 6. Combination 1 - Traversal + Counting

## Problem

একটি Array-এ কয়টি Positive Number আছে?

Example:

```text
Array:
-2 5 0 7 -1 3
```

Positive Numbers:

```text
5
7
3
```

Answer:

```text
3
```

Pattern:

```text
Traversal
+
Condition
+
Counting
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

Mental Flow:

```text
Visit Element
↓
Is Positive?
↓
Yes
↓
count++
```

---

# 7. Combination 2 - Traversal + Filtering + Accumulation

## Problem

শুধু Even Numbers-এর Sum বের করো।

Array:

```text
3 8 5 2 7 4
```

Even Numbers:

```text
8 2 4
```

Sum:

[
8+2+4=14
]

Patterns:

```text
Traversal
+
Condition Check
+
Accumulation
```

Code:

```c
long long sum = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        sum += arr[i];
    }
}
```

Mental Model:

```text
Every Element
     ↓
Pass Condition?
   /       \
 No        Yes
 │          │
Skip      Add
```

এই process-কে অনেক সময় conceptually ভাবতে পারো:

```text
Filter
↓
Process
```

---

# 8. Combination 3 - Searching + Counting

## Problem

Array-এ Target কতবার আছে?

Array:

```text
4 7 2 7 5 7 1
```

Target:

```text
7
```

Occurrences:

```text
Index 1
Index 3
Index 5
```

Answer:

```text
3
```

Patterns:

```text
Traversal
+
Matching
+
Counting
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

Difference বুঝো:

### শুধু Search

```text
Target আছে কি?
```

### Count Occurrence

```text
Target কতবার আছে?
```

দ্বিতীয় Problem-এ:

```text
Matching
+
Counting
```

দুটো দরকার।

---

# 9. Combination 4 - Filtering + Maximum Tracking

## Problem

Largest Even Number বের করো।

Array:

```text
3 8 11 4 15 10
```

Even Numbers:

```text
8 4 10
```

Maximum:

```text
10
```

Patterns:

```text
Traversal
+
Even Check
+
Maximum Tracking
```

---

## Dangerous Initialization

এভাবে লিখলে:

```c
int maxEven = 0;
```

Problem হতে পারে যদি valid values negative হয়।

Example:

```text
-8 -4 -10
```

Largest Even:

```text
-4
```

কিন্তু `maxEven = 0` করলে answer ভুল হতে পারে।

Safer beginner approach:

```text
found = 0
```

প্রথম valid Even Number পেলে:

```text
maxEven = current
found = 1
```

তারপর compare।

Code:

```c
int found = 0;
int maxEven;

for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0)
    {
        if (found == 0)
        {
            maxEven = arr[i];
            found = 1;
        }
        else if (arr[i] > maxEven)
        {
            maxEven = arr[i];
        }
    }
}
```

শেষে:

```c
if (found)
{
    printf("%d\n", maxEven);
}
else
{
    printf("No even number\n");
}
```

এখানে Patterns:

```text
Filtering
+
State Flag
+
Maximum Tracking
```

---

# 10. Combination 5 - Prefix Sum + Counting

এখন Chapter 7 এবং Chapter 8-এর Pattern combine করি।

## Problem

একটি Array এবং `q` Range Query দেওয়া আছে।

Count করো:

```text
কতগুলো Query-এর Range Sum > X
```

Example:

```text
Array:
2 4 1 7 3
```

Queries:

```text
0 2
1 3
2 4
```

ধরো:

```text
X = 10
```

Query Sums:

```text
0 2 → 7
1 3 → 12
2 4 → 11
```

Greater than 10:

```text
12
11
```

Answer:

```text
2
```

---

## Pattern Analysis

```text
Many Range Queries
        ↓
Prefix Sum
```

তারপর:

```text
sum > X
        ↓
Condition Check
```

তারপর:

```text
How Many?
        ↓
Counting
```

Final:

```text
Prefix Sum
+
Condition
+
Counting
```

---

# 11. Prefix Sum + Counting Code

Zero-based Queries:

```c
#include <stdio.h>

int main()
{
    int n, q;
    long long x;

    scanf("%d %d %lld", &n, &q, &x);

    long long arr[n];
    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        prefix[i + 1] =
            prefix[i] + arr[i];
    }

    int count = 0;

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long sum =
            prefix[right + 1] - prefix[left];

        if (sum > x)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

Mental Flow:

```text
Build Prefix Once
        ↓
Read Query
        ↓
Calculate Range Sum
        ↓
sum > x ?
        ↓
Yes
        ↓
count++
```

---

# 12. Combination 6 - Prefix Sum + Maximum

## Problem

দেওয়া `q` Range Query-এর মধ্যে সবচেয়ে বড় Range Sum বের করো।

Array:

```text
2 4 1 7 3
```

Queries:

```text
0 1
1 3
2 4
```

Sums:

```text
0 1 → 6

1 3 → 12

2 4 → 11
```

Maximum:

```text
12
```

Patterns:

```text
Prefix Sum
+
Query Processing
+
Maximum Tracking
```

---

## Code Core

```c
long long maxSum;
int firstQuery = 1;

while (q--)
{
    int left, right;

    scanf("%d %d", &left, &right);

    long long currentSum =
        prefix[right + 1] - prefix[left];

    if (firstQuery)
    {
        maxSum = currentSum;
        firstQuery = 0;
    }
    else if (currentSum > maxSum)
    {
        maxSum = currentSum;
    }
}
```

কেন:

```text
maxSum = 0
```

দেওয়া হয়নি?

কারণ Range Sum negative হতে পারে।

Example:

```text
Array:
-5 -2 -8
```

Query Sums সব negative হলে:

```text
0
```

সঠিক maximum না।

তাই valid result দিয়ে initialization safer।

---

# 13. Combination 7 - Prefix Sum + Searching

## Problem

দেওয়া Queries-এর মধ্যে কোনো Range Sum exactly `target` কি না।

Patterns:

```text
Prefix Sum
+
Searching
```

Code Core:

```c
int found = 0;

while (q--)
{
    int left, right;

    scanf("%d %d", &left, &right);

    long long sum =
        prefix[right + 1] - prefix[left];

    if (sum == target)
    {
        found = 1;
    }
}
```

শেষে:

```c
if (found)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
```

---

# 14. `break` ব্যবহার করার আগে Input-এর কথা ভাবো

ধরো:

```text
q = 5
```

তুমি দ্বিতীয় Query-তেই target পেয়ে গেলে:

```c
if (sum == target)
{
    found = 1;
    break;
}
```

Standalone program-এ অনেক ক্ষেত্রে এটা সমস্যা নাও করতে পারে।

কিন্তু যদি এরপর আরও Test Case বা Input process করতে হয়, unread Query input থেকে যেতে পারে।

তাই Input Structure বুঝে `break` ব্যবহার করবে।

Mental Rule:

```text
Found Answer
↓
Can I Safely Stop Reading Input?
↓
Check Input Structure
```

---

# 15. Combination 8 - Prefix Sum + Counting + Maximum

এবার তিনটি Pattern combine করি।

## Problem

> `q` Range Query দেওয়া আছে। যেসব Query-এর Sum Even:
>
> 1. সেগুলোর সংখ্যা বের করো।
> 2. তাদের মধ্যে Maximum Sum বের করো।

এখন Patterns:

```text
Prefix Sum
+
Even Check
+
Counting
+
Maximum Tracking
```

Flow:

```text
Build Prefix
      ↓
Read Query
      ↓
Calculate Sum
      ↓
Is Sum Even?
   /        \
 No         Yes
 │           │
Skip       count++
             │
             ▼
        Update Maximum
```

---

# 16. Full Combined Example

```c
#include <stdio.h>

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        prefix[i + 1] =
            prefix[i] + arr[i];
    }

    int evenCount = 0;
    int foundEven = 0;

    long long maxEvenSum = 0;

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long sum =
            prefix[right + 1] - prefix[left];

        if (sum % 2 == 0)
        {
            evenCount++;

            if (!foundEven)
            {
                maxEvenSum = sum;
                foundEven = 1;
            }
            else if (sum > maxEvenSum)
            {
                maxEvenSum = sum;
            }
        }
    }

    printf("Even Query Count: %d\n", evenCount);

    if (foundEven)
    {
        printf("Maximum Even Sum: %lld\n", maxEvenSum);
    }
    else
    {
        printf("No even query sum\n");
    }

    return 0;
}
```

---

# 17. Code দেখার আগে Pattern লিখো

এই Habit develop করবে।

Problem:

> Array-এর Positive Odd Numbers-এর Sum বের করো।

Code লেখার আগে:

```text
Traversal
+
Positive Check
+
Odd Check
+
Accumulation
```

Problem:

> Target-এর First Occurrence বের করো।

```text
Traversal
+
Matching
+
Store Index
+
Early Stop
```

Problem:

> Range Query-এর মধ্যে কতগুলো Sum Target-এর সমান?

```text
Prefix Sum
+
Matching
+
Counting
```

Problem:

> Query Sum-এর মধ্যে Minimum বের করো।

```text
Prefix Sum
+
Minimum Tracking
```

এভাবে Pattern আগে লিখলে Code-এর structure পরিষ্কার হয়।

---

# 18. Pattern Dependency

সব Pattern একই level-এ কাজ করে না।

Example:

```text
Prefix Sum
+
Maximum
```

এখানে Prefix Sum প্রথমে:

```text
currentSum
```

তৈরি করে।

তারপর Maximum Pattern সেই result use করে।

অর্থাৎ:

```text
Prefix Sum
     ↓
Produces currentSum
     ↓
Maximum Tracking
     ↓
Produces maxSum
```

এটাকে dependency হিসেবে ভাবতে পারো:

```text
Pattern A Output
        ↓
Pattern B Input
```

এটাই Pattern Pipeline-এর বড় idea।

---

# 19. Problem Decomposition with Functions

Day 4-এর Function concept use করি।

Problem:

> Range Query-এর Sum বের করে কতগুলো Sum Even count করো।

আমরা Functions বানাতে পারি:

```text
buildPrefix()
```

```text
rangeSum()
```

```text
isEven()
```

Program Flow:

```text
main()
  │
  ├── buildPrefix()
  │
  ├── rangeSum()
  │
  └── isEven()
```

---

# 20. Function-Based Combined Solution

```c
#include <stdio.h>

void buildPrefix(
    long long arr[],
    long long prefix[],
    int n
)
{
    prefix[0] = 0;

    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] =
            prefix[i] + arr[i];
    }
}

long long rangeSum(
    long long prefix[],
    int left,
    int right
)
{
    return prefix[right + 1] - prefix[left];
}

int isEven(long long value)
{
    return value % 2 == 0;
}

int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    long long arr[n];
    long long prefix[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    buildPrefix(arr, prefix, n);

    int count = 0;

    while (q--)
    {
        int left, right;

        scanf("%d %d", &left, &right);

        long long sum =
            rangeSum(prefix, left, right);

        if (isEven(sum))
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

Mental Structure:

```text
Input
↓
buildPrefix()
↓
Query Loop
↓
rangeSum()
↓
isEven()
↓
Counting
↓
Output
```

---

# 21. Function বানানো মানেই সবকিছুর Function না

এটাও গুরুত্বপূর্ণ।

Bad Over-Decomposition:

```text
readN()
readQ()
readLeft()
readRight()
printAnswer()
increaseCount()
```

ছোট Problem-এ unnecessary Function বেশি হলে Code harder to follow হতে পারে।

Function useful যখন:

```text
Clear Responsibility
```

আছে।

যেমন:

```text
buildPrefix()
rangeSum()
isPalindrome()
reverseNumber()
findMaximum()
```

Mental Rule:

```text
Use Functions
to separate meaningful tasks,
not every single line.
```

---

# 22. Pattern Combination Strategy

যখন Problem দেখবে, এই ৬টি প্রশ্ন করবে।

---

## Question 1 - কী Traverse করতে হবে?

```text
Array?
Digits?
Queries?
String?
```

---

## Question 2 - কী Condition আছে?

```text
Even?
Positive?
Equal to Target?
Greater Than X?
Palindrome?
```

---

## Question 3 - কী Store বা Track করতে হবে?

```text
Count?
Sum?
Maximum?
Minimum?
Index?
Found State?
```

---

## Question 4 - একই কাজ বারবার হচ্ছে?

```text
Repeated Range Sum?
```

হলে:

```text
Precomputation?
Prefix Sum?
```

ভাববে।

---

## Question 5 - Problem ছোট Tasks-এ ভাগ করা যায়?

```text
Build
Query
Check
Update
Output
```

---

## Question 6 - Pattern Order কী?

Example:

```text
Prefix Build
↓
Range Sum
↓
Even Check
↓
Count
```

Order important।

কারণ `Even Check` করার আগে Range Sum দরকার।

---

# 23. Pattern Combination Table

| Problem Requirement      | Pattern Combination                  |
| ------------------------ | ------------------------------------ |
| Even Number Count        | Traversal + Condition + Counting     |
| Positive Number Sum      | Traversal + Condition + Accumulation |
| Target Occurrence Count  | Matching + Counting                  |
| Largest Even Number      | Filtering + Maximum                  |
| Smallest Positive Number | Filtering + Minimum                  |
| Many Range Sums          | Prefix Sum                           |
| Count Query Sum > X      | Prefix Sum + Condition + Counting    |
| Maximum Query Sum        | Prefix Sum + Maximum                 |
| Target Query Sum Exists  | Prefix Sum + Searching               |
| Count Even Query Sums    | Prefix Sum + Even Check + Counting   |

এই Table মুখস্থ করার দরকার নেই।

Pattern relationship বুঝবে।

---

# 24. Mistake - পুরো Problem-কে একসাথে চিন্তা করা

Beginner Problem দেখে:

```text
Input অনেক
Query আছে
Sum আছে
Even আছে
Maximum আছে
```

তারপর confused হয়।

Better:

```text
Problem
↓
Break Into Questions
```

Example:

> Even Range Sum-এর মধ্যে Maximum বের করো।

Break:

```text
How do I get Range Sum?
→ Prefix Sum

How do I know valid Sum?
→ Even Check

What do I track?
→ Maximum
```

তারপর:

```text
Prefix Sum
+
Condition
+
Maximum
```

Problem ছোট হয়ে গেল।

---

# 25. Mistake - Pattern দেখেই Code Copy করা

ধরো তুমি Prefix Sum template জানো।

কিন্তু Problem Query:

```text
1-based
```

আর Template:

```text
0-based
```

তাহলে blindly copy করলে Wrong Answer হতে পারে।

Pattern Combination-এর আগে:

```text
Understand
↓
Adapt
↓
Code
```

শুধু:

```text
Recognize
↓
Copy Template
```

না।

---

# 26. Mistake - Wrong Update Order

Problem:

> Positive Numbers-এর Count এবং Sum বের করো।

Correct:

```c
if (arr[i] > 0)
{
    count++;
    sum += arr[i];
}
```

Wrong:

```c
count++;
sum += arr[i];

if (arr[i] > 0)
{
    // too late
}
```

Pattern Order:

```text
Check
↓
Then Update
```

সব Problem-এ order same হবে না।

তাই Flow লিখে নেওয়া useful।

---

# 27. Mistake - One Variable for Multiple Meanings

Bad:

```c
int x;
```

তারপর `x` কখনও:

```text
count
```

কখনও:

```text
sum
```

কখনও:

```text
index
```

এভাবে variable reuse করলে logic confusing হয়।

Better:

```c
int count;
long long sum;
int foundIndex;
long long maxSum;
```

Variable Name যেন State-এর কাজ বোঝায়।

---

# 28. Mistake - No Valid Candidate Case

Problem:

> Largest Negative Number বের করো।

Array:

```text
2 4 8 10
```

কোনো Negative Number নেই।

যদি blindly maximum update logic লেখো, output invalid হতে পারে।

তাই filtering + maximum/minimum problem-এ ভাববে:

```text
Can there be zero valid candidates?
```

যদি হ্যাঁ:

```text
found flag
```

useful।

Pattern:

```text
Filter
+
Found State
+
Max/Min Tracking
```

---

# 29. Mini Problem Solving Session 1

## Problem

একটি Array দেওয়া আছে।

Find:

```text
Count of Odd Numbers
+
Sum of Odd Numbers
```

Example:

```text
6
2 7 4 3 8 5
```

Odd Numbers:

```text
7 3 5
```

Count:

```text
3
```

Sum:

```text
15
```

---

## Pattern Analysis

```text
Traversal
+
Odd Check
+
Counting
+
Accumulation
```

---

## Pseudocode

```text
count = 0
sum = 0

for every element:

    if element is odd:

        count++
        sum += element

print count
print sum
```

---

# 30. Mini Problem Solving Session 2

## Problem

একটি Array-এ Target-এর:

```text
First Occurrence
```

এবং:

```text
Total Occurrence Count
```

দুটো বের করো।

Example:

```text
Array:
5 2 7 2 9 2

Target:
2
```

Answer:

```text
First Index:
1

Total Count:
3
```

Patterns:

```text
Traversal
+
Matching
+
First Occurrence
+
Counting
```

Core Logic:

```c
int firstIndex = -1;
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        count++;

        if (firstIndex == -1)
        {
            firstIndex = i;
        }
    }
}
```

খেয়াল করো:

```text
break
```

ব্যবহার করা হয়নি।

কেন?

কারণ First Index পাওয়ার পরেও Total Count বের করতে বাকি Array traverse করতে হবে।

এটা গুরুত্বপূর্ণ Pattern Combination lesson।

---

# 31. Early Stop সবসময় সঠিক না

শুধু First Occurrence চাইলে:

```c
if (arr[i] == target)
{
    index = i;
    break;
}
```

সঠিক।

কিন্তু যদি চাই:

```text
First Occurrence
+
Total Count
```

তাহলে early `break` দিলে Count অসম্পূর্ণ হবে।

Mental Rule:

```text
Before break
↓
Ask:
Do later elements still matter?
```

যদি:

```text
Yes
```

তাহলে traversal continue করবে।

---

# 32. Mini Problem Solving Session 3

## Problem

`q` Range Queries-এর মধ্যে:

```text
1. কতগুলো Sum Positive?

2. Positive Sum-এর Total কত?

3. Largest Positive Query Sum কত?
```

এখানে Patterns:

```text
Prefix Sum
+
Condition Check
+
Counting
+
Accumulation
+
Maximum Tracking
```

Flow:

```text
Build Prefix
↓
For Each Query
↓
Calculate Range Sum
↓
sum > 0?
↓
Yes
├── count++
├── total += sum
└── update max
```

এটা বড় দেখালেও প্রতিটি অংশ তুমি আগে শিখেছ।

এটাই Pattern Combination-এর শক্তি।

---

# 33. Pattern Map

```text
                    PROBLEM
                       │
                       ▼
                   TRAVERSAL
                       │
          ┌────────────┼────────────┐
          │            │            │
          ▼            ▼            ▼
      CONDITION     MATCHING     RANGE QUERY
          │            │            │
     ┌────┼────┐       │            ▼
     │    │    │       │        PREFIX SUM
     ▼    ▼    ▼       │            │
   Count Sum Max/Min   Search         │
     │    │    │       │             │
     └────┴────┴───────┴──────┬──────┘
                              ▼
                         FINAL ANSWER
```

তুমি যত Problem solve করবে, তত এই Map natural হবে।

---

# 34. Combination Recognition Drill

Code লিখবে না।

শুধু Pattern identify করবে।

---

## Problem 1

> Array-এ কয়টি value Target-এর চেয়ে বড়?

Answer Structure:

```text
Traversal
+
Condition
+
?
```

---

## Problem 2

> Array-এর সবচেয়ে ছোট Positive Number বের করো।

```text
Traversal
+
?
+
?
```

---

## Problem 3

> Target-এর First Index এবং Total Count বের করো।

```text
Traversal
+
?
+
?
+
?
```

---

## Problem 4

> অনেক Range Query-এর মধ্যে কতগুলো Sum Even?

```text
?
+
?
+
?
```

---

## Problem 5

> অনেক Range Query-এর মধ্যে সবচেয়ে ছোট Odd Sum বের করো।

```text
?
+
?
+
?
```

---

## Problem 6

> Range Query Sum Target-এর সমান কি না check করো।

```text
?
+
?
```

---

# 35. Pattern Selection Drill

নিচের Problem-গুলোর জন্য Primary Pattern এবং Secondary Pattern লিখবে।

---

### A

> Array-এর Negative Values-এর Sum।

```text
Primary:

Secondary:
```

---

### B

> Query Sum-এর মধ্যে Maximum।

```text
Primary:

Secondary:
```

---

### C

> Target value কতবার আছে।

```text
Primary:

Secondary:
```

---

### D

> Even Query Sum-এর Count।

```text
Primary:

Secondary:
```

---

### E

> Largest Positive Number।

```text
Primary:

Secondary:
```

---

# 36. Guided Coding Task 1

## Odd Count + Odd Sum

Input:

```text
6
2 7 4 3 8 5
```

Expected Output:

```text
Count: 3
Sum: 15
```

Before Coding লিখবে:

```text
Traversal:
Why?

Condition:
What?

State Variables:
Which ones?

Updates:
When?
```

---

# 37. Guided Coding Task 2

## First Index + Total Count

Input:

```text
7
4 2 8 2 5 2 9
2
```

Expected:

```text
First Index: 1
Count: 3
```

Important Question:

```text
Can I break after first match?
```

Answer নিজে explain করবে।

---

# 38. Guided Coding Task 3

## Count Large Query Sums

Input:

```text
5 3 10
2 4 1 7 3
0 2
1 3
2 4
```

Query Sums:

```text
7
12
11
```

Greater than:

```text
10
```

Count:

```text
2
```

Expected Output:

```text
2
```

Required Patterns:

```text
Prefix Sum
+
Condition
+
Counting
```

---

# 39. Guided Coding Task 4

## Maximum Query Sum

Input:

```text
5 3
2 4 1 7 3
0 1
1 3
2 4
```

Query Sums:

```text
6
12
11
```

Output:

```text
12
```

Required:

```text
Prefix Sum
+
Maximum Tracking
```

---

# 40. Guided Coding Task 5

## Count + Maximum Even Query Sum

Input:

```text
6 4
2 4 1 7 3 5
0 1
1 3
2 5
0 5
```

তোমার কাজ:

```text
1. Prefix Build

2. Query Sum Calculate

3. Even Sum Check

4. Count Even Query Sums

5. Find Maximum Even Query Sum
```

Patterns:

```text
Prefix Sum
+
Condition
+
Counting
+
Maximum Tracking
```

---

# 41. Professional Problem-Solving Template

Problem পড়ার পর Notes-এ এই Template use করতে পারো:

````markdown
## Problem Analysis

### Input

What data is given?

### Required Output

What exactly must be printed?

### Constraints

What are the important limits?

### Primary Pattern

Which pattern solves the main expensive work?

### Secondary Patterns

Which additional patterns are needed?

### State Variables

What information must be stored while processing?

### Pattern Flow

```text
Input
↓
...
↓
Output
````

### Complexity

Time:

Space:

### Edge Cases

* ...
* ...
* ...

````

এই analysis খুব বড় করার দরকার নেই।

Contest Practice-এর সময় ১–৩ মিনিটের মধ্যে mentally করতে শিখবে।

---

# 42. Example Professional Analysis

Problem:

> Static Array-এর `q` Range Query দেওয়া আছে। কতগুলো Query-এর Sum Odd তা print করো।

Analysis:

```text
Input:
Array + q Queries

Output:
Count of Odd Range Sums

Primary Pattern:
Prefix Sum

Secondary Pattern:
Condition Check + Counting

State:
prefix[]
count

Flow:
Build Prefix
↓
Read Query
↓
Calculate Range Sum
↓
Check Odd
↓
count++

Complexity:
O(n + q)

Space:
O(n)
````

এটাই যথেষ্ট।

---

# 43. Complexity of Combined Patterns

Pattern combine করলে Complexity যোগ বা multiply হতে পারে।

এটা Flow-এর ওপর depend করে।

Example:

```text
Build Prefix:
O(n)
```

তারপর:

```text
Process q Queries:
O(q)
```

Total:

[
O(n+q)
]

কিন্তু যদি প্রতিটি Query-এর ভিতরে পুরো Array traverse করো:

```text
q Queries
×
n Traversal
```

তাহলে:

[
O(nq)
]

Mental Rule:

```text
Sequential Work
Often Adds
```

Example:

[
O(n)+O(q)=O(n+q)
]

আর:

```text
Nested Repeated Work
Often Multiplies
```

Example:

[
O(n)\times O(q)=O(nq)
]

এটা এখন শুধু basic intuition হিসেবে রাখবে।

Complexity analysis future Day-গুলোতে আরও develop হবে।

---

# 44. Pattern Combination Debugging

Combined Problem-এ Wrong Answer হলে পুরো Code একসাথে debug করবে না।

Layer by layer check করবে।

Example:

```text
Prefix Sum
+
Even Check
+
Counting
+
Maximum
```

Debug Order:

```text
Step 1:
Prefix Array Correct?
```

```text
Step 2:
Range Sum Correct?
```

```text
Step 3:
Even Check Correct?
```

```text
Step 4:
Count Update Correct?
```

```text
Step 5:
Maximum Update Correct?
```

Mental Rule:

```text
Combined Solution
↓
Debug One Pattern at a Time
```

---

# 45. Common Edge Cases in Combined Problems

## Case 1 - No Match

```text
Target নেই
```

Expected:

```text
index = -1
count = 0
```

---

## Case 2 - No Valid Candidate

Problem:

```text
Largest Even Number
```

কিন্তু Array:

```text
1 3 5 7
```

Need:

```text
found flag
```

---

## Case 3 - All Negative Values

Maximum initialization carefully করবে।

---

## Case 4 - Single Element

```text
n = 1
```

অনেক logic এখানে test করা যায়।

---

## Case 5 - Entire Range Query

```text
L = 0
R = n - 1
```

---

## Case 6 - Single Position Query

```text
L = R
```

---

## Case 7 - Large Sum

Use:

```text
long long
```

যদি constraints অনুযায়ী প্রয়োজন হয়।

---

# 🧪 Chapter 9 Practice Set

এই Chapter-এর জন্য সব Problem করা mandatory না।

কিন্তু নিচের ৫টি অবশ্যই করবে।

---

## Practice 1 - Positive Count and Sum

Input:

```text
7
-2 5 0 8 -3 4 1
```

Output:

```text
Count: 4
Sum: 18
```

Patterns:

```text
Traversal
+
Condition
+
Counting
+
Accumulation
```

---

## Practice 2 - First Index and Count

Input:

```text
8
4 7 2 7 9 7 1 7
7
```

Output:

```text
First Index: 1
Count: 4
```

Patterns:

```text
Traversal
+
Matching
+
First Occurrence
+
Counting
```

---

## Practice 3 - Maximum Even Number

Input:

```text
6
-8 -3 -4 -7 -10 -1
```

Output:

```text
-4
```

Patterns:

```text
Filtering
+
Found State
+
Maximum Tracking
```

---

## Practice 4 - Count Query Sums Greater Than X

Input:

```text
5 4 8
2 4 1 7 3
0 1
1 3
2 4
0 4
```

তুমি নিজে:

```text
Prefix Build
↓
Query Sums
↓
Compare with 8
↓
Count
```

করবে।

---

## Practice 5 - Maximum Odd Query Sum

একটি Array এবং `q` Queries দেওয়া থাকবে।

তোমার কাজ:

```text
Range Sum Calculate
↓
Odd Check
↓
Maximum Odd Sum Track
```

Patterns:

```text
Prefix Sum
+
Condition
+
Maximum Tracking
```

No valid Odd Sum থাকলে:

```text
NO ODD SUM
```

print করবে।

---

# 📝 Chapter 9 Assignment

## Assignment A - Pattern Identification

নিচের প্রতিটি Problem-এর Pattern Combination লিখবে।

```text
1. Count Positive Numbers

2. Sum of Even Numbers

3. Largest Negative Number

4. Target Occurrence Count

5. First Target Index + Total Count

6. Count Query Sums > X

7. Maximum Query Sum

8. Count Even Query Sums

9. Minimum Positive Query Sum

10. Target Range Sum Exists?
```

Format:

```text
Problem:

Primary Pattern:

Secondary Pattern(s):

Pattern Flow:
```

---

## Assignment B - Dry Run

Array:

```text
4 7 2 9 1 5
```

Queries:

```text
0 2
1 4
2 5
3 3
0 5
```

তোমার কাজ:

```text
1. Prefix Array বানাও

2. প্রতিটি Query Sum বের করো

3. Even Query Sum Count করো

4. Odd Query Sum Count করো

5. Maximum Query Sum বের করো

6. Minimum Query Sum বের করো
```

একটি Table বানাতে পারো:

| Query |  Sum | Even/Odd | Current Max | Current Min |
| ----- | ---: | -------- | ----------: | ----------: |
| `0 2` |    ? | ?        |           ? |           ? |
| `1 4` |    ? | ?        |           ? |           ? |
| `2 5` |    ? | ?        |           ? |           ? |
| `3 3` |    ? | ?        |           ? |           ? |
| `0 5` |    ? | ?        |           ? |           ? |

---

## Assignment C - Mandatory Coding

চারটি Program নিজে লিখবে:

```text
1. Positive Count + Positive Sum

2. First Occurrence + Total Count

3. Count Range Sums Greater Than X

4. Count Even Query Sums + Maximum Even Query Sum
```

প্রতিটি Program-এর শুরুতে comment:

```c
/*
Primary Pattern:

Secondary Patterns:

State Variables:

Pattern Flow:

Time Complexity:

Space Complexity:

Edge Cases:
*/
```

---

# 📚 Pattern Library Update

তোমার `core_pattern.md`-এ add করবে:

````markdown
# Pattern Combination

## Core Idea

A problem may require multiple known patterns working together.

## Mental Model

```text
Problem
↓
Break Into Tasks
↓
Identify Pattern for Each Task
↓
Find Correct Order
↓
Combine
````

## Common Combinations

### Count Matching Values

```text
Traversal
+
Condition / Matching
+
Counting
```

### Sum Filtered Values

```text
Traversal
+
Condition
+
Accumulation
```

### Maximum Valid Value

```text
Traversal
+
Filtering
+
Maximum Tracking
```

### Count Valid Range Queries

```text
Prefix Sum
+
Condition
+
Counting
```

### Maximum Range Query Result

```text
Prefix Sum
+
Maximum Tracking
```

## Debugging Rule

```text
Combined Solution
↓
Test Each Pattern Layer Separately
```

````

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Pattern Combination
Primary Pattern
Secondary Pattern
Pattern Pipeline
Filtering
State Variable
State Flag
Candidate
Dependency
Decomposition
````

Format:

```text
Term
↓
Simple Meaning
↓
Tiny Example
```

---

# 🧠 Chapter 9 Master Mental Model

```text
                        PROBLEM
                           │
                           ▼
                  Break Into Small Tasks
                           │
              ┌────────────┼────────────┐
              │            │            │
              ▼            ▼            ▼
           Need Sum?    Need Count?   Need Search?
              │            │            │
              ▼            ▼            ▼
        Accumulation    Counting      Searching
              │            │            │
              └────────────┼────────────┘
                           │
                           ▼
                   Repeated Range Work?
                           │
                     ┌─────┴─────┐
                     │           │
                    No          Yes
                     │           │
                     ▼           ▼
               Direct Work   Prefix Sum
                     │           │
                     └─────┬─────┘
                           │
                           ▼
                    Check Condition
                           │
                           ▼
                      Update State
                           │
                           ▼
                         Output
```

---

# 🔥 Chapter 9 Key Lesson

আজকের সবচেয়ে গুরুত্বপূর্ণ শিক্ষা:

```text
Hard-looking Problem
does not always mean
New Algorithm
```

অনেক সময়:

```text
Known Pattern
+
Known Pattern
+
Correct Order
=
Solution
```

তাই Problem দেখার পর:

```text
আমি কোন Code লিখব?
```

এই প্রশ্ন দিয়ে শুরু করবে না।

বরং:

```text
Problem-টা আমাকে
কোন কোন ছোট কাজ করতে বলছে?
```

তারপর:

```text
Task 1 → কোন Pattern?

Task 2 → কোন Pattern?

Task 3 → কোন Pattern?

এগুলোর Order কী?
```

এটাই Pattern Combination Thinking।

---

# ✅ Chapter 9 Completion Checklist

```text
[ ] Pattern Combination কী বুঝি

[ ] Primary Pattern identify করতে পারি

[ ] Secondary Pattern identify করতে পারি

[ ] Problem ছোট Tasks-এ ভাগ করতে পারি

[ ] Pattern Pipeline লিখতে পারি

[ ] Traversal + Counting combine করতে পারি

[ ] Filtering + Accumulation combine করতে পারি

[ ] Searching + Counting combine করতে পারি

[ ] Filtering + Maximum combine করতে পারি

[ ] Prefix Sum + Counting combine করতে পারি

[ ] Prefix Sum + Maximum combine করতে পারি

[ ] Prefix Sum + Searching combine করতে পারি

[ ] Three or more Patterns-এর Flow বুঝতে পারি

[ ] Early break কখন ভুল হতে পারে বুঝি

[ ] No valid candidate case handle করতে পারি

[ ] found flag ব্যবহার করতে পারি

[ ] Combined Solution layer-by-layer debug করতে পারি

[ ] Mandatory Coding Tasks complete করেছি

[ ] Pattern Library update করেছি

[ ] Glossary update করেছি
```

---

# 🎯 Day 4 Progress

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
│
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
│
├── ✅ Chapter 3 - Problem Decomposition with Functions
│
├── ✅ Chapter 4 - Arrays & Strings with Functions
│
├── ✅ Chapter 5 - Recursion Mental Model
│
├── ✅ Chapter 6 - Base Case, Recursive Case & Call Flow
│
├── ✅ Chapter 7 - Prefix Sum Pattern
│
├── ✅ Chapter 8 - Range Query & Prefix Sum Problems
│
├── ✅ Chapter 9 - Pattern Combination Session
│
└── ⬜ Chapter 10 - Assignment, Mini Contest & Reflection
```

# 🏁 Chapter 9 Final Rule

```text
Don't Ask:

"What code should I write?"
```

প্রথমে Ask:

```text
What small tasks exist?
        ↓
Which Pattern solves each task?
        ↓
What is the correct order?
        ↓
How do the Patterns share data?
        ↓
Combine
        ↓
Code
```

## Final Mental Formula

[
\boxed{
\text{Problem Solving}
======================

\text{Decomposition}
+
\text{Pattern Recognition}
+
\text{Correct Combination}
}
]

Chapter 9 শেষ। **Chapter 10** হবে Day 4-এর final chapter-এখানে নতুন theory চাপিয়ে না দিয়ে Day 4-এর Function, Recursion, Prefix Sum, Range Query এবং Pattern Combination consolidate করার জন্য **focused assignment, mini contest, review system, mistake log এবং Day 4 completion criteria** থাকবে।

---

# 📘 CP Bootcamp 2026 - Day 4

# Chapter 10 - Final Assignment, Mini Contest, Review & Reflection

> **Chapter Goal:** Day 4-এ শেখা সবকিছু consolidate করা, নিজে problem solve করা, Mini Contest-এর মাধ্যমে pressure-এর মধ্যে pattern recognize করা এবং Day 5-এর জন্য প্রস্তুত হওয়া।
> **Estimated Time:** 2–2.5 hours
> **New Theory:** খুব সামান্য
> **Main Focus:** Solve → Test → Debug → Review

---

# 🎯 Chapter Mission

Day 4-এ তুমি শিখেছ:

```text
Functions
↓
Parameters & Arguments
↓
Return Values
↓
Problem Decomposition
↓
Array with Functions
↓
String with Functions
↓
Recursion Mental Model
↓
Base Case
↓
Recursive Case
↓
Prefix Sum
↓
Range Query
↓
Pattern Combination
```

Chapter 10-এ নতুন অনেক theory শেখানো হবে না।

আজকের শেষ কাজ:

```text
Learned Concepts
        ↓
Solve Problems
        ↓
Find Mistakes
        ↓
Fix Mistakes
        ↓
Mini Contest
        ↓
Reflection
        ↓
Day 4 Complete
```

---

# 1. Day 4 Skill Map

Day 4-এর topics আলাদা আলাদা মনে হলেও এদের মধ্যে connection আছে।

```text
                    Problem
                       │
                       ▼
                  Decomposition
                       │
              ┌────────┼────────┐
              │        │        │
              ▼        ▼        ▼
          Function  Recursion  Precomputation
              │        │        │
              │        │        ▼
              │        │    Prefix Sum
              │        │        │
              │        │        ▼
              │        │   Range Query
              │        │        │
              └────────┼────────┘
                       ▼
               Pattern Combination
                       │
                       ▼
                    Solution
```

এই Day-এর সবচেয়ে গুরুত্বপূর্ণ skill:

> **একটি বড় Problem-কে ছোট ছোট logical task-এ ভেঙে solve করা।**

---

# 2. Day 4 Final Revision

Mini Contest-এর আগে এই অংশটা দ্রুত revise করবে।

সময়:

```text
20–25 minutes
```

---

## Revision 1 - Function

Function হলো:

```text
A named reusable block of code
that performs a specific task.
```

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Call:

```c
int result = add(5, 3);
```

Flow:

```text
main()
  ↓
add(5, 3)
  ↓
a = 5
b = 3
  ↓
return 8
  ↓
result = 8
```

---

## Revision 2 - Parameter vs Argument

Function Definition:

```c
int add(int a, int b)
```

এখানে:

```text
a, b
=
Parameters
```

Function Call:

```c
add(5, 3);
```

এখানে:

```text
5, 3
=
Arguments
```

Mental Model:

```text
Argument
↓
Function receives it
↓
Parameter
```

---

## Revision 3 - Return Value

```c
int square(int n)
{
    return n * n;
}
```

Call:

```c
int answer = square(5);
```

Flow:

```text
5
↓
square()
↓
25
↓
answer
```

---

## Revision 4 - Problem Decomposition

Problem:

> Array-এর Even Number Count এবং Sum বের করো।

একসাথে চিন্তা না করে:

```text
Task 1
Read Array

Task 2
Check Even

Task 3
Count Even

Task 4
Accumulate Sum

Task 5
Print Result
```

Possible decomposition:

```text
main()
│
├── readArray()
│
├── countEven()
│
└── sumEven()
```

সব problem-এ function বানানো mandatory না।

কিন্তু:

```text
Problem
↓
Small Logical Tasks
```

এই চিন্তাটা mandatory।

---

# 3. Recursion Quick Review

Recursive Function:

```text
A Function
that calls itself
```

Example:

```c
void printDown(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);

    printDown(n - 1);
}
```

Call:

```c
printDown(3);
```

Call Flow:

```text
printDown(3)
    ↓
print 3
    ↓
printDown(2)
        ↓
print 2
        ↓
printDown(1)
            ↓
print 1
            ↓
printDown(0)
                ↓
return
```

Output:

```text
3
2
1
```

---

## Two Parts of Recursion

```text
Recursion
│
├── Base Case
│
└── Recursive Case
```

Example:

```c
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}
```

Base Case:

```c
if (n == 0)
{
    return 0;
}
```

Recursive Case:

```c
return n + sum(n - 1);
```

Mental Rule:

```text
Every Recursive Function
must move toward
a stopping condition
```

---

# 4. Prefix Sum Quick Review

Array:

```text
2 4 1 7 3
```

Prefix:

```text
0 2 6 7 14 17
```

Meaning:

```text
prefix[i]
=
Sum of first i elements
```

Build:

```c
prefix[0] = 0;

for (int i = 0; i < n; i++)
{
    prefix[i + 1] =
        prefix[i] + arr[i];
}
```

---

## Zero-Based Inclusive Query

```text
[L, R]
```

Formula:

[
\boxed{
prefix[R+1]-prefix[L]
}
]

---

## One-Based Inclusive Query

Formula:

[
\boxed{
prefix[R]-prefix[L-1]
}
]

---

## Prefix Sum Trigger

```text
Static Array
+
Many Range Sum Queries
        ↓
Prefix Sum
```

---

# 5. Pattern Combination Quick Review

Problem:

> কতগুলো Query-এর Range Sum Even?

Breakdown:

```text
Need Range Sum
↓
Prefix Sum

Need Even Check
↓
Condition

Need Number of Valid Queries
↓
Counting
```

Final Combination:

```text
Prefix Sum
+
Condition
+
Counting
```

Problem:

> Largest Positive Number।

```text
Traversal
+
Filtering
+
Maximum Tracking
```

Problem:

> First Occurrence এবং Total Count।

```text
Traversal
+
Matching
+
First Occurrence
+
Counting
```

---

# 🧪 Part 1 - Concept Check

সময়:

```text
15 minutes
```

Notes না দেখে উত্তর দেওয়ার চেষ্টা করবে।

---

## Question 1

Function কেন ব্যবহার করি?

নিজের ভাষায় অন্তত ৩টি reason লিখবে।

---

## Question 2

Difference explain করো:

```text
Parameter
vs
Argument
```

একটি C example সহ।

---

## Question 3

এই Function-এর Return Type কী?

```c
long long rangeSum(
    long long prefix[],
    int left,
    int right
)
{
    return prefix[right + 1] - prefix[left];
}
```

এবং কেন?

---

## Question 4

Recursion-এর দুইটি mandatory logical part কী?

```text
1.

2.
```

---

## Question 5

এই Function-এ সমস্যা কী?

```c
void solve(int n)
{
    printf("%d\n", n);

    solve(n - 1);
}
```

Explain:

```text
Problem:

Why:

Fix:
```

---

## Question 6

Prefix Sum-এর trigger কী?

Format:

```text
?
+
?
+
?
↓
Prefix Sum
```

---

## Question 7

Zero-based inclusive query-এর formula লেখো।

---

## Question 8

One-based inclusive query-এর formula লেখো।

---

## Question 9

Problem:

> 100000 Query-এর Range Sum বের করতে হবে।

প্রতিটি Query-এর জন্য direct traversal করলে worst-case complexity কী হতে পারে?

Prefix Sum ব্যবহার করলে complexity কী?

---

## Question 10

Problem:

> Positive Even Number-এর Count এবং Sum বের করো।

Pattern Combination identify করো।

---

# 💻 Part 2 - Final Assignment

সময়:

```text
45–60 minutes
```

এখানে ৪টি Coding Task থাকবে।

সবগুলো গুরুত্বপূর্ণ।

---

# Assignment 1 - Function Decomposition

## Problem

একটি Array দেওয়া থাকবে।

তোমাকে Function ব্যবহার করে বের করতে হবে:

```text
1. Array Sum

2. Maximum Element

3. Minimum Element

4. Even Number Count
```

---

## Input

```text
6
5 2 8 1 9 4
```

Expected Output:

```text
Sum: 29
Maximum: 9
Minimum: 1
Even Count: 3
```

---

## Required Functions

```c
long long arraySum(int arr[], int n);

int findMaximum(int arr[], int n);

int findMinimum(int arr[], int n);

int countEven(int arr[], int n);
```

Program Structure:

```text
main()
│
├── Input
│
├── arraySum()
│
├── findMaximum()
│
├── findMinimum()
│
├── countEven()
│
└── Output
```

### Constraint

একটি function-এর কাজ অন্য function-এর ভিতরে copy করবে না।

প্রতিটি function-এর clear responsibility থাকবে।

---

# Assignment 2 - Recursion Practice

## Problem

Recursion ব্যবহার করে:

```text
1 + 2 + 3 + ... + n
```

বের করো।

Input:

```text
5
```

Output:

```text
15
```

Function:

```c
long long recursiveSum(int n);
```

Expected Call Flow:

```text
recursiveSum(5)
↓
5 + recursiveSum(4)
↓
5 + 4 + recursiveSum(3)
↓
5 + 4 + 3 + recursiveSum(2)
↓
5 + 4 + 3 + 2 + recursiveSum(1)
↓
5 + 4 + 3 + 2 + 1 + recursiveSum(0)
↓
15
```

### Mandatory Written Task

Code-এর নিচে নিজের ভাষায় লিখবে:

```text
Base Case:

Recursive Case:

How Input Moves Toward Base Case:

Time Complexity:
```

---

# Assignment 3 - Range Sum Queries

## Problem

একটি Array এবং `q` zero-based inclusive Range Query দেওয়া থাকবে।

প্রতিটি Query-এর Sum print করো।

Input:

```text
7 5
8 3 6 2 9 1 5
0 3
2 5
4 6
1 1
0 6
```

নিজে:

```text
1. Prefix Build করবে

2. প্রতিটি Query Formula apply করবে

3. Output verify করবে
```

Required Complexity:

```text
Build:
O(n)

Each Query:
O(1)

Total:
O(n + q)
```

Required Data Type:

```text
long long
```

---

# Assignment 4 - Combined Pattern Problem

## Problem

একটি Array এবং `q` zero-based Range Query দেওয়া থাকবে।

তোমাকে বের করতে হবে:

```text
1. কতগুলো Query Sum Even

2. কতগুলো Query Sum Odd

3. Maximum Query Sum

4. Minimum Query Sum
```

---

## Input

```text
6 5
4 7 2 9 1 5
0 2
1 4
2 5
3 3
0 5
```

---

## Required Pattern Analysis

Code লেখার আগে:

```text
Primary Pattern:

Secondary Patterns:

State Variables:

Pattern Flow:

Time Complexity:

Space Complexity:
```

Expected Pattern Flow:

```text
Build Prefix
↓
Read Query
↓
Calculate Range Sum
↓
Even / Odd Check
↓
Update Count
↓
Update Maximum
↓
Update Minimum
↓
Final Output
```

---

# 🏆 Part 3 - Day 4 Mini Contest

> **Contest Duration:** 60 minutes
> **Problems:** 4
> **Rule:** প্রথম 45 মিনিট কোনো note দেখবে না। শেষ 15 মিনিট debugging-এর জন্য।

এই Mini Contest-এর উদ্দেশ্য:

```text
Speed না
```

বরং:

```text
Pattern Recognition
+
Correct Implementation
+
Testing Habit
```

---

# 🟢 Problem A - Number Analyzer

## Difficulty

⭐☆☆☆☆

## Problem

একটি Array দেওয়া আছে।

Print করো:

```text
Positive Count
Negative Count
Zero Count
Total Sum
```

---

## Input

```text
7
-3 5 0 8 -2 0 4
```

Expected Output:

```text
Positive: 3
Negative: 2
Zero: 2
Sum: 12
```

---

## Hidden Skill

নিজে identify করবে।

Hint only:

```text
One Traversal
+
Multiple State Variables
```

---

# 🟢 Problem B - Target Report

## Difficulty

⭐⭐☆☆☆

## Problem

একটি Array এবং Target দেওয়া থাকবে।

Print:

```text
First Index
Last Index
Total Count
```

---

## Input

```text
8
4 7 2 7 9 7 1 7
7
```

Expected Output:

```text
First Index: 1
Last Index: 7
Count: 4
```

---

## Important Question

এখানে কি First Match পাওয়ার পর:

```c
break;
```

করতে পারবে?

নিজে reason explain করবে।

---

# 🟡 Problem C - Query Statistics

## Difficulty

⭐⭐⭐☆☆

## Problem

একটি Static Array এবং `q` zero-based inclusive Queries দেওয়া আছে।

Print:

```text
Sum of every Query
```

শেষে print:

```text
Largest Query Sum
```

---

## Example Input

```text
5 3
2 4 1 7 3
0 1
1 3
2 4
```

Expected Output:

```text
6
12
11
Maximum: 12
```

---

## Required Complexity

[
O(n+q)
]

---

# 🟡 Problem D - Query Filter

## Difficulty

⭐⭐⭐☆☆

## Problem

একটি Array, `q` Queries এবং একটি value `X` দেওয়া থাকবে।

Count করো:

```text
কতগুলো Query-এর Sum > X
```

এবং সেই valid Query Sum-গুলোর:

```text
Total Sum
```

বের করো।

---

## Example Input

```text
5 3 10
2 4 1 7 3
0 2
1 3
2 4
```

Query Sums:

```text
7
12
11
```

Valid:

```text
12
11
```

Expected Output:

```text
Count: 2
Total: 23
```

---

## Pattern Identification

Contest-এর সময় নিজে লিখবে:

```text
Primary Pattern:

Secondary Pattern 1:

Secondary Pattern 2:
```

---

# 6. Mini Contest Strategy

Contest শুরু করেই Problem A থেকে Code লেখা mandatory না।

প্রথমে সব Problem scan করবে।

Recommended Flow:

```text
0–5 min
Read All Problems
↓
Identify Patterns

5–15 min
Problem A

15–27 min
Problem B

27–42 min
Problem C

42–55 min
Problem D

55–60 min
Test & Debug
```

সময় exact না হলেও সমস্যা নেই।

মূল rule:

```text
Stuck for too long
↓
Move to another problem
↓
Return later
```

---

# 7. Before Coding Checklist

প্রতিটি Problem-এর আগে ৩০–৬০ seconds:

```text
[ ] Input কী?

[ ] Output কী?

[ ] Constraints কী?

[ ] Indexing কী?

[ ] Primary Pattern কী?

[ ] Secondary Pattern আছে?

[ ] কোন State Variables দরকার?

[ ] long long দরকার?

[ ] Edge Cases কী?
```

---

# 8. Before Submission Checklist

```text
[ ] Input format exact?

[ ] Output format exact?

[ ] Debug print removed?

[ ] Array bounds correct?

[ ] Loop boundaries correct?

[ ] Initialization correct?

[ ] Zero-based / One-based check?

[ ] int overflow possible?

[ ] Single element test?

[ ] All negative values test?

[ ] No match case test?
```

---

# 🐞 Part 4 - Debugging Challenge

নিচের Code-গুলোর Bug identify করবে।

সরাসরি compiler-এ run করার আগে নিজে চিন্তা করবে।

---

## Bug 1 - Maximum

```c
int maxValue = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] > maxValue)
    {
        maxValue = arr[i];
    }
}
```

Question:

```text
কোন Input-এ ভুল হবে?

কেন?

কীভাবে fix করবে?
```

---

## Bug 2 - Prefix Sum

```c
long long prefix[n + 1];

for (int i = 0; i < n; i++)
{
    prefix[i + 1] =
        prefix[i] + arr[i];
}
```

Question:

```text
Missing Step কী?
```

---

## Bug 3 - Range Query

Query zero-based inclusive।

```c
long long answer =
    prefix[right] - prefix[left];
```

Question:

```text
Correct Formula কী?
```

---

## Bug 4 - First Index + Count

```c
for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        firstIndex = i;
        count++;
        break;
    }
}
```

Problem wants:

```text
First Index
+
Total Count
```

Question:

```text
Logic Error কোথায়?
```

---

## Bug 5 - Recursion

```c
int sum(int n)
{
    return n + sum(n - 1);
}
```

Question:

```text
Missing কী?

Program-এর কী হতে পারে?
```

---

# 9. Testing Laboratory

এখন একটি important habit develop করবে:

> Sample Input pass করলেই solution correct প্রমাণ হয় না।

নিজের Test Case বানাবে।

---

## Test Category 1 - Smallest Input

```text
n = 1
```

Example:

```text
1
5
```

---

## Test Category 2 - All Same

```text
5
7 7 7 7 7
```

Useful for:

```text
Count
Search
First Index
Last Index
Maximum
Minimum
```

---

## Test Category 3 - All Negative

```text
5
-8 -2 -9 -1 -5
```

Useful for:

```text
Maximum Initialization
```

---

## Test Category 4 - Target Missing

```text
Array:
1 2 3 4 5

Target:
10
```

Expected:

```text
First Index:
-1

Count:
0
```

---

## Test Category 5 - Full Range

```text
L = 0
R = n - 1
```

---

## Test Category 6 - Single Position Range

```text
L = R
```

---

# 10. Mistake Log

তোমার `Notes/` folder-এর ভিতরে একটি file রাখতে পারো:

```text
mistake_log.md
```

Structure:

```markdown
# CP Mistake Log

## Mistake 1

### Problem

Problem name or short description.

### Mistake Type

Off-by-one error.

### What I Did

Used:

`prefix[R] - prefix[L]`

for a zero-based inclusive query.

### Correct Idea

Use:

`prefix[R + 1] - prefix[L]`

### Prevention Rule

Before coding, write the meaning of `prefix[i]`.

---

## Mistake 2

### Problem

Largest number in an all-negative array.

### Mistake Type

Wrong initialization.

### What I Did

Initialized maximum with `0`.

### Correct Idea

Initialize from a valid element or first valid candidate.

### Prevention Rule

Check whether valid answers can be negative.
```

Mistake Log-এর উদ্দেশ্য:

```text
Make Mistake
↓
Understand Mistake
↓
Write Prevention Rule
↓
Avoid Repeating It
```

একই ভুল ১০ বার করা learning না।

একবার ভুল করে:

```text
Why?
```

বুঝে prevention rule বানানোই improvement।

---

# 11. Error Classification

Bug হলে classify করার চেষ্টা করবে।

```text
Syntax Error
```

Example:

```c
printf("%d\n", x)
```

semicolon missing।

---

```text
Runtime Error
```

Possible example:

```text
Invalid memory access
```

---

```text
Wrong Answer
```

Program runs, কিন্তু logic wrong।

---

```text
Time Limit Exceeded
```

Logic answer দিতে পারে, কিন্তু too slow।

Example:

```text
100000 Queries
×
100000 Traversal
```

---

## Mental Model

```text
Error
│
├── Compile হচ্ছে না?
│      ↓
│   Syntax / Type Issue
│
├── Crash করছে?
│      ↓
│   Runtime Issue
│
├── Output ভুল?
│      ↓
│   Logic / Boundary Issue
│
└── Too Slow?
       ↓
    Complexity Issue
```

---

# 12. Day 4 Reflection

Mini Contest এবং Assignment শেষ করার পরে এই Reflection লিখবে।

সময়:

```text
10 minutes
```

Template:

```markdown
# Day 4 Reflection

## 1. Functions

আমি কি নিজে function define এবং call করতে পারি?

Answer:

---

## 2. Problem Decomposition

আমি কি একটি problem ছোট logical task-এ ভাগ করতে পারি?

Answer:

---

## 3. Recursion

Base Case এবং Recursive Case কি বুঝি?

Answer:

---

## 4. Prefix Sum

আমি কি নিজে prefix array build করতে পারি?

Answer:

---

## 5. Range Query

0-based এবং 1-based formula কি আলাদা করতে পারি?

Answer:

---

## 6. Pattern Combination

একটি problem-এ একাধিক pattern identify করতে পারি?

Answer:

---

## 7. Biggest Mistake Today

Answer:

---

## 8. Most Important Lesson Today

Answer:

---

## 9. Mini Contest Result

Solved:

Time:

Wrong Submissions:

Main Difficulty:

---

## 10. Tomorrow's Improvement Target

Answer:
```

---

# 13. Day 4 Repository Structure

Day 4-এর জন্য suggested structure:

```text
Day_4/
│
├── Chapters/
│   ├── chapter_01.md
│   ├── chapter_02.md
│   ├── chapter_03.md
│   ├── chapter_04.md
│   ├── chapter_05.md
│   ├── chapter_06.md
│   ├── chapter_07.md
│   ├── chapter_08.md
│   ├── chapter_09.md
│   └── chapter_10.md
│
├── Practice/
│   ├── function_array_analysis.c
│   ├── recursive_sum.c
│   ├── range_sum_queries.c
│   └── combined_query_stats.c
│
├── Mini_Contest/
│   ├── problem_a.c
│   ├── problem_b.c
│   ├── problem_c.c
│   └── problem_d.c
│
├── Assignment/
│   └── day_4_assignment.md
│
└── Reflection/
    └── day_4_reflection.md
```

তোমার existing repository naming convention অনুযায়ী number prefix থাকলে সেই format follow করবে।

---

# 14. Pattern Library Final Update for Day 4

`core_pattern.md`-এ Day 4 শেষে নিশ্চিত করবে এই sections আছে:

```text
Function Decomposition
Recursion Mental Model
Prefix Sum
Range Query Recognition
Pattern Combination
```

Suggested Summary:

````markdown
# Day 4 Pattern Summary

## Function Decomposition

```text
Large Problem
↓
Small Logical Tasks
↓
Clear Responsibilities
↓
Functions
````

## Recursion

```text
Current Problem
↓
Smaller Version of Same Problem
↓
Base Case
↓
Return Back
```

## Prefix Sum

```text
Static Array
+
Many Range Sum Queries
↓
Precompute Prefix
↓
O(1) Query
```

## Pattern Combination

```text
Problem
↓
Break Into Tasks
↓
Pattern for Each Task
↓
Correct Order
↓
Combine
```

## Debugging Rule

```text
Wrong Answer
↓
Separate Solution Into Layers
↓
Test One Layer at a Time
```

````

---

# 15. Day 4 Final Self-Test

নিজেকে score দাও।

প্রতিটি:

```text
0 = পারি না

1 = কিছুটা পারি

2 = confidently পারি
````

| Skill                            | Score |
| -------------------------------- | ----: |
| Function define করতে পারি           |  `/2` |
| Function call করতে পারি             |  `/2` |
| Parameter vs Argument বুঝি         |  `/2` |
| Return Value বুঝি                  |  `/2` |
| Array Function-এ pass করতে পারি     |  `/2` |
| Problem Decomposition করতে পারি     |  `/2` |
| Recursion Call Flow trace করতে পারি |  `/2` |
| Base Case identify করতে পারি        |  `/2` |
| Prefix Array build করতে পারি        |  `/2` |
| Range Query solve করতে পারি         |  `/2` |
| 0-based formula বুঝি               |  `/2` |
| 1-based formula বুঝি               |  `/2` |
| Pattern combine করতে পারি           |  `/2` |
| Edge Case বানাতে পারি                 |  `/2` |
| Complexity compare করতে পারি        |  `/2` |

Total:

```text
/30
```

Interpretation:

```text
25–30
→ Day 4 Strong

20–24
→ Good, weak topics revise

15–19
→ Assignment mistakes review করে তারপর Day 5

Below 15
→ Chapter 7–9 focused revision দরকার
```

পুরো Day আবার শুরু থেকে পড়ার দরকার নেই।

Weak section identify করে targeted revision করবে।

---

# 16. Day 4 Final Completion Criteria

Day 4 complete বলার আগে:

```text
[ ] Chapter 1–10 পড়েছি

[ ] Function syntax নিজে লিখতে পারি

[ ] Parameter এবং Argument explain করতে পারি

[ ] Return Value বুঝি

[ ] Array Function-এ pass করতে পারি

[ ] Problem Decomposition করতে পারি

[ ] Base Case identify করতে পারি

[ ] Simple Recursion trace করতে পারি

[ ] Prefix Array manually build করতে পারি

[ ] Prefix Sum code নিজে লিখতে পারি

[ ] Zero-based Range Query solve করতে পারি

[ ] One-based Range Query formula বুঝি

[ ] Off-by-one bug চিনতে পারি

[ ] Prefix Sum trigger identify করতে পারি

[ ] Pattern Combination করতে পারি

[ ] Final Assignment-এর 4টি task করেছি

[ ] Mini Contest দিয়েছি

[ ] Wrong solutions debug করেছি

[ ] Mistake Log update করেছি

[ ] Reflection লিখেছি

[ ] Pattern Library update করেছি
```

---

# 🏁 Day 4 Final Mental Map

```text
                         DAY 4
                           │
              ┌────────────┼────────────┐
              │            │            │
              ▼            ▼            ▼
          FUNCTIONS     RECURSION    PREFIX SUM
              │            │            │
              ▼            ▼            ▼
        Decomposition   Call Flow    Precomputation
              │            │            │
              ▼            ▼            ▼
        Reusable Logic  Base Case    Range Query
              │            │            │
              └────────────┼────────────┘
                           │
                           ▼
                  PATTERN COMBINATION
                           │
                           ▼
                     PROBLEM SOLVING
                           │
                           ▼
                    TESTING & DEBUGGING
                           │
                           ▼
                      MINI CONTEST
                           │
                           ▼
                       REFLECTION
```

---

# 🔥 Day 4-এর সবচেয়ে গুরুত্বপূর্ণ 10টি Rule

```text
1.
Problem বড় হলে ছোট Task-এ ভাঙো।

2.
Function-এর একটি clear responsibility থাকা উচিত।

3.
Parameter এবং Argument এক জিনিস নয়।

4.
Recursive Function-এর stopping condition থাকতে হবে।

5.
Base Case ছাড়া Recursion dangerous।

6.
Static Array + Many Range Sum Queries দেখলে Prefix Sum ভাবো।

7.
Prefix Formula ব্যবহারের আগে Indexing check করো।

8.
Combined Problem-এ Pattern একটার পর একটা identify করো।

9.
Wrong Answer হলে পুরো Code random change করো না।

10.
নিজের Edge Case বানিয়ে Test করো।
```

---

# 🎯 Day 4 Complete

```text
Day 4
│
├── ✅ Chapter 1 - Function Mental Model
├── ✅ Chapter 2 - Parameters, Arguments & Return Values
├── ✅ Chapter 3 - Problem Decomposition with Functions
├── ✅ Chapter 4 - Arrays & Strings with Functions
├── ✅ Chapter 5 - Recursion Mental Model
├── ✅ Chapter 6 - Base Case, Recursive Case & Call Flow
├── ✅ Chapter 7 - Prefix Sum Pattern
├── ✅ Chapter 8 - Range Query & Prefix Sum Problems
├── ✅ Chapter 9 - Pattern Combination Session
└── ✅ Chapter 10 - Assignment, Mini Contest & Reflection
```

## Day 4 Final Result

Day 4 শেষে তোমার expected capability:

```text
Simple Problem
↓
Identify Input and Output
↓
Break Problem Into Tasks
↓
Recognize Known Patterns
↓
Choose Data Types
↓
Use Functions Where Helpful
↓
Use Prefix Sum for Repeated Static Range Sums
↓
Combine Multiple Basic Patterns
↓
Write Solution
↓
Create Edge Cases
↓
Debug Systematically
```

**Day 4 এখানেই সম্পূর্ণ।** Day 5-এ যাওয়ার আগে Chapter 10-এর সব task একই দিনে শেষ করতে হবে এমন নয় যে প্রতিটি practice variation-ও করতে হবে; তবে **৪টি Final Assignment, ৬০ মিনিটের Mini Contest, Mistake Log এবং Reflection** শেষ করলেই Day 4-এর core objective complete ধরা যাবে।