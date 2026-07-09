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

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 1 — Sorting Mental Model

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** Sorting-কে শুধু “ছোট থেকে বড় সাজানো” হিসেবে না দেখে **Problem-Solving Tool** হিসেবে বুঝতে শেখা।
> **Estimated Time:** 45–60 minutes

---

# 🎯 Day 5 Mission

Day 2-এ তুমি Array-এর Core Pattern শিখেছ:

```text
Traversal
Counting
Accumulation
Maximum / Minimum
Searching
Pattern Combination
```

Day 3:

```text
String Traversal
Character Classification
Frequency
Palindrome
Two Pointer Foundation
```

Day 4:

```text
Functions
Problem Decomposition
Recursion Foundation
Prefix Sum
Range Query
```

এখন Day 5-এ আমরা Array-কে নতুনভাবে দেখতে শুরু করব:

```text
Unordered Data
        ↓
Sorting
        ↓
Structure Appears
        ↓
Comparison Becomes Easier
        ↓
Duplicates Stay Together
        ↓
Pair Thinking Becomes Easier
        ↓
Some Problems Become Simpler
```

---

# 📖 Day 5 Final Chapter Map

```text
Day 5
│
├── Chapter 1 — Sorting Mental Model
│
├── Chapter 2 — Bubble Sort
│
├── Chapter 3 — Selection Sort
│
├── Chapter 4 — Built-in qsort() for Contest Use
│
├── Chapter 5 — Frequency Counting Pattern
│
├── Chapter 6 — Sorted Array & Frequency Problems
│
├── Chapter 7 — Pair Thinking Foundation
│
└── Chapter 8 — Pattern Combination, Assignment,
                Mini Contest & Reflection
```

আজকের পুরো Day এমনভাবে scoped:

```text
Theory
+
Manual Dry Run
+
Implementation
+
Pattern Recognition
+
Focused Practice
+
Mini Contest
```

Target:

```text
≈ 6–7 Hours
```

এখন শুরু করি Chapter 1।

---

# 1. Sorting কী?

একটি Array:

```text
7 2 9 1 5
```

এখানে values unordered।

Ascending Order-এ Sort করলে:

```text
1 2 5 7 9
```

Descending Order:

```text
9 7 5 2 1
```

সহজ definition:

> **Sorting হলো Data-কে নির্দিষ্ট Order অনুযায়ী সাজানো।**

সাধারণত:

```text
Ascending
Small → Large
```

অথবা:

```text
Descending
Large → Small
```

কিন্তু CP-তে Sorting-এর আসল value শুধু সাজানো না।

Sorting-এর আসল শক্তি:

```text
Chaos
↓
Order
↓
Pattern Becomes Visible
```

---

# 2. Unsorted vs Sorted Array

ধরো Array:

```text
5 2 8 2 1 5 2
```

এখানে duplicate values আছে।

Unsorted অবস্থায়:

```text
5   2   8   2   1   5   2
```

একই values বিভিন্ন জায়গায় ছড়িয়ে আছে।

Sort করলে:

```text
1   2   2   2   5   5   8
```

এখন সহজেই দেখা যাচ্ছে:

```text
1 → 1 time
2 → 3 times
5 → 2 times
8 → 1 time
```

অর্থাৎ:

```text
Sorting
↓
Equal Values Become Adjacent
↓
Duplicate Processing Becomes Easier
```

এটা আজকের গুরুত্বপূর্ণ observation।

---

# 3. Sorting কীভাবে Problem সহজ করে?

ধরো Problem:

> Array-এর smallest এবং second smallest distinct value বের করো।

Array:

```text
8 3 5 1 3 2
```

Unsorted অবস্থায় চিন্তা করতে হবে:

```text
Track Minimum
+
Track Second Minimum
+
Handle Duplicate
```

কিন্তু Sort করলে:

```text
1 2 3 3 5 8
```

এখন:

```text
Smallest
↓
1

Second Smallest Distinct
↓
2
```

আরেকটি Example:

```text
1 1 2 3 5 8
```

এখানে second element `1`, কিন্তু second **distinct** smallest হলো:

```text
2
```

অর্থাৎ sorted array-তে:

```text
Start from Beginning
↓
Skip Same Values
↓
First Different Value
↓
Second Distinct Minimum
```

---

# 4. Sorting একটি Transformation

এই mental model মনে রাখবে:

```text
Original Problem
        ↓
Current Data Hard to Analyze?
        ↓
Can Sorting Create Useful Order?
        ↓
Sort
        ↓
Solve Easier Version
```

অর্থাৎ Sorting অনেক সময় final answer না।

Sorting হতে পারে:

```text
Preprocessing Step
```

Day 4-এ Prefix Sum-এর ক্ষেত্রেও preprocessing দেখেছ:

```text
Array
↓
Build Prefix
↓
Answer Queries Faster
```

Sorting-এর ক্ষেত্রেও:

```text
Array
↓
Sort
↓
Use Ordered Structure
↓
Solve Problem
```

---

# 5. Example — Duplicate Detection

Problem:

> Array-তে কোনো Duplicate Value আছে কি?

Array:

```text
7 3 9 2 3
```

Unsorted:

```text
7 3 9 2 3
```

Duplicate `3` দুই জায়গায় আছে।

Sort করলে:

```text
2 3 3 7 9
```

এখন duplicate detection:

```text
Compare Adjacent Elements
```

Mental Model:

```text
Sort
↓
Traverse from i = 1
↓
Compare arr[i] with arr[i - 1]
↓
Equal?
├── Yes → Duplicate Found
└── No  → Continue
```

Pseudo logic:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] == arr[i - 1])
    {
        // duplicate found
    }
}
```

Pattern Chain:

```text
Sorting
+
Traversal
+
Adjacent Comparison
```

---

# 6. Adjacent Elements কী?

`Adjacent` মানে পাশাপাশি থাকা।

Array:

```text
1 3 5 7 9
```

Adjacent pairs:

```text
(1, 3)
(3, 5)
(5, 7)
(7, 9)
```

Index দিয়ে:

```text
arr[i - 1]
arr[i]
```

অথবা:

```text
arr[i]
arr[i + 1]
```

Boundary অনুযায়ী loop carefully লিখতে হয়।

Example:

```c
for (int i = 1; i < n; i++)
{
    printf("%d %d\n", arr[i - 1], arr[i]);
}
```

Flow:

```text
i = 1
arr[0], arr[1]

i = 2
arr[1], arr[2]

i = 3
arr[2], arr[3]
```

---

# 7. Sorting এবং Difference Problems

Problem:

> Array-এর adjacent values-এর minimum difference বের করো।

ধরো:

```text
8 1 20 4
```

Unsorted adjacent differences:

```text
|8 - 1|  = 7
|1 - 20| = 19
|20 - 4| = 16
```

কিন্তু এগুলো actual closest pair guarantee করে না।

Sort:

```text
1 4 8 20
```

এখন adjacent differences:

```text
4 - 1  = 3
8 - 4  = 4
20 - 8 = 12
```

Minimum:

```text
3
```

Important insight:

```text
After Sorting
↓
Close Values Move Near Each Other
↓
Adjacent Comparison Becomes Useful
```

এটা future problems-এ অনেক কাজে লাগবে।

---

# 8. Sorting এবং Median

Array:

```text
9 1 5 3 7
```

Median directly বোঝা কঠিন।

Sort:

```text
1 3 5 7 9
```

Middle:

```text
5
```

Odd `n` হলে:

```text
Median Index
=
n / 2
```

যদি zero-based indexing হয়।

Example:

```text
n = 5

n / 2 = 2
```

Array:

```text
Index:  0 1 2 3 4
Value:  1 3 5 7 9
            ↑
          Median
```

এখনই median-এর সব case deep-এ যাচ্ছি না। মূল observation:

```text
Some Positional Information
Only Makes Sense After Sorting
```

---

# 9. Sorting এবং Pair Thinking

ধরো Problem:

> Array থেকে দুইটি Number খুঁজতে হবে যাদের Sum একটি Target-এর সমান।

Example:

```text
Array:
8 1 6 3 4

Target:
10
```

Possible pair:

```text
6 + 4 = 10
```

Sort করলে:

```text
1 3 4 6 8
```

এখন একটা useful structure তৈরি হয়েছে:

```text
Smallest                    Largest
   ↓                           ↓

   1    3    4    6    8
```

এখান থেকে future chapter-এ আমরা চিন্তা করব:

```text
Current Sum Too Small?
↓
Need Larger Value

Current Sum Too Large?
↓
Need Smaller Value
```

এটাই Two Pointer Pair Thinking-এর foundation।

আজ Chapter 1-এ শুধু intuition রাখবে।

Chapter 7-এ এটা properly শেখানো হবে।

---

# 10. Sorting সব Problem-এর Solution না

একটি common beginner mistake:

```text
Array Problem
↓
Sort করে ফেলি
```

সবসময় এটা ঠিক না।

কারণ Sorting original order নষ্ট করে।

Example:

```text
Original:
50 10 30
```

Original indexes:

```text
50 → Index 0
10 → Index 1
30 → Index 2
```

Sort:

```text
10 30 50
```

এখন indexes বদলে গেছে।

তাই Problem যদি বলে:

> Original Array-তে target-এর first index বের করো।

তখন sort করলে original position হারিয়ে যাবে।

Mental Rule:

```text
Before Sorting Ask:

Does Original Order Matter?
```

যদি:

```text
Yes
```

তাহলে blindly sort করবে না।

---

# 11. Example — First Occurrence Problem

Original Array:

```text
5 2 7 2 9
```

Problem:

> `2`-এর first occurrence index কত?

Correct Answer:

```text
1
```

Sort করলে:

```text
2 2 5 7 9
```

এখন first `2` index:

```text
0
```

কিন্তু original answer ছিল:

```text
1
```

তাই:

```text
Sorting Changed Position Information
```

এই Problem-এর জন্য Day 2-এর Linear Search ভালো:

```text
Traversal
+
Comparison
+
First Match
+
Break / Early Return
```

---

# 12. কখন Sorting Consider করবে?

Problem statement-এ নিচের ধরনের goal দেখলে Sorting চিন্তা করতে পারো:

```text
Smallest / Largest Ordering
```

```text
Second Smallest / Second Largest
```

```text
Duplicate Detection
```

```text
Distinct Values
```

```text
Closest Values
```

```text
Minimum Difference
```

```text
Median
```

```text
Pair Sum
```

```text
Group Equal Values
```

কিন্তু এর মানে এই না যে সবসময় Sorting-ই best solution।

শুধু:

```text
Sorting Candidate Technique
```

হিসেবে মাথায় আসবে।

---

# 13. Sorting Problem Recognition Framework

Problem দেখলে:

```text
Step 1
What is the Goal?
        ↓
Step 2
Does Order Help?
        ↓
Step 3
Does Original Order Matter?
        ↓
Step 4
Will Equal Values Together Help?
        ↓
Step 5
Will Adjacent Comparison Help?
        ↓
Step 6
Will Pair Movement Become Easier?
```

Short version:

```text
Need Order?
Need Grouping?
Need Neighbor Comparison?
Need Pair Structure?
```

যদি answer `Yes` হয়:

```text
Consider Sorting
```

---

# 14. Sorting Order

## Ascending

```text
1 2 3 4 5
```

Condition:

```text
arr[i] <= arr[i + 1]
```

## Descending

```text
5 4 3 2 1
```

Condition:

```text
arr[i] >= arr[i + 1]
```

---

# 15. Is Array Sorted?

Problem:

> Array already ascending order-এ sorted কি না check করো।

Example 1:

```text
1 2 4 7 9
```

Answer:

```text
Yes
```

Example 2:

```text
1 5 3 7 9
```

কারণ:

```text
5 > 3
```

Ascending order break হয়েছে।

Mental Model:

```text
Start from Second Element
↓
Compare with Previous
↓
Current < Previous?
├── Yes → Not Sorted
└── No  → Continue
↓
End Reached
↓
Sorted
```

Function:

```c
int isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return 0;
        }
    }

    return 1;
}
```

Pattern:

```text
Traversal
+
Adjacent Comparison
+
Early Return
```

খেয়াল করো, এখানে array sort করছি না।

আমরা শুধু check করছি:

```text
Already Sorted?
```

---

# 16. Dry Run — `isSorted()`

Array:

```text
2 4 6 5 9
```

Flow:

```text
i = 1

4 < 2?
No

↓

i = 2

6 < 4?
No

↓

i = 3

5 < 6?
Yes

↓

