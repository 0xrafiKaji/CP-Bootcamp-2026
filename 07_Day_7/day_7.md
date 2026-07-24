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

# 🚀 CP Bootcamp 2026 - Day 7

# Theme: Searching + Binary Search Foundation

> **Main Goal:**
> Data-এর মধ্যে কিছু খোঁজার সময় brute force থেকে efficient thinking-এ যাওয়া।

আগে:

```text
Traverse Everything
        ↓
Check One by One
```

এখন:

```text
Understand Search Space
        ↓
Remove Impossible Parts
        ↓
Search Faster
```

---

# 📖 Day 7 Chapter Map

```text
Day 7
│
├── Chapter 1 - Searching Mental Model
│
├── Chapter 2 - Linear Search Pattern
│
├── Chapter 3 - Linear Search Variations
│
├── Chapter 4 - Search State (Found, Index, Count)
│
├── Chapter 5 - Sorted Data & Search
│
├── Chapter 6 - Binary Search Mental Model
│
├── Chapter 7 - Binary Search Implementation
│
├── Chapter 8 - Binary Search Patterns
│
├── Chapter 9 - Common Bugs & Edge Cases
│
└── Chapter 10 - Day 7 Assignment & Practice
```

---

# Chapter 1 - Searching Mental Model

## Search কী?

Search মানে:

> কোনো collection-এর ভিতরে নির্দিষ্ট information খুঁজে বের করা।

Example:

Array:

```text
4 8 2 7 9
```

Find:

```text
7
```

Question:

```text
7 আছে কি?

কোথায় আছে?

কতবার আছে?
```

---

# Search Problem-এর ৩টি প্রশ্ন

যেকোনো search problem দেখলে:

## Question 1

কি খুঁজছি?

Example:

```text
Value

Index

Count

Position

Minimum

Maximum
```

---

## Question 2

Data sorted কিনা?

Example:

Sorted:

```text
1 3 5 7 9
```

Unsorted:

```text
7 2 9 1 5
```

Sorted হলে extra information পাওয়া যায়।

---

## Question 3

আমাকে সব জায়গা check করতে হবে?

নাকি:

```text
Half বাদ দেওয়া যাবে?
```

এখান থেকেই Binary Search আসে।

---

# Chapter 2 - Linear Search Pattern

## Linear Search কী?

সব element একে একে check করা।

Example:

Array:

```text
5 8 3 9 2
```

Find:

```text
9
```

Process:

```text
5 → No

8 → No

3 → No

9 → Found
```

---

# Mental Model

```text
Start
 ↓
Check Current Element
 ↓
Match?
 ├── Yes → Answer
 └── No → Next Element
```

---

# Basic Template

```c
for(int i = 0; i < n; i++)
{
    if(arr[i] == target)
    {
        // found
    }
}
```

---

# Example

```c
#include <stdio.h>

int main()
{
    int arr[] = {5,8,3,9,2};

    int n = 5;
    int target = 9;

    int found = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
```

---

# Complexity

Array size:

```text
n
```

Worst case:

সব element check করতে হবে।

```text
O(n)
```

---

# Chapter 3 - Linear Search Variations

Linear Search শুধু "আছে কিনা" না।

অনেক variation আছে।

---

# 1. Find Index

Problem:

```text
Target কোথায় আছে?
```

Example:

```text
5 8 3 9
```

Target:

```text
3
```

Answer:

```text
Index = 2
```

Code idea:

```c
int index = -1;

for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        index=i;
        break;
    }
}
```

---

# 2. Count Occurrence

Problem:

```text
কতবার এসেছে?
```

Example:

```text
5 2 5 3 5
```

Target:

```text
5
```

Answer:

```text
3
```

Pattern:

```text
Search
+
Counter
```

---

Code:

```c
int count=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        count++;
    }
}
```

---

# 3. First Occurrence

Example:

```text
2 5 3 5 8
```

Target:

```text
5
```

Answer:

```text
Index 1
```

Need:

```text
Stop at first match
```

Pattern:

```text
Search
+
Early Exit
```

---

# 4. Last Occurrence

Example:

```text
2 5 3 5 8
```

