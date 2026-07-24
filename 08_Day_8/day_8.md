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

# 🚀 CP Bootcamp 2026 - Day 8

# Theme: Sorting Algorithms Deep Dive + Complexity Thinking

> **Main Goal:**
> Day 5-এ তুমি Sorting-এর basic idea, `qsort()` এবং sorted data-এর advantage দেখেছো।
> আজকে Sorting-কে algorithm হিসেবে বুঝবে এবং **কোন sorting কখন use করা উচিত** সেটা শিখবে।

আজকের focus:

```text
Sorting
↓
How it works
↓
Complexity
↓
When to use
↓
Optimization Thinking
```

**Estimated Time:** 6–7 hours

---

# 📖 Day 8 Chapter Map

```text
Day 8
│
├── Chapter 1 - Why Sorting Matters
│
├── Chapter 2 - Sorting Mental Model
│
├── Chapter 3 - Bubble Sort Deep Dive
│
├── Chapter 4 - Selection Sort Deep Dive
│
├── Chapter 5 - Insertion Sort Foundation
│
├── Chapter 6 - Merge Sort Idea
│
├── Chapter 7 - Quick Sort Idea
│
├── Chapter 8 - Sorting Complexity Comparison
│
├── Chapter 9 - Choosing The Right Sorting
│
└── Chapter 10 - Day 8 Assignment & Practice
```

---

# Chapter 1 - Why Sorting Matters

## Sorting কী?

Sorting মানে:

> Data-কে নির্দিষ্ট order-এ সাজানো।

Example:

Before:

```text
5 2 8 1 3
```

After ascending:

```text
1 2 3 5 8
```

---

# কেন Sorting দরকার?

অনেক problem সরাসরি solve করা কঠিন।

কিন্তু sort করলে সহজ হয়ে যায়।

Example:

Find minimum difference:

Before:

```text
8 1 10 4
```

কোন দুইটার difference সবচেয়ে কম?

Hard.

---

Sort:

```text
1 4 8 10
```

এখন শুধু adjacent check:

```text
4-1 = 3

8-4 = 4

10-8 = 2
```

Answer:

```text
2
```

---

Sorting gives:

```text
Order
↓
Structure
↓
Pattern
↓
Easy Solution
```

---

# Chapter 2 - Sorting Mental Model

Sorting algorithm-এর মূল কাজ:

```text
Compare
+
Decision
+
Swap
```

Example:

```text
5 2
```

Compare:

```text
5 > 2
```

Wrong order।

Swap:

```text
2 5
```

---

General:

```text
Compare two values

        ↓

Need swap?

        ↓

Move towards sorted order
```

---

# Sorting-এর দুইটি Question

## Question 1

Ascending নাকি Descending?

Ascending:

```text
small → large
```

Example:

```text
1 2 3 4 5
```

---

Descending:

```text
large → small
```

Example:

```text
5 4 3 2 1
```

---

## Question 2

Stable sorting দরকার?

Stable মানে:

Equal value-এর original order থাকবে।

Example:

Students:

```text
Rafi 80
Nabil 80
Sara 90
```

Score অনুযায়ী sort:

Stable:

```text
Rafi 80
Nabil 80
Sara 90
```

Unstable:

```text
Nabil 80
Rafi 80
Sara 90
```

CP beginner level-এ সাধারণত এটা পরে বেশি দরকার হবে।

---

# Chapter 3 - Bubble Sort Deep Dive

## Idea

Bubble sort:

> বড় element ধীরে ধীরে শেষের দিকে যায়।

Example:

```text
5 3 8 1
```

---

Pass 1:

Compare:

```text
5 3
```

Swap:

```text
3 5 8 1
```

---

Compare:

```text
5 8
```

No swap

---

Compare:

```text
8 1
```

Swap:

```text
3 5 1 8
```

৮ চলে গেল শেষে।

---

Mental Model:

```text
Large Element
      ↓
Moves Right
```

---

# Implementation

```c
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;
            }
        }
    }
}
```

---

# Complexity

Worst:

```text
O(n²)
```

কারণ:

Nested loop।

---

# Optimization

Already sorted:

```text
1 2 3 4 5
```

তবুও loop চলবে।

Optimization:

Swap হয়েছে কিনা track করা।

```c
int swapped=0;
```

যদি কোনো swap না হয়:

```c
break;
```

---

# Chapter 4 - Selection Sort Deep Dive

## Idea

প্রতিবার:

```text
Smallest element খুঁজে সামনে রাখো
```

Example:

```text
5 3 8 1
```

Minimum:

```text
1
```

Swap:

```text
1 3 8 5
```

Next:

Remaining:

```text
3 8 5
```

Minimum:

```text
3
```

---

Mental Model:

```text
Find Minimum

↓

Place Correct Position
```

---

# Implementation

```c
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;


        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }


        int temp=arr[i];

        arr[i]=arr[minIndex];

        arr[minIndex]=temp;
    }
}
```

---

Complexity:

```text
O(n²)
```

---

# Bubble vs Selection

| Bubble            | Selection        |
| ----------------- | ---------------- |
| Adjacent compare  | Minimum search   |
| Many swaps        | Less swaps       |
| Large moves right | Small moves left |
| O(n²)             | O(n²)            |

---

# Chapter 5 - Insertion Sort Foundation

## Idea

যেভাবে মানুষ cards সাজায়।

Example:

Cards:

```text
5 3 4
```

Start:

```text
5
```

Add 3:

```text
3 5
```

Add 4:

```text
3 4 5
```

---

Mental Model:

```text
Sorted Part
+
New Element
+
Insert Correct Position
```

---

Code:

```c
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];

        int j=i-1;


        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];

            j--;
        }

        arr[j+1]=key;
    }
}
```

---

Complexity:

Worst:

```text
O(n²)
```

Best (already sorted):

```text
O(n)
```

---

# Chapter 6 - Merge Sort Idea

এখন efficient sorting।

Bubble/Selection:

```text
O(n²)
```

Large input-এর জন্য slow।

---

Merge Sort:

Divide and Conquer।

Idea:

```text
Divide
↓
Solve Small Parts
↓
Merge
```

---

Example:

```text
8 3 5 1
```

Divide:

```text
8 3

5 1
```

Again:

```text
8

3

5

1
```

এখন merge:

```text
3 8

1 5
```

Final:

```text
1 3 5 8
```

---

Complexity:

```text
O(n log n)
```

---

Mental Model:

```text
Break Problem

↓

Solve Pieces

↓

Combine
```

---

# Chapter 7 - Quick Sort Idea

Quick Sort:

একটি pivot select করে।

Example:

```text
5 2 8 1 9
```

Pivot:

```text
5
```

Partition:

Small:

```text
2 1
```

Pivot:

```text
5
```

Large:

```text
8 9
```

Then recursively sort:

```text
2 1

8 9
```

---

Average Complexity:

```text
O(n log n)
```

Worst:

```text
O(n²)
```

---

# Chapter 8 - Sorting Complexity Comparison

| Algorithm      | Best       | Average    | Worst      |
| -------------- | ---------- | ---------- | ---------- |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      |

---

# Chapter 9 - Choosing The Right Sorting

CP-তে সাধারণত:

## Small n

Example:

```text
n <= 1000
```

Simple:

```text
Insertion Sort
```

বা built-in।

---

## Large n

Example:

```text
n = 100000
```

Use:

```text
qsort()
```

বা:

```text
Merge Sort
Quick Sort
```

---

# Important Rule

Contest-এ:

নিজে sorting implement করার দরকার খুব কম।

Usually:

```c
qsort()
```

use করবে।

কিন্তু algorithm জানা দরকার কারণ:

* Complexity বুঝতে
* Interview
* Custom sorting
* Debugging

---

# Chapter 10 - Day 8 Assignment

## Part A - Implement Sorting

নিজে লিখবে:

```text
1. Bubble Sort

2. Optimized Bubble Sort

3. Selection Sort

4. Insertion Sort
```

---

# Part B - Dry Run

Array:

```text
5 3 8 1
```

Bubble Sort-এর প্রথম দুই pass দেখাও।

Format:

```
Pass 1:

Compare:

Swap:

Array:


Pass 2:

Compare:

Swap:

Array:
```

---

# Part C - Compare Algorithms

নিজের ভাষায়:

```
1. Bubble Sort কীভাবে কাজ করে?

2. Selection Sort কেন কম swap করে?

3. Insertion Sort কখন ভালো কাজ করে?

4. Merge Sort কেন faster?

5. Quick Sort-এর worst case কেন O(n²)?
```

---

# Part D - Problem Solving

## Problem 1

Array:

```text
5 2 8 1 3
```

Sort ascending.

---

## Problem 2

Find:

```text
second largest element
```

Approach:

```
Sort
+
Index
```

---

## Problem 3

Find:

```text
minimum difference
```

Approach:

```
Sort
+
Adjacent Comparison
```

---

## Problem 4

Student marks sort:

```
Name + Marks
```

Think:

```
Comparator
+
Sorting
```

---

# Glossary Update

Add:

```text
Sorting

Ascending

Descending

Swap

Stable Sort

Bubble Sort

Selection Sort

Insertion Sort

Merge Sort

Quick Sort

Divide and Conquer

Pivot

Partition

Comparison

Sorting Complexity
```

---

# Pattern Library Update

Add:

```md
## Sorting Pattern

Recognition:

When order helps solve problem.


Mental Model:

Unordered Data
        ↓
Sort
        ↓
Use Order
        ↓
Simpler Solution


Common Uses:

- Minimum difference
- Duplicate grouping
- Two pointer problems
- Ranking
```

---

```md
## Divide and Conquer Pattern

Mental Model:

Big Problem

↓

Break into smaller problems

↓

Solve

↓

Combine


Examples:

- Merge Sort
- Binary Search
```

---

# Day 8 Completion Checklist

```text
[ ] Sorting purpose বুঝি

[ ] Bubble Sort বুঝি

[ ] Selection Sort বুঝি

[ ] Insertion Sort বুঝি

[ ] Merge Sort idea বুঝি

[ ] Quick Sort idea বুঝি

[ ] O(n²) vs O(n log n) difference বুঝি

[ ] কখন built-in sort use করবো জানি

[ ] Sorting দিয়ে problem simplify করতে পারি

[ ] Comparator concept বুঝি

[ ] Divide and Conquer idea বুঝি
```

---

# 🏁 Day 8 Final Mental Model

```text
Problem

↓

Can ordering help?

↓

Sort Data

↓

Reveal Structure

↓

Apply Pattern

↓

Solve Faster
```

---

Day 8 শেষে তোমার CP foundation:

```text
Day 1-5
Pattern Thinking

+

Day 6
Modular Code

+

Day 7
Searching

+

Day 8
Sorting Algorithms + Complexity
```

পরের **Day 9 - Two Pointer + Sliding Window Foundation** হবে।