return 0
```

এরপর আর check দরকার নেই।

কারণ একটি violation-ই prove করে:

```text
Array is Not Sorted
```

---

# 17. Sorting Algorithm vs Sorting Technique

এই distinction বুঝবে।

## Sorting Algorithm

Data কীভাবে sort হচ্ছে।

Examples:

```text
Bubble Sort
Selection Sort
Insertion Sort
Merge Sort
Quick Sort
```

## Sorting as a Technique

Problem solve করার আগে data sort করে structure ব্যবহার করা।

Example:

```text
Problem
↓
Sort Array
↓
Check Adjacent Values
↓
Find Duplicate
```

Day 5-এ আমরা manual sorting algorithm শিখব foundation-এর জন্য।

কিন্তু CP problem-solving perspective থেকে বেশি গুরুত্বপূর্ণ:

```text
When Does Sorting Help?
```

---

# 18. আজ Bubble এবং Selection Sort কেন শিখব?

তুমি প্রশ্ন করতে পারো:

> Contest-এ built-in sorting থাকলে Bubble Sort কেন শিখব?

কারণ Bubble Sort শেখাবে:

```text
Comparison
+
Swap
+
Pass
+
Loop Boundary
+
Array Transformation
```

Selection Sort শেখাবে:

```text
Candidate Index
+
Search Minimum
+
Swap
+
Sorted / Unsorted Region
```

কিন্তু important bootcamp rule:

```text
Learn Manual Sort
↓
Understand Mechanics
↓
Do Not Use Slow Sort Blindly in Large CP Problems
↓
Use Practical Sorting Tool
```

Chapter 4-এ `qsort()` থাকবে।

---

# 19. Sorting Complexity Preview

এখন শুধু basic idea।

Manual beginner sorting algorithms:

```text
Bubble Sort
≈ O(n²)

Selection Sort
≈ O(n²)
```

Efficient general sorting:

```text
≈ O(n log n)
```

ধরো:

```text
n = 100000
```

তখন:

```text
n²
=
10,000,000,000 operations scale
```

এটা huge।

অন্যদিকে:

```text
n log n
```

অনেক manageable scale।

এখনই complexity mathematics deep-এ যেতে হবে না।

শুধু mental rule:

```text
Small n
→ O(n²) may be acceptable

Large n
→ O(n²) is often dangerous
```

---

# 20. Sorting Mental Models

## Mental Model 1 — Order Creation

```text
Unordered
↓
Sort
↓
Ordered
```

---

## Mental Model 2 — Duplicate Grouping

```text
5 2 7 2 5
↓
Sort
↓
2 2 5 5 7
↓
Equal Values Together
```

---

## Mental Model 3 — Neighbor Comparison

```text
Sort
↓
Compare Adjacent Values
↓
Detect Duplicate / Difference / Group
```

---

## Mental Model 4 — Pair Structure

```text
Sort
↓
Small Side ← Array → Large Side
↓
Controlled Pointer Movement
```

---

# 21. Common Mistakes

## Mistake 1 — Sorting Without Reason

```text
Problem has Array
↓
Sort Immediately
```

এটা bad habit।

প্রথমে:

```text
Why Do I Need Sorting?
```

---

## Mistake 2 — Original Order Forgetting

Problem:

```text
Find Original Index
```

কিন্তু তুমি:

```text
Sort
↓
Index Changes
↓
Wrong Answer
```

---

## Mistake 3 — Sorted মানেই Unique ভাবা

Sorted:

```text
1 2 2 2 5
```

এখানে duplicates এখনও আছে।

Sorting শুধু তাদের পাশাপাশি এনেছে।

---

## Mistake 4 — Adjacent Comparison Before Sorting

Unsorted:

```text
1 100 2
```

Closest values:

```text
1 and 2
```

কিন্তু তারা adjacent না।

Sort:

```text
1 2 100
```

এখন adjacent।

তাই কিছু neighbor-based reasoning শুধুমাত্র sorted data-তে valid।

---

# 🧪 Chapter 1 Practice

এই Chapter theory-heavy foundation chapter। তাই practice ছোট রাখা হয়েছে।

## Task 1 — Identify the Order

নিচের Arrayগুলো classify করো:

```text
1. 1 2 3 4 5

2. 9 7 5 3 1

3. 1 3 2 4 5

4. 7 7 7 7
```

Possible answers:

```text
Ascending
Descending
Not Sorted
Both Non-decreasing and Non-increasing
```

শেষ case নিয়ে নিজে চিন্তা করবে।

---

## Task 2 — `isSorted()`

নিজে লিখবে:

```c
int isSorted(int arr[], int n)
```

Return:

```text
Sorted
→ 1

Not Sorted
→ 0
```

Pattern:

```text
Traversal
+
Adjacent Comparison
+
Early Return
```

---

## Task 3 — Duplicate Thinking

Array:

```text
8 3 5 3 9 8 1
```

হাতে Sort করো।

তারপর লিখো:

```text
Sorted Array:

Duplicate Values:

Adjacent Comparisons Needed:
```

---

## Task 4 — Sorting Decision

প্রতিটি Problem-এর জন্য লিখবে:

```text
Sorting Useful?
Yes / No / Maybe
```

Problems:

```text
1. Find first occurrence in original array.

2. Find duplicate values.

3. Find minimum difference between any two values.

4. Calculate normal array sum.

5. Find median.

6. Count all positive numbers.

7. Find pair with target sum.
```

শুধু answer না—এক লাইনে কারণও লিখবে।

---

# 🧠 Pattern Recognition Drill

## Problem A

> Array-তে duplicate আছে কি না check করো।

Possible Chain:

```text
?
↓
?
↓
Adjacent Comparison
↓
Decision
```

নিজে missing steps পূরণ করো।

---

## Problem B

> Array already sorted কি না check করো।

```text
Traversal
↓
?
↓
Violation?
↓
Early Return
```

---

## Problem C

> Minimum difference between any two values.

```text
?
↓
Adjacent Difference
↓
Minimum Tracking
```

---

## Problem D

> Original array-তে target-এর first index।

Sorting করা উচিত?

```text
Yes / No

Reason:
...
```

---

# 📝 Chapter 1 Assignment

Assignment intentionally ছোট।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Sorting কী?

2. Sorting কেন শুধু সাজানো না?

3. Sorting কীভাবে duplicates handle করতে সাহায্য করে?

4. Adjacent elements কী?

5. Original order matter করলে sorting কেন dangerous হতে পারে?

6. Sorting Algorithm এবং Sorting Technique-এর difference কী?

7. O(n²) large input-এর জন্য কেন dangerous হতে পারে?
```

---

## Part B — Code

Mandatory:

```text
1. isSorted(arr, n)
```

Optional:

```text
2. isDescending(arr, n)
```

---

## Part C — Mental Exercise

Array:

```text
9 2 7 2 5 1 7
```

নিজে লিখবে:

```text
Original:
...

Ascending:
...

Descending:
...

Duplicates:
...

Smallest:
...

Largest:
...

Adjacent Equal Pairs after Sorting:
...
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Sorting
Ascending Order
Descending Order
Adjacent Elements
Duplicate
Distinct Value
Original Order
Sorted Region
Unsorted Region
Sorting Technique
```

Format:

```text
Term:
Simple Meaning:
Small Example:
```

---

# 🧠 Chapter 1 Master Mental Model

```text
                  ARRAY PROBLEM
                        │
                        ▼
                Does Order Help?
                        │
               ┌────────┴────────┐
               │                 │
              Yes                No
               │                 │
               ▼                 ▼
      Does Original Order      Use Existing
           Matter?              Patterns
               │
         ┌─────┴─────┐
         │           │
        Yes          No
         │           │
         ▼           ▼
      Be Careful    Consider Sort
                         │
                         ▼
                  What Benefit?
                         │
          ┌──────────────┼──────────────┐
          │              │              │
          ▼              ▼              ▼
      Group Equal     Compare        Pair
        Values        Neighbors     Thinking
```

---

# 🔥 Chapter 1 Key Lesson

Sorting দেখলে শুধু:

```text
5 2 8 1
↓
1 2 5 8
```

ভাববে না।

ভাববে:

```text
Sorting
↓
Creates Order
↓
Order Creates Structure
↓
Structure Can Reveal Simpler Solutions
```

এবং সবসময় প্রশ্ন করবে:

```text
Why am I sorting?
```

Valid answers হতে পারে:

```text
I need equal values together.

I need adjacent comparison.

I need ordered positions.

I need closest values near each other.

I need pair movement.

I need median or rank information.
```

যদি কোনো clear reason না থাকে, শুধু Array দেখেই sort করবে না।

---

# ✅ Chapter 1 Completion Checklist

```text
[ ] Sorting কী বুঝি

[ ] Ascending এবং Descending বুঝি

[ ] Sorting-এর problem-solving value বুঝি

[ ] Duplicate values sort-এর পরে group হয় বুঝি

[ ] Adjacent element বুঝি

[ ] Adjacent comparison করতে পারি

[ ] isSorted() লিখতে পারি

[ ] Original order কখন important বুঝি

[ ] Sorting কখন harmful হতে পারে বুঝি

[ ] Sorting Algorithm এবং Technique-এর difference বুঝি

[ ] O(n²) সম্পর্কে basic warning বুঝি

[ ] Pair Thinking-এর basic intuition পেয়েছি

[ ] Practice শেষ করেছি

[ ] Assignment শেষ করেছি
```

---

# 🎯 Day 5 Progress

```text
Day 5
│
├── ✅ Chapter 1 — Sorting Mental Model
│
├── ⬜ Chapter 2 — Bubble Sort
│
├── ⬜ Chapter 3 — Selection Sort
│
├── ⬜ Chapter 4 — Built-in qsort() for Contest Use
│
├── ⬜ Chapter 5 — Frequency Counting Pattern
│
├── ⬜ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

## 🏁 Chapter 1 Final Position

এখন তোমার চিন্তার progression:

```text
Day 2
Array Traverse করতে পারি
        ↓
Day 4
Logic Function-এ Organize করতে পারি
        ↓
Day 5 Chapter 1
Array-এর Order পরিবর্তন করলে
Problem-এর Structure কীভাবে বদলায়
সেটা চিন্তা করতে শুরু করেছি
```

পরবর্তী Chapter হবে **Day 5 — Chapter 2: Bubble Sort**। সেখানে focus থাকবে শুধু code মুখস্থ করা নয়, বরং:

```text
Compare Adjacent
↓
Swap if Wrong Order
↓
One Pass
↓
Largest Moves Right
↓
Repeat
↓
Sorted Region Grows
```

এই mental model থেকে নিজে Bubble Sort code derive করতে শেখা।

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 2 — Bubble Sort

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** Bubble Sort-এর code মুখস্থ না করে **Compare → Swap → Pass → Sorted Region** mental model থেকে code নিজে তৈরি করতে শেখা।
> **Estimated Time:** 45–60 minutes

---

# 🎯 Chapter Mission

Chapter 1-এ তুমি শিখেছ:

```text
Unordered Data
        ↓
Sorting
        ↓
Ordered Data
        ↓
Useful Structure
```

এখন প্রশ্ন:

> Array আসলে sort করব কীভাবে?

আজ আমরা প্রথম manual sorting algorithm শিখব:

```text
Bubble Sort
```

এর core idea:

```text
Compare Adjacent Elements
        ↓
Wrong Order?
        ↓
Swap
        ↓
Continue the Pass
        ↓
Largest Remaining Value
Moves to the Right
        ↓
Repeat
```

এই Chapter শেষে তোমার লক্ষ্য:

```text
Bubble Sort দেখলে
Code মনে করার চেষ্টা করব না

বরং:

Adjacent Comparison
        ↓
Swap
        ↓
One Full Pass
        ↓
Largest Moves Right
        ↓
Sorted Region Grows
```

এই flow থেকে code derive করতে পারব।

---

# 1. Bubble Sort কী?

ধরো Array:

```text
5 3 8 2
```

আমরা ascending order চাই:

```text
2 3 5 8
```

Bubble Sort পাশাপাশি দুইটি element compare করে।

```text
5 3 8 2
↑ ↑

5 > 3
```

Wrong order।

তাই swap:

```text
3 5 8 2
```

এবার next pair:

```text
3 5 8 2
  ↑ ↑

5 < 8
```

Order ঠিক আছে।

Swap হবে না।

Next:

```text
3 5 8 2
    ↑ ↑

8 > 2
```

Swap:

```text
3 5 2 8
```

একটি full pass শেষে:

```text
3 5 2 8
```

খেয়াল করো:

```text
Largest Value = 8
```

চলে গেছে একদম শেষে।

এটাই Bubble Sort-এর মূল behaviour।

---

# 2. কেন নাম Bubble Sort?

পানির bubble উপরের দিকে উঠতে থাকে।

Bubble Sort-এ ascending order-এর ক্ষেত্রে বড় value ধীরে ধীরে right side-এ চলে যায়।

Example:

```text
5 1 2 3
```

প্রথম comparison:

```text
5 1 2 3
↑ ↑

5 > 1
```

Swap:

```text
1 5 2 3
```

তারপর:

```text
1 5 2 3
  ↑ ↑
```

Swap:

```text
1 2 5 3
```

তারপর:

```text
1 2 5 3
    ↑ ↑
```

Swap:

```text
1 2 3 5
```

Movement:

```text
5 1 2 3
↓
1 5 2 3
↓
1 2 5 3
↓
1 2 3 5
```

অর্থাৎ:

```text
5
↓
Moves Right
↓
Moves Right
↓
Reaches Final Position
```

---

# 3. Bubble Sort-এর 4টি Core Concept

Bubble Sort বুঝতে এই চারটি term দরকার:

```text
1. Adjacent Comparison

2. Swap

