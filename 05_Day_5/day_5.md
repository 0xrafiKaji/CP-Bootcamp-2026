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

| Question            | Bubble Sort | Selection Sort |
| ------------------- | ----------- | -------------- |
| কী compare করে?       | ...         | ...            |
| Candidate Index লাগে? | ...         | ...            |
| Swap behaviour      | ...         | ...            |
| কোন side fixed হয়?   | ...         | ...            |
| Complexity          | ...         | ...            |

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
| `< 0`  | `a` আগে  |
| `0`    | Equal   |
| `> 0`  | `a` পরে  |

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

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 5 — Frequency Counting Pattern

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** কোনো value কতবার এসেছে—এই ধরনের problem দেখলে **Traversal → Value → Frequency Index → Increment → Query** pattern চিনতে শেখা।
> **Estimated Time:** 50–70 minutes

---

# 🎯 Chapter Mission

Day 5-এ এখন পর্যন্ত:

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
qsort() for Practical Sorting
        ↓
Chapter 5
Frequency Counting
```

আগের Chapter-এ আমরা duplicate এবং distinct value বের করতে sorting ব্যবহার করেছি।

Example:

```text
5 2 5 3 2
```

Sort করলে:

```text
2 2 3 5 5
```

তারপর adjacent comparison করে frequency-related কিছু problem solve করা যায়।

কিন্তু যদি প্রশ্ন হয়:

> `2` কতবার আছে?

অথবা:

> প্রতিটি value কতবার এসেছে?

অথবা:

> কোন value সবচেয়ে বেশি এসেছে?

তাহলে অনেক ক্ষেত্রে direct approach:

```text
Value দেখি
        ↓
তার জন্য একটি Counter রাখি
        ↓
Value আবার এলে Counter বাড়াই
        ↓
Frequency Table তৈরি করি
```

Core pattern:

```text
arr[i]
   ↓
Value
   ↓
freq[value]
   ↓
freq[value]++
```

---

# 1. Frequency মানে কী?

Frequency মানে:

> কোনো value কতবার উপস্থিত হয়েছে।

Array:

```text
2 5 2 3 5 2
```

এখানে:

```text
Value 2
→ 3 times

Value 3
→ 1 time

Value 5
→ 2 times
```

Frequency Table:

| Value | Frequency |
| ----: | --------: |
|     2 |         3 |
|     3 |         1 |
|     5 |         2 |

Mental Model:

```text
Value
↓
How Many Times?
↓
Frequency
```

---

# 2. প্রথমে Simple Counting বুঝি

ধরো:

```text
Array:

2 5 2 3 5 2
```

Question:

> `2` কতবার আছে?

Day 2-এর Counting Pattern দিয়ে:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == 2)
    {
        count++;
    }
}
```

Result:

```text
count = 3
```

এটা single target-এর জন্য ঠিক আছে।

Pattern:

```text
Traversal
↓
Condition Match?
↓
Counter++
```

কিন্তু যদি প্রশ্ন হয়:

> সব value কতবার এসেছে?

তখন একটি `count` variable যথেষ্ট না।

কারণ:

```text
2-এর count দরকার

3-এর count দরকার

5-এর count দরকার

...
```

তখন দরকার:

```text
Multiple Counters
```

এখানেই Frequency Array আসে।

---

# 3. Frequency Array Mental Model

ধরো values-এর range:

```text
0 থেকে 9
```

তাহলে:

```c
int freq[10] = {0};
```

Initial state:

```text
Index:  0 1 2 3 4 5 6 7 8 9
Freq :  0 0 0 0 0 0 0 0 0 0
```

এখন Array:

```text
2 5 2 3 5 2
```

প্রতিটি value-এর জন্য:

```c
freq[arr[i]]++;
```

এই এক line-ই Chapter-এর সবচেয়ে গুরুত্বপূর্ণ line।

```c
freq[arr[i]]++;
```

---

# 4. `freq[arr[i]]++` কীভাবে কাজ করে?

প্রথমবার দেখলে line-টা confusing লাগতে পারে।

তাই ধীরে ভাঙি।

ধরো:

```text
i = 0
```

এবং:

```text
arr[i] = 2
```

তাহলে:

```c
freq[arr[i]]++;
```

becomes:

```c
freq[2]++;
```

অর্থাৎ:

```text
Value 2 এসেছে
↓
Index 2-এর Counter বাড়াও
```

Before:

```text
freq[2] = 0
```

After:

```text
freq[2] = 1
```

---

পরের value:

```text
arr[1] = 5
```

তখন:

```c
freq[arr[1]]++;
```

মানে:

```c
freq[5]++;
```

Result:

```text
freq[5] = 1
```

---

আবার `2` এলে:

```c
freq[2]++;
```

এখন:

```text
freq[2] = 2
```

Mental Model:

```text
Array Value
        ↓
Becomes Frequency Array Index
        ↓
Increment That Counter
```

---

# 5. Full Frequency Dry Run

Input Array:

```text
2 5 2 3 5 2
```

Initial:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 0 0 0 0
```

---

## Step 1

Current Value:

```text
2
```

Operation:

```text
freq[2]++
```

State:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 1 0 0 0
```

---

## Step 2

Current Value:

```text
5
```

Operation:

```text
freq[5]++
```

State:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 1 0 0 1
```

---

## Step 3

Current Value:

```text
2
```

Operation:

```text
freq[2]++
```

State:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 2 0 0 1
```

---

## Step 4

Current Value:

```text
3
```

Operation:

```text
freq[3]++
```

State:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 2 1 0 1
```

---

## Step 5

Current Value:

```text
5
```

Operation:

```text
freq[5]++
```

State:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 2 1 0 2
```

---

## Step 6

Current Value:

```text
2
```

Operation:

```text
freq[2]++
```

Final:

```text
Index:  0 1 2 3 4 5
Freq :  0 0 3 1 0 2
```

Interpretation:

```text
freq[0] = 0
→ 0 appears 0 times

freq[1] = 0
→ 1 appears 0 times

freq[2] = 3
→ 2 appears 3 times

freq[3] = 1
→ 3 appears 1 time

freq[4] = 0
→ 4 appears 0 times

freq[5] = 2
→ 5 appears 2 times
```

---

# 6. Basic Frequency Counting Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int value = 0; value <= 100; value++)
    {
        if (freq[value] > 0)
        {
            printf("%d appears %d times\n",
                   value,
                   freq[value]);
        }
    }

    return 0;
}
```

Input:

```text
6
2 5 2 3 5 2
```

Output:

```text
2 appears 3 times
3 appears 1 time
5 appears 2 times
```

---

# 7. কেন `freq[101]`?

ধরো constraint:

```text
0 ≤ arr[i] ≤ 100
```

Possible values:

```text
0, 1, 2, ..., 100
```

এখানে মোট index দরকার:

```text
0 থেকে 100
```

তাই size:

```text
101
```

Code:

```c
int freq[101] = {0};
```

Important Rule:

```text
Maximum Value = 100
        ↓
Need Index 100
        ↓
Array Size at least 101
```

General:

```text
Value Range:
0 to MAX_VALUE

Frequency Array Size:
MAX_VALUE + 1
```

---

# 8. Frequency Array Initialize করা কেন জরুরি?

Wrong:

```c
int freq[101];
```

Local array-এর values garbage হতে পারে।

তখন:

```c
freq[2]++;
```

করলে যদি `freq[2]` আগে random value হয়:

```text
487
```

তাহলে result হবে:

```text
488
```

যা ভুল।

তাই:

```c
int freq[101] = {0};
```

Mental Model:

```text
Before Counting
↓
Every Counter Must Start at 0
```

---

# 9. Input-এর সময়ই Frequency Count করা যায়

আগের code:

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

for (int i = 0; i < n; i++)
{
    freq[arr[i]]++;
}
```

কিন্তু যদি original array পরে দরকার না হয়, input-এর সময়ই count করা যায়।

```c
for (int i = 0; i < n; i++)
{
    int x;

    scanf("%d", &x);

    freq[x]++;
}
```

Full example:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    for (int value = 0; value <= 100; value++)
    {
        if (freq[value] > 0)
        {
            printf("%d %d\n", value, freq[value]);
        }
    }

    return 0;
}
```

Mental Decision:

```text
Need Original Array Later?
        │
    ┌───┴───┐
    │       │
   Yes      No
    │       │
    ▼       ▼
Store      Count
Array      Directly
```

---

# 10. Frequency Counting vs Normal Counting

## Normal Counting

Question:

> `7` কতবার আছে?

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == 7)
    {
        count++;
    }
}
```

State:

```text
One Target
↓
One Counter
```

---

## Frequency Counting

Question:

> প্রতিটি value কতবার আছে?

```c
freq[arr[i]]++;
```

State:

```text
Many Possible Values
↓
One Counter Per Value
```

Mental Contrast:

```text
Single Target
→ count
```

```text
Many Values
→ freq[]
```

---

# 11. Query Problem

ধরো তোমাকে দেওয়া হলো:

```text
Array:
2 5 2 3 5 2
```

তারপর অনেক Query:

```text
How many 2?
How many 5?
How many 1?
How many 3?
```

Normal approach:

প্রতি Query-এর জন্য পুরো Array traverse করলে:

```text
Query 1
→ Traverse n

Query 2
→ Traverse n

Query 3
→ Traverse n
```

যদি `q` queries থাকে:

```text
O(n × q)
```

Frequency approach:

```text
Build Frequency Once
↓
freq[value]
↓
Direct Answer
```

Build:

```text
O(n)
```

প্রতি query:

```text
O(1)
```

Conceptually total:

```text
O(n + q)
```

এটাই preprocessing-এর একটি simple example।

---

# 12. Frequency Query Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    int q;

    scanf("%d", &q);

    while (q--)
    {
        int x;

        scanf("%d", &x);

        printf("%d\n", freq[x]);
    }

    return 0;
}
```

Input:

```text
6
2 5 2 3 5 2

4
2
5
1
3
```

Output:

```text
3
2
0
1
```

Mental Model:

```text
Data
↓
Preprocess Frequency
↓
Queries Arrive
↓
Direct Lookup
```

---

# 13. Preprocessing শব্দটি বুঝি

এটা CP-তে খুব important term।

**Preprocessing** মানে:

> Query বা main operation-এর আগে data-কে এমনভাবে prepare করা যাতে পরে answer দ্রুত দেওয়া যায়।

Frequency example:

```text
Raw Array
↓
Build freq[]
↓
Prepared Information
↓
Fast Queries
```

Without preprocessing:

```text
Every Query
↓
Search Full Array
```

With preprocessing:

```text
One Initial Traversal
↓
Store Counts
↓
Direct Answer
```

Future-এ তুমি আরও preprocessing pattern দেখবে।

যেমন:

```text
Prefix Sum
Sorting
Frequency Array
```

এখন শুধু mental idea রাখো:

```text
Spend Work Once
↓
Answer Many Times Faster
```

---

# 14. Distinct Count Using Frequency Array

Array:

```text
5 2 5 3 2 8
```

Frequency:

```text
2 → 2
3 → 1
5 → 2
8 → 1
```

Distinct values হলো যাদের:

```text
freq[value] > 0
```

তাই:

```c
int distinct = 0;

for (int value = 0; value <= 100; value++)
{
    if (freq[value] > 0)
    {
        distinct++;
    }
}
```

Pattern:

```text
Build Frequency
↓
Traverse Frequency Array
↓
Positive Frequency?
↓
Distinct++
```

---

# 15. Full Distinct Count Program

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    int distinct = 0;

    for (int value = 0; value <= 100; value++)
    {
        if (freq[value] > 0)
        {
            distinct++;
        }
    }

    printf("%d\n", distinct);

    return 0;
}
```

Input:

```text
6
5 2 5 3 2 8
```

Output:

```text
4
```

Because:

```text
2
3
5
8
```

এই চারটি distinct value।

---

# 16. Most Frequent Value

Problem:

> কোন value সবচেয়ে বেশি এসেছে?

Array:

```text
2 5 2 3 5 2
```

Frequency:

```text
2 → 3
3 → 1
5 → 2
```

Answer:

```text
2
```

কারণ highest frequency:

```text
3
```

এখানে pattern combination:

```text
Frequency Counting
+
Maximum Tracking
+
Candidate Value Tracking
```

Variables:

```c
int bestValue = 0;
int bestFrequency = 0;
```

Traversal:

```c
for (int value = 0; value <= 100; value++)
{
    if (freq[value] > bestFrequency)
    {
        bestFrequency = freq[value];
        bestValue = value;
    }
}
```

Mental Model:

```text
Traverse Possible Values
↓
Check Their Frequency
↓
Better Frequency Found?
↓
Update Best Frequency
↓
Remember Value
```

---

# 17. Most Frequent Value Full Code

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    int bestValue = 0;
    int bestFrequency = 0;

    for (int value = 0; value <= 100; value++)
    {
        if (freq[value] > bestFrequency)
        {
            bestFrequency = freq[value];
            bestValue = value;
        }
    }

    printf("Value: %d\n", bestValue);
    printf("Frequency: %d\n", bestFrequency);

    return 0;
}
```

Input:

```text
6
2 5 2 3 5 2
```

Output:

```text
Value: 2
Frequency: 3
```

---

# 18. Tie হলে কী হবে?

ধরো:

```text
1 1 3 3 5
```

Frequency:

```text
1 → 2
3 → 2
5 → 1
```

Maximum frequency tie:

```text
1 and 3
```

আগের code:

```c
if (freq[value] > bestFrequency)
```

ব্যবহার করলে ছোট value `1` থাকবে।

কারণ frequency array traverse করছি:

```text
0 → 1 → 2 → 3 → ...
```

`1` আগে maximum হয়।

তারপর `3`-এর frequency equal:

```text
2 > 2?
No
```

তাই update হয় না।

এখানে lesson:

> Tie-breaking rule problem statement থেকে পড়তে হবে।

Possible rules:

```text
Smallest Value

Largest Value

First Appearing Value

Last Appearing Value
```

এগুলো এক জিনিস না।

---

# 19. Frequency Array-এর বড় Limitation

Frequency array খুব powerful।

কিন্তু সব জায়গায় use করা যায় না।

ধরো constraint:

```text
0 ≤ arr[i] ≤ 100
```

Excellent।

```c
int freq[101];
```

Small memory।

কিন্তু যদি:

```text
0 ≤ arr[i] ≤ 1000000000
```

তাহলে:

```c
int freq[1000000001];
```

বানানো practical না।

Mental Rule:

```text
Small Manageable Value Range
        ↓
Frequency Array Natural
```

```text
Huge Value Range
        ↓
Direct Frequency Array Dangerous
```

এই ক্ষেত্রে future techniques:

```text
Sorting
Hash Map
Coordinate Compression
```

কাজে আসতে পারে।

এখন তোমার focus:

> **Frequency Array use করার আগে value range check করো।**

---

# 20. Negative Values-এর সমস্যা

ধরো:

```text
-2 3 -2 5
```

এই code:

```c
freq[arr[i]]++;
```

হলে:

```c
freq[-2]++;
```

যা invalid index।

তাই direct frequency indexing-এর basic condition:

```text
Values Must Map to Valid Array Indices
```

অর্থাৎ সাধারণ beginner form-এ:

```text
Non-negative values
+
Small bounded range
```

থাকা ভালো।

Negative values handle করার জন্য offset technique আছে।

---

# 21. Offset Technique — Basic Idea

ধরো range:

```text
-5 থেকে 5
```

Direct index:

```text
-5
```

invalid।

তাই shift করি:

```text
Index = Value + 5
```

Mapping:

| Value | Frequency Index |
| ----: | --------------: |
|    -5 |               0 |
|    -4 |               1 |
|    -3 |               2 |
|     0 |               5 |
|     3 |               8 |
|     5 |              10 |

Code:

```c
freq[value + 5]++;
```

Retrieve:

```c
freq[x + 5]
```

Mental Model:

```text
Negative Range
↓
Shift Values
↓
Map to Valid Non-negative Index
```

এই technique এখন শুধু পরিচিত হও।

Day 5 assignment-এ এটা mandatory না।

---

# 22. Character Frequency

Frequency pattern শুধু integer-এর জন্য না।

String:

```text
banana
```

Characters:

```text
b a n a n a
```

Frequency:

```text
a → 3
b → 1
n → 2
```

Code:

```c
int freq[256] = {0};

for (int i = 0; str[i] != '\0'; i++)
{
    freq[(unsigned char)str[i]]++;
}
```

Conceptually:

```text
Character
↓
Numeric Code
↓
Frequency Index
```

তুমি Day 3-এ String Traversal শিখেছ।

এখন pattern combination:

```text
String Traversal
+
Frequency Counting
```

---

# 23. Lowercase Letter Frequency

যদি constraint থাকে:

```text
Only lowercase English letters
```

তাহলে 26-size frequency array ব্যবহার করা যায়।

```c
int freq[26] = {0};
```

Mapping:

```text
'a' → 0
'b' → 1
'c' → 2
...
'z' → 25
```

Formula:

```c
index = str[i] - 'a';
```

Count:

```c
freq[str[i] - 'a']++;
```

Example:

```text
String:

banana
```

For `'b'`:

```text
'b' - 'a'
=
1
```

তাই:

```text
freq[1]++
```

For `'a'`:

```text
'a' - 'a'
=
0
```

তাই:

```text
freq[0]++
```

---

# 24. Lowercase Character Frequency Program

```c
#include <stdio.h>

int main()
{
    char str[101];

    scanf("%100s", str);

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c appears %d times\n",
                   'a' + i,
                   freq[i]);
        }
    }

    return 0;
}
```

Input:

```text
banana
```

Output:

```text
a appears 3 times
b appears 1 times
n appears 2 times
```

Pattern reuse:

```text
Day 3
String Traversal
        +
Day 5
Frequency Counting
```

---

# 25. Frequency Array vs Sorting

ধরো:

```text
5 2 5 3 2 8
```

Question:

> কতটি distinct value আছে?

## Approach 1 — Sorting

```text
Sort
↓
2 2 3 5 5 8
↓
Adjacent Comparison
↓
Count New Groups
```

---

## Approach 2 — Frequency Array

```text
Build freq[]
↓
Check freq[value] > 0
↓
Count Present Values
```

দুটিই valid হতে পারে।

কোনটা use করবে depend করে:

```text
Constraints
Value Range
Need for Sorted Order
Available Techniques
```

Mental comparison:

| Situation                     | Natural Choice        |
| ----------------------------- | --------------------- |
| Small value range             | Frequency Array       |
| Need sorted values            | Sorting               |
| Many frequency queries        | Frequency Array       |
| Huge sparse values            | Sorting may be better |
| Need adjacent sorted relation | Sorting               |

এখন তোমার goal perfect algorithm selection না।

Goal:

```text
Problem দেখে
একাধিক possible approach চিনতে শেখা
```

---

# 26. Frequency Pattern-এর State Variables

Frequency problem-এ different state দেখা যায়।

## Frequency Array

```c
int freq[MAX + 1];
```

Role:

```text
Counter Collection
```

---

## Distinct Counter

```c
int distinct = 0;
```

Role:

```text
Counter
```

---

## Best Frequency

```c
int bestFrequency = 0;
```

Role:

```text
Maximum Candidate
```

---

## Best Value

```c
int bestValue;
```

Role:

```text
Candidate Value
```

Pattern combination:

```text
Frequency Array
+
Traversal
+
Counter
+
Candidate Tracking
```

---

# 27. Common Mistake — Frequency Array ছোট নেওয়া

Constraint:

```text
0 ≤ arr[i] ≤ 100
```

Wrong:

```c
int freq[100];
```

Valid indexes:

```text
0 to 99
```

কিন্তু value `100` এলে:

```c
freq[100]++;
```

invalid।

Correct:

```c
int freq[101] = {0};
```

Rule:

```text
Max Value M
↓
Need Index M
↓
Size at least M + 1
```

---

# 28. Common Mistake — Initialize না করা

Wrong:

```c
int freq[101];
```

Correct:

```c
int freq[101] = {0};
```

Frequency মানে counting।

Counting শুরু হওয়া উচিত:

```text
0
```

---

# 29. Common Mistake — Index এবং Frequency Confusion

ধরো:

```text
freq[5] = 3
```

এর meaning:

```text
Value 5
appears
3 times
```

এটা না:

```text
Index 3-এ value 5 আছে
```

Mental Rule:

```text
Frequency Array Index
=
Original Value
```

```text
Frequency Array Content
=
Count of That Value
```

অর্থাৎ:

```text
freq[value] = count
```

---

# 30. Common Mistake — Negative Value Direct Index

Wrong:

```c
freq[arr[i]]++;
```

যদি:

```text
arr[i] = -3
```

তাহলে:

```c
freq[-3]++;
```

invalid।

তাই আগে constraint check করবে।

```text
Can Value Safely Become an Array Index?
```

এই প্রশ্ন করবে।

---

# 31. Common Mistake — Huge Frequency Array

Constraint:

```text
arr[i] ≤ 10^9
```

দেখে:

```c
int freq[1000000001];
```

লিখবে না।

কারণ memory enormous।

Mental Decision:

```text
Need Frequency?
        ↓
