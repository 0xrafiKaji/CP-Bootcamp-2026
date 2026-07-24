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

# 🚀 CP Bootcamp 2026 - Day 10

# Theme: Recursion + Backtracking Foundation

> **Main Goal:**
> আজকে তুমি এমন একটা thinking pattern শিখবে যেখানে একটি function নিজেকেই call করে।

আগে:

```text
Loop
↓
Repeat Work
```

আজ:

```text
Function
↓
Call Itself
↓
Solve Smaller Version
↓
Build Answer
```

**Estimated Time:** 6–7 hours

---

# 📖 Day 10 Chapter Map

```text
Day 10
│
├── Chapter 1 - Recursion Mental Model
│
├── Chapter 2 - Base Case & Recursive Case
│
├── Chapter 3 - Recursion Trace & Call Stack
│
├── Chapter 4 - Basic Recursion Problems
│
├── Chapter 5 - Recursion on Arrays
│
├── Chapter 6 - Recursion on Strings
│
├── Chapter 7 - Backtracking Mental Model
│
├── Chapter 8 - Generate All Possibilities
│
├── Chapter 9 - Common Bugs & Edge Cases
│
└── Chapter 10 - Day 10 Assignment & Practice
```

---

# Chapter 1 - Recursion Mental Model

## Recursion কী?

Recursion হলো:

> একটি function নিজেকেই call করে।

Example:

```c
void hello()
{
    hello();
}
```

এটা infinite চলবে।

তাই recursion-এর দুইটা অংশ লাগে:

```text
Function
│
├── Base Case
│
└── Recursive Case
```

---

# Chapter 2 - Base Case & Recursive Case

## Base Case

যেখানে recursion থামবে।

Example:

```text
Print 1 to 5
```

Thinking:

```text
print(1)

print(2)

print(3)

print(4)

print(5)

STOP
```

Stop condition:

```text
n == 0
```

---

## Recursive Case

যেখানে function আবার call করে।

Example:

```c
print(n-1);
```

---

Complete:

```c
void printNumber(int n)
{
    if(n==0)
        return;


    printNumber(n-1);

    printf("%d\n",n);
}
```

---

Call:

```c
printNumber(5);
```

Flow:

```text
print(5)

↓

print(4)

↓

print(3)

↓

print(2)

↓

print(1)

↓

stop
```

---

# Chapter 3 - Recursion Trace & Call Stack

Recursion বুঝতে হলে stack বুঝতে হবে।

Example:

```c
factorial(4)
```

Meaning:

[
4! = 4 \times 3 \times 2 \times 1
]

---

Function:

```c
int factorial(int n)
{
    if(n==1)
        return 1;


    return n * factorial(n-1);
}
```

---

Call:

```text
factorial(4)
```

Stack:

```text
factorial(4)

4 * factorial(3)


factorial(3)

3 * factorial(2)


factorial(2)

2 * factorial(1)


factorial(1)

return 1
```

Return:

```text
1

2*1 = 2

3*2 = 6

4*6 = 24
```

Answer:

```text
24
```

---

# Mental Model

Recursion:

```text
Go Down
↓
Reach Base Case
↓
Come Back Up
```

---

# Chapter 4 - Basic Recursion Problems

---

# Problem 1 - Print 1 to N

Example:

Input:

```text
5
```

Output:

```text
1 2 3 4 5
```

Code:

```c
void print(int n)
{
    if(n==0)
        return;


    print(n-1);

    printf("%d ",n);
}
```

---

Pattern:

```text
Decrease Problem

↓

Solve Smaller

↓

Print While Returning
```

---

# Problem 2 - Print N to 1

Output:

```text
5 4 3 2 1
```

Code:

```c
void print(int n)
{
    if(n==0)
        return;


    printf("%d ",n);

    print(n-1);
}
```

---

Difference:

Before recursive call:

```text
N to 1
```

After recursive call:

```text
1 to N
```

Important recursion concept।

---

# Problem 3 - Sum 1 to N

Formula:

[
1+2+3+...+n
]

Recursive idea:

```text
sum(n)

=

n + sum(n-1)
```

Code:

```c
int sum(int n)
{
    if(n==0)
        return 0;


    return n + sum(n-1);
}
```

---

Example:

```text
sum(5)

=5+sum(4)

=5+4+sum(3)

...

=15
```

---

# Problem 4 - Factorial

Already seen:

```c
int fact(int n)
{
    if(n==1)
        return 1;


    return n*fact(n-1);
}
```

---

# Chapter 5 - Recursion on Arrays

Array:

```text
5 3 8 1
```

---

## Print Array Recursively

```c
void printArray(int arr[], int index, int n)
{
    if(index==n)
        return;


    printf("%d ",arr[index]);


    printArray(arr,index+1,n);
}
```

---

Flow:

```text
index 0

↓

index 1

↓

index 2

↓

index 3

↓

stop
```

---

# Find Maximum Recursively

Idea:

```text
Maximum of whole array

=

Current element

+

Maximum of rest
```

---

Code:

```c
int maxArray(int arr[], int index, int n)
{
    if(index==n-1)
        return arr[index];


    int rest=maxArray(arr,index+1,n);


    if(arr[index]>rest)
        return arr[index];


    return rest;
}
```

---

# Chapter 6 - Recursion on Strings

## Reverse String

String:

```text
hello
```

Need:

```text
olleh
```

---

Two pointer recursion:

```c
void reverse(char str[], int left, int right)
{
    if(left>=right)
        return;


    char temp=str[left];

    str[left]=str[right];

    str[right]=temp;


    reverse(str,left+1,right-1);
}
```

---

Pattern:

```text
Two Pointer

+

Recursion
```

---

# Palindrome Check Recursively

Example:

```text
madam
```

Compare:

```text
m == m

a == a

d == d
```

---

Code:

```c
int palindrome(char str[], int left, int right)
{
    if(left>=right)
        return 1;


    if(str[left]!=str[right])
        return 0;


    return palindrome(str,left+1,right-1);
}
```

---

# Chapter 7 - Backtracking Mental Model

Recursion:

```text
One path
```

Backtracking:

```text
Many paths
```

Example:

Choices:

```text
A
B
C
```

Need:

সব possible arrangement।

---

Backtracking:

```text
Choose

↓

Explore

↓

Undo Choice

↓

Try Another
```

---

Diagram:

```text
             Start

          /    |    \

         A     B     C

       / | \

      ...
```

---

# Chapter 8 - Generate All Possibilities

## Subsequence Problem

String:

```text
abc
```

Possible:

```text
""

"a"

"b"

"c"

"ab"

"ac"

"bc"

"abc"
```

---

At every character:

Two choices:

```text
Take

or

Don't Take
```

---

Decision Tree:

```text
          a

       /     \

    take      skip

     a          ""
```

---

Recursive Idea:

```text
solve(index, current)
```

---

Pseudo:

```text
if index == length

    print answer


else

    take character

    solve(next)


    remove character

    solve(next)
```

---

# Backtracking Pattern

```text
Choose

↓

Recursive Call

↓

Undo Choice
```

---

# Chapter 9 - Common Bugs & Edge Cases

---

## Bug 1 - No Base Case

Wrong:

```c
void fun(int n)
{
    fun(n-1);
}
```

Result:

```text
Stack Overflow
```

---

## Bug 2 - Wrong Base Case

Example:

```c
if(n==0)
```

কিন্তু function:

```text
n-1
```

করছে।

Need careful।

---

## Bug 3 - Forget Undo in Backtracking

Wrong:

```text
Choose

↓

Call
```

কিন্তু:

```text
Undo
```

নেই।

Result:

Wrong answers।

---

## Bug 4 - Too Deep Recursion

Large:

```text
n = 1000000
```

Recursion:

Stack overflow হতে পারে।

---

# Chapter 10 - Day 10 Assignment

## Part A - Basic Recursion

Implement:

```text
1. Print 1 to N

2. Print N to 1

3. Sum 1 to N

4. Factorial

5. Fibonacci
```

---

# Part B - Array Recursion

Implement:

```text
1. Print array

2. Sum array

3. Maximum element

4. Minimum element

5. Linear search recursively
```

---

# Part C - String Recursion

Implement:

```text
1. Reverse string

2. Check palindrome

3. Count characters
```

---

# Part D - Backtracking Practice

Generate:

```text
1. All subsequences of string

2. All binary strings of length N
```

Example:

N = 3

Output:

```text
000
001
010
011
100
101
110
111
```

---

# Part E - Dry Run

Trace:

```c
factorial(4)
```

Write:

```text
Call:

Return:

Final Answer:
```

---

# Glossary Update

Add:

```text
Recursion

Base Case

Recursive Case

Call Stack

Stack Overflow

Backtracking

Decision Tree

Choice

Explore

Undo Choice

State

Recursion Depth
```

---

# Pattern Library Update

Add:

```md
## Recursion Pattern

Recognition:

Problem can be reduced into smaller same problems.


Mental Model:

Solve(n)

↓

Solve(n-1)

↓

Combine Answer


Need:

Base Case

Recursive Case
```

---

```md
## Backtracking Pattern

Recognition:

Need all possible answers.


Mental Model:

Choose

↓

Explore

↓

Undo


Examples:

- Subsequence
- Permutation
- Combination
- Maze
```

---

# ✅ Day 10 Completion Checklist

```text
[ ] Recursion concept বুঝি

[ ] Base case বুঝি

[ ] Recursive case বুঝি

[ ] Call stack বুঝি

[ ] Factorial solve করতে পারি

[ ] Sum recursion solve করতে পারি

[ ] Array recursion বুঝি

[ ] String recursion বুঝি

[ ] Palindrome recursion বুঝি

[ ] Backtracking idea বুঝি

[ ] Choice → Explore → Undo pattern বুঝি

[ ] Decision tree বুঝি
```

---

# 🏁 Day 10 Final Mental Model

```text
Big Problem

↓

Make Smaller Same Problem

↓

Recursive Call

↓

Reach Base Case

↓

Return Answer
```

আর Backtracking:

```text
Problem

↓

Make Choice

↓

Explore

↓

Undo

↓

Try Next Choice
```

---

Day 10 শেষে তোমার CP foundation:

```text
Day 1-5
Pattern Thinking

+

Day 6
Functions

+

Day 7
Searching

+

Day 8
Sorting + Complexity

+

Day 9
Optimization Patterns

+

Day 10
Recursion + Backtracking
```

পরের **Day 11 - Stack, Queue + Data Structure Thinking** হবে।