3. Pass

4. Sorted Region
```

এখন একে একে দেখি।

---

# 4. Adjacent Comparison

Adjacent মানে পাশাপাশি থাকা।

Array:

```text
5 3 8 2
```

Pairs:

```text
(5, 3)

(3, 8)

(8, 2)
```

Index দিয়ে:

```text
arr[j]
arr[j + 1]
```

Ascending order-এর জন্য condition:

```c
if (arr[j] > arr[j + 1])
```

মানে:

```text
Left Value > Right Value
        ↓
Wrong Order
        ↓
Swap Needed
```

Example:

```text
7 2
```

কারণ:

```text
7 > 2
```

তাই:

```text
7 2
↓
2 7
```

---

# 5. Swap কী?

ধরো:

```text
a = 5
b = 3
```

আমরা চাই:

```text
a = 3
b = 5
```

সরাসরি:

```c
a = b;
b = a;
```

লিখলে কাজ হবে না।

কারণ:

```text
Initially:

a = 5
b = 3
```

প্রথমে:

```c
a = b;
```

এখন:

```text
a = 3
b = 3
```

Original `5` হারিয়ে গেছে।

তাই temporary variable দরকার।

```c
int temp = a;
a = b;
b = temp;
```

Flow:

```text
a = 5
b = 3

↓

temp = 5

↓

a = 3

↓

b = 5
```

Final:

```text
a = 3
b = 5
```

---

# 6. Array Elements Swap

Bubble Sort-এ:

```c
int temp = arr[j];

arr[j] = arr[j + 1];

arr[j + 1] = temp;
```

Mental Model:

```text
Left Value
↓
temp

Right Value
↓
Left Position

temp
↓
Right Position
```

Example:

```text
Array:

5 3 8 2

j = 0
```

তখন:

```text
arr[j]     = 5
arr[j + 1] = 3
```

Swap-এর পরে:

```text
3 5 8 2
```

---

# 7. Pass কী?

একবার Array-এর শুরু থেকে শেষের relevant অংশ পর্যন্ত adjacent comparison করাকে একটি **Pass** বলা যায়।

Example:

```text
5 3 8 2
```

## Pass 1

### Comparison 1

```text
5 3 8 2
↑ ↑

5 > 3
```

Swap:

```text
3 5 8 2
```

---

### Comparison 2

```text
3 5 8 2
  ↑ ↑

5 > 8?
No
```

Same:

```text
3 5 8 2
```

---

### Comparison 3

```text
3 5 8 2
    ↑ ↑

8 > 2
```

Swap:

```text
3 5 2 8
```

Pass 1 Complete:

```text
3 5 2 8
      ↑
Largest value fixed
```

---

# 8. Full Bubble Sort Dry Run

Array:

```text
5 3 8 2
```

Target:

```text
2 3 5 8
```

---

## Pass 1

Start:

```text
5 3 8 2
```

Compare:

```text
5 and 3
```

Swap:

```text
3 5 8 2
```

Compare:

```text
5 and 8
```

No Swap:

```text
3 5 8 2
```

Compare:

```text
8 and 2
```

Swap:

```text
3 5 2 8
```

Result:

```text
3 5 2 | 8
          ↑
        Fixed
```

---

## Pass 2

Current:

```text
3 5 2 | 8
```

Compare:

```text
3 and 5
```

No Swap।

Compare:

```text
5 and 2
```

Swap:

```text
3 2 5 | 8
```

Result:

```text
3 2 | 5 8
        ↑ ↑
      Sorted Region
```

---

## Pass 3

Current:

```text
3 2 | 5 8
```

Compare:

```text
3 and 2
```

Swap:

```text
2 3 5 8
```

Final:

```text
2 3 5 8
```

---

# 9. Bubble Sort-এর সবচেয়ে গুরুত্বপূর্ণ Invariant

প্রতি Pass শেষে:

> **Unsorted Region-এর সবচেয়ে বড় value তার final position-এ চলে যায়।**

Example:

```text
Initial:

5 3 8 2
```

Pass 1:

```text
3 5 2 | 8
```

Pass 2:

```text
3 2 | 5 8
```

Pass 3:

```text
2 | 3 5 8
```

Mental Model:

```text
Unsorted Region | Sorted Region
```

Progress:

```text
5 3 8 2 |

        ↓

3 5 2 | 8

        ↓

3 2 | 5 8

        ↓

2 | 3 5 8
```

এটাই loop boundary বুঝতে সাহায্য করবে।

---

# 10. কেন Nested Loop লাগে?

একটি Pass-এর জন্য দরকার:

```text
Adjacent Comparison Repeatedly
```

তাই inner loop।

কিন্তু একটি Pass পুরো Array sort guarantee করে না।

তাই multiple Pass দরকার।

সেজন্য outer loop।

Mental Model:

```text
Outer Loop
↓
Controls Passes

Inner Loop
↓
Performs Adjacent Comparisons
```

অর্থাৎ:

```text
Bubble Sort
=
Pass Loop
+
Comparison Loop
```

---

# 11. Basic Bubble Sort Code

```c
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

এখন code মুখস্থ করবে না।

ভেঙে বুঝি।

---

# 12. Outer Loop বুঝি

```c
for (int i = 0; i < n - 1; i++)
```

এটা Pass control করছে।

Maximum প্রয়োজন:

```text
n - 1 Passes
```

ধরো:

```text
n = 4
```

তাহলে:

```text
Maximum Passes = 3
```

কারণ তিনটি position ঠিক হয়ে গেলে remaining একটি position automatically correct।

Mental Model:

```text
n Elements
↓
At Most n - 1 Passes
```

---

# 13. Inner Loop বুঝি

```c
for (int j = 0; j < n - 1 - i; j++)
```

এটা adjacent pairs compare করছে।

প্রথম Pass:

```text
i = 0
```

Boundary:

```text
j < n - 1
```

দ্বিতীয় Pass:

```text
i = 1
```

Boundary:

```text
j < n - 2
```

কারণ last element already fixed।

তৃতীয় Pass:

```text
i = 2
```

Boundary:

```text
j < n - 3
```

Mental Model:

```text
Each Pass
↓
One More Element Fixed
↓
Comparison Area Shrinks
```

---

# 14. কেন `n - 1 - i`?

Array size:

```text
n = 5
```

Pass progression:

```text
Pass 0
Compare up to index 4

Pass 1
Index 4 fixed
Compare up to index 3

Pass 2
Indexes 3, 4 fixed

Pass 3
Indexes 2, 3, 4 fixed
```

অর্থাৎ:

```text
Sorted Region Size
=
i
```

তাই comparison range:

```text
n - 1 - i
```

এটা মুখস্থ না করে visualভাবে ভাববে:

```text
Unsorted | Sorted
```

---

# 15. `arr[j + 1]` এবং Boundary

এই code:

```c
arr[j + 1]
```

ব্যবহার করছে।

তাই `j` কখনো last valid index পর্যন্ত যেতে পারবে না।

যদি:

```text
n = 5
```

valid indexes:

```text
0 1 2 3 4
```

যদি:

```text
j = 4
```

তাহলে:

```text
j + 1 = 5
```

এটা invalid।

তাই basic adjacent comparison:

```text
j < n - 1
```

এবং optimized boundary:

```text
j < n - 1 - i
```

---

# 16. Full Program

```c
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
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

    bubbleSort(arr, n);

    printArray(arr, n);

    return 0;
}
```

Input:

```text
5
7 2 9 1 5
```

Output:

```text
1 2 5 7 9
```

---

# 17. Function Decomposition

Chapter 3 এবং Chapter 4-এর knowledge এখানে reuse হয়েছে।

Program structure:

```text
main()
│
├── Input
│
├── bubbleSort()
│      ├── Pass Loop
│      ├── Comparison Loop
│      └── Swap
│
└── printArray()
       └── Traversal
```

Pattern decomposition:

```text
Sorting Problem
↓
Repeated Pass
↓
Adjacent Comparison
↓
Conditional Swap
↓
Sorted Region Growth
```

---

# 18. Descending Bubble Sort

Ascending condition:

```c
if (arr[j] > arr[j + 1])
```

কারণ বড় value left-এ থাকলে swap।

Descending-এর জন্য:

```c
if (arr[j] < arr[j + 1])
```

Example:

```text
3 8
```

Descending order চাই:

```text
8 3
```

কারণ:

```text
3 < 8
```

তাই swap।

Mental Rule:

```text
Ascending
Left > Right
→ Swap
```

```text
Descending
Left < Right
→ Swap
```

---

# 19. Already Sorted Array

ধরো:

```text
1 2 3 4 5
```

Basic Bubble Sort তবুও সব Pass চালাবে।

কিন্তু কোনো Swap হবে না।

এখানে optimization করা যায়।

একটি variable:

```c
int swapped;
```

প্রতি Pass-এর শুরুতে:

```c
swapped = 0;
```

Swap হলে:

```c
swapped = 1;
```

Pass শেষে যদি:

```text
swapped == 0
```

তাহলে:

```text
No Swap Happened
↓
Array Already Sorted
↓
Stop
```

---

# 20. Optimized Bubble Sort

```c
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}
```

Mental Model:

```text
Start Pass
↓
swapped = 0
↓
Any Swap?
├── Yes → swapped = 1
└── No
↓
Pass Ends
↓
swapped == 0?
├── Yes → Already Sorted → Break
└── No  → Next Pass
```

---

# 21. `swapped` কোন Pattern?

Day 2-এর terminology অনুযায়ী:

```text
swapped
=
Flag
```

এটা একটি state variable।

Meaning:

```text
0
→ No Swap Happened
```

```text
1
→ At Least One Swap Happened
```

Pattern Combination:

```text
Nested Traversal
+
Adjacent Comparison
+
Conditional Swap
+
Flag
+
Early Exit
```

খেয়াল করো, আগের Patternগুলো নতুন Algorithm-এর মধ্যেও reuse হচ্ছে।

---

# 22. Bubble Sort Complexity

Basic Bubble Sort-এ:

```text
Outer Loop
≈ n times
```

Inner Loop:

```text
≈ n times
```

তাই roughly:

[
O(n^2)
]

Mental Model:

```text
n
×
n
=
n²
```

Example:

```text
n = 1000
```

rough scale:

```text
1,000 × 1,000
=
1,000,000
```

আর:

```text
n = 100000
```

rough scale:

```text
100000 × 100000
=
10,000,000,000
```

তাই large input-এর জন্য Bubble Sort dangerous।

---

# 23. তাহলে Bubble Sort কেন শিখছি?

কারণ আমাদের goal:

```text
Bubble Sort মুখস্থ করা
```

না।

Goal:

```text
Nested Loop বুঝা

Adjacent Comparison বুঝা

Swap বুঝা

Loop Boundary বুঝা

Sorted Region বুঝা

Invariant বুঝা

Flag Optimization বুঝা
```

Contest mental rule:

```text
Learn Bubble Sort
for Understanding

Use Efficient Sorting
for Large Problems
```

Day 5 Chapter 4-এ practical `qsort()` আসবে।

---

# 24. Bubble Sort Trace Table

Array:

```text
4 3 2 1
```

| Pass   | Array After Pass |
| ------ | ---------------- |
| Start  | `4 3 2 1`        |
| Pass 1 | `3 2 1 4`        |
| Pass 2 | `2 1 3 4`        |
| Pass 3 | `1 2 3 4`        |

এখানে observe করো:

```text
Pass 1
→ 4 fixed

Pass 2
→ 3 fixed

Pass 3
→ 2 fixed
```

শেষ remaining:

```text
1
```

automatically correct।

---

# 25. Another Dry Run

Array:

```text
3 1 2
```

## Pass 1

```text
3 1 2
```

Compare:

```text
3 and 1
```

Swap:

```text
1 3 2
```

Compare:

```text
3 and 2
```

Swap:

```text
1 2 3
```

Pass শেষে Array already sorted।

Optimized version-এর next pass:

```text
No Swap
↓
Break
```

---

# 26. Common Mistake — Wrong Inner Boundary

Wrong:

```c
for (int j = 0; j < n; j++)
{
    if (arr[j] > arr[j + 1])
```

যখন:

```text
j = n - 1
```

তখন:

```text
arr[j + 1]
=
arr[n]
```

Invalid access।

Correct:

```c
j < n - 1 - i
```

---

# 27. Common Mistake — Swap Condition উল্টো

Ascending চাই:

```text
1 2 3 4
```

Condition হওয়া উচিত:

```c
if (arr[j] > arr[j + 1])
```

যদি ভুল করে:

```c
if (arr[j] < arr[j + 1])
```

লিখো, তাহলে descending sort হবে।

---

# 28. Common Mistake — `temp` ভুলভাবে ব্যবহার

Correct:

```c
int temp = arr[j];

arr[j] = arr[j + 1];

arr[j + 1] = temp;
```

Wrong:

```c
arr[j] = arr[j + 1];

arr[j + 1] = arr[j];
```

কারণ original `arr[j]` হারিয়ে যায়।

---

# 29. Common Mistake — Outer Loop এবং Inner Loop Confusion

মনে রাখবে:

```text
Outer Loop
=
How Many Passes?
```