Check Value Range
        ↓
Small?
├── Yes → Frequency Array Possible
└── No  → Need Another Technique
```

---

# 32. Common Mistake — Original Order হারানোর বিষয়

Frequency array:

```text
5 2 5 3
```

থেকে তুমি জানো:

```text
2 → 1
3 → 1
5 → 2
```

কিন্তু original sequence:

```text
5, তারপর 2, তারপর 5, তারপর 3
```

এই order frequency table preserve করে না।

তাই যদি problem asks:

> First occurrence কোথায়?

শুধু frequency array যথেষ্ট না।

Important:

```text
Frequency Table
Preserves Counts

But Does Not Preserve
Original Order
```

---

# 33. Code Derivation Method

Frequency problem দেখলে code ভুলে গেলে এইভাবে derive করবে।

## Step 1 — Need Count Per Value

```c
int freq[SIZE] = {0};
```

---

## Step 2 — Traverse Input

```c
for (int i = 0; i < n; i++)
{
}
```

---

## Step 3 — Current Value

```c
int x = arr[i];
```

---

## Step 4 — Increment Its Counter

```c
freq[x]++;
```

অথবা directly:

```c
freq[arr[i]]++;
```

---

## Step 5 — Use Frequency Table

Example:

```c
printf("%d\n", freq[target]);
```

অথবা:

```c
for (int value = 0; value <= MAX; value++)
{
    if (freq[value] > 0)
    {
        // use frequency
    }
}
```

Mental derivation:

```text
Need Count Per Value
↓
One Counter Per Possible Value
↓
Array of Counters
↓
Value Becomes Index
↓
Increment
```

---

# 🧠 Frequency Counting Master Pattern Map

```text
                    INPUT VALUES
                         │
                         ▼
                    Traverse Data
                         │
                         ▼
                 Read Current Value x
                         │
                         ▼
                      freq[x]
                         │
                         ▼
                    Increment Count
                         │
                         ▼
                Frequency Table Ready
                         │
          ┌──────────────┼──────────────┐
          │              │              │
          ▼              ▼              ▼
        Query         Distinct        Maximum
        Count          Count          Frequency
          │              │              │
          ▼              ▼              ▼
      freq[x]       freq[x] > 0    Best Candidate
```

---

# 34. Problem Recognition Signals

Problem statement-এ এই ধরনের শব্দ দেখলে frequency ভাববে:

```text
How many times?

Occurrence Count

Frequency

Repeated Values

Most Frequent

Least Frequent

Distinct Values

Count of Each Value

Multiple Count Queries

Character Count
```

Mental trigger:

```text
Need Count for Many Different Values
        ↓
Frequency Counting?
```

তারপর দ্বিতীয় প্রশ্ন:

```text
Is Value Range Small and Manageable?
        ↓
Yes
        ↓
Frequency Array
```

---

# 35. Sorting না Frequency?

একটি quick decision framework:

```text
Need Count Information?
        │
        ▼
Are Values in Small Range?
        │
    ┌───┴───┐
    │       │
   Yes      No
    │       │
    ▼       ▼
Frequency   Consider
Array       Sorting / Other Technique
```

আর যদি:

```text
Need Ordered Relationship
```

তাহলে:

```text
Sorting
```

natural হতে পারে।

Example:

```text
Minimum Difference
→ Sorting
```

Example:

```text
How many times does 7 occur?
→ Counting / Frequency
```

Example:

```text
100000 frequency queries
→ Preprocessing with Frequency
```

---

# 🧪 Chapter 5 Practice

## Task 1 — Basic Frequency Table

Input:

```text
8
2 5 2 3 5 2 8 3
```

Expected conceptual table:

```text
2 → 3
3 → 2
5 → 2
8 → 1
```

Requirement:

```text
Frequency Array
```

---

## Task 2 — Query Frequency

Input:

```text
8
2 5 2 3 5 2 8 3

4
2
3
7
8
```

Expected Output:

```text
3
2
0
1
```

Pattern:

```text
Preprocessing
+
Direct Lookup
```

---

## Task 3 — Count Distinct Values

Input:

```text
8
2 5 2 3 5 2 8 3
```

Expected:

```text
4
```

Pattern:

```text
Frequency Counting
+
Frequency Traversal
+
Counter
```

---

## Task 4 — Most Frequent Value

Input:

```text
8
2 5 2 3 5 2 8 3
```

Expected:

```text
Value: 2
Frequency: 3
```

Pattern:

```text
Frequency Counting
+
Maximum Tracking
+
Candidate Value
```

---

## Task 5 — Character Frequency

Input:

```text
programming
```

Print each present lowercase letter and its frequency.

Pattern:

```text
String Traversal
+
Character Mapping
+
Frequency Counting
```

---

# 🧠 Pattern Recognition Drill

## Problem 1

Complete:

```text
Current Value x
↓
freq[_____]
↓
Increment
```

---

## Problem 2

If:

```text
freq[7] = 4
```

এর meaning কী?

```text
...
```

---

## Problem 3

Constraint:

```text
0 ≤ arr[i] ≤ 50
```

Minimum simple frequency array size কত?

```text
...
```

---

## Problem 4

Problem:

> 100000 queries-তে প্রতিবার জানতে হবে `x` কতবার এসেছে।

Possible pattern:

```text
Build ______ Once
↓
Answer Each Query with ______
```

---

## Problem 5

Problem:

> Array-এর original first occurrence বের করো।

শুধু frequency array যথেষ্ট?

```text
Yes / No

Reason:
...
```

---

## Problem 6

Problem:

> Values range from `0` to `10^9`, কিন্তু মাত্র `1000` elements আছে।

Direct frequency array natural?

```text
Yes / No

Reason:
...
```

---

# 📝 Chapter 5 Assignment

Assignment focused রাখা হয়েছে যাতে Day 5 একই দিনে complete করা যায়।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Frequency কী?

2. Frequency Array কী?

3. freq[arr[i]]++ কীভাবে কাজ করে?

4. Single Counter এবং Frequency Array-এর difference কী?

5. Frequency Array initialize করা কেন জরুরি?

6. Value Range check করা কেন দরকার?

7. Frequency Query কীভাবে fast হয়?

8. Preprocessing কী?

9. Frequency Array original order preserve করে কি?

10. Huge value range-এ direct frequency array কেন problematic?
```

---

## Part B — Mandatory Coding

```text
1. Print Frequency of Every Present Value

2. Answer Multiple Frequency Queries

3. Count Distinct Values

4. Find Most Frequent Value

5. Lowercase Character Frequency
```

---

## Part C — Dry Run

Array:

```text
3 1 3 2 1 3
```

এই table fill করবে:

| Step | Current Value | Updated Frequency |
| ---: | ------------: | ----------------- |
|    1 |             3 | `freq[3] = ?`     |
|    2 |             1 | `freq[1] = ?`     |
|    3 |             3 | `freq[3] = ?`     |
|    4 |             2 | `freq[2] = ?`     |
|    5 |             1 | `freq[1] = ?`     |
|    6 |             3 | `freq[3] = ?`     |

তারপর final লিখবে:

```text
freq[1] = ?

freq[2] = ?

freq[3] = ?
```

---

## Part D — Debugging Exercise

এই code-এ problem খুঁজে বের করো:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[100];

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    for (int i = 0; i <= 100; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d %d\n", i, freq[i]);
        }
    }

    return 0;
}
```

ধরো constraint:

```text
0 ≤ x ≤ 100
```

Find:

```text
Problem 1:
Frequency Array Size:

Problem 2:
Initialization:

Problem 3:
Valid Index Range:

Correct Declaration:
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Frequency
Frequency Array
Frequency Table
Direct Lookup
Preprocessing
Value Range
Offset
Character Mapping
Distinct Value
Most Frequent Value
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 📚 Pattern Library Update

`core_pattern.md`-এ add করবে:

````md
## Frequency Counting Pattern

### Recognition

Use when a problem asks:

- How many times each value appears
- Count occurrences of many values
- Multiple frequency queries
- Distinct value count
- Most frequent value

### Core Pattern

```c
int freq[MAX_VALUE + 1] = {0};

for (int i = 0; i < n; i++)
{
    freq[arr[i]]++;
}
````

### Mental Model

```text
Value
↓
Use as Index
↓
Increment Counter
↓
Frequency Table
```

### Important Condition

```text
Value Range Must Be Manageable
```

### Common Uses

```text
Frequency Query
Distinct Count
Most Frequent Value
Character Frequency
```

````

---

# 🔥 Chapter 5 Key Lesson

এই Chapter-এর সবচেয়ে গুরুত্বপূর্ণ line:

```c
freq[arr[i]]++;
````

কিন্তু line মুখস্থ করাই goal না।

Mental model:

```text
I Need Count for Many Values
        ↓
One Counter Is Not Enough
        ↓
Need One Counter Per Value
        ↓
Use Array of Counters
        ↓
Value Becomes Index
        ↓
Increment That Counter
```

আর algorithm selection-এর আগে:

```text
Can Values Safely Become Array Indices?
        ↓
Is the Range Small Enough?
```

এই দুইটি প্রশ্ন করবে।

---

# 🔗 Previous Pattern Connection

এখন পর্যন্ত pattern evolution:

```text
Day 2

Counting Pattern
↓
One Condition
↓
One Counter
```

এখন:

```text
Day 5

Frequency Counting
↓
Many Possible Values
↓
Many Counters
↓
freq[]
```

আর pattern combination:

```text
Frequency
+
Counter
→ Distinct Count
```

```text
Frequency
+
Maximum Tracking
→ Most Frequent Value
```

```text
String Traversal
+
Character Mapping
+
Frequency
→ Character Count
```

```text
Frequency Preprocessing
+
Direct Lookup
→ Fast Queries
```

এটাই CP-এর বড় skill:

> নতুন algorithm মানেই সবসময় সম্পূর্ণ নতুন logic না। অনেক সময় পুরোনো ছোট pattern একসঙ্গে combine হয়।

---

# ✅ Chapter 5 Completion Checklist

```text
[ ] Frequency কী বুঝি

[ ] Frequency Array-এর mental model বুঝি

[ ] freq[arr[i]]++ explain করতে পারি

[ ] Single Counter এবং Frequency Array-এর difference বুঝি

[ ] Frequency Array zero initialize করতে পারি

[ ] Value Range দেখে array size determine করতে পারি

[ ] MAX_VALUE + 1 rule বুঝি

[ ] Input-এর সময় direct counting করতে পারি

[ ] Original array কখন store করতে হবে বুঝি

[ ] Frequency Query answer করতে পারি

[ ] Preprocessing-এর basic idea বুঝি

[ ] Distinct Count করতে পারি

[ ] Most Frequent Value বের করতে পারি

[ ] Tie-breaking সম্পর্কে সচেতন

[ ] Negative index problem বুঝি

[ ] Offset technique-এর basic idea জানি

[ ] Huge range-এ direct frequency array avoid করতে জানি

[ ] Character Frequency করতে পারি

[ ] str[i] - 'a' mapping বুঝি

[ ] Frequency Array এবং Sorting approach compare করতে পারি

[ ] Original order frequency table preserve করে না বুঝি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি

[ ] Glossary update করেছি

[ ] Pattern Library update করেছি
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
├── ✅ Chapter 5 — Frequency Counting Pattern
│
├── ⬜ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

# 🏁 Chapter 5 Final Position

এখন তোমার কাছে একই ধরনের data problem-এর জন্য দুইটি আলাদা mental tool আছে:

```text
Need Order
↓
Sorting
```

এবং:

```text
Need Count Per Value
↓
Frequency Counting
```

সবচেয়ে গুরুত্বপূর্ণ decision skill:

```text
Problem
   │
   ├── Need Ordered Relationship?
   │       ↓
   │     Sorting
   │
   └── Need Count Information?
           ↓
      Small Value Range?
           ↓
      Frequency Array
```

পরবর্তী **Day 5 — Chapter 6: Sorted Array & Frequency Problems**-এ এই দুইটি idea একসঙ্গে compare এবং apply করা হবে:

```text
Same Problem
↓
Can Sorting Solve It?
↓
Can Frequency Solve It?
↓
Which Representation Makes the Problem Easier?
```

সেখানে focus থাকবে **duplicate detection, distinct count, repeated values, mode/frequency reasoning এবং sorted grouping**-এর উপর।

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 6 — Sorted Array & Frequency Problems

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** একই problem-কে **Sorting View** এবং **Frequency View**—দুইভাবে দেখতে শেখা, এবং constraint দেখে কোন approach বেশি natural সেটা চিনতে শেখা।
> **Estimated Time:** 60–75 minutes

---

# 🎯 Chapter Mission

Day 5-এ এখন পর্যন্ত তুমি শিখেছ:

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
qsort()
        ↓
Chapter 5
Frequency Counting
```

এখন পর্যন্ত তোমার কাছে দুইটি powerful representation আছে:

```text
Raw Array
   │
   ├── Sort It
   │      ↓
   │   Similar Values Become Neighbors
   │
   └── Build Frequency Table
          ↓
       Count Stored Directly
```

Chapter 6-এর মূল প্রশ্ন:

> **একই problem Sorting দিয়েও solve করা যায়, Frequency Array দিয়েও solve করা যায়—তাহলে কোনটা ব্যবহার করব?**

এই Chapter শেষে তোমার mental model হবে:

```text
Problem
   ↓
What Information Do I Need?
   ↓
Need Order or Grouping?
   │
   ├── Yes → Sorting View
   │
   └── Need Direct Count?
             ↓
       Small Value Range?
             ↓
       Frequency View
```

---

# 1. Representation কী?

একই data-কে differentভাবে organize করলে problem সহজ হয়ে যেতে পারে।

ধরো:

```text
5 2 5 3 2 8 5
```

এটা Raw Array।

---

## Sorted Representation

Sort করলে:

```text
2 2 3 5 5 5 8
```

এখন দেখা যাচ্ছে:

```text
2 2 | 3 | 5 5 5 | 8
```

Similar values একসঙ্গে group হয়েছে।

---

## Frequency Representation

একই data:

```text
2 → 2 times
3 → 1 time
5 → 3 times
8 → 1 time
```

দুই representation একই information-এর different view।

```text
Sorted View
→ Values become grouped
```

```text
Frequency View
→ Counts become explicit
```

এটাই Chapter 6-এর foundation।

---

# 2. Sorting কী পরিবর্তন করে?

ধরো:

```text
8 2 5 2 8 3
```

Raw Array:

```text
8 2 5 2 8 3
```

এখানে duplicate values দূরে দূরে আছে।

Sort:

```text
2 2 3 5 8 8
```

এখন:

```text
2 2
↑ ↑
Neighbors
```

এবং:

```text
8 8
↑ ↑
Neighbors
```

Sorting-এর important effect:

```text
Equal Values
Scattered Across Array
        ↓
      Sorting
        ↓
Equal Values Become Consecutive
```

এই কারণে sorting-এর পরে অনেক problem reduce হয়ে যায়:

```text
Full Array Relationship
        ↓
Adjacent Relationship
```

এটা খুব গুরুত্বপূর্ণ CP idea।

---

# 3. Sorted Group কী?

Sorted Array:

```text
1 1 1 3 4 4 7 7 7 7
```

এখানে groups:

```text
1 1 1 | 3 | 4 4 | 7 7 7 7
```

প্রতিটি group:

```text
Same Value
+
Consecutive Positions
```

Group Information:

| Value | Group Size |
| ----: | ---------: |
|     1 |          3 |
|     3 |          1 |
|     4 |          2 |
|     7 |          4 |

এটাই frequency information।

অর্থাৎ:

```text
Sorted Groups
        ↓
Can Reveal Frequency
```

এবং:

```text
Frequency Table
        ↓
Stores Group Sizes Directly
```

---

# 4. Problem 1 — Duplicate Detection

Problem:

> Array-তে কোনো duplicate value আছে কি না?

Array:

```text
5 2 8 3 2
```

Answer:

```text
Yes
```

কারণ:

```text
2 appears more than once
```

এটা দুইভাবে solve করা যায়।

---

# 5. Duplicate Detection — Sorting Approach

Original:

```text
5 2 8 3 2
```

Sort:

```text
2 2 3 5 8
```

এখন শুধু neighbor compare:

```text
2 == 2
↓
Duplicate Found
```

Mental Pattern:

```text
Raw Array
↓
Sort
↓
Equal Values Become Adjacent
↓
Traverse Neighbors
↓
arr[i] == arr[i - 1]?
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

    qsort(arr, n, sizeof(arr[0]), compareAscending);

    int duplicateFound = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            duplicateFound = 1;
            break;
        }
    }

    if (duplicateFound)
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

Pattern Combination:

```text
Sorting
+
Adjacent Comparison
+
Flag
+
Early Exit
```

---

# 6. Duplicate Detection — Frequency Approach

Same Array:

```text
5 2 8 3 2
```

Build frequency:

```text
2 → 2
3 → 1
5 → 1
8 → 1
```

Duplicate condition:

```text
Any Frequency > 1
```

Mental Pattern:

```text
Build Frequency
↓
Any freq[value] > 1?
↓
Duplicate Found
```

Code:

```c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        freq[x]++;
    }

    int duplicateFound = 0;

    for (int value = 0; value <= 100; value++)
    {
        if (freq[value] > 1)
        {
            duplicateFound = 1;
            break;
        }
    }

    if (duplicateFound)
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

Pattern Combination:

```text
Frequency Counting
+
Frequency Traversal
+
Condition Check
+
Flag
```

---

# 7. Even Better Frequency Duplicate Detection

যদি শুধু জানতে চাই:

> Duplicate আছে কি না?

তাহলে input নেওয়ার সময়ই check করা যায়।

```c
int duplicateFound = 0;

for (int i = 0; i < n; i++)
{
    int x;

    scanf("%d", &x);

    freq[x]++;

    if (freq[x] > 1)
    {
        duplicateFound = 1;
    }
}
```