Answer:

```text
Index 3
```

Need:

পুরো array check করতে হবে।

```c
int index=-1;

for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        index=i;
    }
}
```

---

# Chapter 4 - Search State

Search problem-এ সাধারণত ৩ ধরনের state লাগে।

---

# 1. Found State

Question:

```text
Exists?
```

Use:

```c
int found=0;
```

Example:

```text
Duplicate আছে?
```

---

# 2. Index State

Question:

```text
Where?
```

Use:

```c
int index=-1;
```

Why -1?

কারণ:

```text
Valid index:
0 থেকে শুরু
```

-1 মানে:

```text
Not Found
```

---

# 3. Count State

Question:

```text
How many?
```

Use:

```c
int count=0;
```

---

# Pattern Table

| Question  | State   |
| --------- | ------- |
| Exists?   | flag    |
| Position? | index   |
| How many? | counter |
| Largest?  | max     |
| Smallest? | min     |

---

# Chapter 5 - Sorted Data & Search

Sorting কেন important?

কারণ sorted data information দেয়।

Example:

Unsorted:

```text
8 2 9 1 5
```

Target:

```text
7
```

কিছু জানা যায় না।

---

Sorted:

```text
1 2 5 8 9
```

এখন:

যদি middle দেখি:

```text
5
```

Target:

```text
7
```

তাহলে বুঝি:

```text
Left side বাদ
```

কারণ সব ছোট।

---

এটাই Binary Search-এর idea।

---

# Chapter 6 - Binary Search Mental Model

## Binary Search কী?

Sorted array-তে search করার efficient method।

Idea:

```text
Every step এ half data বাদ
```

---

Example:

Array:

```text
1 3 5 7 9 11 13
```

Find:

```text
11
```

---

Step 1:

Middle:

```text
7
```

Compare:

```text
11 > 7
```

তাই:

```text
Left side বাদ
```

Remaining:

```text
9 11 13
```

---

Step 2:

Middle:

```text
11
```

Found.

---

# Linear Search:

```text
n elements
↓
n check
```

Complexity:

```text
O(n)
```

---

# Binary Search:

```text
n elements

half

half

half
```

Complexity:

```text
O(log n)
```

---

# Binary Search Condition

Binary Search-এর জন্য:

```text
Array অবশ্যই sorted হতে হবে
```

না হলে:

```text
Wrong Answer
```

---

# Chapter 7 - Binary Search Implementation

## Iterative Version

Template:

```c
int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n-1;


    while(left <= right)
    {
        int mid = left + (right-left)/2;


        if(arr[mid] == target)
        {
            return mid;
        }


        else if(arr[mid] < target)
        {
            left = mid + 1;
        }


        else
        {
            right = mid - 1;
        }
    }


    return -1;
}
```

---

# Understanding Variables

## left

Search শুরু:

```text
0
```

---

## right

Search শেষ:

```text
n-1
```

---

## mid

Middle position:

```c
left + (right-left)/2
```

---

# Why not:

```c
(left+right)/2
```

?

Large value হলে overflow হতে পারে।

Safe:

```c
left+(right-left)/2
```

---

# Chapter 8 - Binary Search Patterns

Binary Search শুধু value খোঁজা না।

এর বড় idea:

```text
Search on Answer
```

---

## Pattern 1 - First Occurrence

Example:

```text
1 2 2 2 5
```

Target:

```text
2
```

Need:

```text
First 2
```

Binary Search modify:

Found হলে:

```text
answer=mid

left side search
```

---

## Pattern 2 - Last Occurrence

Same:

```text
1 2 2 2 5
```

Need:

```text
Last 2
```

Found হলে:

```text
answer=mid

right side search
```

---

## Pattern 3 - Lower Bound

Meaning:

First position যেখানে:

```text
value >= target
```

Example:

```text
1 3 5 7 9
```

target:

```text
6
```

Answer:

```text
Index 3
```

কারণ:

```text
7 >= 6
```

---

# Chapter 9 - Common Bugs & Edge Cases

## Bug 1 - Unsorted Array-এ Binary Search

Wrong:

```text
8 2 5 1 9
```