```text
Inner Loop
=
Which Adjacent Pairs to Compare?
```

Mental Map:

```text
Pass 1
├── Compare
├── Compare
└── Compare

Pass 2
├── Compare
└── Compare

Pass 3
└── Compare
```

---

# 30. Code Derivation Method

Exam বা practice-এ code ভুলে গেলে এইভাবে derive করবে।

## Step 1 — Need Multiple Passes

```c
for (int i = 0; i < n - 1; i++)
{
}
```

## Step 2 — Need Adjacent Comparison

```c
for (int j = 0; j < n - 1 - i; j++)
{
}
```

## Step 3 — Wrong Order Check

```c
if (arr[j] > arr[j + 1])
{
}
```

## Step 4 — Swap

```c
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
```

Final:

```c
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - 1 - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
```

এভাবে derive করবে, মুখস্থ না।

---

# 🧠 Bubble Sort Pattern Map

```text
                    ARRAY
                      │
                      ▼
                 Need Sorting
                      │
                      ▼
               Start New Pass
                      │
                      ▼
             Compare Adjacent Pair
                      │
                ┌─────┴─────┐
                │           │
          Wrong Order    Correct Order
                │           │
                ▼           ▼
              Swap        Continue
                │           │
                └─────┬─────┘
                      ▼
                 Next Pair
                      │
                      ▼
                 Pass Ends
                      │
                      ▼
          Largest Remaining Value Fixed
                      │
                      ▼
              Sorted Region Grows
                      │
                      ▼
                  Repeat
```

---

# 🧪 Chapter 2 Practice

## Task 1 — Manual Dry Run

Array:

```text
6 4 2 5
```

হাতে Bubble Sort করো।

Format:

```text
Initial:
...

Pass 1:
...

Pass 2:
...

Pass 3:
...
```

প্রতিটি Pass শেষে কোন value fixed হলো লিখবে।

---

## Task 2 — Ascending Bubble Sort

নিজে লিখবে:

```c
void bubbleSort(int arr[], int n)
```

কোনো note দেখে copy না করে mental model থেকে derive করার চেষ্টা করবে।

---

## Task 3 — Descending Bubble Sort

শুধু condition পরিবর্তন করে descending version বানাবে।

Input:

```text
5
3 8 1 7 2
```

Expected:

```text
8 7 3 2 1
```

---

## Task 4 — Optimized Bubble Sort

`swapped` flag ব্যবহার করবে।

নিজে explain করবে:

```text
swapped = 0 কেন?

swapped = 1 কখন?

break কখন?

No swap কেন sorted array prove করে?
```

---

# 🧠 Pattern Recognition Drill

## Problem 1

Bubble Sort-এর main comparison কোন elements-এর মধ্যে হয়?

```text
A. First and Last

B. Random Elements

C. Adjacent Elements

D. Minimum and Maximum
```

---

## Problem 2

Ascending Bubble Sort-এ কখন swap হবে?

```text
Left ______ Right
```

নিজে operator বসাও।

---

## Problem 3

প্রতি full Pass শেষে কী guarantee হয়?

```text
...
```

---

## Problem 4

`swapped` কোন ধরনের State?

```text
Counter
Accumulator
Flag
Candidate
Index
```

---

## Problem 5

এই chain complete করো:

```text
Pass
↓
Adjacent ______
↓
Conditional ______
↓
Largest Moves ______
↓
Sorted Region ______
```

---

# 📝 Chapter 2 Assignment

Assignment focused রাখা হলো যাতে Day 5 একই দিনে শেষ করা যায়।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Bubble Sort কীভাবে কাজ করে?

2. Pass কী?

3. Swap কী?

4. কেন temporary variable দরকার?

5. প্রতি Pass শেষে কী guarantee হয়?

6. Sorted Region কী?

7. Inner loop-এর range কেন কমে?

8. swapped flag কেন useful?

9. Bubble Sort-এর complexity কী?

10. Large input-এ Bubble Sort কেন dangerous?
```

---

## Part B — Coding

Mandatory:

```text
1. Bubble Sort Ascending

2. Bubble Sort Descending

3. Optimized Bubble Sort with swapped flag
```

একই code তিনবার copy করবে না।

নিজে আলাদা করে লিখবে।

---

## Part C — Debugging Exercise

এই code-এ problem খুঁজে বের করো:

```c
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}
```

Find:

```text
Problem 1:

Problem 2:

Correct Outer Boundary:

Correct Inner Boundary:
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Bubble Sort
Swap
Pass
Adjacent Comparison
Sorted Region
Unsorted Region
Invariant
Flag Optimization
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 🔥 Chapter 2 Key Lesson

Bubble Sort-এর code:

```c
for (...)
{
    for (...)
    {
        if (...)
        {
            swap;
        }
    }
}
```

এই shape মুখস্থ করলে সহজেই ভুলে যাবে।

Mental model মনে রাখলে code derive করতে পারবে:

```text
Need Sorting
↓
Compare Adjacent
↓
Wrong Order?
↓
Swap
↓
Continue Full Pass
↓
Largest Reaches Right Side
↓
Ignore Fixed Position
↓
Repeat
```

আর optimized version:

```text
Start Pass
↓
Assume No Swap
↓
Track Whether Swap Happens
↓
No Swap in Entire Pass?
↓
Already Sorted
↓
Break
```

---

# ✅ Chapter 2 Completion Checklist

```text
[ ] Bubble Sort-এর mental model বুঝি

[ ] Adjacent Comparison বুঝি

[ ] Swap নিজে লিখতে পারি

[ ] Temporary variable কেন লাগে বুঝি

[ ] Pass কী বুঝি

[ ] এক Pass dry run করতে পারি

[ ] Full Bubble Sort dry run করতে পারি

[ ] প্রতি Pass শেষে largest remaining value fixed হয় বুঝি

[ ] Sorted Region বুঝি

[ ] Unsorted Region বুঝি

[ ] Outer Loop-এর কাজ বুঝি

[ ] Inner Loop-এর কাজ বুঝি

[ ] n - 1 - i boundary বুঝি

[ ] arr[j + 1] boundary danger বুঝি

[ ] Ascending Bubble Sort লিখতে পারি

[ ] Descending Bubble Sort লিখতে পারি

[ ] swapped flag বুঝি

[ ] Optimized Bubble Sort লিখতে পারি

[ ] O(n²) complexity-এর basic meaning বুঝি

[ ] Large input-এ Bubble Sort use না করার কারণ বুঝি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি
```

---

# 🎯 Day 5 Progress

```text
Day 5
│
├── ✅ Chapter 1 — Sorting Mental Model
│
├── ✅ Chapter 2 — Bubble Sort
│
├── ⬜ Chapter 3 — Selection Sort
│
├── ⬜ Chapter 4 — Built-in qsort() for Contest Use
│
├── ⬜ Chapter 5 — Frequency Counting Pattern
│
├── ⬜ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

## 🏁 Chapter 2 Final Position

এখন তোমার Sorting understanding:

```text
Chapter 1
Why Sorting Helps
        ↓
Chapter 2
How Repeated Adjacent Comparison
Can Create Sorted Order
        ↓
Chapter 3
How Selection-Based Sorting Works
```

পরের **Chapter 3 — Selection Sort**-এ মূল focus থাকবে:

```text
Current Position
        ↓
Search Minimum in Remaining Array
        ↓
Remember Minimum Index
        ↓
Swap Once
        ↓
Sorted Region Grows from Left
```

Bubble Sort-এর সঙ্গে সবচেয়ে গুরুত্বপূর্ণ contrast হবে:

```text
Bubble Sort
→ Many Adjacent Swaps
→ Large Values Move Right

Selection Sort
→ Find Best Candidate
→ Usually One Swap per Pass
→ Small Values Move Left
```

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 3 — Selection Sort

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** Selection Sort-এর code মুখস্থ না করে **Position → Search Best Candidate → Remember Index → Swap → Grow Sorted Region** mental model থেকে algorithm বুঝতে শেখা।
> **Estimated Time:** 45–60 minutes

---

# 🎯 Chapter Mission

Chapter 1-এ তুমি শিখেছ:

```text
Sorting কেন দরকার?
        ↓
Order Creates Structure
        ↓
Structure Can Simplify Problems
```

Chapter 2-এ Bubble Sort শিখেছ:

```text
Compare Adjacent
        ↓
Wrong Order?
        ↓
Swap
        ↓
Largest Remaining Value
Moves to the Right
```

এখন Selection Sort-এ approach আলাদা:

```text
Current Position
        ↓
Search Remaining Array
        ↓
Find Smallest Value
        ↓
Remember Its Index
        ↓
Swap with Current Position
        ↓
One Position Fixed
        ↓
Move Forward
```

এই Chapter শেষে তোমার goal:

```text
Selection Sort Code
মুখস্থ করা নয়

বরং

Current Position
↓
Find Minimum Index
↓
Swap
↓
Sorted Region Grows Left → Right
```

এই mental model থেকে code derive করতে পারা।

---

# 1. Selection Sort কী?

ধরো Array:

```text
7 3 5 1
```

আমরা ascending order চাই:

```text
1 3 5 7
```

Selection Sort প্রথম position-এর জন্য পুরো remaining array থেকে সবচেয়ে ছোট value খুঁজবে।

Initial:

```text
7 3 5 1
↑
Current Position
```

Remaining Array:

```text
7 3 5 1
────────
Search Area
```

Minimum:

```text
1
```

তার index:

```text
3
```

এখন:

```text
Current Position = 0
Minimum Index    = 3
```

Swap:

```text
7 3 5 1
↓
1 3 5 7
```

এখন first position fixed:

```text
1 | 3 5 7
↑
Sorted Region
```

এটাই Selection Sort-এর মূল idea।

---

# 2. নাম Selection Sort কেন?

কারণ প্রতি Step-এ আমরা remaining array থেকে একটি element **select** করি।

Ascending order-এর জন্য:

```text
Select Minimum
```

Descending order-এর জন্য:

```text
Select Maximum
```

Ascending flow:

```text
Remaining Array
        ↓
Select Smallest
        ↓
Place at Current Position
        ↓
Move Boundary Right
        ↓
Repeat
```

Example:

```text
7 4 2 5 1
```

প্রথমে select:

```text
Minimum = 1
```

Place at index `0`:

```text
1 | 4 2 5 7
```

তারপর remaining অংশ:

```text
4 2 5 7
```

Select:

```text
Minimum = 2
```

Place at index `1`:

```text
1 2 | 4 5 7
```

এইভাবে sorted region grow করে।

---

# 3. Selection Sort-এর 5টি Core Concept

Selection Sort বুঝতে এই পাঁচটি concept দরকার:

```text
1. Current Position

2. Remaining Search Area

3. Candidate Index

4. Selection

5. Final Swap
```

Mental Flow:

```text
Current Position
        ↓
Assume Current is Best
        ↓
Search Remaining Elements
        ↓
Better Candidate Found?
        ↓
Remember Its Index
        ↓
Search Complete
        ↓
Swap Once
```

---

# 4. Current Position

ধরো:

```text
8 4 6 2
```

প্রথম pass-এ:

```text
i = 0
```

অর্থাৎ আমরা ঠিক করতে চাই:

```text
Index 0-তে কোন value থাকা উচিত?
```

Ascending order-এর জন্য answer:

```text
Remaining Array-এর Minimum Value
```

Current:

```text
8 4 6 2
↑
i = 0
```

Search:

```text
8 4 6 2
────────
```

Minimum:

```text
2
```

Swap:

```text
2 4 6 8
```

এখন:

```text
2 | 4 6 8
↑
Index 0 fixed
```

পরের current position:

```text
i = 1
```

---

# 5. Candidate Index কী?

এটা Selection Sort-এর সবচেয়ে গুরুত্বপূর্ণ concept।

ধরো:

```text
8 4 6 2
```

Current position:

```text
i = 0
```

শুরুতে আমরা assume করি:

```text
Minimum Index = 0
```

অর্থাৎ:

```c
int minIndex = i;
```

এখন:

```text
minIndex = 0
arr[minIndex] = 8
```

Search শুরু হবে:

```text
j = i + 1
```

অর্থাৎ index `1` থেকে।

---

## Search Flow

Array:

```text
Index:  0  1  2  3
Value:  8  4  6  2
```

Initially:

```text
minIndex = 0
Candidate Value = 8
```

Check index `1`:

```text
4 < 8?
Yes
```

Update:

```text
minIndex = 1
Candidate Value = 4
```

Check index `2`:

```text
6 < 4?
No
```

No update।

Check index `3`:

```text
2 < 4?
Yes
```

Update:

```text
minIndex = 3
Candidate Value = 2
```

Search শেষে:

```text
Minimum Index = 3
```

তারপর swap:

```text
arr[0] ↔ arr[3]
```

Result:

```text
2 4 6 8
```

---

# 6. Value না, Index কেন Track করি?

তুমি ভাবতে পারো:

```text
Minimum value পেলেই তো হয়
```

ধরো:

```text
8 4 6 2
```

যদি শুধু রাখি:

```c
int minimum = 2;
```

তাহলে জানলাম value `2`।

কিন্তু swap করতে দরকার:

```text
2 কোথায় আছে?
```

কারণ আমাদের করতে হবে:

```text
arr[i]
↔
arr[minIndex]
```

তাই Selection Sort-এ আমরা সাধারণত track করি:

```text
Candidate Index
```

অর্থাৎ:

```c
int minIndex = i;
```

তারপর comparison:

```c
if (arr[j] < arr[minIndex])
{
    minIndex = j;
}
```

Mental Model:

```text
Need Value Later?
→ Track Value