Mental Model:

```text
Read x
↓
Increase freq[x]
↓
Did Count Become Greater Than 1?
↓
Yes
↓
Duplicate Exists
```

আরও precise version:

```c
if (freq[x] == 1)
{
    duplicateFound = 1;
}

freq[x]++;
```

এখানে current value আগে থেকেই একবার থাকলে duplicate পাওয়া গেছে।

তবে beginner-friendly version:

```c
freq[x]++;

if (freq[x] > 1)
{
    duplicateFound = 1;
}
```

বোঝা সহজ।

---

# 8. Sorting vs Frequency for Duplicate Detection

| Question                  | Sorting                           | Frequency                  |
| ------------------------- | --------------------------------- | -------------------------- |
| কী করি?                     | Sort + Adjacent Compare           | Count Values               |
| Extra range dependency    | No direct small-range requirement | Small range helpful        |
| Original order preserved? | No                                | Count table-এ order থাকে না   |
| Huge values               | Possible                          | Direct array problematic   |
| Small bounded values      | Works                             | Very natural               |
| Main observation          | Equal values become neighbors     | Repetition means count > 1 |

Decision:

```text
Values:
0 to 100
↓
Frequency is Natural
```

```text
Values:
Large or Wide Range
↓
Sorting May Be More Natural
```

---

# 9. Problem 2 — Count Distinct Values

Problem:

> Array-তে কতটি different value আছে?

Array:

```text
5 2 5 3 2 8
```

Distinct values:

```text
2
3
5
8
```

Answer:

```text
4
```

এটাও দুইভাবে solve করা যায়।

---

# 10. Distinct Count — Sorting Approach

Sort:

```text
2 2 3 5 5 8
```

Observe:

```text
2 2 | 3 | 5 5 | 8
```

প্রথম value:

```text
2
```

একটি distinct group।

তাই:

```c
int distinct = 1;
```

তারপর:

```text
Current != Previous
↓
New Group
↓
distinct++
```

Code:

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

Mental Pattern:

```text
Sort
↓
First Group Exists
↓
Traverse from Index 1
↓
Current Different from Previous?
↓
New Group
↓
Count++
```

---

# 11. Distinct Count Dry Run

Sorted Array:

```text
2 2 3 5 5 8
```

Initially:

```text
distinct = 1
```

Now:

### Index 1

```text
2 != 2?
No
```

```text
distinct = 1
```

### Index 2

```text
3 != 2?
Yes
```

```text
distinct = 2
```

### Index 3

```text
5 != 3?
Yes
```

```text
distinct = 3
```

### Index 4

```text
5 != 5?
No
```

```text
distinct = 3
```

### Index 5

```text
8 != 5?
Yes
```

```text
distinct = 4
```

Final:

```text
4
```

---

# 12. Distinct Count — Frequency Approach

Build:

```text
2 → 2
3 → 1
5 → 2
8 → 1
```

Distinct condition:

```text
freq[value] > 0
```

Code:

```c
int distinct = 0;

for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > 0)
    {
        distinct++;
    }
}
```

Mental Pattern:

```text
Build Frequency
↓
Traverse Possible Values
↓
Present?
↓
freq[value] > 0
↓
distinct++
```

---

# 13. Important Difference: `> 0` vs `> 1`

এই দুই condition confuse করবে না।

## Present Value

```c
freq[value] > 0
```

Meaning:

```text
Value exists in the input
```

Useful for:

```text
Distinct Count
```

---

## Repeated Value

```c
freq[value] > 1
```

Meaning:

```text
Value appears multiple times
```

Useful for:

```text
Duplicate Detection
Repeated Value Count
```

Mental Table:

| Condition      | Meaning      |
| -------------- | ------------ |
| `freq[x] == 0` | Absent       |
| `freq[x] == 1` | Appears once |
| `freq[x] > 1`  | Repeated     |
| `freq[x] > 0`  | Present      |

এই table খুব important।

---

# 14. Problem 3 — Count Repeated Values

Array:

```text
1 1 2 3 3 3 5
```

Question:

> কয়টি different value repeat করেছে?

Frequency:

```text
1 → 2
2 → 1
3 → 3
5 → 1
```

Repeated values:

```text
1
3
```

Answer:

```text
2
```

Frequency solution:

```c
int repeatedValues = 0;

for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > 1)
    {
        repeatedValues++;
    }
}
```

Notice:

এখানে answer `3` না।

কারণ repeated values:

```text
1 and 3
```

মোট:

```text
2 different repeated values
```

---

# 15. খুব গুরুত্বপূর্ণ — Repeated Values vs Extra Duplicates

Array:

```text
1 1 2 3 3 3 5
```

Frequency:

```text
1 → 2
3 → 3
```

দুই ধরনের question হতে পারে।

---

## Question A

> কয়টি distinct value repeat করেছে?

Answer:

```text
2
```

কারণ:

```text
1
3
```

Code:

```c
if (freq[value] > 1)
{
    repeatedValues++;
}
```

---

## Question B

> সব duplicate copies মিলিয়ে extra element কয়টি?

For `1`:

```text
1 1
```

একটি original ধরে:

```text
Extra = 1
```

For `3`:

```text
3 3 3
```

একটি original ধরে:

```text
Extra = 2
```

Total:

```text
1 + 2 = 3
```

Formula:

```text
If Frequency = f

Extra Copies = f - 1
```

Code:

```c
int extraDuplicates = 0;

for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > 1)
    {
        extraDuplicates += freq[value] - 1;
    }
}
```

এটা problem statement carefully পড়ার একটি example।

```text
How many repeated values?
```

এবং:

```text
How many duplicate elements?
```

একই question নাও হতে পারে।

---

# 16. Problem 4 — Most Frequent Value / Mode

Array:

```text
2 5 2 3 5 2 8
```

Frequency:

```text
2 → 3
3 → 1
5 → 2
8 → 1
```

Most frequent:

```text
2
```

Frequency:

```text
3
```

এটাকে অনেক context-এ বলা হয়:

```text
Mode
```

Mental Pattern:

```text
Build Frequency
↓
Traverse Frequencies
↓
Maximum Frequency Tracking
↓
Remember Corresponding Value
```

Variables:

```c
int bestValue = 0;
int bestFrequency = 0;
```

Core:

```c
for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > bestFrequency)
    {
        bestFrequency = freq[value];
        bestValue = value;
    }
}
```

---

# 17. Mode Dry Run

Frequency Table:

```text
Value:  0 1 2 3 4 5 6 7 8
Freq :  0 0 3 1 0 2 0 0 1
```

Initially:

```text
bestFrequency = 0
bestValue = 0
```

At value `2`:

```text
freq[2] = 3
```

Check:

```text
3 > 0?
Yes
```

Update:

```text
bestFrequency = 3
bestValue = 2
```

At value `3`:

```text
1 > 3?
No
```

At value `5`:

```text
2 > 3?
No
```

Final:

```text
bestValue = 2
bestFrequency = 3
```

Pattern:

```text
Frequency
+
Maximum Tracking
+
Candidate Value
```

---

# 18. Mode Using Sorted Array

Frequency Array ছাড়া sorted grouping দিয়েও mode বের করা যায়।

Array:

```text
5 2 5 3 2 5
```

Sort:

```text
2 2 | 3 | 5 5 5
```

Group sizes:

```text
2 → Group Size 2

3 → Group Size 1

5 → Group Size 3
```

Largest group:

```text
5 5 5
```

Mode:

```text
5
```

Mental Model:

```text
Sort
↓
Equal Values Form Groups
↓
Count Current Group Length
↓
Track Largest Group
↓
Mode
```

এটা frequency approach-এর চেয়ে একটু বেশি complex।

তবে huge value range হলে useful হতে পারে।

---

# 19. Sorted Group Counting Pattern

Sorted Array:

```text
1 1 1 3 4 4 7 7 7 7
```

আমরা group count করতে চাই।

State:

```c
int currentCount = 1;
```

Traversal:

```c
for (int i = 1; i < n; i++)
{
    if (arr[i] == arr[i - 1])
    {
        currentCount++;
    }
    else
    {
        currentCount = 1;
    }
}
```

কিন্তু mode বের করতে আরও state দরকার:

```text
currentCount
→ Current Group Size

bestCount
→ Largest Group Size

bestValue
→ Value of Largest Group
```

Pattern:

```text
Sorted Traversal
+
Current Group Tracking
+
Maximum Tracking
+
Candidate Value
```

---

# 20. Mode Using Sorted Array — Code

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

    qsort(arr, n, sizeof(arr[0]), compareAscending);

    int currentCount = 1;
    int bestCount = 1;
    int bestValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            currentCount++;
        }
        else
        {
            currentCount = 1;
        }

        if (currentCount > bestCount)
        {
            bestCount = currentCount;
            bestValue = arr[i];
        }
    }

    printf("Value: %d\n", bestValue);
    printf("Frequency: %d\n", bestCount);

    return 0;
}
```

এই code-এর জন্য ধরে নিচ্ছি:

```text
n ≥ 1
```

---

# 21. Group State বুঝি

Sorted Array:

```text
2 2 3 5 5 5 8
```

Traversal:

### Start

```text
currentCount = 1
bestCount = 1
bestValue = 2
```

---

### Second `2`

```text
2 == 2
↓
currentCount = 2
```

এখন:

```text
2 > 1
```

তাই:

```text
bestCount = 2
bestValue = 2
```

---

### `3`

```text
3 != 2
↓
New Group
↓
currentCount = 1
```

---

### First `5`

```text
5 != 3
↓
currentCount = 1
```

---

### Second `5`

```text
5 == 5
↓
currentCount = 2
```

---

### Third `5`

```text
5 == 5
↓
currentCount = 3
```

এখন:

```text
3 > bestCount
```

Update:

```text
bestCount = 3
bestValue = 5
```

Final:

```text
Mode = 5
Frequency = 3
```

---

# 22. Group Boundary কী?

Sorted Array:

```text
1 1 1 3 4 4 7 7
```

Group boundary হলো যেখানে value change হয়।

```text
1 1 1 | 3 | 4 4 | 7 7
      ↑   ↑     ↑
   Boundary
```

Code condition:

```c
arr[i] != arr[i - 1]
```

Meaning:

```text
Previous Group Ended
↓
New Group Started
```

এই observation future problem solving-এ useful হবে।

Mental Rule:

```text
Sorted Array
+
Current != Previous
=
New Group Boundary
```

---

# 23. Problem 5 — Print Each Value with Frequency

Input:

```text
5 2 5 3 2 5
```

Expected:

```text
2 2
3 1
5 3
```

এটা দুইভাবে করা যায়।

---

## Frequency Approach

```c
for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > 0)
    {
        printf("%d %d\n",
               value,
               freq[value]);
    }
}
```

Simple।

---

## Sorted Group Approach

Sorted:

```text
2 2 3 5 5 5
```

Need:

```text
2 → Count Group
3 → Count Group
5 → Count Group
```

একটি straightforward method:

```c
int count = 1;

for (int i = 1; i <= n; i++)
{
    if (i < n && arr[i] == arr[i - 1])
    {
        count++;
    }
    else
    {
        printf("%d %d\n", arr[i - 1], count);

        count = 1;
    }
}
```

এখানে loop:

```c
i <= n
```

পর্যন্ত গেছে যাতে last group print হয়।

এই pattern একটু tricky।

তাই এখন frequency range ছোট হলে frequency approach বেশি beginner-friendly।

---

# 24. Last Group Problem

ধরো sorted array:

```text
2 2 3 5 5 5
```

যদি শুধু value change হলে group print করো:

```text
2 group ends
→ Print

3 group ends
→ Print
```

কিন্তু last group:

```text
5 5 5
```

এর পরে নতুন value নেই।

তাই last group miss হতে পারে।

এটা sorted group processing-এর common bug।

Mental Question:

```text
What Happens to the Final Group?
```

এই question সব group-processing problem-এ করবে।

Possible solution:

```text
Process During Traversal
+
Handle Final Group After Loop
```

অথবা carefully designed loop condition।

---

# 25. Beginner-Friendly Sorted Frequency Printing

এই version বুঝতে সহজ:

```c
int count = 1;

for (int i = 1; i < n; i++)
{
    if (arr[i] == arr[i - 1])
    {
        count++;
    }
    else
    {
        printf("%d %d\n", arr[i - 1], count);

        count = 1;
    }
}

printf("%d %d\n", arr[n - 1], count);
```

Mental Flow:

```text
Same Value?
↓
Increase Current Group Count
```

```text
Different Value?
↓
Previous Group Complete
↓
Print Previous Group
↓
Reset Count
```

After loop:

```text
Print Final Group
```

---

# 26. Problem 6 — Values Appearing Exactly K Times

Problem:

> কয়টি value exactly `k` times এসেছে?

Array:

```text
1 1 2 3 3 4 4 4
```

Suppose:

```text
k = 2
```

Frequency:

```text
1 → 2
2 → 1
3 → 2
4 → 3
```

Exactly twice:

```text
1
3
```

Answer:

```text
2
```

Frequency Pattern:

```c
int answer = 0;

for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] == k)
    {
        answer++;
    }
}
```

Mental Pattern:

```text
Build Frequency
↓
Traverse Frequency Table
↓
freq[value] == k?
↓
Count++
```

---

# 27. Frequency Condition Family

একটি frequency table থেকে অনেক problem solve করা যায়।

```text
freq[x] == 0
→ Absent
```

```text
freq[x] == 1
→ Unique / Appears Once
```

```text
freq[x] > 1
→ Repeated
```

```text
freq[x] == k
→ Appears Exactly K Times
```

```text
freq[x] >= k
→ Appears At Least K Times
```

```text
freq[x] % 2 == 0
→ Even Frequency
```

```text
freq[x] % 2 != 0
→ Odd Frequency
```

এখানে বড় lesson:

```text
Build Frequency Once
↓
Different Conditions
↓
Different Problems
```

---

# 28. Problem 7 — Count Values Appearing Once

Array:

```text
1 1 2 3 3 4 5 5
```

Frequency:

```text
1 → 2
2 → 1
3 → 2
4 → 1
5 → 2
```

Appear exactly once:

```text
2
4
```

Answer:

```text
2
```

Code:

```c
int uniqueCount = 0;

for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] == 1)
    {
        uniqueCount++;
    }
}
```

Be careful with terminology।

কিছু problem-এ:

```text
Unique Value
```

মানে distinct value বোঝাতে পারে।

অন্য problem-এ:

```text
Appears Exactly Once
```

বোঝাতে পারে।

তাই problem statement carefully পড়বে।

---

# 29. Problem 8 — First Repeated Value

এখানে interesting difference আছে।

Array:

```text
5 2 3 2 5
```

Question:

> প্রথম repeated value কোনটি?

এই question ambiguous হতে পারে।

---

## Meaning A — First Value Whose Second Occurrence Appears

Traversal:

```text
5
→ First time

2
→ First time

3
→ First time

2
→ Seen Before
```

Answer:

```text
2
```

এখানে frequency table traversal:

```text
0 → MAX
```

করলে answer বের হবে না।

কারণ সেটা value order দেখে, original occurrence order না।

Correct mental pattern:

```text
Traverse Original Array
↓
Seen Before?
↓
Yes → First Repeat Event
```

Code idea:

```c
int freq[101] = {0};

for (int i = 0; i < n; i++)
{
    int x = arr[i];

    if (freq[x] > 0)
    {
        printf("%d\n", x);
        break;
    }

    freq[x]++;
}
```

এখানে important combination:

```text
Original Order Traversal
+
Frequency / Seen Table
+
Early Exit
```

---

# 30. Frequency Table Traversal vs Original Array Traversal

এই distinction খুব গুরুত্বপূর্ণ।

## Frequency Table Traversal

```c
for (int value = 0; value <= MAX; value++)
```

Order:

```text
Value Order
```

Example:

```text
0, 1, 2, 3, 4, ...
```

---

## Original Array Traversal

```c
for (int i = 0; i < n; i++)
```

Order:

```text
Input Order
```

Example:

```text
5, 2, 3, 2, 5
```

তাই:

```text
Need Smallest Value?
→ Frequency Table Traversal can help
```

```text
Need First by Input Order?
→ Traverse Original Array
```

এই distinction future contest problem-এ খুব useful।

---

# 31. Problem 9 — Smallest Repeated Value

Array:

```text
8 5 8 3 5 2
```

Repeated:

```text
5
8
```

Smallest repeated:

```text
5
```

Frequency approach:

```text
Build Frequency
↓
Traverse Values from Small to Large
↓
First freq[value] > 1
↓
Answer
```

Code:

```c
for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > 1)
    {
        printf("%d\n", value);
        break;
    }
}
```

এখানে frequency array-এর index order advantage দিচ্ছে।

Mental Pattern:

```text
Frequency Array
+
Ascending Value Traversal
+
Condition
+
Early Exit
```

---

# 32. Largest Repeated Value

Same frequency table।

Largest repeated value চাইলে:

```c
for (int value = MAX_VALUE; value >= 0; value--)
{
    if (freq[value] > 1)
    {
        printf("%d\n", value);
        break;
    }
}
```

Mental Observation:

```text
Frequency Array Index
Represents Value
```

তাই traversal direction change করে:

```text
Smallest Matching Value
or
Largest Matching Value
```

বের করা যায়।

---

# 33. Sorting Approach-এর Advantage

Sorting useful যখন:

```text
Values are large
```

Example:

```text
1000000000
-500000000
999999999
1000000000
```

Direct frequency array natural না।

কিন্তু sort করলে:

```text
-500000000
999999999
1000000000
1000000000
```

এখন duplicate detection সহজ:

```text
Adjacent Equal
```

Sorting আরও useful যখন problem asks:

```text
Minimum Difference

Closest Pair

Median

Ordered Output

Neighbor Relationship

Group Processing
```

Mental Rule:

```text
Need Relative Order
↓
Sorting Often Helps
```

---

# 34. Frequency Approach-এর Advantage

Frequency array useful যখন:

```text
Value Range Small
+
Need Count Information
```

Example:

```text
0 ≤ arr[i] ≤ 1000
```

এবং queries:

```text
How many 7?

How many 15?

How many 500?
```

Frequency approach:

```text
Build Once
↓
Direct Lookup
```

Useful for:

```text
Count Queries

Distinct Count

Mode

Repeated Values

Exactly K Occurrences

Smallest Repeated Value