Binary search।

Result:

Wrong হতে পারে।

---

## Bug 2 - Infinite Loop

Wrong:

```c
while(left < right)
```

অনেক ক্ষেত্রে সমস্যা করতে পারে।

Basic template:

```c
while(left <= right)
```

---

## Bug 3 - Wrong Update

Found না হলে:

Target বড়:

Wrong:

```c
left=mid;
```

Correct:

```c
left=mid+1;
```

---

Target ছোট:

Correct:

```c
right=mid-1;
```

---

## Bug 4 - Empty Array

```text
n=0
```

Handle করতে হবে।

---

## Bug 5 - Duplicate Values

Example:

```text
2 2 2 2
```

Normal search:

যেকোনো index দিতে পারে।

First/Last occurrence আলাদা problem।

---

# Chapter 10 - Day 7 Assignment

## Part A - Linear Search Practice

Implement:

```text
1. Search value exists কিনা

2. Search index

3. Count occurrence

4. First occurrence

5. Last occurrence

6. Maximum value index

7. Minimum value index
```

---

# Part B - Binary Search Practice

Implement:

```text
1. Basic Binary Search

2. First occurrence

3. Last occurrence

4. Count frequency in sorted array

5. Lower Bound
```

---

# Part C - Dry Run

Array:

```text
1 3 5 7 9 11 13
```

Target:

```text
11
```

Write:

```
left:

right:

mid:

arr[mid]:

decision:
```

প্রতিটি step।

---

# Part D - Pattern Recognition

বলবে কোন pattern লাগবে:

---

## Problem 1

> একটি number array-তে আছে কিনা।

Answer:

```text
?
```

---

## Problem 2

> Sorted array-তে first occurrence বের করো।

Answer:

```text
?
```

---

## Problem 3

> একটি value কতবার এসেছে।

Answer:

```text
?
```

---

## Problem 4

> Huge sorted array-তে search করতে হবে।

Answer:

```text
?
```

---

# 📚 Glossary Update

Add:

```text
Search

Linear Search

Binary Search

Search Space

Target

Found State

Index State

Occurrence

First Occurrence

Last Occurrence

Lower Bound

Upper Bound

Mid

Left Pointer

Right Pointer

Sorted Data

Logarithmic Time
```

---

# 📚 Pattern Library Update

Add:

```md
## Linear Search Pattern

Recognition:

Need to find value/index/count.

Mental Model:

Traverse
↓
Check
↓
Match?
↓
Update State


Complexity:

O(n)
```

---

```md
## Binary Search Pattern

Recognition:

- Data is sorted
- Need fast search

Mental Model:

Middle Check
↓
Discard Half
↓
Repeat


Complexity:

O(log n)
```

---

# ✅ Day 7 Completion Checklist

```text
[ ] Searching concept বুঝি

[ ] Linear Search লিখতে পারি

[ ] Found state ব্যবহার করতে পারি

[ ] Index বের করতে পারি

[ ] Count occurrence করতে পারি

[ ] First occurrence বুঝি

[ ] Last occurrence বুঝি

[ ] Sorted data-এর advantage বুঝি

[ ] Binary Search-এর idea বুঝি

[ ] Binary Search implement করতে পারি

[ ] left/right/mid বুঝি

[ ] First occurrence binary search বুঝি

[ ] Last occurrence binary search বুঝি

[ ] Lower bound concept চিনেছি

[ ] Edge cases handle করতে পারি
```

---

# 🏁 Day 7 Final Mental Model

```text
Search Problem

        ↓

What do I need?

        ↓

Exist?
→ Flag

Position?
→ Index

Count?
→ Counter

        ↓

Is data sorted?

        ↓

No
→ Linear Search

Yes
→ Binary Search possible

        ↓

Can I remove half?

        ↓

Efficient Solution
```

---

**Day 7 শেষে তোমার CP foundation এ নতুন layer যোগ হলো:**

```text
Day 1-5
Problem Patterns

+

Day 6
Code Organization

+

Day 7
Efficient Searching
```

পরের **Day 8 - Sorting Algorithms Deep Dive + Complexity Thinking** হবে।