Need Position for Swap?
→ Track Index
```

এটা শুধু Selection Sort-এর জন্য না।

CP-তে অনেক Problem-এ এই decision দরকার হবে।

---

# 7. Full Dry Run

Array:

```text
5 3 8 2
```

Target:

```text
2 3 5 8
```

---

## Pass 1

Current Position:

```text
i = 0
```

Array:

```text
5 3 8 2
↑
Current
```

Initially:

```text
minIndex = 0
Candidate = 5
```

Check:

```text
3 < 5
→ Yes
→ minIndex = 1
```

Current candidate:

```text
3
```

Next:

```text
8 < 3?
→ No
```

Next:

```text
2 < 3?
→ Yes
→ minIndex = 3
```

Search Complete:

```text
Minimum = 2
Minimum Index = 3
```

Swap:

```text
arr[0] ↔ arr[3]
```

Result:

```text
2 | 3 8 5
```

Sorted Region:

```text
2
```

---

## Pass 2

Current Position:

```text
i = 1
```

Current Array:

```text
2 | 3 8 5
    ↑
  Current
```

Initially:

```text
minIndex = 1
Candidate = 3
```

Check:

```text
8 < 3?
No
```

Next:

```text
5 < 3?
No
```

Minimum already current position-এ আছে।

Result:

```text
2 3 | 8 5
```

Swap technically self-swap হতে পারে, কিন্তু avoid করাও যায়।

---

## Pass 3

Current Position:

```text
i = 2
```

Current:

```text
2 3 | 8 5
      ↑
    Current
```

Initially:

```text
minIndex = 2
Candidate = 8
```

Check:

```text
5 < 8?
Yes
```

Update:

```text
minIndex = 3
```

Swap:

```text
8 ↔ 5
```

Result:

```text
2 3 5 | 8
```

Final:

```text
2 3 5 8
```

---

# 8. Selection Sort Invariant

Bubble Sort-এর invariant ছিল:

```text
Each Pass
↓
Largest Remaining Value
Reaches Final Position on Right
```

Selection Sort ascending-এর invariant:

```text
Each Pass
↓
Smallest Remaining Value
Reaches Final Position on Left
```

Visual:

```text
Initial:

| 7 4 2 5 1
```

Pass 1:

```text
1 | 4 2 5 7
```

Pass 2:

```text
1 2 | 4 5 7
```

Pass 3:

```text
1 2 4 | 5 7
```

Pass 4:

```text
1 2 4 5 | 7
```

অর্থাৎ:

```text
Sorted Region | Unsorted Region
```

এবং sorted region grow করে:

```text
Left → Right
```

---

# 9. Basic Selection Sort Code

```c
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```

Code মুখস্থ না করে এখন structure দেখি।

---

# 10. Outer Loop বুঝি

```c
for (int i = 0; i < n - 1; i++)
```

এর কাজ:

```text
Which Position Are We Fixing?
```

অর্থাৎ:

```text
i = 0
→ Fix Position 0

i = 1
→ Fix Position 1

i = 2
→ Fix Position 2
```

Mental Model:

```text
Outer Loop
=
Choose Current Position
```

এটা Bubble Sort-এর outer loop-এর মতো শুধু “pass count” হিসেবে না দেখে Selection Sort-এ ভাববে:

```text
I am fixing index i
```

---

# 11. কেন `minIndex = i`?

প্রতি নতুন pass-এ search area বদলায়।

ধরো:

```text
1 2 | 8 5 7
```

এখন:

```text
i = 2
```

Search Area:

```text
8 5 7
```

তাই প্রথম candidate:

```text
arr[2] = 8
```

সেজন্য:

```c
int minIndex = i;
```

Wrong:

```c
int minIndex = 0;
```

কারণ index `0` already sorted region-এর অংশ।

Mental Model:

```text
Search Remaining Region
↓
Start Candidate from Current Position
```

---

# 12. Inner Loop বুঝি

```c
for (int j = i + 1; j < n; j++)
```

এর কাজ:

```text
Search Remaining Elements
```

কেন:

```text
j = i + 1
```

থেকে শুরু?

কারণ:

```text
arr[i]
```

already initial candidate।

তাই নিজের সঙ্গে compare করার দরকার নেই।

Example:

```text
i = 2
```

তখন:

```text
Candidate:
Index 2

Search:
Index 3
Index 4
...
Index n - 1
```

Visual:

```text
Sorted | Candidate Search Area
0 1    | 2         3 4 5
           ↑       └────┘
        minIndex     j
```

---

# 13. Candidate Update

Core comparison:

```c
if (arr[j] < arr[minIndex])
{
    minIndex = j;
}
```

এখানে কী হচ্ছে?

```text
Current Element
        ↓
arr[j]

Current Best Candidate
        ↓
arr[minIndex]
```

Question:

```text
Is Current Element Smaller?
```

যদি:

```text
Yes
```

তাহলে:

```text
New Best Candidate Found
↓
Remember Its Index
```

Code:

```c
minIndex = j;
```

এটা Day 2-এর Maximum/Minimum tracking-এর relative।

আগে তুমি value track করতে:

```c
if (arr[i] < minValue)
{
    minValue = arr[i];
}
```

এখানে index track করছ:

```c
if (arr[j] < arr[minIndex])
{
    minIndex = j;
}
```

Pattern relation:

```text
Minimum Tracking
        +
Index Tracking
        =
Minimum Index Tracking
```

---

# 14. Search-এর মধ্যে Swap করি না কেন?

Selection Sort-এর important design:

```text
Search First
↓
Find Final Candidate
↓
Swap After Search
```

এইভাবে:

```c
for (int j = i + 1; j < n; j++)
{
    if (arr[j] < arr[minIndex])
    {
        minIndex = j;
    }
}

/* Search Complete */

swap(arr[i], arr[minIndex]);
```

আমরা প্রতিবার smaller value পেলেই swap করছি না।

আমরা শুধু:

```text
Remember Better Candidate
```

করছি।

তারপর search complete হলে:

```text
One Final Swap
```

এটাই Bubble Sort-এর সঙ্গে বড় difference।

---

# 15. Bubble Sort vs Selection Sort

এটা খুব গুরুত্বপূর্ণ।

| Feature     | Bubble Sort            | Selection Sort                    |
| ----------- | ---------------------- | --------------------------------- |
| Core Action | Adjacent Compare       | Find Minimum                      |
| Comparison  | Neighbor with Neighbor | Candidate with Remaining Elements |
| Swap        | Many possible swaps    | Usually one swap per pass         |
| Fixed Side  | Right side             | Left side                         |
| Each Pass   | Largest moves right    | Smallest moves left               |
| Complexity  | (O(n^2))               | (O(n^2))                          |
| Main State  | `swapped` optional     | `minIndex` essential              |

Mental Contrast:

```text
Bubble Sort

Compare
↓
Swap
↓
Compare
↓
Swap
↓
Largest Reaches Right
```

Selection Sort:

```text
Search
↓
Remember Candidate
↓
Search
↓
Remember Better Candidate
↓
Swap Once
↓
Smallest Reaches Left
```

---

# 16. Full Program

```c
#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
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

    selectionSort(arr, n);

    printArray(arr, n);

    return 0;
}
```

Input:

```text
6
8 3 7 1 9 2
```

Output:

```text
1 2 3 7 8 9
```

---

# 17. `minIndex != i` Check কেন?

ধরো:

```text
1 3 5 7
```

Pass 1:

```text
i = 0
minIndex = 0
```

Search শেষে minimum এখনও index `0`-তেই।

তখন:

```text
minIndex == i
```

অর্থাৎ:

```text
Current Position Already Has Correct Candidate
```

তাই swap দরকার নেই।

Code:

```c
if (minIndex != i)
{
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}
```

এটা correctness-এর জন্য mandatory না।

এই code-ও correct:

```c
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
```

যদি same index হয়, self-swap হবে।

কিন্তু condition unnecessary swap avoid করে।

---

# 18. Descending Selection Sort

Ascending version:

```text
Find Minimum
↓
Place at Left
```

Descending version:

```text
Find Maximum
↓
Place at Left
```

Variable:

```c
int maxIndex = i;
```

Comparison:

```c
if (arr[j] > arr[maxIndex])
{
    maxIndex = j;
}
```

Full core:

```c
void selectionSortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
```

Mental Rule:

```text
Ascending
→ Select Minimum

Descending
→ Select Maximum
```

---

# 19. Another Full Dry Run

Array:

```text
6 2 4 1
```

---

## Pass 1

```text
Current Position:
i = 0

Initial Candidate:
6
```

Search:

```text
2 < 6
→ minIndex = 1

4 < 2
→ No

1 < 2
→ minIndex = 3
```

Swap:

```text
6 ↔ 1
```

Result:

```text
1 | 2 4 6
```

---

## Pass 2

Current:

```text
1 | 2 4 6
```

Candidate:

```text
2
```

Search:

```text
4 < 2?
No

6 < 2?
No
```

No real swap needed।

Result:

```text
1 2 | 4 6
```

---

## Pass 3

Current:

```text
1 2 | 4 6
```

Candidate:

```text
4
```

Check:

```text
6 < 4?
No
```

Final:

```text
1 2 4 6
```

---

# 20. Selection Sort Complexity

Outer loop:

```text
≈ n times
```

Inner search:

```text
≈ n times
```

তাই:

[
O(n^2)
]

More precisely comparisons:

```text
(n - 1)
+
(n - 2)
+
(n - 3)
+
...
+
1
```

যা roughly:

[
\frac{n(n-1)}{2}
]

তাই growth:

[
O(n^2)
]

Important point:

Selection Sort input already sorted হলেও minimum খুঁজতে search চালায়।

Example:

```text
1 2 3 4 5
```

তবুও:

```text
Position 0
→ Search remaining

Position 1
→ Search remaining

Position 2
→ Search remaining
```

তাই standard Selection Sort:

```text
Best Case  → O(n²)
Average    → O(n²)
Worst Case → O(n²)
```

এই complexity details এখন শুধু basic understanding-এর জন্য।

---

# 21. Selection Sort-এর Swap Count

Selection Sort-এর একটি useful characteristic:

```text
At Most
≈ n - 1 meaningful swaps
```

কারণ প্রতি pass-এ সাধারণত একবার final swap হয়।

Bubble Sort-এ অনেক adjacent swap হতে পারে।

Example reverse array:

```text
5 4 3 2 1
```

Bubble Sort:

```text
Many Swaps
```

Selection Sort:

```text
Search Minimum
↓
One Swap

Search Next Minimum
↓
One Swap
```

তবে দুটির comparison complexity এখনও:

```text
O(n²)
```

---

# 22. Selection Sort-এর Pattern Decomposition

Selection Sort-কে একটিমাত্র magical algorithm হিসেবে দেখবে না।

এর ভিতরে familiar patterns আছে:

```text
Outer Traversal
+
Inner Traversal
+
Minimum Tracking
+
Index Tracking
+
Swap
+
Sorted Region Growth
```

Mental Tree:

```text
Selection Sort
│
├── Position Traversal
│
├── Remaining Array Search
│
├── Candidate Index
│
├── Comparison
│
├── Conditional Candidate Update
│
└── Final Swap
```

অর্থাৎ Day 2-এর patterns এখানে নতুনভাবে combine হয়েছে।

---

# 23. `minIndex` কোন ধরনের State?

Day 2-এর terminology অনুযায়ী:

```text
minIndex
=
Candidate State
+
Index State
```

এটা:

```text
Counter না
Accumulator না
Flag না
```

এটা remember করছে:

```text
Best Candidate So Far কোথায় আছে?
```

Example:

```text
8 5 7 2
```

Flow:

```text
minIndex = 0
↓
Found 5
minIndex = 1
↓
7 is not better
↓
Found 2
minIndex = 3
```

অর্থাৎ:

```text
Candidate Evolves During Traversal
```

---

# 24. Common Mistake — `minIndex` Reset না করা

Wrong:

```c
int minIndex = 0;

for (int i = 0; i < n - 1; i++)
{
    // ...
}
```

Problem:

প্রতি নতুন position-এর জন্য candidate নতুন করে current position থেকে শুরু করতে হবে।

Correct:

```c
for (int i = 0; i < n - 1; i++)
{
    int minIndex = i;

    // search
}
```

Mental Rule:

```text
New Position
↓
New Candidate Search
↓
Reset minIndex = i
```

---

# 25. Common Mistake — Inner Loop `0` থেকে শুরু করা

Wrong:

```c
for (int j = 0; j < n; j++)
```

এতে already sorted region আবার search হবে।

Selection Sort-এর idea:

```text
Sorted Region
↓
Ignore