Character Frequency
```

Mental Rule:

```text
Need Count Per Value
+
Range Manageable
↓
Frequency Array
```

---

# 35. Sorting vs Frequency Decision Table

| Problem Feature         |                 Sorting |                         Frequency Array |
| ----------------------- | ----------------------: | --------------------------------------: |
| Need sorted order       |                       ✅ |                                       ❌ |
| Small value range       |                Possible |                                       ✅ |
| Huge value range        |                       ✅ |                               Usually ❌ |
| Negative values         |               ✅ Natural |                    Needs mapping/offset |
| Many count queries      | Possible but not direct |                                       ✅ |
| Duplicate detection     |                       ✅ |                                       ✅ |
| Distinct count          |                       ✅ |                                       ✅ |
| Mode                    |              ✅ Grouping |                                ✅ Direct |
| Minimum difference      |                       ✅ |                 Usually Sorting Natural |
| Original order question |  Sorting destroys order | Frequency + original traversal may help |

---

# 36. Same Problem, Different Representation

Problem:

> Count distinct values.

Raw:

```text
7 2 7 5 2 9
```

---

## Sorting View

```text
2 2 5 7 7 9
```

Think:

```text
How Many Groups?
```

---

## Frequency View

```text
2 → 2
5 → 1
7 → 2
9 → 1
```

Think:

```text
How Many Positive Frequencies?
```

Same answer।

Different mental questions:

```text
Sorting View
→ How many groups?
```

```text
Frequency View
→ How many present values?
```

এটাই representation thinking।

---

# 37. Problem Transformation Skill

Beginner often sees:

> Count distinct values.

এবং immediately code লেখা শুরু করে।

Professional habit:

```text
Problem Statement
↓
What Does the Answer Mean?
↓
Can I Transform the Data?
↓
Which Representation Makes the Answer Obvious?
```

Distinct count example:

```text
Raw Array
↓
Hard to See Groups
```

Option 1:

```text
Sort
↓
Count Boundaries
```

Option 2:

```text
Frequency
↓
Count Positive Entries
```

এই transformation skill CP-তে খুব important।

---

# 38. Common Bug — Sorting করে Original Order Question Solve করা

Problem:

> First repeated value by traversal order.

Array:

```text
8 5 3 5 8
```

Original traversal:

```text
8
5
3
5 ← First repeat event
```

Answer:

```text
5
```

Sort করলে:

```text
3 5 5 8 8
```

এখানে first adjacent duplicate:

```text
5
```

এই example-এ accidentally same answer।

কিন্তু:

```text
8 8 3 3 1
```

Original first repeat event:

```text
8
```

Sort:

```text
1 3 3 8 8
```

First adjacent duplicate:

```text
3
```

Wrong answer।

Lesson:

```text
Sorting Changes Original Order
```

তাই question যদি original order depend করে:

```text
Be Careful Before Sorting
```

---

# 39. Common Bug — Distinct Count Initialization

Sorted Array:

```text
2 2 3 5
```

Code:

```c
int distinct = 0;

for (int i = 1; i < n; i++)
{
    if (arr[i] != arr[i - 1])
    {
        distinct++;
    }
}
```

Result:

```text
2
```

কিন্তু correct:

```text
3
```

কারণ first group count করা হয়নি।

Correct:

```c
int distinct = 1;
```

যদি:

```text
n >= 1
```

guaranteed হয়।

Otherwise:

```c
int distinct = 0;

if (n > 0)
{
    distinct = 1;

    // traversal
}
```

---

# 40. Common Bug — Frequency Range ভুল

Constraint:

```text
1 ≤ arr[i] ≤ 1000
```

তুমি যদি traverse করো:

```c
for (int value = 0; value < 1000; value++)
```

তাহলে value:

```text
1000
```

miss হবে।

Correct:

```c
for (int value = 0; value <= 1000; value++)
```

অথবা:

```c
for (int value = 1; value <= 1000; value++)
```

depending on valid range।

---

# 41. Common Bug — Frequency Count আর Value Confuse করা

Suppose:

```text
freq[7] = 3
```

Meaning:

```text
Value 7 appears 3 times
```

Most frequent value search-এ compare করবে:

```c
freq[value]
```

not:

```c
value
```

Wrong mental question:

```text
Which Value is Largest?
```

Correct mode question:

```text
Which Frequency is Largest?
```

তারপর corresponding value remember করবে।

---

# 42. Common Bug — Tie Rule Ignore করা

Array:

```text
2 2 5 5 8
```

Most frequent:

```text
2 → 2 times
5 → 2 times
```

Tie আছে।

Problem বলতে পারে:

```text
If tie, print smallest value
```

অথবা:

```text
If tie, print largest value
```

অথবা:

```text
Print first appearing value
```

প্রতিটি rule-এর code আলাদা হতে পারে।

তাই:

```text
Find Maximum Frequency
```

শুধু enough নাও হতে পারে।

Need:

```text
Maximum Frequency
+
Tie-Breaking Rule
```

---

# 43. Tie — Smallest Value

Frequency array low to high traverse করলে:

```c
if (freq[value] > bestFrequency)
```

ব্যবহার করে smallest tied value preserve করা যায়।

কারণ smaller value আগে আসে।

Example:

```text
2 → 3
5 → 3
```

At `2`:

```text
bestValue = 2
```

At `5`:

```text
3 > 3?
No
```

তাই:

```text
bestValue = 2
```

---

# 44. Tie — Largest Value

Option:

```c
if (freq[value] >= bestFrequency)
{
    bestFrequency = freq[value];
    bestValue = value;
}
```

যদি low to high traverse করো, equal frequency-তেও later larger value replace করবে।

তবে এই logic use করার আগে:

```text
Problem Tie Rule
```

confirm করবে।

---

# 45. Pattern Combination Map

এই Chapter-এ আসলে নতুন isolated algorithm-এর চেয়ে বেশি important হলো pattern combination।

## Duplicate Detection

```text
Sorting
+
Adjacent Comparison
+
Flag
+
Early Exit
```

অথবা:

```text
Frequency
+
Condition freq[x] > 1
```

---

## Distinct Count

```text
Sorting
+
Group Boundary
+
Counter
```

অথবা:

```text
Frequency
+
Positive Frequency Check
+
Counter
```

---

## Mode

```text
Frequency
+
Maximum Tracking
+
Candidate Value
```

অথবা:

```text
Sorting
+
Group Count
+
Maximum Tracking
```

---

## First Repeat Event

```text
Original Traversal
+
Seen/Frequency State
+
Early Exit
```

---

# 46. Recognition Signals

Problem statement-এ দেখো:

```text
Duplicate

Distinct

Repeated

Occurrence

Frequency

Exactly K Times

Most Frequent

Least Frequent

Appears Once

Appears More Than Once

Count Each Value

First Repeated

Smallest Repeated
```

তারপর প্রশ্ন করো:

```text
Do I Need Count?
```

```text
Do I Need Order?
```

```text
Is the Value Range Small?
```

```text
Does Original Order Matter?
```

এই চারটি question approach choose করতে সাহায্য করবে।

---

# 🧠 Chapter 6 Master Decision Model

```text
                        PROBLEM
                           │
                           ▼
               What Information Is Needed?
                           │
          ┌────────────────┼────────────────┐
          │                │                │
          ▼                ▼                ▼
        Count            Order        Original Position
          │                │                │
          ▼                ▼                ▼
   Is Range Small?       Sorting      Preserve Original
          │                               Traversal
      ┌───┴───┐
      │       │
     Yes      No
      │       │
      ▼       ▼
 Frequency  Sorting /
  Array     Other Method
      │
      ▼
  Query Frequency
  Distinct Count
  Mode
  Repeated Values
  Exactly K Times
```

---

# 47. Problem Solving Framework

এই Chapter-এর problems solve করার সময়:

## Step 1 — Question Translate করো

Example:

> Count distinct values.

Translate:

```text
How many different values are present?
```

---

## Step 2 — Representation ভাবো

```text
Sorting?
→ Count Groups
```

```text
Frequency?
→ Count Positive Entries
```

---

## Step 3 — Constraint Check

```text
Value Range Small?
```

```text
n Large?
```

```text
Negative Values?
```

```text
Original Order Needed?
```

---

## Step 4 — Pattern Chain লেখো

Example:

```text
Frequency
↓
Traverse Values
↓
freq[value] > 0
↓
Counter++
```

---

## Step 5 — তারপর Code

এটা তোমার Bootcamp-এর core habit:

```text
Problem
↓
Pattern
↓
State
↓
Traversal
↓
Condition
↓
Update
↓
Code
```

---

# 🧪 Chapter 6 Practice

## Task 1 — Duplicate Detection

Input:

```text
7
5 2 8 3 2 9 1
```

Output:

```text
Duplicate Found
```

দুইভাবে করবে:

```text
A. Sorting Approach
B. Frequency Approach
```

---

## Task 2 — Distinct Count

Input:

```text
8
5 2 5 3 2 8 8 1
```

Distinct values:

```text
1
2
3
5
8
```

Output:

```text
5
```

দুইভাবে করবে:

```text
A. Sort + Group Boundary
B. Frequency + Positive Count
```

---

## Task 3 — Count Repeated Values

Input:

```text
9
1 1 2 3 3 3 4 5 5
```

Repeated values:

```text
1
3
5
```

Output:

```text
3
```

Pattern:

```text
Frequency
+
freq[value] > 1
+
Counter
```

---

## Task 4 — Count Extra Duplicate Copies

Same Input:

```text
1 1 2 3 3 3 4 5 5
```

Groups:

```text
1 → 1 extra

3 → 2 extra

5 → 1 extra
```

Output:

```text
4
```

Formula:

```text
freq[value] - 1
```

for every repeated value।

---

## Task 5 — Most Frequent Value

Input:

```text
10
4 2 4 3 2 4 5 2 4 8
```

Frequency:

```text
2 → 3
3 → 1
4 → 4
5 → 1
8 → 1
```

Output:

```text
Value: 4
Frequency: 4
```

---

## Task 6 — Values Appearing Exactly K Times

Input:

```text
8
1 1 2 3 3 4 4 4

2
```

Here:

```text
k = 2
```

Values:

```text
1
3
```

Output:

```text
2
```

---

## Task 7 — First Repeat Event

Input:

```text
7
5 2 8 3 2 5 8
```

Traversal:

```text
5
2
8
3
2 ← Seen Before
```

Output:

```text
2
```

Pattern:

```text
Original Traversal
+
Seen State
+
Early Exit
```

---

# 🧠 Pattern Recognition Drill

## Problem 1

Problem:

> Count distinct values.

Complete:

```text
Sorting Approach
↓
Sort
↓
Count ______
```

And:

```text
Frequency Approach
↓
Build freq[]
↓
Count entries where ______
```

---

## Problem 2

If:

```text
freq[8] = 0
```

Meaning:

```text
...
```

If:

```text
freq[8] = 1
```

Meaning:

```text
...
```

If:

```text
freq[8] = 4
```

Meaning:

```text
...
```

---

## Problem 3

Problem:

> Count values appearing exactly three times.

Condition:

```c
if (________________)
{
    answer++;
}
```

---

## Problem 4

Problem:

> Find first repeated value by original traversal order.

Which traversal?

```text
A. Frequency Table Traversal

B. Original Array Traversal
```

Explain why।

---

## Problem 5

Problem:

> Find smallest repeated value.

Possible chain:

```text
Build Frequency
↓
Traverse Values from ______ to ______
↓
First freq[value] ______
↓
Answer
```

---

## Problem 6

Array values:

```text
-1000000000 to 1000000000
```

Direct frequency array natural?

```text
Yes / No
```

Alternative from current knowledge:

```text
...
```

---

# 📝 Chapter 6 Assignment

এই assignment এমনভাবে রাখা হয়েছে যাতে Chapter-এর main goals cover হয়, কিন্তু Day 5 একদিনেই শেষ করা যায়।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Sorting করলে equal values-এর কী হয়?

2. Sorted Group কী?

3. Group Boundary কী?

4. Duplicate Detection sorting দিয়ে কীভাবে হয়?

5. Duplicate Detection frequency দিয়ে কীভাবে হয়?

6. Distinct Count-এর দুইটি approach কী?

7. freq[value] > 0 এবং freq[value] > 1-এর difference কী?

8. Repeated Value Count এবং Extra Duplicate Count-এর difference কী?

9. Mode কী?

10. Original Order matter করলে sorting কেন dangerous হতে পারে?

11. Frequency Table Traversal এবং Original Array Traversal-এর difference কী?

12. Sorting এবং Frequency Array-এর মধ্যে approach কীভাবে choose করবে?
```

---

## Part B — Mandatory Coding

নিজে করবে:

```text
1. Duplicate Detection — Sorting Version

2. Duplicate Detection — Frequency Version

3. Distinct Count — Sorting Version

4. Distinct Count — Frequency Version

5. Count Repeated Values

6. Find Most Frequent Value

7. Find First Repeat Event
```

---

## Part C — Dry Run

Array:

```text
4 2 4 3 2 4 5
```

### Frequency Table পূরণ করো:

```text
2 → ?

3 → ?

4 → ?

5 → ?
```

তারপর answer:

```text
Distinct Count = ?

Repeated Value Count = ?

Extra Duplicate Copies = ?

Most Frequent Value = ?

Maximum Frequency = ?
```

---

## Part D — Sorting Dry Run

Array:

```text
5 2 5 3 2 8
```

### Step 1

Sorted Array:

```text
____________________
```

### Step 2

Group Representation:

```text
__ __ | __ | __ __ | __
```

### Step 3

Answer:

```text
Number of Groups = ?

Distinct Count = ?

Repeated Groups = ?
```

---

## Part E — Debugging

এই code দেখো:

```c
int distinct = 0;

qsort(arr, n, sizeof(arr[0]), compareAscending);

for (int i = 1; i < n; i++)
{
    if (arr[i] != arr[i - 1])
    {
        distinct++;
    }
}

printf("%d\n", distinct);
```

Question:

```text
Problem:

Why is the first group missing?

Correct Initialization:

What if n = 0?
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Representation
Sorted Group
Group Boundary
Duplicate
Distinct Value
Repeated Value
Extra Duplicate
Mode
Group Size
Tie-Breaking
Original Order
Value Order
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 📚 Pattern Library Update

`core_pattern.md`-এ add করবে:

````md
## Sorted Group Pattern

### Recognition

Use after sorting when equal values need to be processed together.

### Mental Model

```text
Sort
↓
Equal Values Become Adjacent
↓
Traverse
↓
Same as Previous?
├── Yes → Same Group
└── No  → New Group
````

### Core Condition

```c
if (arr[i] != arr[i - 1])
{
    // new group
}
```

### Common Uses

* Distinct Count
* Duplicate Detection
* Group Frequency
* Mode
* Repeated Value Processing

---

## Frequency Condition Pattern

```text
freq[x] == 0
→ Absent

freq[x] == 1
→ Appears Once

freq[x] > 1
→ Repeated

freq[x] == k
→ Appears Exactly K Times

freq[x] > 0
→ Present
```

````

---

# 🔥 Chapter 6 Key Lesson

এই Chapter-এর সবচেয়ে বড় lesson কোনো single code না।

বরং:

```text
Same Problem
Can Look Different
Under Different Representations
````

Example:

```text
Count Distinct Values
```

Sorting View:

```text
Sort
↓
How Many Groups?
```

Frequency View:

```text
Build Frequency
↓
How Many Positive Counts?
```

Duplicate Detection:

Sorting View:

```text
Sort
↓
Any Equal Neighbor?
```

Frequency View:

```text
Any Count > 1?
```

Mode:

Sorting View:

```text
Largest Group
```

Frequency View:

```text
Largest Frequency
```

এই mental flexibility-ই Chapter 6-এর আসল goal।

---

# 🔗 Pattern Evolution

তোমার শেখা patterns এখন connect হচ্ছে:

```text
Day 2
Traversal
+
Counting
+
Maximum Tracking
+
Flag
+
Early Exit
```

তারপর:

```text
Day 5 Chapter 1–4
Sorting
+
Adjacent Relationship
+
Comparator
```

তারপর:

```text
Day 5 Chapter 5
Frequency Counting
+
Preprocessing
+
Direct Lookup
```

এখন Chapter 6:

```text
Sorting
+
Group Boundary
+
Counting
```

```text
Frequency
+
Maximum Tracking
+
Candidate Value
```

```text
Original Traversal
+
Seen State
+
Early Exit
```

এটাই Pattern Combination।

---

# ✅ Chapter 6 Completion Checklist

```text
[ ] Representation কী বুঝি

[ ] Sorting-এর পরে equal values adjacent হয় বুঝি

[ ] Sorted Group বুঝি

[ ] Group Boundary বুঝি

[ ] Duplicate Detection sorting দিয়ে করতে পারি

[ ] Duplicate Detection frequency দিয়ে করতে পারি

[ ] Distinct Count sorting দিয়ে করতে পারি

[ ] Distinct Count frequency দিয়ে করতে পারি

[ ] freq[x] == 0 meaning বুঝি

[ ] freq[x] == 1 meaning বুঝি

[ ] freq[x] > 1 meaning বুঝি

[ ] freq[x] == k condition ব্যবহার করতে পারি

[ ] Repeated Value Count করতে পারি

[ ] Extra Duplicate Count করতে পারি

[ ] Repeated Values এবং Extra Copies-এর difference বুঝি

[ ] Mode বের করতে পারি

[ ] Frequency + Maximum Tracking combine করতে পারি

[ ] Sorted Group Count করতে পারি

[ ] Last Group Problem বুঝি

[ ] Original Order এবং Value Order-এর difference বুঝি

[ ] First Repeat Event বের করতে পারি

[ ] Smallest Repeated Value বের করার logic বুঝি

[ ] Tie-Breaking সম্পর্কে সচেতন

[ ] Sorting কখন natural বুঝি

[ ] Frequency Array কখন natural বুঝি

[ ] Same Problem-এর multiple approach চিন্তা করতে পারি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি

[ ] Glossary update করেছি

[ ] Pattern Library update করেছি
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
├── ✅ Chapter 5 — Frequency Counting Pattern
│
├── ✅ Chapter 6 — Sorted Array & Frequency Problems
│
├── ⬜ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

# 🏁 Chapter 6 Final Position

এখন পর্যন্ত Day 5-এ তোমার problem-solving progression:

```text
Unsorted Data
        ↓
Can Sorting Reveal Structure?
        ↓
Equal Values Become Neighbors
        ↓
Groups and Boundaries
```

অথবা:

```text
Need Count Information
        ↓
Can Values Become Small Array Indices?
        ↓
Frequency Table
        ↓
Direct Count Information
```

সবচেয়ে important decision chain:

```text
Problem
   ↓
Need Original Order?
   │
   ├── Yes
   │    ↓
   │ Preserve Original Traversal
   │
   └── No
        ↓
   Need Ordered Relationship?
        │
        ├── Yes → Sorting
        │
        └── Need Counts?
                 ↓
            Small Range?
                 ↓
             Frequency
```

পরবর্তী **Day 5 — Chapter 7: Pair Thinking Foundation**-এ focus থাকবে:

```text
One Element
+
Another Element
↓
Pair
```

তারপর:

```text
Find Pair with Target Sum
```

```text
Check All Pairs
```

```text
Nested Loop Pair Pattern
```

```text
Duplicate Pair Problems
```

এবং সবচেয়ে গুরুত্বপূর্ণভাবে:

```text
Brute Force Pair Thinking
        ↓
Why O(n²)?
        ↓
How Sorting Changes Pair Problems
        ↓
Foundation for Future Two Pointer
```

Chapter 7-এ এখনই full advanced Two Pointer শেখানো হবে না; আগে **pair problem কীভাবে চিনবে এবং pair generate করার correct loop structure** solid করা হবে।

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 7 — Pair Thinking Foundation

> **Day 5 Theme:** Sorting → Frequency Counting → Sorted Array Thinking → Pair Thinking
> **Chapter Goal:** Pair-based problem চিনতে শেখা, সব unique pair generate করার correct loop pattern বোঝা, `O(n²)` pair search করা এবং sorting কীভাবে future optimization-এর foundation তৈরি করে সেটা বোঝা।
> **Estimated Time:** 60–75 minutes

---

# 🎯 Chapter Mission

Day 5-এ এখন পর্যন্ত:

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
qsort()
        ↓
Chapter 5
Frequency Counting
        ↓
Chapter 6
Sorted Array & Frequency Problems
        ↓
