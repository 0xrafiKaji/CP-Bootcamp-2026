# 📖 CP Dictionary (Part 1)

এই Dictionary পুরো Bootcamp জুড়ে বড় হবে।

আজ প্রথম অংশ দিচ্ছি।

---

# 1. Traversal ⭐⭐⭐⭐⭐

## উচ্চারণ

```
ট্রাভার্সাল (Traversal)
```

---

## সহজ বাংলা

**একটা Collection-এর সব Element একবার করে ঘুরে দেখা।**

---

ধরো তোমার কাছে একটা Array আছে।

```c
5 8 2 9 1
```

তুমি যদি প্রথম থেকে শেষ পর্যন্ত যাও—

```
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

এটাই Traversal.

---

### Code

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

এই Loop-এর কাজ কী?

**Traversal.**

---

### মনে রাখার Trick

Traversal মানে

> **"একটা একটা করে দেখে যাও।"**

---

# 2. Iteration ⭐⭐⭐⭐⭐

অনেকে Traversal আর Iteration এক মনে করে।

এক না।

---

Iteration মানে

> **Loop-এর প্রতিটা ঘোরা।**

---

Example

```c
for (int i = 0; i < 5; i++)
```

Loop

৫ বার ঘুরবে।

প্রতিবার

একটা Iteration.

---

```
Iteration 1

↓

Iteration 2

↓

Iteration 3

↓

Iteration 4

↓

Iteration 5
```

---

### পার্থক্য

Traversal

```
সব Element Visit করা।
```

Iteration

```
Loop-এর একবার Execution।
```

Traversal করতে Iteration লাগে।

---

# 3. Accumulator ⭐⭐⭐⭐⭐

এটা CP-তে খুব Important.

---

ধরো

```
1 2 3 4 5
```

Question

```
সবগুলোর Sum বের করো।
```

তুমি কী করবে?

---

প্রথমে

```
sum = 0
```

---

তারপর

```
sum = 1

↓

sum = 3

↓

sum = 6

↓

sum = 10

↓

sum = 15
```

---

এই

```
sum
```

Variable-এর নাম

**Accumulator.**

---

### কেন?

কারণ

সে Value

**জমা করছে।**

---

আরেকটা Example

Count Even.

```
count = 0
```

Even পেলেই

```
count++
```

---

শেষে

```
count = 7
```

এখানে

```
count
```

ও Accumulator.

---

### মনে রাখো

Accumulator

=

যে Variable

Result জমা রাখে।

---

# 4. Counter ⭐⭐⭐⭐⭐

Counter

Accumulator-এর ছোট ভাই 😄

---

ধরো

```
Even Number Count
```

তুমি করো

```c
count++;
```

---

Counter-এর কাজ

```
গোনা।
```

---

Accumulator-এর কাজ

```
জমা করা।
```

---

Example

```
Sum

↓

Accumulator
```

---

Example

```
Even Count

↓

Counter
```

---

# 5. State ⭐⭐⭐⭐

State মানে

বর্তমান অবস্থা।

---

Example

```
sum = 6
```

এই মুহূর্তে

Program-এর State.

---

তুমি Smart Contract Audit করো।

সেখানে

State Change.

---

CP-তেও

State Change হয়।

---

```
sum = 0

↓

sum = 5

↓

sum = 12

↓

sum = 18
```

State বদলাচ্ছে।

---

# 6. Condition ⭐⭐⭐⭐⭐

Condition মানে

শর্ত।

---

```c
if (age >= 18)
```

এখানে

```
age >= 18
```

Condition.

---

# 7. Comparison ⭐⭐⭐⭐⭐

Comparison মানে

দুইটা জিনিস Compare করা।

---

```c
if (a > b)
```

---

```
>

<

>=

<=

==

!=
```

সব Comparison.

---

# 8. Initialization ⭐⭐⭐⭐⭐

Initialization মানে

শুরুর Value দেওয়া।

---

```c
int sum = 0;
```

---

```
sum = 0
```

Initialization.

---

```c
int max = arr[0];
```

এটাও Initialization.

---

# 9. Update ⭐⭐⭐⭐⭐

Update মানে

Value পরিবর্তন।

---

```
sum = 5

↓

sum = 9
```

Update.

---

Maximum Problem

```
max = 3

↓

max = 8

↓

max = 9
```

Update.

---

# 10. Dry Run ⭐⭐⭐⭐⭐

Dry Run মানে

Code না চালিয়ে

মাথায় চালানো।

---

Example

```
sum = 0

↓

2

↓

5

↓

9
```

---

# 11. Brute Force ⭐⭐⭐⭐⭐

সবচেয়ে Simple Solution.

Fast না হলেও

Correct.

---

Example

Largest Number

```
সবগুলো Check করো।
```

---

# 12. Pattern ⭐⭐⭐⭐⭐

একই ধরনের Problem-এর Common Idea.

---

Example

```
Highest Salary

Largest Number

Longest Word
```

Pattern

```
Maximum
```

---

# 13. Edge Case ⭐⭐⭐⭐⭐

যে Input-এ

অনেকে ভুল করে।

---

Example

Largest Number

```
-5 -2 -10
```

---

Example

```
একটাই Number.
```

---

Example

```
সব Equal.
```

---

# 14. Constraint ⭐⭐⭐⭐

Problem Statement-এ লেখা থাকে

```
1 ≤ N ≤ 100000
```

এটাই Constraint.

---

এটা বলে

কত বড় Input আসতে পারে।

---

# 15. Complexity ⭐⭐⭐⭐⭐

Algorithm কত Slow বা Fast.

---

Example

```
100 Number

↓

100 বার Loop
```

---

Complexity

```
O(n)
```

---

এটা পরে Detail-এ শিখব।

---

# 🎯 এখন সবচেয়ে গুরুত্বপূর্ণ অংশ

এখন থেকে Bootcamp-এ যখন আমি লিখব—

```
Need Traversal

↓

Need Accumulator
```

তখন তুমি এভাবে পড়বে—

```
সব Element একবার দেখো

↓

একটা Variable-এ Result জমাও
```

---

### Example

Problem:

```
Find the sum of an array.
```

Brain Translation:

```
Need Traversal
```

মানে—

> **Array-এর সব Element একবার করে দেখতে হবে।**

তারপর—

```
Need Accumulator
```

মানে—

> **একটা `sum` Variable লাগবে যেখানে প্রতিটা Element যোগ করতে থাকবে।**

শেষে Brain-এ পুরোটা হবে—

```
Need Traversal

↓

Need Accumulator

↓

Need Addition

↓

Print Sum
```