Unsorted Region
↓
Search
```

Correct:

```c
for (int j = i + 1; j < n; j++)
```

---

# 26. Common Mistake — Value দিয়ে Index Confusion

Wrong:

```c
if (arr[j] < arr[minIndex])
{
    minIndex = arr[j];
}
```

এখানে `minIndex`-এর মধ্যে index থাকার কথা।

কিন্তু তুমি value রেখে দিয়েছ।

Correct:

```c
minIndex = j;
```

কারণ:

```text
minIndex
↓
Stores Position
```

not:

```text
Stores Value
```

---

# 27. Common Mistake — Search-এর ভিতরে Swap

Beginner version:

```c
for (int j = i + 1; j < n; j++)
{
    if (arr[j] < arr[i])
    {
        // swap immediately
    }
}
```

এতে array sort হতে পারে এমন কিছু variants-এ, কিন্তু এটা standard Selection Sort mental model না।

Standard model:

```text
Search Entire Remaining Region
↓
Find Best Candidate
↓
Swap Once
```

তাই:

```text
Search Loop
↓
Ends
↓
Swap
```

---

# 28. Common Mistake — Bubble এবং Selection Mix করা

Bubble Sort:

```c
if (arr[j] > arr[j + 1])
{
    swap adjacent;
}
```

Selection Sort:

```c
if (arr[j] < arr[minIndex])
{
    minIndex = j;
}
```

তারপর inner loop শেষে:

```text
Swap Current with Selected Candidate
```

Short contrast:

```text
Bubble
→ Compare Neighbors

Selection
→ Compare Against Candidate
```

---

# 29. Code Derivation Method

Code ভুলে গেলে এইভাবে derive করবে।

## Step 1 — Current Position

```c
for (int i = 0; i < n - 1; i++)
{
}
```

---

## Step 2 — Assume Current is Minimum

```c
int minIndex = i;
```

---

## Step 3 — Search Remaining Array

```c
for (int j = i + 1; j < n; j++)
{
}
```

---

## Step 4 — Update Candidate

```c
if (arr[j] < arr[minIndex])
{
    minIndex = j;
}
```

---

## Step 5 — Swap After Search

```c
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
```

Final:

```c
for (int i = 0; i < n - 1; i++)
{
    int minIndex = i;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}
```

Mental derivation:

```text
Position
↓
Candidate
↓
Search
↓
Update Candidate
↓
Swap
```

---

# 30. Bubble Sort vs Selection Sort Dry Run

Same Array:

```text
5 3 8 2
```

## Bubble Sort — First Pass

```text
5 3 8 2
↓
3 5 8 2
↓
3 5 8 2
↓
3 5 2 8
```

Result:

```text
3 5 2 | 8
```

Largest fixed on right।

---

## Selection Sort — First Pass

```text
5 3 8 2
```

Search minimum:

```text
Candidate 5
↓
Candidate 3
↓
8 ignored
↓
Candidate 2
```

One swap:

```text
2 | 3 8 5
```

Smallest fixed on left।

Mental Contrast:

```text
Bubble
Many local decisions
↓
Largest moves right
```

```text
Selection
One full search
↓
One final selection
↓
Smallest moves left
```

---

# 🧠 Selection Sort Master Mental Model

```text
                    ARRAY
                      │
                      ▼
              Current Position i
                      │
                      ▼
               minIndex = i
                      │
                      ▼
            Search Remaining Array
                      │
                      ▼
             arr[j] < arr[minIndex]?
                      │
              ┌───────┴───────┐
              │               │
             Yes              No
              │               │
              ▼               ▼
       minIndex = j         Continue
              │               │
              └───────┬───────┘
                      ▼
                Search Ends
                      │
                      ▼
            Swap arr[i] and
             arr[minIndex]
                      │
                      ▼
            Position i Fixed
                      │
                      ▼
           Sorted Region Grows
                      │
                      ▼
                  Next i
```

---

# 🧪 Chapter 3 Practice

## Task 1 — Manual Dry Run

Array:

```text
7 4 6 2
```

এই format-এ dry run করবে:

```text
Initial:
7 4 6 2

Pass 1:
Current Position:
Initial Candidate:
Candidate Updates:
Selected Index:
After Swap:

Pass 2:
Current Position:
Initial Candidate:
Candidate Updates:
Selected Index:
After Swap:

Pass 3:
...
```

---

## Task 2 — Ascending Selection Sort

নিজে লিখবে:

```c
void selectionSort(int arr[], int n)
```

শর্ত:

```text
Code দেখে copy করবে না
```

এই flow থেকে derive করবে:

```text
Position
↓
minIndex
↓
Search
↓
Update
↓
Swap
```

---

## Task 3 — Descending Selection Sort

নিজে লিখবে:

```c
void selectionSortDescending(int arr[], int n)
```

Mental Change:

```text
minIndex
↓
maxIndex
```

এবং:

```text
<
↓
>
```

---

## Task 4 — Print Selected Candidate

Array:

```text
8 3 6 1 5
```

প্রতি pass-এ selected minimum print করবে।

Expected conceptual output:

```text
Pass 1 Selected: 1
Pass 2 Selected: 3
Pass 3 Selected: 5
Pass 4 Selected: 6
```

এটার উদ্দেশ্য algorithm-এর selection behaviour observe করা।

---

# 🧠 Pattern Recognition Drill

## Problem 1

Selection Sort ascending-এ প্রতি pass-এ কী select করা হয়?

```text
A. Maximum from full array

B. Minimum from remaining unsorted region

C. Adjacent pair

D. Random element
```

---

## Problem 2

এই chain complete করো:

```text
Current ______
↓
Initialize Candidate ______
↓
Search Remaining ______
↓
Update Candidate ______
↓
Final ______
```

---

## Problem 3

`minIndex` কী store করে?

```text
A. Minimum Value

B. Minimum Value-এর Position

C. Number of Comparisons

D. Swap Count
```

---

## Problem 4

Bubble Sort-এর sorted region grow করে:

```text
Left → Right
```

নাকি:

```text
Right → Left
```

Selection Sort-এরটা কী?

নিজে লিখবে।

---

## Problem 5

কোন algorithm standard form-এ candidate index ব্যবহার করে?

```text
Bubble Sort
Selection Sort
```

কারণও এক লাইনে লিখবে।

---

# 📝 Chapter 3 Assignment

Assignment manageable রাখা হলো যাতে Day 5 একদিনেই শেষ করা যায়।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Selection Sort কীভাবে কাজ করে?

2. Selection শব্দটি কেন ব্যবহার করা হয়েছে?

3. Current Position কী?

4. Remaining Search Area কী?

5. Candidate Index কী?

6. minIndex কেন value না রেখে index রাখে?

7. Inner loop i + 1 থেকে শুরু হয় কেন?

8. Swap inner loop-এর পরে হয় কেন?

9. Selection Sort-এর Sorted Region কোন direction-এ grow করে?

10. Bubble Sort এবং Selection Sort-এর মূল difference কী?
```

---

## Part B — Coding

Mandatory:

```text
1. Selection Sort Ascending

2. Selection Sort Descending
```

Optional:

```text
3. Selection Sort with swap avoidance

if (minIndex != i)
```

---

## Part C — Compare

এই table নিজে complete করবে:

| Question              | Bubble Sort | Selection Sort |
| --------------------- | ----------- | -------------- |
| কী compare করে?       | ...         | ...            |
| Candidate Index লাগে? | ...         | ...            |
| Swap behaviour        | ...         | ...            |
| কোন side fixed হয়?    | ...         | ...            |
| Complexity            | ...         | ...            |

---

## Part D — Debugging Exercise

এই code-এ ভুল খুঁজে বের করো:

```c
void selectionSort(int arr[], int n)
{
    int minIndex = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = arr[j];
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```

Find:

```text
Problem 1:
Where should minIndex be initialized?

Problem 2:
What should minIndex initially equal?

Problem 3:
Where should j start?

Problem 4:
What should minIndex store?

Problem 5:
Correct candidate update:
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Selection Sort
Current Position
Candidate Index
Minimum Index
Maximum Index
Search Area
Candidate Update
Final Swap
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 🔥 Chapter 3 Key Lesson

Selection Sort-এর code shape:

```c
for (...)
{
    int minIndex = ...;

    for (...)
    {
        if (...)
        {
            minIndex = ...;
        }
    }

    swap;
}
```

এই structure মুখস্থ করার দরকার নেই।

Mental model মনে রাখবে:

```text
Which Position Am I Fixing?
        ↓
Assume Current is Best
        ↓
Search Remaining Region
        ↓
Find Better Candidate?
        ↓
Remember Its Index
        ↓
Search Complete
        ↓
Swap Once
        ↓
Position Fixed
```

আর Bubble Sort-এর সঙ্গে contrast:

```text
Bubble Sort
│
├── Adjacent Comparison
├── Immediate Swap
├── Many Possible Swaps
└── Large Value → Right
```

```text
Selection Sort
│
├── Candidate Comparison
├── Remember Index
├── Final Swap After Search
└── Small Value → Left
```

---

# ✅ Chapter 3 Completion Checklist

```text
[ ] Selection Sort-এর mental model বুঝি

[ ] Selection নামের কারণ বুঝি

[ ] Current Position বুঝি

[ ] Remaining Search Area বুঝি

[ ] Candidate Index বুঝি

[ ] minIndex কী store করে বুঝি

[ ] minIndex = i কেন হয় বুঝি

[ ] Inner loop i + 1 থেকে কেন শুরু হয় বুঝি

[ ] Candidate update করতে পারি

[ ] Search এবং Swap আলাদা phase বুঝি

[ ] Sorted Region left side থেকে grow করে বুঝি

[ ] Selection Sort dry run করতে পারি

[ ] Ascending Selection Sort লিখতে পারি

[ ] Descending Selection Sort লিখতে পারি

[ ] Bubble এবং Selection Sort compare করতে পারি

[ ] O(n²) complexity বুঝি

[ ] Selection Sort-এর swap behaviour বুঝি

[ ] Value Tracking এবং Index Tracking-এর difference বুঝি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি
```

---

# 🎯 Day 5 Progress

```text
Day 5
│
├── ✅ Chapter 1 — Sorting Mental Model
│
├── ✅ Chapter 2 — Bubble Sort
│
├── ✅ Chapter 3 — Selection Sort
│
├── ⬜ Chapter 4 — Built-in qsort() for Contest Use
│
├── ⬜ Chapter 5 — Frequency Counting Pattern
│
├── ⬜ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

## 🏁 Chapter 3 Final Position

এখন তোমার Sorting journey:

```text
Chapter 1
Why Sorting Helps
        ↓
Chapter 2
Bubble Sort
Adjacent Comparison
+
Immediate Swap
        ↓
Chapter 3
Selection Sort
Candidate Search
+
Index Tracking
+
Final Swap
        ↓
Chapter 4
Practical Contest Sorting
with qsort()
```

সবচেয়ে গুরুত্বপূর্ণ progression:

```text
Bubble Sort
→ Compare Neighbors
→ Swap Immediately
```

```text
Selection Sort
→ Search Best Candidate
→ Remember Position
→ Swap After Search
```

পরের **Day 5 — Chapter 4: Built-in `qsort()` for Contest Use**-এ focus থাকবে C-এর practical sorting tool-এর ওপর—বিশেষ করে comparator function কীভাবে কাজ করে, ascending/descending sorting, common comparator mistakes, এবং contest-এ কখন manual sort না লিখে `qsort()` ব্যবহার করবে।

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 4 — Built-in `qsort()` for Contest Use

> **Chapter Goal:** Bubble Sort ও Selection Sort দিয়ে sorting mechanics বোঝার পর এবার C-তে practicalভাবে `qsort()` ব্যবহার করা শেখা।
> **Estimated Time:** 45–60 minutes
> **Focus:** `qsort()` Syntax → Comparator Function → Ascending → Descending → Common Bugs → Contest Usage

> **Note:** তুমি `Day 4 Chapter 4` লিখেছ, কিন্তু আমাদের বর্তমান sequence অনুযায়ী আমরা **Day 5 — Chapter 4**-এ আছি। তাই continuity বজায় রেখে সেটাই দিচ্ছি।

---

# 🎯 Chapter Mission

এখন পর্যন্ত Day 5-এ:

```text
Chapter 1
Sorting Mental Model
        ↓
Chapter 2
Bubble Sort
        ↓
Chapter 3
Selection Sort
        ↓
Chapter 4
Practical Contest Sorting
```

Chapter 2 এবং Chapter 3-এ তুমি শিখেছ:

```text
Bubble Sort
→ Adjacent Comparison
→ Swap
→ O(n²)
```

এবং:

```text
Selection Sort
→ Candidate Search
→ Index Tracking
→ Final Swap
→ O(n²)
```

এখন প্রশ্ন:

> Contest-এ `n = 100000` হলে কি Bubble Sort লিখব?

না।

C-তে standard library sorting function আছে:

```c
qsort()
```

আজকের mental progression:

```text
Need Sorting
        ↓
Large Input?
        ↓
Manual O(n²) Sort Avoid
        ↓
Use qsort()
        ↓
Tell qsort How to Compare
        ↓
Comparator Function
```