Chapter 7
Pair Thinking Foundation
```

এখন পর্যন্ত আমরা বেশিরভাগ problem-এ একটি element নিয়ে চিন্তা করেছি।

যেমন:

```text
Current Element
↓
Check Condition
↓
Update State
```

Example:

```c
if (arr[i] > maximum)
{
    maximum = arr[i];
}
```

এখানে decision depend করছে:

```text
One Element
```

কিন্তু অনেক problem-এ প্রশ্ন হবে:

```text
Can two elements together satisfy something?
```

যেমন:

```text
Do any two numbers sum to 10?
```

অথবা:

```text
Which two elements have minimum difference?
```

অথবা:

```text
How many pairs have equal values?
```

এখানে চিন্তার unit:

```text
One Element
+
Another Element
=
Pair
```

এই Chapter-এর core mental shift:

```text
Single Element Thinking
        ↓
Pair Thinking
```

---

# 1. Pair কী?

ধরো Array:

```text
2 5 7
```

Elements:

```text
2
5
7
```

Possible pairs:

```text
(2, 5)

(2, 7)

(5, 7)
```

মোট:

```text
3 pairs
```

এখানে:

```text
(2, 5)
```

এবং:

```text
(5, 2)
```

সাধারণ unordered pair problem-এ একই pair হিসেবে ধরা হয়।

অর্থাৎ:

```text
(2, 5) = (5, 2)
```

তাই pair generation-এর সময় duplicate pair generate করা উচিত না।

---

# 2. Index Pair vs Value Pair

এটা শুরুতেই পরিষ্কার করা জরুরি।

Array:

```text
5 5 2
```

Indexes:

```text
Index:  0  1  2
Value:  5  5  2
```

Index pairs:

```text
(0, 1)
(0, 2)
(1, 2)
```

Corresponding value pairs:

```text
(5, 5)
(5, 2)
(5, 2)
```

দেখো:

```text
Value Pair (5, 2)
```

দুইবার এসেছে।

কিন্তু index pairs আলাদা:

```text
(0, 2)

(1, 2)
```

তাই problem statement-এ বুঝতে হবে:

```text
Count Index Pairs?
```

নাকি:

```text
Count Distinct Value Pairs?
```

এগুলো সবসময় একই answer দেয় না।

---

# 3. Pair Problem Recognition

Problem statement-এ এমন signal থাকতে পারে:

```text
two elements

two numbers

pair of elements

find a pair

count pairs

sum of two elements

difference between two elements

equal pair

closest pair
```

Mental Trigger:

```text
Question talks about
Two Elements Together
        ↓
Think Pair Pattern
```

---

# 4. সব Pair কীভাবে Generate করব?

ধরো:

```text
10 20 30 40
```

Indexes:

```text
0 1 2 3
```

Unique index pairs:

```text
(0, 1)
(0, 2)
(0, 3)

(1, 2)
(1, 3)

(2, 3)
```

Notice pattern:

```text
First Index < Second Index
```

অর্থাৎ:

```text
i < j
```

এটাই pair generation-এর foundation।

---

# 5. Pair Generation Loop

Core pattern:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // pair: arr[i], arr[j]
    }
}
```

এই pattern খুব গুরুত্বপূর্ণ।

Mental Model:

```text
Choose First Element
        ↓
Choose Every Element After It
        ↓
Process Pair
```

অর্থাৎ:

```text
i = First Element

j = Second Element
```

এবং:

```text
j starts from i + 1
```

---

# 6. কেন `j = i + 1`?

ধরো:

```text
10 20 30
```

Indexes:

```text
0 1 2
```

যখন:

```text
i = 0
```

তখন:

```text
j = 1
j = 2
```

Pairs:

```text
(0, 1)
(0, 2)
```

যখন:

```text
i = 1
```

তখন:

```text
j = 2
```

Pair:

```text
(1, 2)
```

যখন:

```text
i = 2
```

তখন:

```text
j = 3
```

কিন্তু:

```text
j < n
```

false।

তাই শেষ।

Generated:

```text
(0, 1)
(0, 2)
(1, 2)
```

Exactly all unique pairs।

---

# 7. Pair Generation Dry Run

Array:

```text
4 7 9 2
```

Indexes:

```text
0 1 2 3
```

Code:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        printf("(%d, %d)\n", arr[i], arr[j]);
    }
}
```

Output:

```text
(4, 7)
(4, 9)
(4, 2)

(7, 9)
(7, 2)

(9, 2)
```

Visual Pattern:

```text
4 → pair with 7, 9, 2

7 → pair with 9, 2

9 → pair with 2

2 → nothing left
```

Mental Model:

```text
Each Element
        ↓
Pairs With
        ↓
All Elements After It
```

---

# 8. Wrong Pair Loop — `j = 0`

Suppose:

```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d %d\n", arr[i], arr[j]);
    }
}
```

Array:

```text
2 5 7
```

এটা generate করবে:

```text
(2, 2)
(2, 5)
(2, 7)

(5, 2)
(5, 5)
(5, 7)

(7, 2)
(7, 5)
(7, 7)
```

Problems:

```text
Self Pair:
(2, 2)
(5, 5)
(7, 7)
```

এবং:

```text
Duplicate Direction:
(2, 5)
(5, 2)
```

সাধারণ unordered pair problem-এর জন্য এটা wrong।

Correct:

```c
for (int j = i + 1; j < n; j++)
```

---

# 9. Pair Loop-এর তিনটি Rule

সাধারণ unique unordered index pair-এর জন্য:

```text
Rule 1
i starts from 0
```

```text
Rule 2
j starts from i + 1
```

```text
Rule 3
Both stay below n
```

Code:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // process pair
    }
}
```

এই structure এখন থেকেই চিনে রাখবে।

---

# 10. Pair Sum Problem

Problem:

> Array-তে এমন দুইটি element আছে কি যাদের sum target-এর সমান?

Array:

```text
2 7 4 5
```

Target:

```text
9
```

Possible pairs:

```text
2 + 7 = 9   ← Found

2 + 4 = 6

2 + 5 = 7

7 + 4 = 11

7 + 5 = 12

4 + 5 = 9   ← Found
```

এখানে দুইটি valid index pair আছে:

```text
(2, 7)

(4, 5)
```

Core condition:

```c
arr[i] + arr[j] == target
```

Pattern:

```text
Generate Pair
↓
Calculate Pair Sum
↓
Compare with Target
```

---

# 11. Pair Sum Existence — Brute Force

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

    int target;

    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                found = 1;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (found)
    {
        printf("Pair Found\n");
    }
    else
    {
        printf("Pair Not Found\n");
    }

    return 0;
}
```

Pattern Combination:

```text
Pair Generation
+
Condition Check
+
Flag
+
Early Exit
```

---

# 12. কেন দুই জায়গায় `break`?

Code:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] + arr[j] == target)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        break;
    }
}
```

প্রথম `break`:

```text
Inner Loop
থেকে বের হয়
```

কিন্তু outer loop তখনও চলতে পারে।

তাই:

```c
if (found)
{
    break;
}
```

দিয়ে outer loop-ও stop করছি।

Mental Model:

```text
Nested Loop
↓
Inner break
↓
Only Inner Loop Stops
```

এটা C programming-এর important behavior।

---

# 13. Pair Sum Dry Run

Array:

```text
3 8 4 6
```

Target:

```text
10
```

Start:

```text
i = 0
arr[i] = 3
```

### Pair 1

```text
j = 1
arr[j] = 8

3 + 8 = 11
```

Not match।

### Pair 2

```text
j = 2
arr[j] = 4

3 + 4 = 7
```

Not match।

### Pair 3

```text
j = 3
arr[j] = 6

3 + 6 = 9
```

Not match।

Now:

```text
i = 1
arr[i] = 8
```

### Pair 4

```text
j = 2
arr[j] = 4

8 + 4 = 12
```

Not match।

### Pair 5

```text
j = 3
arr[j] = 6

8 + 6 = 14
```

Not match।

Now:

```text
i = 2
arr[i] = 4
```

### Pair 6

```text
j = 3
arr[j] = 6

4 + 6 = 10
```

Found।

Mental Flow:

```text
Try Pair
↓
Check Sum
↓
Not Match?
Continue
↓
Match?
Stop
```

---

# 14. Print the Pair

শুধু existence না, pair-টাও print করতে চাইলে:

```c
if (arr[i] + arr[j] == target)
{
    printf("%d %d\n", arr[i], arr[j]);

    found = 1;
    break;
}
```

Example:

```text
Input Array:
3 8 4 6

Target:
10
```

Output:

```text
4 6
```

---

# 15. Count All Valid Pairs

এবার question:

> কয়টি index pair-এর sum target-এর সমান?

Array:

```text
1 2 3 4 5
```

Target:

```text
6
```

Valid pairs:

```text
1 + 5 = 6

2 + 4 = 6
```

Answer:

```text
2
```

এখানে first match-এর পর stop করা যাবে না।

Need:

```text
Counter
```

Code:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] + arr[j] == target)
        {
            count++;
        }
    }
}
```

Pattern:

```text
Generate All Pairs
↓
Condition Match?
↓
count++
```

---

# 16. Existence vs Count

এই distinction খুব important।

## Question A

> কোনো valid pair আছে?

State:

```c
int found = 0;
```

Pattern:

```text
Find One
↓
Set Flag
↓
Stop
```

---

## Question B

> মোট কয়টি valid pair আছে?

State:

```c
int count = 0;
```

Pattern:

```text
Check Every Pair
↓
Match?
↓
count++
```

Mental Rule:

```text
Need Existence?
→ Flag + Early Exit
```

```text
Need Total Number?
→ Counter + Full Traversal
```

---

# 17. Important Duplicate Example

Array:

```text
1 1 1 1
```

Target:

```text
2
```

Every pair of indices works।

Index pairs:

```text
(0, 1)
(0, 2)
(0, 3)

(1, 2)
(1, 3)

(2, 3)
```

Answer:

```text
6
```

Even though value pair always:

```text
(1, 1)
```

Index pair count:

```text
6
```

এটাই:

```text
Index Pair
vs
Distinct Value Pair
```

difference।

---

# 18. How Many Total Pairs?

যদি `n` elements থাকে, unique unordered index pairs:

[
\frac{n(n-1)}{2}
]

Example:

```text
n = 4
```

[
\frac{4(4-1)}{2}
================

# \frac{4 \times 3}{2}

6
]

Pairs:

```text
(0,1)
(0,2)
(0,3)
(1,2)
(1,3)
(2,3)
```

Total:

```text
6
```

তোমাকে এখন formula-based combinatorics solve করতে হবে না।

শুধু relationship বুঝো:

```text
Pair Count grows roughly like n²
```

---

# 19. কেন Pair Brute Force `O(n²)`?

Loop:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
    }
}
```

প্রথম element প্রায়:

```text
n - 1
```

pair check করে।

দ্বিতীয়:

```text
n - 2
```

তারপর:

```text
n - 3
```

এভাবে:

```text
(n - 1) + (n - 2) + ... + 1
```

Total:

[
\frac{n(n-1)}{2}
]

Big-O:

[
O(n^2)
]

কারণ dominant growth:

```text
n²
```

Mental Model:

```text
Each Element
↓
Compared with Many Other Elements
↓
Quadratic Work
```

---

# 20. `O(n²)` সবসময় খারাপ?

না।

Constraint দেখতে হবে।

ধরো:

```text
n = 100
```

Approximate pair checks:

[
\frac{100 \times 99}{2}
=======================

4950
]

খুব ছোট।

কিন্তু:

```text
n = 100000
```

Approximate pair count:

[
\frac{100000 \times 99999}{2}
]

প্রায়:

```text
5,000,000,000
```

অর্থাৎ প্রায় 5 billion pair।

এটা সাধারণ contest time limit-এর জন্য practical না।

Lesson:

```text
Brute Force Pair
        ↓
Correct?
        ↓
Yes
        ↓
But Check Constraint
```

---

# 21. Brute Force-এর Value

Brute force শেখা waste না।

কারণ:

```text
Brute Force
↓
Shows Complete Search Space
↓
Shows What Work Is Repeated
↓
Creates Foundation for Optimization
```

Pair Sum example:

```text
Check Every Pair
↓
O(n²)
```

তারপর future-এ তুমি শিখবে:

```text
Sorting
+
Two Pointers
↓
Faster Pair Search
```

কিন্তু optimization বোঝার আগে pair search space বোঝা দরকার।

---

# 22. Problem — Minimum Pair Difference

Array:

```text
8 3 15 6
```

Question:

> দুইটি different element-এর minimum absolute difference কত?

All pairs:

```text
|8 - 3|  = 5

|8 - 15| = 7

|8 - 6|  = 2

|3 - 15| = 12

|3 - 6|  = 3

|15 - 6| = 9
```

Minimum:

```text
2
```

Pair:

```text
(8, 6)
```

Brute Force Pattern:

```text
Generate Every Pair
↓
Calculate Difference
↓
Track Minimum
```

Pattern Combination:

```text
Pair Generation
+
Transformation
+
Minimum Tracking
```

---

# 23. Absolute Difference

Difference:

```text
arr[i] - arr[j]
```

negative হতে পারে।

Example:

```text
3 - 8 = -5
```

কিন্তু distance-like difference চাইলে:

```text
5
```

তাই:

```c
abs(arr[i] - arr[j])
```

এর জন্য:

```c
#include <stdlib.h>
```

Example:

```c
int difference = abs(arr[i] - arr[j]);
```

---

# 24. Minimum Pair Difference — Brute Force Code

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimumDifference = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int difference = abs(arr[i] - arr[j]);

            if (difference < minimumDifference)
            {
                minimumDifference = difference;
            }
        }
    }

    printf("%d\n", minimumDifference);

    return 0;
}
```

Assumption:

```text
n >= 2
```

কারণ minimum pair difference-এর জন্য অন্তত দুইটি element দরকার।

---

# 25. Pair Pattern-এর State চিনো

Pair problem-এ শুধু nested loop দেখলেই হবে না।

Question অনুযায়ী state আলাদা হবে।

## Existence

```c
int found = 0;
```

Role:

```text
Flag
```

---

## Count Pairs

```c
int count = 0;
```

Role:

```text
Counter
```

---

## Minimum Difference

```c
int minimumDifference = INT_MAX;
```

Role:

```text
Minimum Candidate
```

---

## Maximum Pair Sum

```c
int maximumSum = INT_MIN;
```

Role:

```text
Maximum Candidate
```

Core skill:

```text
Pair Generation
+
Correct State
```

---

# 26. Maximum Pair Sum — Brute Force Thinking

Array:

```text
3 8 2 10
```

Question:

> Maximum sum of any pair?

Possible:

```text
3 + 8  = 11
3 + 2  = 5
3 + 10 = 13
8 + 2  = 10
8 + 10 = 18
2 + 10 = 12
```

Answer:

```text
18
```

Pair:

```text
8 and 10
```

Pattern:

```text
Generate Pair
↓
Calculate Pair Sum
↓
Track Maximum
```

Code core:

```c
int maximumSum = INT_MIN;

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        int sum = arr[i] + arr[j];

        if (sum > maximumSum)
        {
            maximumSum = sum;
        }
    }
}
```

---

# 27. Pair Generation vs Adjacent Pair

এই দুইটি confuse করবে না।

## All Pairs

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
    }
}
```

Checks:

```text
Every i < j pair
```

Complexity:

```text
O(n²)
```

---

## Adjacent Pairs Only

```c
for (int i = 1; i < n; i++)
{
    // arr[i - 1], arr[i]
}
```

Checks:

```text
(0,1)
(1,2)
(2,3)
...
```

Complexity:

```text
O(n)
```

Example Array:

```text
5 2 9 1
```

Adjacent pairs:

```text
(5,2)
(2,9)
(9,1)
```

All pairs:

```text
(5,2)
(5,9)
(5,1)
(2,9)
(2,1)
(9,1)
```

এগুলো এক না।

---

# 28. Sorting কেন Pair Problem-এ Powerful?

ধরো:

```text
8 1 6 3
```

Sort:

```text
1 3 6 8
```

এখন values-এর relationship structured।

Example:

```text
Smallest Values
← Left Side
```

```text
Largest Values
→ Right Side
```

এই structure future-এ pair search optimize করতে সাহায্য করবে।

Mental Evolution:

```text
Unsorted Pair Search
↓
Try Every Pair
↓
O(n²)
```

Future:

```text
Sort
↓
Use Order Information
↓
Avoid Useless Pair Checks
```

এটাই future Two Pointer technique-এর foundation।

---

# 29. Pair Sum-এর Sorted View

Array:

```text
8 1 6 3 4
```

Target:

```text
10
```

Sort:

```text
1 3 4 6 8
```

এখন valid pairs:

```text
4 + 6 = 10

2 নেই

1 + 9 নেই

3 + 7 নেই
```

Sorted structure দেখে আমরা future-এ smart movement করতে পারব।

Conceptual idea:

```text
Small Value + Large Value
```

Sum too small হলে:

```text
Need Larger Sum
```

Sum too large হলে:

```text
Need Smaller Sum
```

এই Chapter-এ full Two Pointer implement করা mandatory না।

এখন শুধু বুঝবে:

```text
Sorting
Creates Direction
```

আর:

```text
Direction
Can Reduce Search
```

---

# 30. কেন এখনই Full Two Pointer না?

কারণ তোমাকে আগে solid করতে হবে:

```text
What is a Pair?
```

```text
How are All Pairs Generated?
```

```text
Why Brute Force is O(n²)?
```

```text
What Information Does Sorting Add?
```

এই foundation ছাড়া:

```text
left++
```

বা:

```text
right--
```

মুখস্থ হয়ে যাবে।

আমাদের goal:

```text
Understand Search Space
        ↓
Understand Waste
        ↓
Understand Structure
        ↓
Then Optimize
```

---

# 31. Equal Pair Problem

Problem:

> কতটি index pair `(i, j)` আছে যেখানে:

[
arr[i] = arr[j]
]

Array:

```text
1 2 1 3 1
```

Equal pairs:

```text
Index (0,2)

Index (0,4)

Index (2,4)
```

Answer:

```text
3
```

Brute force:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            count++;
        }
    }
}
```

Pattern:

```text
Generate All Index Pairs
↓
Compare Values
↓
Equal?
↓
count++
```

---

# 32. Frequency Connection to Equal Pairs

ধরো একটি value:

```text
5
```

appears:

```text
3 times
```

Positions:

```text
5₁
5₂
5₃
```

Possible equal index pairs:

```text
(5₁, 5₂)

(5₁, 5₃)

(5₂, 5₃)
```

Total:

```text
3
```

Formula:

[
\frac{f(f-1)}{2}
]

যেখানে:

```text
f = frequency
```

If:

```text
f = 3
```

Then:

[
\frac{3(3-1)}{2}
================

3
]

এই formula এখন optional concept হিসেবে বুঝবে।

Mandatory goal:

```text
Frequency
Can Sometimes Replace Pair-by-Pair Checking
```

---

# 33. Frequency + Pair Thinking Connection

Array:

```text
1 1 1 2 2
```

Frequency:

```text
1 → 3

2 → 2
```

Equal pairs for `1`:

[
\frac{3 \times 2}{2} = 3
]

Equal pairs for `2`:

[
\frac{2 \times 1}{2} = 1
]

Total:

```text
4
```

Brute force would inspect all pairs।

Frequency view says:

```text
Group Size
↓
How Many Internal Pairs?
```

এই connection future combinatorics এবং optimization-এর foundation।

---

# 34. Pair Sum Count with Duplicates

Array:

```text
1 1 2 2
```

Target:

```text
3
```

Valid index pairs:

```text
Index 0 + Index 2

