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

# 🚀 CP Bootcamp 2026 - Day 16

# Theme: Final Contest Preparation + CP Strategy + Full Revision

> **Main Goal:**
> আজকে নতুন algorithm শেখার দিন না।
> আজকে তুমি গত ১৫ দিনের সব knowledge একসাথে combine করবে এবং **Contest Programmer mindset** তৈরি করবে।

আজকের focus:

```text id="cph_final"
Knowledge
↓
Pattern Recognition
↓
Problem Selection
↓
Implementation
↓
Debugging
↓
Contest Strategy
```

**Estimated Time:** 6–7 hours

---

# 📖 Day 16 Chapter Map

```text id="map_final"
Day 16
│
├── Chapter 1 - CP Journey Review
│
├── Chapter 2 - Problem Reading Strategy
│
├── Chapter 3 - Pattern Recognition System
│
├── Chapter 4 - Implementation Strategy
│
├── Chapter 5 - Debugging & Testing System
│
├── Chapter 6 - Contest Time Management
│
├── Chapter 7 - CP Template & Environment Setup
│
├── Chapter 8 - Virtual Contest Practice
│
├── Chapter 9 - After Bootcamp Roadmap
│
└── Chapter 10 - Final Assignment & Graduation
```

---

# Chapter 1 - CP Journey Review

গত ১৬ দিনে তুমি যে journey complete করেছো:

```text id="journey"
Day 0
Environment + Mindset

↓

Day 1
C + Basic Problem Solving

↓

Day 2
Array Patterns

↓

Day 3
String Patterns

↓

Day 4
Nested Loop + Pattern Thinking

↓

Day 5
Sorting + Frequency

↓

Day 6
Functions + Modular Code

↓

Day 7
Searching

↓

Day 8
Sorting Algorithms + Complexity

↓

Day 9
Two Pointer + Sliding Window

↓

Day 10
Recursion + Backtracking

↓

Day 11
Stack + Queue

↓

Day 12
Linked List + Hashing

↓

Day 13
Trees

↓

Day 14
Graphs

↓

Day 15
Dynamic Programming

↓

Day 16
Contest Mindset
```

---

# এখন তোমার কাছে কী আছে?

তুমি এখন problem দেখলে চিন্তা করবে:

```text id="think"
Problem

↓

Which pattern?

↓

Which data structure?

↓

Which algorithm?

↓

Implementation
```

---

# Chapter 2 - Problem Reading Strategy

Contest-এ সবচেয়ে বড় skill:

> Code লেখা না, problem বুঝা।

---

# Step 1 - Read Problem Carefully

প্রথমে দেখো:

## Input

কি দেওয়া আছে?

Example:

```text id="input"
n

array

string

graph
```

---

## Output

কি চাচ্ছে?

Example:

```text id="output"
maximum

minimum

count

index

yes/no
```

---

## Constraints

সবচেয়ে important।

Example:

```
1 ≤ n ≤ 100000
```

মানে:

O(n²) চলবে না।

Need:

```text id="complexity"
O(n)

O(n log n)
```

---

# Step 2 - Identify Keywords

কিছু keyword দেখলে pattern চিনবে।

---

## "Count"

Think:

```text id="count"
Frequency Array

Hashing
```

---

## "Maximum / Minimum"

Think:

```text id="maxmin"
Greedy

DP

Sorting
```

---

## "Sorted"

Think:

```text id="sorted"
Binary Search

Two Pointer
```

---

## "Subarray / Substring"

Think:

```text id="sub"
Sliding Window

Prefix Sum
```

---

## "All Possible"

Think:

```text id="all"
Recursion

Backtracking
```

---

## "Connected"

Think:

```text id="connected"
Graph

DFS

BFS
```

---

# Chapter 3 - Pattern Recognition System

Contest-এ প্রথমে algorithm না।

Pattern চিনতে হবে।

---

# Pattern 1 - Traversal

Question:

"সব element দেখো"

Use:

```text id="trav"
Loop
```

---

# Pattern 2 - Frequency

Question:

"কতবার এসেছে?"

Use:

```text id="freq"
Array Frequency

Hash Map
```

---

# Pattern 3 - Searching

Question:

"খুঁজে বের করো"

Use:

```text id="search"
Linear Search

Binary Search
```

---

# Pattern 4 - Sorting

Question:

"Order দরকার"

Use:

```text id="sort"
Sorting
```

---

# Pattern 5 - Two Pointer

Question:

"Pair"

"Sorted array"

Use:

```text id="tp"
Two Pointer
```

---

# Pattern 6 - Sliding Window

Question:

"Continuous"

"Subarray"

Use:

```text id="window"
Sliding Window
```

---

# Pattern 7 - Recursion

Question:

"Break into smaller same problem"

Use:

```text id="rec"
Recursion
```

---

# Pattern 8 - Graph

Question:

"Connection"

Use:

```text id="graph"
DFS/BFS
```

---

# Pattern 9 - DP

Question:

"Previous answer needed"

Use:

```text id="dp"
Dynamic Programming
```

---

# Chapter 4 - Implementation Strategy

Contest-এ code লেখার আগে:

## Step 1

Brute Force চিন্তা করো।

Example:

Problem:

Find duplicate.

Brute:

```text id="brute"
Compare every pair
```

Complexity:

```
O(n²)
```

---

## Step 2

Optimize করো।

Think:

```text id="opt"
Can I store information?
```

Answer:

```text id="hash"
Hashing
```

---

## Step 3

Template use করো।

Example:

Binary Search:

```c
while(left<=right)
{
    mid = left+(right-left)/2;

    ...
}
```

---

# Chapter 5 - Debugging & Testing System

Professional programmer:

Sample input-এর উপর শুধু test করে না।