---

# 1. `qsort()` কী?

`qsort()` হলো C Standard Library-এর একটি general-purpose sorting function।

এটি ব্যবহার করতে:

```c
#include <stdlib.h>
```

লাগে।

Basic example:

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
    {
        return -1;
    }

    if (x > y)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

Output:

```text
1 2 3 5 8
```

---

# 2. `qsort()` Syntax

General form:

```c
qsort(base, number_of_elements, size_of_each_element, comparator);
```

Array-এর জন্য:

```c
qsort(arr, n, sizeof(int), compare);
```

এখন চারটি অংশ ভাঙি:

```text
qsort(
    arr,
    n,
    sizeof(int),
    compare
);
```

Mental Model:

```text
arr
↓
কোন Data Sort করব?

n
↓
কয়টি Element?

sizeof(int)
↓
প্রতিটি Element কত Byte?

compare
↓
কোনটা আগে আসবে?
```

---

# 3. `qsort()`-এর 4টি Argument

## Argument 1 — Array

```c
arr
```

এটা হলো:

```text
Data Location
```

Example:

```c
qsort(arr, n, sizeof(int), compare);
```

মানে:

> `arr` Array-কে sort করো।

---

## Argument 2 — Number of Elements

```c
n
```

Example:

```text
Array:

5 8 2 1 7

n = 5
```

তাই:

```c
qsort(arr, 5, sizeof(int), compare);
```

সাধারণত:

```c
qsort(arr, n, sizeof(int), compare);
```

---

## Argument 3 — Element Size

Integer Array:

```c
sizeof(int)
```

Character Array হলে:

```c
sizeof(char)
```

`long long` Array হলে:

```c
sizeof(long long)
```

Mental Model:

```text
qsort()
Generic Function
↓
Different Data Types Sort করতে পারে
↓
তাই Element Size জানতে হয়
```

---

## Argument 4 — Comparator

```c
compare
```

Comparator বলে:

```text
Two Elements Given
        ↓
Which One Should Come First?
```

এটাই আজকের সবচেয়ে গুরুত্বপূর্ণ অংশ।

---

# 4. Comparator Function Mental Model

ধরো দুইটি value:

```text
x = 5
y = 2
```

Ascending order চাই।

Question:

```text
5 কি 2-এর আগে আসবে?
```

না।

তাই comparator এমন result দেয় যাতে sorting system বুঝতে পারে:

```text
x should come after y
```

Comparator-এর general rule:

```text
Negative Return
→ First Element Comes Before Second

Zero Return
→ Equal

Positive Return
→ First Element Comes After Second
```

Short mental table:

| Return | Meaning |
| ------ | ------- |
| `< 0`  | `a` আগে |
| `0`    | Equal   |
| `> 0`  | `a` পরে |

এটাই comparator-এর core contract।

---

# 5. Comparator Signature

Integer sorting comparator:

```c
int compare(const void *a, const void *b)
```

প্রথমবার দেখলে এটা অদ্ভুত লাগতে পারে।

```text
const void *a
const void *b
```

এখন pointer deep mechanics শেখার দরকার নেই।

এই Chapter-এর জন্য mental model:

```text
qsort()
↓
Gives Addresses of Two Elements
↓
Comparator Receives Them
↓
Convert to Correct Type
↓
Read Values
↓
Compare
```

Integer-এর জন্য:

```c
int x = *(const int *)a;
int y = *(const int *)b;
```

এখন:

```text
a
↓
Address
↓
Cast to int pointer
↓
Dereference
↓
Actual Integer Value
↓
x
```

একইভাবে:

```text
b
↓
Address
↓
Cast
↓
Dereference
↓
y
```

---

# 6. Pointer Syntax নিয়ে এখন কতটুকু বুঝবে?

এই line:

```c
int x = *(const int *)a;
```

এখন পুরো pointer theory দরকার নেই।

শুধু breakdown:

```text
a
↓
Generic Address
```

```text
(const int *)a
↓
Treat Address as Integer Address
```

```text
*(const int *)a
↓
Read Integer Value from That Address
```

তারপর:

```c
int x = *(const int *)a;
```

মানে:

```text
Read the Integer
↓
Store in x
```

এই Chapter-এ syntax ব্যবহার করতে শিখবে।

Pointer-এর deeper mental model future chapter-এ আসবে।

---

# 7. Safe Ascending Comparator

Recommended beginner version:

```c
int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
    {
        return -1;
    }

    if (x > y)
    {
        return 1;
    }

    return 0;
}
```

Mental Flow:

```text
Receive a and b
        ↓
Extract x and y
        ↓
x < y?
├── Yes → Negative
│
└── No
      ↓
   x > y?
   ├── Yes → Positive
   │
   └── No → Zero
```

Then:

```c
qsort(arr, n, sizeof(int), compareAscending);
```

---

# 8. Full Ascending Sort Program

```c
#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
    {
        return -1;
    }

    if (x > y)
    {
        return 1;
    }

    return 0;
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

    qsort(arr, n, sizeof(int), compareAscending);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
```

Input:

```text
6
8 3 7 1 9 2
```

Output:

```text
1 2 3 7 8 9
```

---

# 9. Descending Comparator

Ascending:

```text
Small
↓
Large
```

Descending:

```text
Large
↓
Small
```

Safe comparator:

```c
int compareDescending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x > y)
    {
        return -1;
    }

    if (x < y)
    {
        return 1;
    }

    return 0;
}
```

Call:

```c
qsort(arr, n, sizeof(int), compareDescending);
```

Example:

```text
Input:

5 2 8 1 7
```

Output:

```text
8 7 5 2 1
```

---

# 10. Ascending vs Descending Comparator

## Ascending

```c
if (x < y)
{
    return -1;
}

if (x > y)
{
    return 1;
}
```

Meaning:

```text
Smaller x
↓
x Comes First
```

---

## Descending

```c
if (x > y)
{
    return -1;
}

if (x < y)
{
    return 1;
}
```

Meaning:

```text
Larger x
↓
x Comes First
```

Mental Rule:

```text
Negative Return
=
a Should Come Earlier
```

তাই ascending-এ:

```text
Smaller
→ Earlier
```

descending-এ:

```text
Larger
→ Earlier
```

---

# 11. Short Comparator Version

অনেক জায়গায় তুমি দেখবে:

```c
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
```

এটা ascending sorting-এর জন্য common।

আর descending:

```c
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
```

কিন্তু এখানে একটা problem আছে।

---

# 12. Subtraction Comparator-এর Overflow Problem

ধরো:

```text
x = INT_MAX
y = -10
```

তখন:

```c
x - y
```

`int` range overflow করতে পারে।

তাই safer comparator:

```c
int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}
```

এটা compact এবং subtraction overflow avoid করে।

কীভাবে?

---

# 13. `(x > y) - (x < y)` বুঝি

C-তে comparison expression:

```text
True  → 1
False → 0
```

ধরো:

```text
x = 2
y = 5
```

তখন:

```text
x > y
→ 0
```

এবং:

```text
x < y
→ 1
```

তাই:

```text
0 - 1
=
-1
```

অর্থাৎ:

```text
x Comes Before y
```

---

ধরো:

```text
x = 8
y = 3
```

তখন:

```text
x > y
→ 1

x < y
→ 0
```

তাই:

```text
1 - 0
=
1
```

অর্থাৎ:

```text
x Comes After y
```

Equal হলে:

```text
0 - 0
=
0
```

Safe ascending comparator:

```c
int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}
```

---

# 14. Beginner হিসেবে কোন Comparator ব্যবহার করবে?

শুরুতে readable version ব্যবহার করতে পারো:

```c
int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
    {
        return -1;
    }

    if (x > y)
    {
        return 1;
    }

    return 0;
}
```

কারণ এতে mental model পরিষ্কার।

Comfortable হওয়ার পর:

```c
return (x > y) - (x < y);
```

ব্যবহার করতে পারো।

Bootcamp rule:

```text
First
Understand Comparator Contract

Then
Use Compact Version
```

---

# 15. `qsort()` কি Array Modify করে?

হ্যাঁ।

Example:

```c
int arr[] = {5, 2, 8, 1};
```

Before:

```text
5 2 8 1
```

Call:

```c
qsort(arr, 4, sizeof(int), compareAscending);
```

After:

```text
1 2 5 8
```

অর্থাৎ:

```text
qsort()
↓
Sorts the Original Array
```

এটা নতুন sorted array return করে না।

তাই:

```c
qsort(arr, n, sizeof(int), compare);
```

এর পরে `arr` নিজেই sorted।

---

# 16. Wrong Mental Model

Wrong:

```c
int result = qsort(arr, n, sizeof(int), compare);
```

এটা ঠিক না।

`qsort()` result array return করে না।

Mental Model:

```text
Before:

arr
↓
Unsorted
```

```text
qsort(arr, ...)
```

```text
After:

arr
↓
Sorted
```

---

# 17. Bubble Sort vs Selection Sort vs `qsort()`

| Topic                 | Bubble Sort   | Selection Sort     | `qsort()`                      |
| --------------------- | ------------- | ------------------ | ------------------------------ |
| Purpose in Bootcamp   | Mechanics     | Candidate Thinking | Practical Sorting              |
| Manual Implementation | Yes           | Yes                | Library Function               |
| Typical Complexity    | (O(n^2))      | (O(n^2))           | Efficient general-purpose sort |
| Comparator Needed     | No            | No                 | Yes                            |
| Large CP Input        | Usually Avoid | Usually Avoid      | Often Practical                |
| Learning Focus        | Adjacent Swap | Candidate Index    | Comparator                     |

Mental progression:

```text
Bubble Sort
↓
Understand Local Comparison

Selection Sort
↓
Understand Candidate Selection

qsort()
↓
Use Practical Sorting
```

---

# 18. Contest Workflow

Problem পড়লে:

```text
Need Sorted Data?
        ↓
Yes
        ↓
Is n Large?
        ↓
Usually use efficient sorting
        ↓
In C
        ↓
qsort()
```

তুমি Bubble Sort ও Selection Sort ভুলে যাবে না।

কিন্তু large input problem-এ:

```text
I know Bubble Sort
```

এই কারণে Bubble Sort ব্যবহার করবে না।

Constraint দেখবে।

Example:

```text
n ≤ 100
```

এখানে (O(n^2)) হয়তো acceptable।

কিন্তু:

```text
n ≤ 100000
```

এখানে manual quadratic sorting dangerous।

---

# 19. Constraint Reading Habit

Sorting Problem দেখলে শুধু:

```text
Need Sort
```

ভাববে না।

দেখবে:

```text
n কত?
```

Mental Framework:

```text
Read n
↓
Estimate Work
↓
Choose Technique
```

Rough intuition:

```text
Small n
→ Simple O(n²) may work

Large n
→ Need efficient approach
```

এখন exact time complexity limits মুখস্থ করার দরকার নেই।

Habit তৈরি করো:

> **Algorithm choose করার আগে Constraint দেখো।**

---

# 20. Example — Find Duplicate after Sorting

Problem:

> Array-তে duplicate আছে কি না check করো।

Input:

```text
7
5 2 8 3 2 9 1
```

Approach:

```text
Input
↓
Sort
↓
Adjacent Traversal
↓
Equal Neighbor?
↓
Duplicate Found
```

Code:

```c
#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
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

    qsort(arr, n, sizeof(int), compareAscending);

    int found = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Duplicate Found\n");
    }
    else
    {
        printf("No Duplicate\n");
    }

    return 0;
}
```

Pattern Chain:

```text
Sorting
+
Adjacent Comparison
+
Flag
+
Early Exit
```

এখানে Day 2-এর pattern আবার reuse হয়েছে।

---

# 21. Example — Count Distinct Values

Array:

```text
5 2 5 3 2 8
```

Sort:

```text
2 2 3 5 5 8
```

Distinct groups:

```text
2 | 3 | 5 | 8
```

Count:

```text
4
```

Mental Model:

```text
Sort
↓
First Value is One Distinct Group
↓
Traverse from Index 1
↓
Current != Previous?
├── Yes → New Distinct Value
└── No  → Same Group
```

Core logic:

```c
int distinct = 0;

if (n > 0)
{
    distinct = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            distinct++;
        }
    }
}
```

Pattern:

```text
Sorting
+
Adjacent Comparison
+
Counter
```

---

# 22. Why Start `distinct = 1`?

ধরো sorted array:

```text
2 2 3 5 5 8
```

প্রথম element:

```text
2
```

নিজেই প্রথম distinct group।

তাই:

```c
int distinct = 1;
```

তারপর:

```text
Index 1 থেকে Compare
```

```text
2 == 2
→ Same Group
```

```text
3 != 2
→ New Group
→ distinct++
```

```text
5 != 3
→ New Group
```

```text
5 == 5
→ Same Group
```

```text
8 != 5
→ New Group
```

Final:

```text
4
```

Edge case:

```text
n = 0
```

হলে আলাদা handling দরকার।

Contest problem-এ অনেক সময়:

```text
n ≥ 1
```

guaranteed থাকে।