Index 0 + Index 3

Index 1 + Index 2

Index 1 + Index 3
```

Total:

```text
4
```

যদিও distinct value pair:

```text
(1, 2)
```

মাত্র একটি।

আবার distinction:

```text
Index Pair Count = 4
```

```text
Distinct Value Pair Count = 1
```

Problem statement carefully পড়বে।

---

# 35. Common Bug — `j = i`

Wrong:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
    }
}
```

এখানে first generated pair:

```text
(i, i)
```

অর্থাৎ element নিজের সাথেই pair হচ্ছে।

Example:

```text
arr[i] = 5
```

Then:

```text
5 + 5
```

কিন্তু যদি problem দুইটি different indices চায়, এটা invalid।

Correct:

```c
j = i + 1
```

---

# 36. Common Bug — Double Counting

Wrong:

```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i != j)
        {
            // process
        }
    }
}
```

এখানে:

```text
(0,1)
```

এবং:

```text
(1,0)
```

দুটোই count হবে।

Unordered pair problem-এ double counting।

Correct invariant:

```text
i < j
```

Achieved by:

```c
j = i + 1
```

---

# 37. Common Bug — Existence Problem-এ সব Pair Check করা

Suppose first pair-এই answer পাওয়া গেছে।

Question:

```text
Does any valid pair exist?
```

তারপরও পুরো loop চালালে answer ভুল হবে না।

কিন্তু unnecessary work হবে।

Better pattern:

```text
Found?
↓
Stop Search
```

Use:

```text
Flag
+
Early Exit
```

তবে beginner হিসেবে correctness আগে।

তারপর efficiency habit।

---

# 38. Common Bug — Count Problem-এ `break`

Question:

> মোট কয়টি pair valid?

Wrong:

```c
if (arr[i] + arr[j] == target)
{
    count++;
    break;
}
```

এতে একই `i`-এর জন্য পরের valid pairs miss হতে পারে।

Count problem:

```text
Need All Matches
↓
Do Not Stop at First Match
```

Existence problem:

```text
Need One Match
↓
Can Stop
```

---

# 39. Common Bug — Value Pair এবং Index Pair Confusion

Array:

```text
2 2 2
```

Equal index pairs:

```text
(0,1)
(0,2)
(1,2)
```

Count:

```text
3
```

কিন্তু distinct value pair:

```text
(2,2)
```

Count:

```text
1
```

তাই question translate করবে:

```text
What Exactly Am I Counting?
```

Possible answers:

```text
Index Pairs

Value Pairs

Distinct Value Pairs

Occurrences
```

---

# 40. Common Bug — Integer Overflow in Pair Sum

Suppose:

```text
arr[i] = 2000000000
arr[j] = 2000000000
```

Then:

```c
int sum = arr[i] + arr[j];
```

32-bit `int` overflow করতে পারে।

Safer:

```c
long long sum =
    (long long)arr[i] + arr[j];
```

Mental Rule:

```text
Large Values
+
Addition / Multiplication
↓
Think About Overflow
```

এখন সব code-এ `long long` mandatory না।

Constraint দেখে decision নেবে।

---

# 41. Pair Problem Code Derivation

Pair problem দেখলে code মুখস্থ না করে derive করবে।

## Step 1 — Need Two Different Indices

```text
i
j
```

---

## Step 2 — Avoid Self Pair and Duplicate Direction

Need:

```text
i < j
```

---

## Step 3 — Generate

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
    }
}
```

---

## Step 4 — Compute Pair Property

Example Sum:

```c
int sum = arr[i] + arr[j];
```

Difference:

```c
int difference = abs(arr[i] - arr[j]);
```

Equality:

```c
arr[i] == arr[j]
```

---

## Step 5 — Update Correct State

Existence:

```c
found = 1;
```

Count:

```c
count++;
```

Minimum:

```c
minimum = difference;
```

Maximum:

```c
maximum = sum;
```

Mental Derivation:

```text
Need Two Elements
↓
Need Two Indices
↓
Need Unique Pair Rule
↓
i < j
↓
Nested Loop
↓
Pair Condition
↓
State Update
```

---

# 42. Pair Pattern Family

একই pair generator থেকে অনেক problem solve করা যায়।

Core:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // different condition
    }
}
```

### Target Sum

```c
arr[i] + arr[j] == target
```

### Equal Pair

```c
arr[i] == arr[j]
```

### Difference K

```c
abs(arr[i] - arr[j]) == k
```

### Minimum Difference

```c
difference < minimumDifference
```

### Maximum Sum

```c
sum > maximumSum
```

Lesson:

```text
Same Traversal Pattern
+
Different Pair Property
+
Different State
=
Different Problem
```

---

# 43. Recognition Drill — State Selection

## Problem

> Does a pair exist with sum target?

Need:

```text
Flag
```

---

## Problem

> Count pairs with sum target.

Need:

```text
Counter
```

---

## Problem

> Find minimum difference between any pair.

Need:

```text
Minimum Candidate
```

---

## Problem

> Find maximum pair sum.

Need:

```text
Maximum Candidate
```

---

## Problem

> Print first valid pair.

Need:

```text
Pair Search
+
Early Exit
```

State selection problem-solving-এর গুরুত্বপূর্ণ অংশ।

---

# 44. Pair Search Space Visualization

Array:

```text
A B C D
```

Pair matrix ভাবো:

```text
      A   B   C   D

A     X  AB  AC  AD

B     X   X  BC  BD

C     X   X   X  CD

D     X   X   X   X
```

আমরা শুধু upper triangle process করছি।

কারণ:

```text
AA
BB
CC
DD
```

self-pair বাদ।

এবং:

```text
BA
```

already represented by:

```text
AB
```

তাই pair loop:

```text
j = i + 1
```

এই upper triangle generate করে।

---

# 45. Sorting + Minimum Difference Insight

Brute Force:

```text
Every Pair
↓
Find Minimum Difference
↓
O(n²)
```

কিন্তু sort করলে:

```text
1 4 8 10 20
```

Minimum difference candidate logically কাছাকাছি values-এর মধ্যে পাওয়া যায়।

Adjacent differences:

```text
4 - 1  = 3

8 - 4  = 4

10 - 8 = 2

20 - 10 = 10
```

Minimum:

```text
2
```

এখানে sorting pair search reduce করতে পারে।

Mental Evolution:

```text
All Pairs
↓
Sort
↓
Relevant Neighbor Pairs
```

এই Chapter-এর জন্য important insight:

> **Sorting শুধু array সুন্দরভাবে সাজায় না; sorting search space-এর structure expose করতে পারে।**

---

# 46. Pair Thinking এবং Day 5 Connection

Day 5-এর concepts এখন connect হচ্ছে।

## Sorting

```text
Values Gain Order
```

## Frequency

```text
Values Gain Counts
```

## Sorted Groups

```text
Equal Values Become Consecutive
```

## Pair Thinking

```text
Two Elements Form a Search Unit
```

Combined:

```text
Pair Problem
        ↓
Brute Force All Pairs
        ↓
Can Sorting Add Useful Order?
        ↓
Can Frequency Replace Repeated Pair Checks?
```

এটাই future optimization thinking।

---

# 🧠 Pair Thinking Master Pattern Map

```text
                         PROBLEM
                            │
                            ▼
                  Involves Two Elements?
                            │
                            ▼
                         PAIR
                            │
                            ▼
                     Need All Pairs?
                            │
                            ▼
                        i < j
                            │
                            ▼
             ┌──────── Pair Property ────────┐
             │              │                │
             ▼              ▼                ▼
            Sum         Difference         Equality
             │              │                │
             ▼              ▼                ▼
          Target?         Minimum?          Count?
             │              │                │
             ▼              ▼                ▼
           Flag /         Minimum          Counter
           Counter        Tracking
```

---

# 47. Problem Solving Framework

Pair problem দেখলে:

## Step 1 — Translate

Example:

> Count pairs whose sum is 10.

Translate:

```text
Need Two Different Indices
↓
Need arr[i] + arr[j] == 10
↓
Need Count of All Matches
```

---

## Step 2 — Choose State

```text
Need Total Count
↓
Counter
```

```c
int count = 0;
```

---

## Step 3 — Generate Unique Pairs

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
```

---

## Step 4 — Check Condition

```c
if (arr[i] + arr[j] == target)
```

---

## Step 5 — Update

```c
count++;
```

Full mental chain:

```text
Question
↓
Pair
↓
Unique Pair Generation
↓
Condition
↓
State Update
↓
Answer
```

---

# 🧪 Chapter 7 Practice

## Task 1 — Print All Unique Pairs

Input:

```text
4
10 20 30 40
```

Expected:

```text
10 20
10 30
10 40
20 30
20 40
30 40
```

Pattern:

```text
Pair Generation
```

---

## Task 2 — Pair Sum Existence

Input:

```text
5
2 8 4 7 1

10
```

Possible valid pair:

```text
2 + 8 = 10
```

Output:

```text
Pair Found
```

Pattern:

```text
Pair Generation
+
Condition
+
Flag
+
Early Exit
```

---

## Task 3 — Count Target Sum Pairs

Input:

```text
5
1 2 3 4 5

6
```

Valid:

```text
1 + 5
2 + 4
```

Output:

```text
2
```

---

## Task 4 — Count Equal Index Pairs

Input:

```text
5
1 2 1 3 1
```

Valid index pairs:

```text
(0,2)
(0,4)
(2,4)
```

Output:

```text
3
```

---

## Task 5 — Minimum Pair Difference

Input:

```text
4
8 3 15 6
```

Output:

```text
2
```

Because:

```text
|8 - 6| = 2
```

Pattern:

```text
Pair Generation
+
Difference
+
Minimum Tracking
```

---

## Task 6 — Maximum Pair Sum

Input:

```text
4
3 8 2 10
```

Output:

```text
18
```

Pattern:

```text
Pair Generation
+
Sum
+
Maximum Tracking
```

---

# 🧠 Pattern Recognition Drill

## Problem 1

Complete:

```text
Need Unique Unordered Index Pairs
↓
Maintain ______ < ______
```

---

## Problem 2

Complete loop:

```c
for (int i = 0; i < n; i++)
{
    for (int j = ______; j < n; j++)
    {
    }
}
```

---

## Problem 3

Question:

> Does any pair sum to target?

State:

```text
Counter / Flag / Maximum?
```

Answer:

```text
...
```

---

## Problem 4

Question:

> How many pairs sum to target?

Should you stop after first match?

```text
Yes / No

Reason:
...
```

---

## Problem 5

Array:

```text
1 1 1 1
```

How many unique unordered index pairs?

Use:

[
\frac{n(n-1)}{2}
]

Answer:

```text
...
```

---

## Problem 6

Why is this wrong for unordered pair counting?

```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i != j)
        {
            count++;
        }
    }
}
```

Explain:

```text
...
```

---

## Problem 7

Problem:

> Minimum difference between any two elements.

Pattern chain:

```text
Generate ______
↓
Calculate ______
↓
Track ______
```

---

# 📝 Chapter 7 Assignment

Assignment focused রাখা হয়েছে যাতে Day 5 একই দিনে finish করা যায়।

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. Pair কী?

2. Index Pair এবং Value Pair-এর difference কী?

3. কেন pair loop-এ j = i + 1 ব্যবহার করি?

4. i < j condition-এর meaning কী?

5. Pair brute force কেন O(n²)?

6. Existence problem এবং Count problem-এর state কীভাবে আলাদা?

7. Inner loop-এর break outer loop বন্ধ করে কি?

8. All Pairs এবং Adjacent Pairs-এর difference কী?

9. Sorting pair problem-এ কীভাবে সাহায্য করতে পারে?

10. Index Pair Count এবং Distinct Value Pair Count কেন আলাদা হতে পারে?

11. Pair problem-এ constraint check করা কেন জরুরি?

12. Frequency কীভাবে কিছু pair problem optimize করতে সাহায্য করতে পারে?
```

---

## Part B — Mandatory Coding

নিজে করবে:

```text
1. Print All Unique Pairs

2. Pair Sum Existence

3. Print First Pair with Target Sum

4. Count All Pairs with Target Sum

5. Count Equal Index Pairs

6. Find Minimum Pair Difference

7. Find Maximum Pair Sum
```

---

## Part C — Pair Dry Run

Array:

```text
3 7 2 8
```

সব unique pairs লিখবে:

```text
(3, ?)

(3, ?)

(3, ?)

(7, ?)

(7, ?)

(2, ?)
```

তারপর লিখবে:

```text
Total Pair Count = ?
```

Formula দিয়েও verify করবে:

[
\frac{n(n-1)}{2}
]

---

## Part D — Target Sum Dry Run

Array:

```text
2 4 6 8
```

Target:

```text
10
```

Table complete করবে:

| Pair    |  Sum | Valid? |
| ------- | ---: | ------ |
| `(2,4)` |    ? | ?      |
| `(2,6)` |    ? | ?      |
| `(2,8)` |    ? | ?      |
| `(4,6)` |    ? | ?      |
| `(4,8)` |    ? | ?      |
| `(6,8)` |    ? | ?      |

তারপর:

```text
Valid Pair Count = ?
```

---

## Part E — Debugging

এই code দেখো:

```c
int count = 0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i] + arr[j] == target)
        {
            count++;
        }
    }
}
```

Find:

```text
Problem 1:
Self Pair:

Problem 2:
Double Counting:

Correct Inner Loop Start:

Correct Pair Invariant:
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
Pair
Index Pair
Value Pair
Unordered Pair
Pair Generation
Pair Search Space
Self Pair
Double Counting
Pair Sum
Target Sum
Pair Difference
Quadratic Search
Search Space
```

Format:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 📚 Pattern Library Update

`core_pattern.md`-এ add করবে:

````md
## Unique Pair Generation Pattern

### Recognition

Use when a problem requires checking two different elements together.

### Core Pattern

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // process arr[i] and arr[j]
    }
}
````

### Invariant

```text
i < j
```

### Mental Model

```text
Choose First Element
↓
Pair With Every Element After It
↓
Process Each Unique Pair Once
```

### Common Uses

* Target Sum Pair
* Equal Pair Count
* Minimum Pair Difference
* Maximum Pair Sum
* Pair Condition Checking

### Complexity

```text
O(n²)
```

---

## Pair Sum Existence Pattern

```c
int found = 0;

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] + arr[j] == target)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        break;
    }
}
```

### Pattern Combination

```text
Pair Generation
+
Condition Check
+
Flag
+
Early Exit
```

````

---

# 🔥 Chapter 7 Key Lesson

এই Chapter-এর সবচেয়ে important code:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        // process pair
    }
}
````

কিন্তু শুধু nested loop মুখস্থ করলে হবে না।

Mental Model:

```text
Problem Talks About Two Elements
        ↓
Need Pair Thinking
        ↓
Need Two Different Indices
        ↓
Avoid Self Pair
        ↓
Avoid Duplicate Direction
        ↓
Maintain i < j
        ↓
Generate Each Pair Once
```

তারপর:

```text
What Does the Problem Ask?
        │
        ├── Exists?
        │      ↓
        │   Flag
        │
        ├── How Many?
        │      ↓
        │   Counter
        │
        ├── Minimum?
        │      ↓
        │   Min Tracking
        │
        └── Maximum?
               ↓
            Max Tracking
```

---

# 🔗 Previous Pattern Connection

Day 2:

```text
Traversal
↓
One Element at a Time
```

Day 5 Chapter 5:

```text
Frequency
↓
One Counter Per Value
```

Day 5 Chapter 6:

```text
Sorting
↓
Groups and Boundaries
```

এখন:

```text
Pair Generation
↓
Two Elements at a Time
```

Pattern combination:

```text
Pair Generation
+
Flag
→ Pair Existence
```

```text
Pair Generation
+
Counter
→ Pair Count
```

```text
Pair Generation
+
Minimum Tracking
→ Minimum Pair Difference
```

```text
Pair Generation
+
Maximum Tracking
→ Maximum Pair Value
```

```text
Sorting
+
Pair Thinking
→ Foundation for Two Pointers
```

```text
Frequency
+
Pair Counting
→ Foundation for Faster Counting Problems
```

---

# ✅ Chapter 7 Completion Checklist

```text
[ ] Pair কী বুঝি

[ ] Index Pair এবং Value Pair-এর difference বুঝি

[ ] Unique unordered pair কী বুঝি

[ ] i < j invariant বুঝি

[ ] j = i + 1 কেন বুঝি

[ ] সব unique pairs print করতে পারি

[ ] Self Pair problem বুঝি

[ ] Double Counting problem বুঝি

[ ] Pair Sum existence check করতে পারি

[ ] Pair Sum count করতে পারি

[ ] Existence এবং Count problem-এর difference বুঝি

[ ] Flag ব্যবহার করতে পারি

[ ] Nested loop-এর break behavior বুঝি

[ ] Equal Index Pair count করতে পারি

[ ] Minimum Pair Difference বের করতে পারি

[ ] Maximum Pair Sum বের করতে পারি

[ ] Pair brute force কেন O(n²) বুঝি

[ ] n(n-1)/2 pair count formula-এর basic meaning বুঝি

[ ] Constraint দেখে O(n²) judge করার habit তৈরি করছি

[ ] All Pairs এবং Adjacent Pairs-এর difference বুঝি

[ ] Sorting pair search-এ কেন useful হতে পারে বুঝি

[ ] Frequency এবং Pair Thinking-এর connection বুঝি

[ ] Index Pair Count এবং Distinct Value Pair Count confuse করি না

[ ] Large pair sum-এ overflow হতে পারে জানি

[ ] Practice complete করেছি

[ ] Assignment complete করেছি

[ ] Glossary update করেছি

[ ] Pattern Library update করেছি
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
├── ✅ Chapter 5 — Frequency Counting Pattern
│
├── ✅ Chapter 6 — Sorted Array & Frequency Problems
│
├── ✅ Chapter 7 — Pair Thinking Foundation
│
└── ⬜ Chapter 8 — Pattern Combination, Assignment,
                  Mini Contest & Reflection
```

# 🏁 Chapter 7 Final Position

এখন তোমার problem-solving mental model আরও expand হয়েছে:

```text
One Element Problem
↓
Traversal
```

```text
Many Count Problem
↓
Frequency
```

```text
Need Order Problem
↓
Sorting
```

```text
Two Element Relationship
↓
Pair Thinking
```

সবচেয়ে important decision chain:

```text
Problem
   ↓
Does It Involve Two Elements Together?
   │
   ├── No
   │    ↓
   │ Other Known Pattern
   │
   └── Yes
        ↓
      Pair Problem
        ↓
   Need One Match or All?
        │
    ┌───┴────┐
    │        │
   One       All
    │        │
    ▼        ▼
  Flag     Counter /
  Early    Min / Max
  Exit     Tracking
```

আর optimization thinking-এর foundation:

```text
Pair Problem
↓
First Build Correct Brute Force
↓
Understand O(n²) Search Space
↓
Check Constraints
↓
Can Sorting Add Order?
↓
Can Frequency Store Useful Information?
↓
Future Optimization
```

পরবর্তী **Day 5 — Chapter 8** হবে Day 5-এর final integration chapter। সেখানে নতুন বড় topic ঢোকানোর বদলে focus থাকবে:

```text
Sorting
+
Frequency
+
Sorted Groups
+
Pair Thinking
+
Pattern Selection
```

তারপর:

```text
Mixed Problem Solving
↓
Approach Selection Drill
↓
Day 5 Final Assignment
↓
Mini Contest
↓
Mistake Review
↓
Pattern Library Update
↓
Day 5 Reflection
```

এতে Day 5-এর সব concept একসঙ্গে consolidate হবে এবং Day 6-এ যাওয়ার আগে sorting, frequency ও pair foundation solid করা যাবে।

---

# 🚀 CP Bootcamp 2026 — Day 5

# Chapter 8 — Pattern Combination, Final Assignment, Mini Contest & Reflection

> **Day 5 Final Chapter**
> **Main Goal:** Sorting, Frequency Counting, Sorted Group এবং Pair Thinking—এই চারটি concept আলাদা আলাদা জানার পর problem দেখে সঠিক pattern choose এবং combine করতে শেখা।
> **Estimated Time:** 90–120 minutes

---

# 🎯 Chapter Mission

Day 5-এ তুমি শিখেছ:

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
qsort()
        ↓
Chapter 5
Frequency Counting
        ↓
Chapter 6
Sorted Array & Frequency Problems
        ↓
Chapter 7
Pair Thinking Foundation
        ↓
Chapter 8
Pattern Selection
+
Pattern Combination
+
Mini Contest
+
Final Assignment
+
Reflection
```

আজকের final goal:

```text
Problem দেখলাম
        ↓
সাথে সাথে Code লেখা শুরু করলাম
```

এই habit থেকে বের হয়ে:

```text
Problem
   ↓
Question Translate
   ↓
Constraint Check
   ↓
Pattern Recognition
   ↓
Choose Representation
   ↓
Choose State
   ↓
Build Pattern Chain
   ↓
Code
   ↓
Test
   ↓
Review
```

এই process follow করা।

---

# 1. Day 5-এর আসল শিক্ষা কী?

Day 5 শুধু Sorting শেখার দিন না।

শুধু:

```c
qsort()
```

শেখাও Day 5-এর goal না।

শুধু:

```c
freq[x]++;
```

শেখাও goal না।

শুধু:

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
```

শেখাও goal না।

আসল goal:

> **Problem-এর structure দেখে data-কে কোন view-তে দেখলে problem সহজ হবে, সেটা চিনতে শেখা।**

একই array:

```text
5 2 5 3 2 8
```

চারভাবে দেখা যায়।

---

## Raw Array View

```text
5 2 5 3 2 8
```

Useful when:

```text
Original Order Matters
```

---

## Sorted View

```text
2 2 3 5 5 8
```

Useful when:

```text
Order Matters
```

বা:

```text
Equal Values Need Grouping
```

---

## Frequency View

```text
2 → 2
3 → 1
5 → 2
8 → 1
```

Useful when:

```text
Count Per Value Matters
```

---

## Pair View

```text
(5,2)
(5,5)
(5,3)
...
```

Useful when:

```text
Relationship Between Two Elements Matters
```

---

# 2. Representation Selection

Problem solving-এর আগে প্রশ্ন:

```text
How Should I Look at the Data?
```

Decision model:

```text
                    ARRAY PROBLEM
                          │
                          ▼
               What does answer depend on?
                          │
        ┌─────────────────┼─────────────────┐
        │                 │                 │
        ▼                 ▼                 ▼
 Original Order         Counts        Relative Order
        │                 │                 │
        ▼                 ▼                 ▼
Raw Traversal        Frequency           Sorting
                          │
                          │
                          ▼
                   Small Range?
                          │
                     ┌────┴────┐
                     │         │
                    Yes        No
                     │         │
                     ▼         ▼
                 freq[]      Sorting /
                             Other Method
```

আর যদি problem বলে:

```text
Two Elements Together
```

তাহলে:

```text
Pair Thinking
```

---

# 3. Pattern Selection-এর ৫টি Question

Problem পড়ার পর code লেখার আগে নিজেকে এই ৫টি প্রশ্ন করবে।

## Question 1

```text
Original Order Matter করে?
```

যদি করে:

```text
Do Not Sort Blindly
```

---

## Question 2

```text
Count Per Value দরকার?
```

যদি দরকার হয়:

```text
Can Frequency Help?
```

---

## Question 3

```text
Sorted Order problem সহজ করবে?
```

যদি করে:

```text
Sort
↓
Use Order
```

---

## Question 4

```text
দুইটি Element-এর Relationship দরকার?
```

যদি দরকার হয়:

```text
Think Pair
```

---

## Question 5

```text
Answer কী ধরনের State চায়?
```

Possible:

```text
Existence
→ Flag
```

```text
How Many
→ Counter
```

```text
Total
→ Accumulator
```

```text
Largest
→ Maximum Tracking
```

```text
Smallest
→ Minimum Tracking
```

```text
Remember Answer
→ Candidate Variable
```

---

# 4. Pattern Combination কী?

একটি problem সবসময় একটি pattern দিয়ে solve হয় না।

Example:

> Array-তে smallest repeated value বের করো।

Need:

```text
Frequency Counting
+
Ascending Frequency Traversal
+
Condition Check
+
Early Exit
```

আরেকটি:

> কোনো pair target sum তৈরি করে কি না।

Need:

```text
Pair Generation
+
Condition Check
+
Flag
+
Early Exit
```

আরেকটি:

> Most frequent value বের করো।

Need:

```text
Frequency Counting
+
Frequency Traversal
+
Maximum Tracking
+
Candidate Value
```

এটাই:

```text
Pattern Combination
```

---

# 5. Pattern Chain লেখার Habit

Code-এর আগে ছোট pattern chain লেখো।

Example Problem:

> Count distinct values.

Approach A:

```text
Sort
↓
Traverse from Index 1
↓
Current != Previous?
↓
New Group
↓
Count++
```

Approach B:

```text
Build Frequency
↓
Traverse Possible Values
↓
freq[value] > 0?
↓
Count++
```

এই chain যদি clear হয়, code অনেক সহজ হবে।

---

# 6. Problem 1 — Count Distinct Values

Input:

```text
8

5 2 5 3 2 8 8 1
```

Answer:

```text
5
```

Possible patterns:

```text
Sorting
+
Group Boundary
+
Counter
```

অথবা:

```text
Frequency
+
Presence Check
+
Counter
```

Question:

> কোনটা choose করব?

Constraint:

```text
0 ≤ arr[i] ≤ 100
```

তাহলে:

```text
Frequency
```

খুব natural।

Constraint:

```text
-10^9 ≤ arr[i] ≤ 10^9
```

তাহলে direct frequency array natural না।

Current knowledge অনুযায়ী:

```text
Sorting
+
Group Boundary
```

natural।

---

# 7. Problem 2 — First Repeated Value

Array:

```text
8 8 3 3 1
```

Question:

> Traversal-এর সময় প্রথম কোন value দ্বিতীয়বার দেখা যায়?

Answer:

```text
8
```

Wrong approach:

```text
Sort
↓
Find First Adjacent Duplicate
```

Sort:

```text
1 3 3 8 8
```

এখানে first duplicate:

```text
3
```

Wrong answer।

Correct:

```text
Original Traversal
+
Seen/Frequency State
+
Early Exit
```

Code core:

```c
for (int i = 0; i < n; i++)
{
    int x = arr[i];

    if (freq[x] > 0)
    {
        printf("%d\n", x);
        break;
    }

    freq[x]++;
}
```

Lesson:

```text
Pattern must match
the exact question
```

---

# 8. Problem 3 — Smallest Repeated Value

Same array:

```text
8 8 3 3 1
```

Repeated values:

```text
3
8
```

Smallest:

```text
3
```

এবার original order important না।

Pattern:

```text
Build Frequency
↓
Traverse Values Small to Large
↓
First freq[value] > 1
↓
Answer
```

Notice:

```text
First Repeated by Input Order
```

এবং:

```text
Smallest Repeated Value
```

দুইটি different problem।

---

# 9. Exact Question Translation

Problem statement:

> Find the first repeating element.

এই phrase কখনো ambiguous হতে পারে।

Possible meaning:

### Meaning A

```text
First value whose second occurrence appears first
```

Example:

```text
5 2 3 2 5
```

Answer:

```text
2
```

---

### Meaning B

```text
First element in original array
that appears more than once anywhere
```

Same array:

```text
5 2 3 2 5
```

Answer:

```text
5
```

কারণ original array-এর first element `5`, এবং পরে আবার এসেছে।

Lesson:

> শুধু keyword দেখে code লিখবে না। Exact definition, examples এবং expected output দেখবে।

---

# 10. Problem 4 — Mode

Array:

```text
4 2 4 3 2 4 5
```

Frequency:

```text
2 → 2
3 → 1
4 → 3
5 → 1
```

Answer:

```text
4
```

Pattern Chain:

```text
Frequency Counting
↓
Traverse Frequency Table
↓
Track Maximum Frequency
↓
Remember Corresponding Value
```

State:

```c
int bestFrequency = 0;
int bestValue = 0;
```

Core:

```c
for (int value = 0; value <= MAX_VALUE; value++)
{
    if (freq[value] > bestFrequency)
    {
        bestFrequency = freq[value];
        bestValue = value;
    }
}
```

Pattern combination:

```text
Frequency
+
Maximum Tracking
+
Candidate Value
```

---

# 11. Problem 5 — Pair Sum Existence

Array:

```text
2 8 4 7 1
```

Target:

```text
10
```

Question:

> কোনো pair আছে?

Need:

```text
Pair Generation
+
Condition
+
Flag
+
Early Exit
```

State:

```c
int found = 0;
```

Condition:

```c
arr[i] + arr[j] == target
```

Important:

```text
Need One Match
↓
Stop When Found
```

---

# 12. Problem 6 — Pair Sum Count

Same Array:

```text
2 8 4 6 1 9
```

Target:

```text
10
```

Valid index pairs:

```text
2 + 8

4 + 6

1 + 9
```

Answer:

```text
3
```

Pattern:

```text
Pair Generation
+
Condition
+
Counter
+
Full Pair Traversal
```

State:

```c
int count = 0;
```

Difference from existence problem:

```text
Existence
→ Stop after first match
```

```text
Count
→ Check every pair
```

---

# 13. Problem 7 — Minimum Difference

Array:

```text
8 3 15 6
```

Brute Force Pattern:

```text
Generate Every Pair
↓
Calculate Absolute Difference
↓
Minimum Tracking
```

Complexity:

```text
O(n²)
```

Alternative insight:

```text
Sort
↓
Check Adjacent Differences
↓
Minimum Tracking
```

Sorted:

```text
3 6 8 15
```

Adjacent differences:

```text
6 - 3 = 3

8 - 6 = 2

15 - 8 = 7
```

Answer:

```text
2
```

Pattern:

```text
Sorting
+
Adjacent Comparison
+
Minimum Tracking
```

এই example খুব important।

একই problem:

```text
Brute Force Pair View
```

থেকে:

```text
Sorted Neighbor View
```

তে transform হয়েছে।

---

# 14. Why Sorting Helps Minimum Difference

Suppose sorted:

```text
2 5 9 20
```

`2` এবং `20`-এর difference:

```text
18
```

কিন্তু তাদের মাঝখানে values আছে।

Minimum difference পেতে distant sorted positions check করার দরকার নেই।

কারণ sorted order-এ closest numeric values adjacent হবে।

তাই:

```text
All Pairs
        ↓
Sort
        ↓
Adjacent Pairs Only
```

Complexity idea:

```text
Brute Force:
O(n²)
```

versus:

```text
Sorting:
O(n log n)

Adjacent Traversal:
O(n)
```

Overall:

```text
O(n log n)
```

এখন তোমার goal complexity proof না।

Goal:

```text
Sorting Can Reduce Search Space
```

এই insight বোঝা।

---

# 15. Problem 8 — Equal Pair Count

Array:

```text
1 1 1 2 2
```

Brute Force:

```text
Generate All Pairs
↓
arr[i] == arr[j]?
↓
count++
```

Pattern:

```text
Pair Generation
+
Equality Check
+
Counter
```

Complexity:

```text
O(n²)
```

Frequency View:

```text
1 → 3 times
2 → 2 times
```

For frequency `f`:

[
\text{Pairs} = \frac{f(f-1)}{2}
]

For `1`:

[
\frac{3(3-1)}{2} = 3
]

For `2`:

[
\frac{2(2-1)}{2} = 1
]

Total:

[
3 + 1 = 4
]

Pattern:

```text
Frequency Counting
+
Combination Formula
+
Accumulator
```

এই example দেখায়:

```text
Brute Force Pair Thinking
        ↓
Understand What Is Being Counted
        ↓
Frequency Representation
        ↓
Avoid Rechecking Every Pair
```

---

# 16. Pattern Combination Table

| Problem                 | Main Pattern        | Supporting Pattern    |
| ----------------------- | ------------------- | --------------------- |
| Distinct Count          | Frequency / Sorting | Counter               |
| Duplicate Exists        | Frequency / Sorting | Flag                  |
| Smallest Repeated       | Frequency           | Early Exit            |
| Mode                    | Frequency           | Maximum Tracking      |
| Pair Sum Exists         | Pair Generation     | Flag + Early Exit     |
| Pair Sum Count          | Pair Generation     | Counter               |
| Minimum Pair Difference | Pair / Sorting      | Minimum Tracking      |
| Equal Pair Count        | Pair / Frequency    | Counter / Accumulator |

---

# 17. Pattern Selection Drill

এখন problem দেখো এবং code না লিখে শুধু pattern choose করো।

---

## Problem A

> Array-তে কয়টি different value আছে?

Possible:

```text
Frequency + Counter
```

অথবা:

```text
Sorting + Group Boundary + Counter
```

---

## Problem B

> Array-তে কোনো duplicate আছে কি?

Possible:

```text
Frequency + Condition + Flag
```

অথবা:

```text
Sorting + Adjacent Comparison + Flag
```

---

## Problem C

> Input order অনুযায়ী first repeat event কোনটি?

Pattern:

```text
Original Traversal
+
Seen State
+
Early Exit
```

---

## Problem D

> Most frequent value কোনটি?

Pattern:

```text
Frequency
+
Maximum Tracking
+
Candidate Value
```

---

## Problem E

> দুইটি element-এর sum target হয় কি?

Pattern:

```text
Pair Generation
+
Condition
+
Flag
+
Early Exit
```

---

## Problem F

> দুইটি element-এর minimum difference কত?

Brute force:

```text
Pair Generation
+
Difference
+
Minimum Tracking
```

Better sorted approach:

```text
Sorting
+
Adjacent Difference
+
Minimum Tracking
```

---

# 18. Constraint-Based Thinking

Problem:

> Find duplicate.

Approach choose করার আগে constraint দেখো।

---

## Case 1

```text
1 ≤ n ≤ 100000

0 ≤ arr[i] ≤ 1000
```

Natural:

```text
Frequency Array
```

কারণ range ছোট।

---

## Case 2

```text
1 ≤ n ≤ 100000

-10^9 ≤ arr[i] ≤ 10^9
```

Direct frequency array:

```text
Not Practical
```

Current Day 5 knowledge:

```text
Sorting
+
Adjacent Comparison
```

---

## Case 3

```text
n ≤ 100
```

Pair brute force:

```text
O(n²)
```

Approx pair checks:

[
\frac{100 \times 99}{2} = 4950
]

Fine।

---

## Case 4

```text
n ≤ 100000
```

Pair brute force:

```text
O(n²)
```

Potentially billions of checks।

Need:

```text
Better Approach
```

Lesson:

```text
Correct Algorithm
+
Constraint Compatibility
=
Accepted Solution
```

---

# 19. Pattern Conflict

কখনো দুইটি pattern possible হবে।

Example:

> Count distinct values.

Possible:

```text
Sorting
```

এবং:

```text
Frequency
```

তখন প্রশ্ন:

```text
What are the constraints?
```

```text
Do I need original order later?
```

```text
Is value range manageable?
```

```text
Do I already need sorted data?
```

Example:

যদি problem পরে বলে:

> Distinct count বের করার পর sorted unique values print করো।

Sorting natural হতে পারে।

যদি problem বলে:

> `0 ≤ value ≤ 100` এবং 1000 frequency queries answer করো।

Frequency natural।

---

# 20. Don't Force Your Favorite Pattern

একটি common beginner mistake:

```text
Recently Learned Sorting
↓
Try Sorting Everywhere
```

অথবা:

```text
Recently Learned Frequency
↓
Use Frequency Everywhere
```

অথবা:

```text
Recently Learned Pair Loop
↓
Try O(n²) Everywhere
```

Better habit:

```text
Problem
↓
Requirements
↓
Constraints
↓
Representation
↓
Pattern
```

Algorithm problem-এর জন্য।

Problem algorithm-এর জন্য না।

---

# 21. Day 5 Master Pattern Map

```text
                         ARRAY PROBLEM
                               │
                               ▼
                      What is being asked?
                               │
          ┌────────────────────┼────────────────────┐
          │                    │                    │
          ▼                    ▼                    ▼
      Value Counts         Value Order        Two Elements
          │                    │                    │
          ▼                    ▼                    ▼
      Frequency             Sorting              Pair
          │                    │                    │
    ┌─────┼─────┐       ┌──────┼──────┐      ┌─────┼─────┐
    │     │     │       │      │      │      │     │     │
    ▼     ▼     ▼       ▼      ▼      ▼      ▼     ▼     ▼
Distinct Mode Repeat   Group Adjacent Min    Sum   Diff  Equal
    │     │     │       │      │      │      │     │     │
    ▼     ▼     ▼       ▼      ▼      ▼      ▼     ▼     ▼
Counter Max   Flag    Counter Compare Min   Flag  Min   Counter
        Track                                  /
                                             Count
```

---

# 22. Day 5 Problem-Solving Protocol

আজকের পর Array problem দেখলে এই protocol follow করবে।

## Phase 1 — Understand

```text
Input কী?

Output কী?

Exactly কী count/find/check করতে হবে?
```

---

## Phase 2 — Constraint

```text
n কত বড়?

Value range কত?

Negative আছে?

Original order matter করে?
```

---

## Phase 3 — Recognition

```text
Need Order?
→ Sorting
```

```text
Need Counts?
→ Frequency
```

```text
Need Equal Groups?
→ Sort + Group
```

```text
Need Two Elements?
→ Pair
```

---

## Phase 4 — State

```text
Exists?
→ Flag
```

```text
Count?
→ Counter
```

```text
Total?
→ Accumulator
```

```text
Minimum?
→ Min Tracking
```

```text
Maximum?
→ Max Tracking
```

---

## Phase 5 — Pattern Chain

Example:

```text
Sort
↓
Traverse Adjacent
↓
Difference
↓
Minimum Tracking
```

---

## Phase 6 — Code

এখন code লিখবে।

---

## Phase 7 — Test

At least:

```text
Smallest Case

Normal Case

Duplicate Case

All Same

Already Sorted

Reverse Sorted

Negative Case
(if allowed)

Large Boundary Values
```

সব problem-এ সব case দরকার হবে না।

Relevant case choose করবে।

---

# 23. Mini Problem Solving Session

এখন কয়েকটি problem mentally solve করি।

---

## Problem 1 — Appears Once

Input:

```text
8

1 1 2 3 3 4 5 5
```

Question:

> কয়টি value exactly once এসেছে?

Translate:

```text
Need Count Per Value
```

Pattern:

```text
Frequency
↓
freq[value] == 1
↓
Counter
```

Answer:

```text
2
```

Values:

```text
2
4
```

---

## Problem 2 — Largest Repeated Value

Input:

```text
8

2 7 3 7 5 3 9 9
```

Repeated:

```text
3
7
9
```

Largest:

```text
9
```

Pattern:

```text
Frequency
↓
Traverse High to Low
↓
First freq[value] > 1
↓
Answer
```

---

## Problem 3 — Closest Pair

Input:

```text
5

20 3 8 10 1
```

Sort:

```text
1 3 8 10 20
```

Adjacent differences:

```text
2
5
2
10
```

Minimum:

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

## Problem 4 — Count Pair Sum

Input:

```text
5

1 2 3 4 5

6
```

Pattern:

```text
Pair Generation
+
Target Sum Condition
+
Counter
```

Answer:

```text
2
```

Pairs:

```text
1 + 5

2 + 4
```

---

# 24. Common Mistake Review

Day 5-এর সবচেয়ে important mistakes একসঙ্গে দেখি।

---

## Mistake 1 — Comparator Overflow

Risky:

```c
return x - y;
```

Safer:

```c
return (x > y) - (x < y);
```

---

## Mistake 2 — Frequency Array Uninitialized

Wrong:

```c
int freq[101];
```

তারপর:

```c
freq[x]++;
```

Problem:

```text
Garbage Initial Values
```

Correct:

```c
int freq[101] = {0};
```

---

## Mistake 3 — Wrong Frequency Range

Constraint:

```text
0 ≤ value ≤ 100
```

Correct traversal:

```c
for (int value = 0; value <= 100; value++)
```

---

## Mistake 4 — Sorting Original Order Problem

Question original order dependent হলে:

```text
Sort
```

করার আগে ভাববে।

Sorting:

```text
Changes Positions
```

---

## Mistake 5 — Missing First Sorted Group

Distinct count:

```c
int distinct = 1;
```

যদি:

```text
n >= 1
```

guaranteed হয়।

---

## Mistake 6 — Missing Last Group

Sorted group processing-এ loop শেষে final group handle করতে হবে।

---

## Mistake 7 — Pair Loop Starts at `j = 0`

এতে:

```text
Self Pair
+
Double Counting
```

হতে পারে।

Correct:

```c
j = i + 1;
```

---

## Mistake 8 — Count Problem-এ Early Exit

Need total count হলে:

```text
Do Not Stop After First Match
```

---

## Mistake 9 — Existence Problem-এ Unnecessary Full Search

Need only yes/no হলে:

```text
Flag
+
Early Exit
```

use করা যায়।

---

## Mistake 10 — Ignoring Overflow

Large values হলে:

```c
long long sum =
    (long long)arr[i] + arr[j];
```

consider করবে।

---

# 25. Edge Case Review

## Case 1 — Single Element

```text
1

5
```

Possible:

```text
Distinct = 1

Duplicate = No

Pair Count = 0
```

---

## Case 2 — All Same

```text
5

7 7 7 7 7
```

Possible:

```text
Distinct = 1

Repeated Values = 1

Mode = 7

Frequency = 5
```

Index pair count:

[
\frac{5 \times 4}{2} = 10
]

---

## Case 3 — All Different

```text
5

1 2 3 4 5
```

Possible:

```text
Distinct = 5

Duplicate = No

Repeated Value Count = 0
```

---

## Case 4 — Negative Values

```text
-5 -2 -8 -1
```

Direct frequency array:

```text
freq[x]
```

cannot directly use negative index।

Sorting works naturally।

---

## Case 5 — Duplicate Pair Values

```text
1 1 2 2
```

Target:

```text
3
```

Index pair count:

```text
4
```

Distinct value pair:

```text
(1,2)
```

Count:

```text
1
```

Question wording matters।

---

# 🏆 Day 5 Mini Contest

> **Time Limit for Yourself:** 75 minutes
> **Rule:** প্রথমে paper/markdown-এ pattern লিখবে, তারপর code করবে।
> **Goal:** সব solve না হলেও problem recognition practice complete করতে হবে।

---

## Problem 1 — Distinct Counter

### Difficulty

⭐☆☆☆☆

### Input

```text
8

5 2 5 3 2 8 8 1
```

### Output

```text
5
```

### Constraint

```text
0 ≤ arr[i] ≤ 100
```

### Required Pattern

নিজে identify করবে।

---

## Problem 2 — Duplicate Detector

### Difficulty

⭐☆☆☆☆

### Input

```text
6

4 7 2 9 7 1
```

### Output

```text
YES
```

### Requirement

দুইটি solution ভাববে:

```text
Approach A
```

এবং:

```text
Approach B
```

তারপর একটি code করবে।

---

## Problem 3 — Frequency Champion

### Difficulty

⭐⭐☆☆☆

### Input

```text
10

4 2 4 3 2 4 5 2 4 8
```

### Output

```text
4 4
```

Meaning:

```text
Value = 4

Frequency = 4
```

### Tie Rule

```text
If multiple values have the same maximum frequency,
print the smallest value.
```

---

## Problem 4 — First Repeat Event

### Difficulty

⭐⭐☆☆☆

### Input

```text
7

5 2 8 3 2 5 8
```

### Output

```text
2
```

Important:

```text
Original Traversal Order Matters
```

---

## Problem 5 — Target Pair Counter

### Difficulty

⭐⭐☆☆☆

### Input

```text
6

1 2 3 4 5 6

7
```

Valid pairs:

```text
1 + 6

2 + 5

3 + 4
```

### Output

```text
3
```

---

## Problem 6 — Closest Numbers

### Difficulty

⭐⭐⭐☆☆

### Input

```text
5

20 3 8 10 1
```

### Output

```text
2
```

Requirement:

```text
Do Not Use All-Pair Brute Force
```

Think:

```text
Can Sorting Change the Problem?
```

---

# 26. Mini Contest Workflow

প্রতিটি problem-এর আগে এই template fill করবে:

```text
Problem Name:

What is being asked?

Does original order matter?

Need Count / Order / Pair?

Constraint Observation:

Chosen Representation:

Chosen Pattern:

State Variables:

Pattern Chain:

Complexity:

Edge Cases:
```

Example:

```text
Problem Name:
Target Pair Counter

What is being asked?
Count all index pairs whose sum equals target.

Does original order matter?
No.

Need Count / Order / Pair?
Pair + Count.

Chosen Pattern:
Pair Generation + Counter.

State Variables:
count

Pattern Chain:
Generate Unique Pairs
↓
Check Sum
↓
Match?
↓
count++

Complexity:
O(n²)

Edge Cases:
No valid pair
Multiple valid pairs
Duplicate values
```

---

# 📝 Day 5 Final Assignment

এই assignment complete করলে Day 5 officially finished।

---

## Part A — Concept Questions

নিজের ভাষায় answer করবে:

```text
1. Sorting problem solving-এ কী ধরনের information expose করে?

2. Frequency Array কী information store করে?

3. Sorted Group কী?

4. Group Boundary কীভাবে detect করি?

5. Pair Problem চিনব কীভাবে?

6. কেন j = i + 1 ব্যবহার করি?

7. Original Order এবং Value Order-এর difference কী?

8. Distinct Count-এর দুইটি approach explain করো।

9. Duplicate Detection-এর দুইটি approach explain করো।

10. Mode বের করতে কোন patterns combine হয়?

11. Pair Sum Existence এবং Pair Sum Count-এর difference কী?

12. Minimum Pair Difference sorting-এর পরে কেন সহজ হয়?

13. Small Value Range হলে Frequency কেন useful?

14. Huge Value Range হলে direct Frequency Array কেন problematic?

15. Pattern Combination বলতে কী বোঝো?

16. Constraint algorithm selection-এ কেন important?

17. Flag, Counter, Accumulator, Min Tracking এবং Max Tracking-এর role কী?

18. Sorting করার আগে original order নিয়ে কেন ভাবতে হবে?
```

---

## Part B — Mandatory Coding

নিজে code করবে:

```text
1. Sort Array Ascending

2. Sort Array Descending

3. Frequency of Every Present Value

4. Count Distinct Values

5. Detect Duplicate

6. Count Repeated Values

7. Find Most Frequent Value

8. Find First Repeat Event

9. Print All Unique Pairs

10. Pair Sum Existence

11. Count Target Sum Pairs

12. Minimum Pair Difference Using Sorting
```

---

## Part C — Approach Comparison

Problem:

> Count distinct values.

দুইটি approach লিখবে:

```text
Approach 1:
Sorting

Pattern Chain:

Complexity:

Advantage:

Limitation:
```

এবং:

```text
Approach 2:
Frequency

Pattern Chain:

Complexity:

Advantage:

Limitation:
```

তারপর লিখবে:

```text
When would I choose Sorting?

When would I choose Frequency?
```

---

## Part D — Dry Run

Array:

```text
5 2 5 3 2 8 5
```

Frequency Table:

```text
2 → ?

3 → ?

5 → ?

8 → ?
```

Find:

```text
Distinct Count = ?

Repeated Value Count = ?

Extra Duplicate Copies = ?

Mode = ?

Maximum Frequency = ?
```

---

## Part E — Sorted Group Dry Run

Original:

```text
7 2 7 3 2 2 9
```

Complete:

```text
Sorted:

____________________
```

Group representation:

```text
____________________
```

Then:

```text
Number of Groups = ?

Distinct Count = ?

Repeated Group Count = ?

Largest Group Size = ?

Mode = ?
```

---

## Part F — Pair Dry Run

Array:

```text
2 4 6 8
```

Write all pairs:

```text
(?, ?)

(?, ?)

(?, ?)

(?, ?)

(?, ?)

(?, ?)
```

Target:

```text
10
```

Find:

```text
Valid Pair Count = ?

Valid Pairs:
...
```

---

## Part G — Pattern Selection

শুধু pattern লিখবে, code না।

### 1

> Find smallest repeated value.

```text
Pattern:
...
```

### 2

> Find first repeat event.

```text
Pattern:
...
```

### 3

> Count values appearing exactly `k` times.

```text
Pattern:
...
```

### 4

> Check whether any pair sums to target.

```text
Pattern:
...
```

### 5

> Find minimum difference between any two values.

```text
Pattern:
...
```

### 6

> Find most frequent value.

```text
Pattern:
...
```

---

# 📚 Glossary Final Update

`CP_Dictionary.md`-এ Day 5 শেষে ensure করবে এই terms আছে:

```text
Sorting
Ascending Order
Descending Order
Comparator
Frequency
Frequency Array
Value Range
Representation
Sorted Group
Group Boundary
Duplicate
Distinct Value
Repeated Value
Extra Duplicate
Mode
Tie-Breaking
Original Order
Value Order
Pair
Index Pair
Value Pair
Unordered Pair
Self Pair
Double Counting
Pair Sum
Target Sum
Pair Difference
Search Space
Quadratic Time
Pattern Combination
```

প্রতিটি:

```text
Term:

Simple Meaning:

Small Example:
```

---

# 📚 Pattern Library Final Update

`core_pattern.md`-এ Day 5 শেষে minimum এই sections থাকা উচিত:

```text
1. Traversal Pattern

2. Accumulation Pattern

3. Counting Pattern

4. Maximum Tracking Pattern

5. Minimum Tracking Pattern

6. Search Pattern

7. Flag Pattern

8. Early Exit Pattern

9. Sorting Pattern

10. Frequency Counting Pattern

11. Sorted Group Pattern

12. Group Boundary Pattern

13. Unique Pair Generation Pattern

14. Pair Sum Existence Pattern

15. Pair Counting Pattern
```

---

# 27. Day 5 Reflection

নিজের `Day_5_assignment.md` বা reflection section-এ লিখবে:

```text
1. আজকের সবচেয়ে important concept কী ছিল?

2. Sorting-এর কোন অংশ এখনও confusing?

3. Frequency Array নিজে লিখতে পারি কি?

4. Sorted Group বুঝতে পারছি কি?

5. Pair loop নিজে derive করতে পারি কি?

6. j = i + 1 কেন, নিজের ভাষায় explain করতে পারি কি?

7. কোন problem-এ original order matter করে বুঝতে পারছি কি?

8. Problem দেখে Sorting এবং Frequency-এর মধ্যে choose করতে পারি কি?

9. O(n²) pair brute force কখন dangerous হতে পারে বুঝি কি?

10. Day 5-এর কোন problem আবার practice করা দরকার?
```

---

# 28. Self-Evaluation Score

নিজেকে score দাও:

| Skill                        | Score |
| ---------------------------- | ----: |
| Sorting Mental Model         | `/10` |
| Bubble Sort Understanding    | `/10` |
| Selection Sort Understanding | `/10` |
| `qsort()` Usage              | `/10` |
| Frequency Counting           | `/10` |
| Sorted Group Thinking        | `/10` |
| Duplicate Problems           | `/10` |
| Distinct Count               | `/10` |
| Mode / Frequency Max         | `/10` |
| Pair Generation              | `/10` |
| Pair Sum Problems            | `/10` |
| Pattern Selection            | `/10` |

Rule:

```text
8–10
→ Strong Enough to Continue
```

```text
6–7
→ Continue, but keep revising
```

```text
Below 6
→ Revisit that specific topic
```

সবকিছু perfect হওয়ার জন্য Day 5 repeat করার দরকার নেই।

Specific weak topic identify করে পরে revise করবে।

---

# 29. Day 5 Final Mental Model

আজকের পুরো Day 5 এক diagram-এ:

```text
                         PROBLEM
                            │
                            ▼
                     Understand Question
                            │
                            ▼
                     Check Constraints
                            │
                            ▼
                  What Information Is Needed?
                            │
        ┌───────────────────┼───────────────────┐
        │                   │                   │
        ▼                   ▼                   ▼
   Original Order        Counts              Order
        │                   │                   │
        ▼                   ▼                   ▼
 Raw Traversal         Frequency             Sorting
        │                   │                   │
        │             ┌─────┼─────┐       ┌────┼────┐
        │             │     │     │       │    │    │
        │             ▼     ▼     ▼       ▼    ▼    ▼
        │          Distinct Mode Repeat  Group Adjacent Difference
        │
        └──────────────────────┐
                               │
                               ▼
                      Two Elements Together?
                               │
                               ▼
                              Pair
                               │
                   ┌───────────┼───────────┐
                   │           │           │
                   ▼           ▼           ▼
                  Sum       Difference    Equality
                   │           │           │
                   ▼           ▼           ▼
              Flag/Count    Min Track    Counter
```

---

# 🔥 Day 5 Core Lessons

## Lesson 1

```text
Sorting is not only rearranging data.

Sorting reveals structure.
```

---

## Lesson 2

```text
Frequency Array transforms:

Value
↓
Index

Occurrence Count
↓
Stored State
```

---

## Lesson 3

```text
Sorted Array
↓
Equal Values Become Groups
↓
Group Boundary Becomes Detectable
```

---

## Lesson 4

```text
Two Elements Together
↓
Pair Thinking
```

---

## Lesson 5

```text
Pair Problem
↓
First Understand Brute Force
↓
Understand Search Space
↓
Then Think About Optimization
```

---

## Lesson 6

```text
Same Problem
Can Have Multiple Correct Approaches
```

---

## Lesson 7

```text
Approach Selection
Depends on:

Question
+
Constraint
+
Required Information
```

---

# 🧠 Pattern Evolution — Day 1 to Day 5

তোমার pattern knowledge এখন এই stage-এ:

```text
Day 1
Basic Problem Solving Habit
        ↓
Input / Output
Dry Run
Edge Case
Test Case
```

```text
Day 2
Array Traversal
        ↓
Accumulator
Counter
Maximum
Minimum
Search
Flag
Early Exit
```

```text
Day 3
Digit and Number Patterns
        ↓
Extraction
Construction
Reverse
Palindrome
```

```text
Day 4
Nested Loop and Pattern Thinking
        ↓
Outer Loop
Inner Loop
Grid Thinking
Repeated Work
```

```text
Day 5
Data Representation
        ↓
Sorting
Frequency
Sorted Groups
Pair Thinking
Pattern Selection
Pattern Combination
```

এখন আর শুধু:

```text
Syntax Learning
```

করছো না।

তুমি ধীরে ধীরে শিখছো:

```text
How to Look at a Problem
        ↓
How to Recognize Structure
        ↓
How to Select a Pattern
        ↓
How to Combine Patterns
        ↓
How to Build a Solution
```

---

# ✅ Day 5 Final Completion Checklist

```text
[ ] Sorting-এর purpose বুঝি

[ ] Ascending এবং Descending sorting করতে পারি

[ ] Bubble Sort বুঝি

[ ] Selection Sort বুঝি

[ ] qsort() ব্যবহার করতে পারি

[ ] Comparator-এর role বুঝি

[ ] Frequency Array বানাতে পারি

[ ] freq[x]++ meaning বুঝি

[ ] Value Range check করি

[ ] Distinct Count করতে পারি

[ ] Duplicate detect করতে পারি

[ ] Repeated Values count করতে পারি

[ ] Extra Duplicate Copies count করতে পারি

[ ] Mode বের করতে পারি

[ ] Tie-Breaking rule notice করি

[ ] Sorted Group বুঝি

[ ] Group Boundary detect করতে পারি

[ ] Last Group Problem বুঝি

[ ] Original Order vs Value Order বুঝি

[ ] Pair কী বুঝি

[ ] Index Pair vs Value Pair বুঝি

[ ] i < j invariant বুঝি

[ ] j = i + 1 নিজে explain করতে পারি

[ ] সব unique pair generate করতে পারি

[ ] Self Pair avoid করতে পারি

[ ] Double Counting avoid করতে পারি

[ ] Pair Sum existence solve করতে পারি

[ ] Pair Sum count করতে পারি

[ ] Minimum Pair Difference solve করতে পারি

[ ] Pair brute force O(n²) বুঝি

[ ] Constraint দেখে approach judge করার habit তৈরি করছি

[ ] Sorting vs Frequency choose করতে পারি

[ ] Pattern Chain লিখতে পারি

[ ] Pattern Combination বুঝি

[ ] Mini Contest complete করেছি

[ ] Final Assignment complete করেছি

[ ] Glossary update করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🏁 Day 5 Complete

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
├── ✅ Chapter 5 — Frequency Counting Pattern
│
├── ✅ Chapter 6 — Sorted Array & Frequency Problems
│
├── ✅ Chapter 7 — Pair Thinking Foundation
│
└── ✅ Chapter 8 — Pattern Combination, Final Assignment,
                  Mini Contest & Reflection
```

## 🎯 Day 5 Final Status

```text
Sorting Foundation       → Complete
Frequency Foundation     → Complete
Sorted Group Foundation  → Complete
Pair Thinking Foundation → Complete
Pattern Selection        → Introduced
Pattern Combination      → Introduced
```

Day 5 শেষে তোমার মাথায় এই decision chain থাকা উচিত:

```text
Problem
   ↓
What exactly is being asked?
   ↓
What are the constraints?
   ↓
Does original order matter?
   ↓
Do I need counts?
   ↓
Do I need sorted order?
   ↓
Does the problem involve two elements?
   ↓
Which representation makes the problem easiest?
   ↓
Which state do I need?
   ↓
Build Pattern Chain
   ↓
Code
   ↓
Test
   ↓
Review
```

**Day 5 এখানেই সম্পূর্ণ শেষ।** Day 6-এ যাওয়ার আগে Chapter 8-এর পুরো assignment এক বসায় শেষ করার দরকার নেই; **Mandatory Coding + Mini Contest + Pattern Selection** অংশ complete করলেই Day 5-এর practical objective পূরণ হবে, আর Glossary/Reflection একই দিনের শেষে সংক্ষিপ্তভাবে update করা যাবে।