---

# Edge Case চিন্তা

## Empty

```
n=0
```

---

## One Element

```
n=1
```

---

## Duplicate

```
5 5 5 5
```

---

## Sorted

```
1 2 3 4
```

---

## Reverse Sorted

```
4 3 2 1
```

---

## Large Value

```
1000000000
```

---

# নিজের Test বানানোর Habit

Example:

Problem:

Maximum number.

Sample:

```
5
1 4 7 2 3
```

নিজে:

```text id="test"
1

10
```

---

All same:

```text
5

7 7 7 7 7
```

---

Negative:

```text
-5 -2 -8
```

---

# Chapter 6 - Contest Time Management

ধরো contest:

2 hours.

Strategy:

---

# First 10 Minutes

সব problem পড়ো।

Mark:

```text id="easy"
Easy

Medium

Hard
```

---

# Solve Order

Always:

```
Easy
 ↓
Medium
 ↓
Hard
```

---

Wrong approach:

Hard problem নিয়ে ১ ঘণ্টা বসে থাকা।

---

# 20 Minute Rule

যদি ২০ মিনিটেও idea না আসে:

```
Leave
```

অন্য problem solve করো।

---

# Debug Time

শেষ ১৫ মিনিট:

```text
Check

Submit

Recheck
```

---

# Chapter 7 - CP Template & Environment Setup

তোমার repository:

```text
CP-Bootcamp-2026/

├── Templates/

├── HackerRank/

├── CSES/

├── Codeforces/

├── Contest/

├── Notes/
```

---

Template রাখবে:

```text
Templates/

└── template.c
```

---

Basic Template:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);


    return 0;
}
```

---

Contest-এর আগে check:

```bash
gcc template.c -o template

./template
```

---

# Chapter 8 - Virtual Contest Practice

এখন থেকে real practice:

---

## Week Plan

### Day 1

Easy Problems

```
5 problems
```

---

### Day 2

Mixed:

```
3 Easy

2 Medium
```

---

### Day 3

Virtual Contest:

```
2 hours

No help
```

---

# Contest Simulation Rules

During contest:

❌ Google না

❌ AI না

❌ Solution দেখা না

---

After contest:

Analyze:

```
Why failed?

What pattern missed?

What concept missing?
```

---

# Chapter 9 - After Bootcamp Roadmap

Bootcamp শেষ।

এখন next phase:

---

# Phase 1 - Problem Practice

Platforms:

```text
HackerRank

CSES

Codeforces
```

Goal:

```text
300-500 problems
```

---

# Phase 2 - Algorithms Deep Dive

Learn:

```text
Prefix Sum

Greedy

Advanced Graph

Advanced DP

Number Theory

Bit Manipulation
```

---

# Phase 3 - Contest

Participate:

```text
Codeforces Div 4

Codeforces Div 3

University Contest
```

---

# Phase 4 - Competitive Programmer Mindset

Develop:

```text
Observation

Speed

Accuracy

Debugging
```

---

# Chapter 10 - Final Assignment & Graduation

## Part A - Create Your CP Profile

Complete:

```text
[ ] Codeforces Account

[ ] CSES Account

[ ] HackerRank Account

[ ] GitHub CP Repository
```

---

# Part B - Final Project

Create:

```
CP-Portfolio/
```

Structure:

```
CP-Portfolio/

├── C/

├── Arrays/

├── Strings/

├── Searching/

├── Sorting/

├── Graph/

├── DP/

├── Templates/

└── README.md
```

---

# Part C - Final Contest

Do:

একটি Virtual Contest:

Time:

```
2 hours
```

Solve:

```
Minimum 3 problems
```

---

# Part D - Self Evaluation

নিজেকে প্রশ্ন:

---

## Problem Solving

আমি কি:

```
Problem বুঝতে পারি?

Pattern চিনতে পারি?

Complexity ভাবতে পারি?
```

---

## Coding

আমি কি:

```
Bug খুঁজে বের করতে পারি?

Clean code লিখতে পারি?

Template ব্যবহার করতে পারি?
```

---

# 📚 Glossary Update

Add:

```text
Brute Force

Optimization

Constraint

Time Complexity

Space Complexity

Pattern Recognition

Virtual Contest

Contest Strategy

Edge Case

Debugging

Implementation
```

---

# 📚 Pattern Library Update

Add:

```md
# Problem Solving Framework


Read Problem

↓

Understand Constraints

↓

Find Pattern

↓

Choose Data Structure

↓

Implement

↓

Test Edge Cases

↓

Submit
```

---

```md
# Contest Strategy


Easy Problems First

↓

Secure Points

↓

Medium Problems

↓

Hard Problems

↓

Review
```

---

# ✅ Day 16 Completion Checklist

```text
[ ] Problem reading strategy বুঝি

[ ] Constraint দেখে complexity choose করতে পারি

[ ] Pattern চিনতে পারি

[ ] Edge case test করতে পারি

[ ] Contest time manage করতে পারি

[ ] Virtual contest দিতে পারি

[ ] CP template ready আছে

[ ] Next roadmap জানি
```

---

# 🏁 CP Bootcamp 2026 - Completed 🎉

Final Skill Tree:

```text
C Programming

↓

Problem Solving

↓

Arrays & Strings

↓

Searching & Sorting

↓

Optimization

↓

Recursion

↓

Data Structures

↓

Graphs

↓

Dynamic Programming

↓

Contest Strategy
```

---

**Bootcamp শেষ।**

এখন তোমার কাজ:

```text
Learn Less

Practice More

Analyze Mistakes

Repeat
```

পরবর্তী phase:

**The Engineer's Blueprint Journey → Engineering Mindset + CS Foundation** 🚀