Constraint পড়বে।

---

# 23. Example — Minimum Difference

Problem:

> Any two values-এর minimum absolute difference বের করো।

Array:

```text
8 1 20 4
```

Sort:

```text
1 4 8 20
```

Adjacent differences:

```text
4 - 1  = 3
8 - 4  = 4
20 - 8 = 12
```

Answer:

```text
3
```

Core flow:

```text
Sort
↓
Initialize minDiff
↓
Traverse Adjacent Pairs
↓
Calculate Difference
↓
Minimum Tracking
```

Code core:

```c
int minDiff = arr[1] - arr[0];

for (int i = 2; i < n; i++)
{
    int diff = arr[i] - arr[i - 1];

    if (diff < minDiff)
    {
        minDiff = diff;
    }
}
```

Pattern Chain:

```text
Sorting
+
Adjacent Difference
+
Minimum Tracking
```

এখানে Sorting করার কারণে:

```text
arr[i] >= arr[i - 1]
```

তাই ascending sorted array-তে adjacent difference:

```c
arr[i] - arr[i - 1]
```

non-negative।

---

# 24. Comparator-এর সবচেয়ে Common Bug

এই ধরনের comparator:

```c
int compare(const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}
```

ভুল।

কারণ comparator-এর contract শুধু:

```text
True / False
```

না।

এটার দরকার:

```text
Negative
Zero
Positive
```

Wrong version:

```text
x > y
```

return করে শুধু:

```text
0 or 1
```

কিন্তু:

```text
x < y
```

case-এর জন্য negative result দিচ্ছে না।

Correct:

```c
return (x > y) - (x < y);
```

অথবা full `if` version।

---

# 25. Common Mistake — `sizeof(arr)` ব্যবহার

তুমি দেখতে পারো:

```c
qsort(arr, n, sizeof(arr), compare);
```

এটা wrong।

কারণ third argument চায়:

```text
Size of One Element
```

না যে:

```text
Size of Entire Array
```

Correct:

```c
qsort(arr, n, sizeof(int), compare);
```

আরও flexible form:

```c
qsort(arr, n, sizeof(arr[0]), compare);
```

এটা useful কারণ:

```text
arr[0]
↓
One Element
```

তাই:

```c
sizeof(arr[0])
```

মানে:

```text
Size of One Array Element
```

---

# 26. Recommended `qsort()` Call Style

Integer Array:

```c
qsort(arr, n, sizeof(arr[0]), compareAscending);
```

এটার mental breakdown:

```text
arr
→ Data

n
→ Element Count

sizeof(arr[0])
→ One Element Size

compareAscending
→ Ordering Rule
```

এই style মনে রাখা ভালো।

---

# 27. Common Mistake — Comparator Call করা

Wrong:

```c
qsort(arr, n, sizeof(int), compareAscending());
```

Correct:

```c
qsort(arr, n, sizeof(int), compareAscending);
```

কারণ এখানে function call করছি না।

আমরা `qsort()`-কে comparator function দিচ্ছি।

Mental distinction:

```text
compareAscending()
→ Call Function Now
```

```text
compareAscending
→ Give Function to qsort
```

এই concept পরে function pointer শেখার সময় deeper হবে।

এখন syntax মনে রাখবে।

---

# 28. Common Mistake — Missing Header

`qsort()` ব্যবহার করতে:

```c
#include <stdlib.h>
```

লাগে।

Basic structure:

```c
#include <stdio.h>
#include <stdlib.h>
```

---

# 29. `qsort()` Code Template

তোমার `Templates/` folder-এ চাইলে sorting snippet রাখতে পারো।

```c
#include <stdlib.h>

int compareAscending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x > y) - (x < y);
}
```

Use:

```c
qsort(arr, n, sizeof(arr[0]), compareAscending);
```

Descending:

```c
int compareDescending(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return (x < y) - (x > y);
}
```

---

# 30. Code Derivation Method

`qsort()` ভুলে গেলে চারটি প্রশ্ন করবে।

## Step 1 — কী sort করব?

```text
arr
```

## Step 2 — কয়টি element?

```text
n
```

## Step 3 — একটির size কত?

```text
sizeof(arr[0])
```

## Step 4 — Order কী?

```text
compareAscending
```

তাহলে:

```c
qsort(arr, n, sizeof(arr[0]), compareAscending);
```

Comparator derive:

```text
Receive Two Generic Addresses
↓
Extract x and y
↓
Decide Ordering
↓
Return Negative / Zero / Positive
```

---

# 🧠 `qsort()` Master Mental Model

```text
                    NEED SORTING
                         │
                         ▼
                    Call qsort()
                         │
          ┌──────────────┼──────────────┐
          │              │              │
          ▼              ▼              ▼
        Array          Count        Element Size
          │              │              │
          └──────────────┼──────────────┘
                         │
                         ▼
                     Comparator
                         │
                         ▼
                   Receive a and b
                         │
                         ▼
                    Extract Values
                         │
                         ▼
                  Decide Their Order
                         │
              ┌──────────┼──────────┐
              │          │          │
              ▼          ▼          ▼
           Negative      Zero      Positive
              │          │          │
              ▼          ▼          ▼
           a Before     Equal      a After
```

---

# 31. Bubble, Selection এবং `qsort()` — Final Mental Separation

```text
Bubble Sort
│
├── Learning Goal
│   └── Adjacent Comparison + Swap
│
├── Core State
│   └── Optional swapped Flag
│
└── Movement
    └── Large → Right
```

```text
Selection Sort
│
├── Learning Goal
│   └── Candidate Search + Index Tracking
│
├── Core State
│   └── minIndex
│
└── Movement
    └── Small → Left
```

```text
qsort()
│
├── Practical Goal
│   └── Efficient General Sorting
│
├── Core Skill
│   └── Comparator Design
│
└── Usage
    └── Sort → Apply Problem Pattern
```

---

# 🧪 Chapter 4 Practice

## Task 1 — Ascending Sort

Input:

```text
6
9 2 7 1 5 3
```

Expected Output:

```text
1 2 3 5 7 9
```

Requirement:

```text
qsort()
+
Ascending Comparator
```

---

## Task 2 — Descending Sort

Same Input:

```text
6
9 2 7 1 5 3
```

Expected:

```text
9 7 5 3 2 1
```

Requirement:

```text
qsort()
+
Descending Comparator
```

---

## Task 3 — Duplicate Detection

Input:

```text
7
5 2 8 3 2 9 1
```

Expected:

```text
Duplicate Found
```

Pattern:

```text
qsort()
+
Adjacent Comparison
+
Flag
+
Early Exit
```

---

## Task 4 — Count Distinct Values

Input:

```text
8
5 2 5 3 2 8 8 1
```

Sorted:

```text
1 2 2 3 5 5 8 8
```

Expected:

```text
5
```

Pattern:

```text
Sorting
+
Adjacent Comparison
+
Counter
```

---

## Task 5 — Minimum Adjacent Difference

Input:

```text
5
8 1 15 4 10
```

Sorted:

```text
1 4 8 10 15
```

Differences:

```text
3
4
2
5
```

Output:

```text
2
```

Pattern:

```text
Sorting
+
Adjacent Difference
+
Minimum Tracking
```

---

# 🧠 Pattern Recognition Drill

## Problem 1

Complete:

```text
Need Efficient Sorting in C
↓
________
↓
Comparator Function
```

---

## Problem 2

Comparator return:

```text
Negative
→ ?

Zero
→ ?

Positive
→ ?
```

---

## Problem 3

Complete the call:

```c
qsort(
    ______,
    ______,
    sizeof(______),
    ______
);
```

---

## Problem 4

Problem:

> Find duplicate values.

Possible chain:

```text
Sorting
↓
________ Comparison
↓
Equal?
↓
Duplicate
```

---

## Problem 5

Problem:

> Find first occurrence in the original array.

Should you blindly sort?

```text
Yes / No

Reason:
...
```

---

# 📝 Chapter 4 Assignment

এই Chapter-এর assignment focused রাখা হয়েছে।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. qsort() কী?

2. qsort()-এর 4টি argument কী?

3. Comparator Function-এর কাজ কী?

4. Negative return-এর meaning কী?

5. Zero return-এর meaning কী?

6. Positive return-এর meaning কী?

7. sizeof(arr[0]) কেন ব্যবহার করা যায়?

8. qsort() original array modify করে কি না?

9. compareAscending এবং compareDescending-এর difference কী?

10. return x - y style comparator কেন risky হতে পারে?
```

---

## Part B — Mandatory Coding

```text
1. qsort() Ascending

2. qsort() Descending

3. Duplicate Detection after Sorting

4. Count Distinct Values after Sorting
```

---

## Part C — Comparator Writing Drill

Code না দেখে লিখবে:

```c
int compareAscending(const void *a, const void *b)
{
    // ...
}
```

তারপর:

```c
int compareDescending(const void *a, const void *b)
{
    // ...
}
```

Goal:

```text
Understand
↓
Write
↓
Compile
↓
Test
```

---

## Part D — Debugging

এই code-এর ভুলগুলো খুঁজে বের করো:

```c
#include <stdio.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return x > y;
}

int main()
{
    int arr[] = {5, 2, 8, 1};

    qsort(arr, 4, sizeof(arr), compare());

    return 0;
}
```

Find:

```text
Problem 1:
Missing Header:

Problem 2:
Comparator Contract:

Problem 3:
Element Size:

Problem 4:
Comparator Argument:
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
qsort
Comparator
Comparison Contract
Negative Return
Positive Return
Element Size
Generic Pointer
Type Cast
Dereference
Library Sort
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

Pointer-related terms এখন খুব deep-এ লিখবে না।

Simple meaning যথেষ্ট।

---

# 🔥 Chapter 4 Key Lesson

Bubble Sort এবং Selection Sort শেখার উদ্দেশ্য ছিল sorting mechanics বোঝা।

কিন্তু practical CP workflow:

```text
Problem Needs Sorting
        ↓
Check Constraint
        ↓
Need Efficient Sorting
        ↓
Use qsort()
        ↓
Write Correct Comparator
        ↓
Sort Data
        ↓
Apply Next Pattern
```

সবচেয়ে গুরুত্বপূর্ণ observation:

```text
qsort()
```

নিজে complete problem-solving pattern না।

অনেক সময়:

```text
qsort()
+
Adjacent Comparison
```

অথবা:

```text
qsort()
+
Counter
```

অথবা:

```text
qsort()
+
Minimum Difference
```

অথবা future-এ:

```text
qsort()
+
Two Pointer
```

হবে।

অর্থাৎ:

```text
Sorting
=
Preprocessing Tool
```

তারপর actual problem pattern apply হয়।

---

# ✅ Chapter 4 Completion Checklist

```text
[ ] qsort() কী বুঝি

[ ] stdlib.h include করতে জানি

[ ] qsort()-এর 4টি argument বুঝি

[ ] Array argument বুঝি

[ ] Element count বুঝি

[ ] Element size বুঝি

[ ] Comparator-এর role বুঝি

[ ] Negative / Zero / Positive contract বুঝি

[ ] Integer value comparator-এ extract করতে পারি

[ ] Ascending comparator লিখতে পারি

[ ] Descending comparator লিখতে পারি

[ ] qsort() call লিখতে পারি

[ ] sizeof(arr[0]) বুঝি

[ ] qsort() original array modify করে বুঝি

[ ] subtraction comparator overflow risk সম্পর্কে জানি

[ ] Boolean-only comparator কেন wrong বুঝি

[ ] Duplicate Detection after Sorting করতে পারি

[ ] Distinct Count after Sorting করতে পারি

[ ] Minimum Difference pattern বুঝি

[ ] Bubble, Selection এবং qsort()-এর role আলাদা করতে পারি

[ ] Constraint দেখে sorting approach choose করার habit তৈরি করছি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি
```

---

# 🎯 Day 5 Progress

```text
Day 5
│
├── ✅ Chapter 1 — Sorting Mental Model
│
├── ✅ Chapter 2 — Bubble Sort
│
├── ✅ Chapter 3 — Selection Sort
│
├── ✅ Chapter 4 — Built-in qsort() for Contest Use
│
├── ⬜ Chapter 5 — Frequency Counting Pattern
│
├── ⬜ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

# 🏁 Chapter 4 Final Position

এখন তোমার Sorting journey:

```text
Chapter 1
Why Sorting Helps
        ↓
Chapter 2
Bubble Sort
Compare + Swap
        ↓
Chapter 3
Selection Sort
Search + Candidate Index + Swap
        ↓
Chapter 4
qsort()
Practical Sorting + Comparator
```

পরবর্তী **Day 5 — Chapter 5: Frequency Counting Pattern**-এ আমরা এই mental model তৈরি করব:

```text
Value Appears
        ↓
Use Value as Frequency Index
        ↓
freq[value]++
        ↓
Build Frequency Table
        ↓
Answer Count Questions
```

এখানে Sorting-এর বাইরে আরেকটি powerful approach আসবে:

```text
Sorting Approach
vs
Frequency Array Approach
```

এবং শিখবে—**কখন sort করা ভালো, আর কখন direct frequency counting বেশি natural।**

---

