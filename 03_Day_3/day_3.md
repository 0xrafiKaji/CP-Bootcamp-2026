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

# 📘 Day 3 — String Fundamentals & Character Processing

# 🔤 From Array of Numbers to Array of Characters

Day 0-তে তুমি CP Journey শুরু করেছিলে।

Day 1-এ শিখেছ:

```text
Problem Reading
↓
Input / Output Analysis
↓
Constraint Awareness
↓
Manual Simulation
↓
Pattern Thinking
↓
Testing
↓
Debugging
```

Day 2-তে শিখেছ:

```text
Array
↓
Traversal
↓
State
↓
Accumulator
↓
Counter
↓
Maximum / Minimum
↓
Search
↓
Pattern Combination
↓
Dependency
↓
Edge Cases
```

এখন Day 3-তে আমরা যাব:

```text
Numbers
    ↓
Characters
    ↓
Strings
    ↓
Character Classification
    ↓
Frequency
    ↓
Transformation
    ↓
String Comparison
    ↓
Two-Pointer Thinking
```

Day 3-এর সবচেয়ে গুরুত্বপূর্ণ Connection:

```text
Day 2
Array of Integers

int arr[n];

        ↓

Day 3
Array of Characters

char str[n];
```

অর্থাৎ Day 3 সম্পূর্ণ নতুন পৃথিবী না।

Day 2-এর অনেক Mental Model আবার ব্যবহার হবে।

```text
Array Traversal
        ↓
String Traversal

Counting Pattern
        ↓
Vowel / Digit / Character Count

Search Pattern
        ↓
Character Search

Frequency Pattern
        ↓
Character Frequency

Two Index Thinking
        ↓
Palindrome Check
```

---

# 🎯 Day 3 Mission

Day 3 শেষে তোমার লক্ষ্য হবে:

* Character এবং String-এর পার্থক্য বোঝা;
* C String-এর Internal Mental Model বোঝা;
* `'\0'` বা Null Terminator বোঝা;
* String safely input নিতে পারা;
* `scanf`, `fgets`, newline issue বোঝা;
* String manually traverse করতে পারা;
* Character classify করতে পারা;
* Vowel, consonant, digit, space count করতে পারা;
* Uppercase এবং lowercase detect করতে পারা;
* Case conversion করতে পারা;
* Character search করতে পারা;
* Character frequency count করতে পারা;
* Basic String comparison বুঝতে পারা;
* Reverse String-এর Logic বুঝতে পারা;
* Palindrome Pattern চিনতে পারা;
* Two Pointer-এর প্রথম Mental Model তৈরি করা;
* String Problem-এর Edge Case চিনতে পারা;
* Day 2-এর Pattern String Problem-এ reuse করতে পারা।

---

# 📖 Day 3 Chapter Map

Day 3 একদিনে শেষ করার মতো করে সাজানো হবে:

```text
Day 3
│
├── Chapter 1 — String Mental Model
│
├── Chapter 2 — String Input & Output
│
├── Chapter 3 — String Traversal Pattern
│
├── Chapter 4 — Character Classification
│
├── Chapter 5 — Counting Patterns on Strings
│
├── Chapter 6 — Character Search & Frequency
│
├── Chapter 7 — String Transformation
│
├── Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── Chapter 9 — Palindrome Pattern
│
├── Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── Chapter 11 — Pattern Library Update, Assignment & Reflection
```

Day 3-এর Learning Flow:

```text
Understand String
        ↓
Take Input Correctly
        ↓
Traverse Characters
        ↓
Classify Characters
        ↓
Count Information
        ↓
Search Characters
        ↓
Build Frequency
        ↓
Transform Characters
        ↓
Use Two Indices
        ↓
Reverse
        ↓
Palindrome
        ↓
Solve Problems
```

---

# ⏱️ Day 3 Suggested Time Plan

তুমি যেহেতু ১৬ দিনের Bootcamp-এর মধ্যে আছো, Day 3-কে unnecessarily বড় করা হবে না।

Recommended:

| Session        | Focus             | Approx. Time |
| -------------- | ----------------- | -----------: |
| Session 1      | Chapter 1–3       |    1.5 hours |
| Session 2      | Chapter 4–6       |      2 hours |
| Break          | Rest              |    30–60 min |
| Session 3      | Chapter 7–9       |      2 hours |
| Session 4      | Chapter 10–11     |      2 hours |
| Final Practice | Problems + Review |  1–1.5 hours |

Total focused work:

```text
Approximately 7–9 Hours
```

একটানা না।

```text
Learn
↓
Small Practice
↓
Break
↓
Learn
↓
Practice
↓
Review
```

---

# 🧠 Day 3 Master Mental Model

আজকের পুরো Day-এর Mental Model:

```text
STRING
  │
  ├── Structure
  │     ├── Character Array
  │     └── Null Terminator
  │
  ├── Input
  │     ├── Single Word
  │     └── Full Line
  │
  ├── Traversal
  │     └── Character by Character
  │
  ├── Classification
  │     ├── Letter
  │     ├── Digit
  │     ├── Space
  │     ├── Uppercase
  │     ├── Lowercase
  │     ├── Vowel
  │     └── Consonant
  │
  ├── State
  │     ├── Count
  │     ├── Found
  │     ├── Index
  │     └── Frequency Array
  │
  ├── Transformation
  │     ├── Upper → Lower
  │     ├── Lower → Upper
  │     └── Replace Character
  │
  └── Two-Side Processing
        ├── Reverse
        └── Palindrome
```

---

# 📗 Day 3 — Chapter 1

# 🧠 String Mental Model

---

# Chapter Mission

এই Chapter-এর পরে তুমি বুঝবে:

```text
Character কী?

String কী?

String কেন Character Array?

Index কীভাবে কাজ করে?

'\0' কী?

String কোথায় শেষ হয়?

Array Size এবং String Length কি একই?

"Rafi" Memory-তে কীভাবে থাকে?

char এবং char[]-এর পার্থক্য কী?

Single Quote এবং Double Quote-এর পার্থক্য কী?
```

আজ Code-এর আগে Mental Model তৈরি হবে।

কারণ String-এর Mental Model দুর্বল হলে পরে এই Problem-গুলো হয়:

```text
Input নেয় না কেন?

Space-এর পরে String কেটে গেল কেন?

fgets-এর পরে newline কেন?

strlen এক কম/বেশি মনে হচ্ছে কেন?

'\0' কী?

String compare করতে == কাজ করছে না কেন?

Loop কোথায় থামাব?
```

এগুলোর Root অনেক সময় String-এর Internal Structure না বোঝা।

---

# Part 1 — Character কী?

## Lesson 1 — একটি Character

C-তে একটি Character store করতে:

```c
char ch = 'A';
```

এখানে:

```text
Variable Name → ch
Type          → char
Value         → 'A'
```

আরও Example:

```c
char letter = 'R';
char digit = '7';
char symbol = '#';
char space = ' ';
```

খেয়াল করো:

```c
char digit = '7';
```

এবং:

```c
int digit = 7;
```

এক জিনিস না।

---

## Character `'7'` বনাম Number `7`

```text
'7'
```

হলো একটি Character।

আর:

```text
7
```

হলো একটি Integer Number।

Mental Model:

```text
'7'
↓
Character representation
```

```text
7
↓
Numeric value
```

তাই:

```c
char ch = '7';
```

এবং:

```c
int x = 7;
```

দুটোর Meaning আলাদা।

---

# Lesson 2 — Single Quote

একটি Character:

```c
'A'
```

```c
'x'
```

```c
'5'
```

```c
'#'
```

এগুলোতে Single Quote:

```text
' '
```

Mental Rule:

```text
Single Character
        ↓
Single Quote
```

Example:

```c
char ch = 'A';
```

---

# Part 2 — String কী?

## Lesson 3 — একাধিক Character

ধরো তোমার নাম:

```text
RAFI
```

এখানে Character:

```text
R
A
F
I
```

একটি Character হলে:

```c
char ch = 'R';
```

কিন্তু অনেক Character sequence হলে:

```c
char name[] = "RAFI";
```

এটাই String।

Basic Mental Model:

```text
String
=
Sequence of Characters
```

C-এর Context-এ আরও precise Mental Model:

```text
C String
=
Character Array
+
Null Terminator
```

এই দ্বিতীয় অংশটি খুব গুরুত্বপূর্ণ।

---

# Lesson 4 — String হলো Character Array

```c
char name[] = "RAFI";
```

Mental Representation:

| Index | Value  |
| ----: | ------ |
|     0 | `'R'`  |
|     1 | `'A'`  |
|     2 | `'F'`  |
|     3 | `'I'`  |
|     4 | `'\0'` |

Memory Model:

```text
Index     0      1      2      3      4
        ┌────┬────┬────┬────┬──────┐
Value   │ R  │ A  │ F  │ I  │  \0  │
        └────┴────┴────┴────┴──────┘
```

String-এর visible characters:

```text
R A F I
```

Count:

```text
4
```

কিন্তু Memory-তে দরকার:

```text
5 character slots
```

কারণ:

```text
4 visible characters
+
1 null terminator
```

---

# Part 3 — Null Terminator

# Lesson 5 — `'\0'` কী?

C String-এর শেষে থাকে:

```c
'\0'
```

এটাকে বলা হয়:

```text
Null Character
```

বা:

```text
Null Terminator
```

এর কাজ:

> String কোথায় শেষ হয়েছে তা নির্দেশ করা।

Example:

```text
R A F I \0
```

C যখন String process করে, তখন:

```text
R
↓
A
↓
F
↓
I
↓
\0 Found
↓
STOP
```

Mental Model:

```text
Characters
Characters
Characters
...
'\0'
↓
End of String
```

---

# Lesson 6 — `'\0'` এবং `'0'` এক না

এটা খুব গুরুত্বপূর্ণ।

```c
'0'
```

হলো Character Zero।

কিন্তু:

```c
'\0'
```

হলো Null Character।

Compare:

```text
'0'
↓
Visible character: 0
```

```text
'\0'
↓
String termination marker
```

এগুলো completely different।

---

# Lesson 7 — কেন Null Terminator দরকার?

ধরো Memory-তে:

```text
R A F I ? ? ? ? ? ?
```

Computer কীভাবে বুঝবে String কোথায় শেষ?

C String-এর ক্ষেত্রে:

```text
R A F I \0 ? ? ? ? ?
```

এখন Processing Rule:

```text
Read Character
↓
Is it '\0'?
   ↓
 No → Continue
 Yes → Stop
```

তাই অনেক String Loop এমন হতে পারে:

```c
int i = 0;

while (str[i] != '\0')
{
    printf("%c\n", str[i]);
    i++;
}
```

Flow:

```text
str[0] = 'R'
↓
Not '\0'
↓
Process

str[1] = 'A'
↓
Not '\0'
↓
Process

str[2] = 'F'
↓
Not '\0'
↓
Process

str[3] = 'I'
↓
Not '\0'
↓
Process

str[4] = '\0'
↓
STOP
```

---

# Part 4 — Index Mental Model

# Lesson 8 — String-এরও Index আছে

Day 2 Array:

```c
int arr[] = {10, 20, 30, 40};
```

Mental Model:

```text
Index     0      1      2      3
Value    10     20     30     40
```

Day 3 String:

```c
char str[] = "CODE";
```

Mental Model:

```text
Index     0      1      2      3      4
Value     C      O      D      E      \0
```

Visible Character Index:

```text
0 → C
1 → O
2 → D
3 → E
```

Null Terminator:

```text
4 → \0
```

---

# Lesson 9 — Individual Character Access

```c
char str[] = "CODE";
```

তাহলে:

```c
str[0]
```

হলো:

```text
'C'
```

```c
str[1]
```

হলো:

```text
'O'
```

```c
str[2]
```

হলো:

```text
'D'
```

```c
str[3]
```

হলো:

```text
'E'
```

---

## Example Code

```c
#include <stdio.h>

int main()
{
    char str[] = "CODE";

    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);

    return 0;
}
```

Output:

```text
C
O
D
E
```

---

# Lesson 10 — `%c` এবং `%s`

Single Character print:

```c
printf("%c\n", str[0]);
```

পুরো String print:

```c
printf("%s\n", str);
```

Mental Rule:

| Data      | Format Specifier |
| --------- | ---------------- |
| Character | `%c`             |
| String    | `%s`             |

Example:

```c
char ch = 'A';
char str[] = "APPLE";

printf("%c\n", ch);
printf("%s\n", str);
```

Output:

```text
A
APPLE
```

---

# Part 5 — String Literal

# Lesson 11 — Double Quote

একটি Character:

```c
'A'
```

একটি String:

```c
"APPLE"
```

Mental Rule:

```text
'A'
↓
Character
↓
Single Quote
```

```text
"APPLE"
↓
String
↓
Double Quote
```

Wrong Thinking:

```text
'A' and "A" are exactly the same
```

না।

Conceptually:

```text
'A'
↓
One character value
```

আর:

```text
"A"
↓
String containing:
'A'
'\0'
```

Memory:

```text
"A"

Index     0      1
        ┌────┬──────┐
Value   │ A  │  \0  │
        └────┴──────┘
```

---

# Part 6 — String Length vs Array Capacity

# Lesson 12 — সবচেয়ে গুরুত্বপূর্ণ পার্থক্য

ধরো:

```c
char str[100] = "HELLO";
```

এখানে:

```text
Array Capacity = 100
```

কিন্তু String Length:

```text
5
```

কারণ Visible String:

```text
H E L L O
```

Memory-এর beginning:

```text
Index     0    1    2    3    4    5
Value     H    E    L    L    O    \0
```

তারপর Array-তে আরও জায়গা আছে।

Mental Model:

```text
Array Capacity
      ≠
Current String Length
```

Example:

```text
char str[100] = "CAT";

Capacity:
100

String Length:
3
```

---

# Lesson 13 — `sizeof` এবং `strlen` Conceptual Difference

এখন Deep Detail দরকার নেই।

শুধু Mental Difference বুঝো।

```c
char str[100] = "HELLO";
```

Conceptually:

```text
sizeof(str)
↓
Allocated array size in bytes
```

আর:

```text
strlen(str)
↓
Number of characters before '\0'
```

তাই এখানে:

```text
sizeof(str) → 100
strlen(str) → 5
```

এই Difference মনে রাখবে।

---

# Part 7 — Manual String Traversal

# Lesson 14 — Day 2 Traversal আবার ফিরে এসেছে

Day 2:

```c
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

String-এর ক্ষেত্রে:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    printf("%c\n", str[i]);
}
```

Difference:

Array:

```text
Known Size
↓
i < n
```

C String:

```text
End Marker
↓
str[i] != '\0'
```

এখন Pattern:

```text
Start at Index 0
↓
Check Current Character
↓
Is it '\0'?
↓
No
↓
Process Character
↓
Move Next
↓
Repeat
```

---

# Lesson 15 — Manual Length Calculation

Library Function ছাড়া String Length বের করতে চাইলে:

```c
#include <stdio.h>

int main()
{
    char str[] = "HELLO";

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    printf("%d\n", length);

    return 0;
}
```

Dry Run:

```text
length = 0

str[0] = H
not \0
length = 1

str[1] = E
not \0
length = 2

str[2] = L
not \0
length = 3

str[3] = L
not \0
length = 4

str[4] = O
not \0
length = 5

str[5] = \0
STOP
```

Final:

```text
5
```

---

# Pattern Recognition

Problem:

> Find the length of a string manually.

Story বাদ দিলে:

```text
Traverse characters
↓
Until '\0'
↓
Count processed characters
```

Pattern:

```text
String Traversal
+
Counter
```

দেখো, Day 2-এর Counter আবার ফিরে এসেছে।

---

# Part 8 — Character Comparison

# Lesson 16 — Character Compare করা যায়

ধরো:

```c
char ch = 'A';
```

Check:

```c
if (ch == 'A')
{
    printf("Matched\n");
}
```

String Traversal-এর মধ্যে:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'A')
    {
        // match
    }
}
```

Pattern:

```text
String Traversal
↓
Current Character
↓
Compare
↓
Match?
↓
Update State
```

---

# Example — Count `'a'`

```c
#include <stdio.h>

int main()
{
    char str[] = "banana";

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

Output:

```text
3
```

Pattern:

```text
Traversal
+
Character Comparison
+
Counter
```

Day 2 Connection:

```text
Count Target in Integer Array
```

এবং:

```text
Count Target Character in String
```

Structural Pattern একই।

---

# Part 9 — Character Range Mental Model

# Lesson 17 — Letter Range

Basic C Character Problems-এ আমরা প্রায়ই Check করব:

```c
ch >= 'A' && ch <= 'Z'
```

Meaning:

```text
Uppercase English Letter
```

এবং:

```c
ch >= 'a' && ch <= 'z'
```

Meaning:

```text
Lowercase English Letter
```

Digit:

```c
ch >= '0' && ch <= '9'
```

Meaning:

```text
Digit Character
```

Mental Classification:

```text
Character
│
├── 'A' to 'Z'
│      └── Uppercase
│
├── 'a' to 'z'
│      └── Lowercase
│
└── '0' to '9'
       └── Digit
```

এগুলো Chapter 4-এ বিস্তারিত ব্যবহার করব।

এখন শুধু Mental Model তৈরি করো।

---

# Part 10 — Day 2 Patterns Reused in Strings

এটা Day 3-এর সবচেয়ে গুরুত্বপূর্ণ Section-এর একটি।

## Array Problem

> Count even numbers.

```text
Integer Array Traversal
↓
Check Even Condition
↓
Counter
```

## String Problem

> Count vowels.

```text
String Traversal
↓
Check Vowel Condition
↓
Counter
```

Structure একই।

---

## Array Problem

> Find target number.

```text
Traversal
↓
Compare
↓
Found Flag
```

## String Problem

> Find target character.

```text
Traversal
↓
Compare
↓
Found Flag
```

আবার একই।

---

## Array Problem

> Count target frequency.

```text
Traversal
↓
Target Match
↓
Counter
```

## String Problem

> Count `'a'` frequency.

```text
Traversal
↓
Character Match
↓
Counter
```

একই Pattern।

---

# Pattern Transfer Map

| Day 2 Array Pattern | Day 3 String Application      |
| ------------------- | ----------------------------- |
| Traversal           | Character Traversal           |
| Counter             | Vowel/Digit/Space Count       |
| Accumulator         | Character Code-based tasks    |
| Search              | Find Character                |
| First Occurrence    | First Character Position      |
| Last Occurrence     | Last Character Position       |
| Frequency           | Character Frequency           |
| Two States          | Multiple Category Count       |
| Edge Case           | Empty/One-char/Repeated chars |

Mental Model:

```text
New Data Type
      ≠
Everything Starts From Zero
```

বরং:

```text
Old Pattern
+
New Data Representation
=
Faster Learning
```

---

# Part 11 — Visual Mental Model

ধরো:

```c
char word[] = "CODE";
```

Visual:

```text
word
 │
 ↓

Index       0       1       2       3       4
         ┌───────┬───────┬───────┬───────┬───────┐
Value    │  'C'  │  'O'  │  'D'  │  'E'  │ '\0'  │
         └───────┴───────┴───────┴───────┴───────┘
             ↑
             │
            i = 0
```

Traversal:

```text
i = 0
'C'
Process
↓
i = 1
'O'
Process
↓
i = 2
'D'
Process
↓
i = 3
'E'
Process
↓
i = 4
'\0'
STOP
```

---

# Part 12 — Common Beginner Confusions

# Confusion 1

```text
String এবং Character একই।
```

Wrong।

```text
Character:
'A'

String:
"ABC"
```

---

# Confusion 2

```text
'ABC'
```

কে normal C String ভাবা।

String Literal:

```c
"ABC"
```

Character:

```c
'A'
```

---

# Confusion 3

```text
'0' == '\0'
```

Wrong।

```text
'0'
↓
Visible digit character
```

```text
'\0'
↓
String terminator
```

---

# Confusion 4

```text
Array capacity == String length
```

সবসময় না।

```c
char str[100] = "CAT";
```

```text
Capacity: 100
Length: 3
```

---

# Confusion 5

String Loop:

```c
for (int i = 0; i <= strlen(str); i++)
```

Blindly ব্যবহার করা।

এই Loop `'\0'` position-ও process করতে পারে।

কাজের Goal অনুযায়ী Boundary বুঝতে হবে।

Day 3-তে আমরা শুরুতে prefer করব:

```c
for (int i = 0; str[i] != '\0'; i++)
```

কারণ এটা String-এর Mental Model পরিষ্কার করে।

---

# Confusion 6

Character print করতে:

```c
printf("%s", str[i]);
```

Wrong।

কারণ:

```text
str[i]
↓
Single Character
↓
%c
```

Correct:

```c
printf("%c", str[i]);
```

পুরো String:

```c
printf("%s", str);
```

---

# Part 13 — Guided Practice

# Practice 1 — Predict the Output

```c
#include <stdio.h>

int main()
{
    char str[] = "CAT";

    printf("%c\n", str[0]);
    printf("%c\n", str[2]);

    return 0;
}
```

Code run করার আগে লিখবে:

```text
Output:
?
?
```

---

# Practice 2 — Draw the Memory Model

```c
char str[] = "CP";
```

Table Complete করবে:

| Index | Value |
| ----: | ----- |
|     0 | `?`   |
|     1 | `?`   |
|     2 | `?`   |

তারপর:

```text
Visible Length:
?

Required Character Slots:
?
```

---

# Practice 3 — Manual Traversal

String:

```text
HELLO
```

Table Complete করবে:

|  `i` | `str[i]` | Is `'\0'`? | Action  |
| ---: | -------- | ---------- | ------- |
|    0 | `H`      | No         | Process |
|    1 | `?`      | `?`        | `?`     |
|    2 | `?`      | `?`        | `?`     |
|    3 | `?`      | `?`        | `?`     |
|    4 | `?`      | `?`        | `?`     |
|    5 | `?`      | `?`        | `?`     |

---

# Practice 4 — Count Target Character

String:

```text
MISSISSIPPI
```

Target:

```text
I
```

Code না লিখে manually count করবে।

তারপর Pattern লিখবে:

```text
???
↓
???
↓
???
```

---

# Practice 5 — Identify Data Type

নিচের প্রতিটির Conceptual Type লিখবে:

```text
'A'
"ABC"
'7'
7
"7"
'\0'
' '
```

Format:

```text
'A'
→ Character

"ABC"
→ ?

...
```

---

# Part 14 — Chapter 1 Exercises

# Exercise 1 — Character vs String

নিজের ভাষায় Explain করবে:

```text
Character কী?

String কী?

'A' এবং "A"-এর পার্থক্য কী?

'0' এবং '\0'-এর পার্থক্য কী?
```

---

# Exercise 2 — Memory Drawing

এই String-গুলোর Memory Model draw করবে:

```text
"R"
"CAT"
"CODE"
"BANGLADESH"
```

Format:

```text
String: "CAT"

Index     0      1      2      3
Value     C      A      T      \0

Length: 3
Required Slots: 4
```

---

# Exercise 3 — Manual Length

Library Function ছাড়া String Length বের করার Logic নিজের ভাষায় লিখবে।

Required Format:

```text
Goal:
...

State:
...

Initialization:
...

Stop Condition:
...

Update Rule:
...

Pattern:
...

Pipeline:
...
```

---

# Exercise 4 — Count Character

Problem:

> Count how many times `'a'` appears in a string.

নিজে লিখবে:

```text
Input:
...

Output:
...

Pattern:
...

State:
...

Initialization:
...

Condition:
...

Update:
...

Pipeline:
...
```

তারপর C Code লিখবে।

---

# Exercise 5 — First Character Search

Problem:

> Find the first index of character `'x'`.

Code লেখার আগে:

```text
Pattern Combination:
...

State:
...

Initialization:
...

Stop Rule:
...

Missing Character Output:
...
```

তারপর Code লিখবে।

---

# 🧪 Chapter 1 Assignment

# Task 1 — Explain the Memory Model

এই Declaration:

```c
char str[] = "RAFI";
```

এর জন্য লিখবে:

```text
Visible Characters:
...

String Length:
...

Null Terminator Index:
...

Total Required Slots:
...

First Character:
...

Last Visible Character:
...
```

---

# Task 2 — Draw Index Table

```c
char str[] = "SECURITY";
```

নিজে Complete করবে:

| Index | Character |
| ----: | --------- |
|     0 | `?`       |
|     1 | `?`       |
|     2 | `?`       |
|     3 | `?`       |
|     4 | `?`       |
|     5 | `?`       |
|     6 | `?`       |
|     7 | `?`       |
|     8 | `?`       |

শেষ Row-তে `'\0'` থাকবে।

---

# Task 3 — Predict Before Running

```c
#include <stdio.h>

int main()
{
    char str[] = "ARRAY";

    printf("%c\n", str[0]);
    printf("%c\n", str[2]);
    printf("%c\n", str[4]);

    return 0;
}
```

প্রথমে:

```text
Prediction:
...
```

তারপর Compile এবং Run।

শেষে:

```text
Prediction Correct?
Yes / No
```

---

# Task 4 — Manual String Length

নিজে Program লিখবে।

Restriction:

```text
Do not use strlen()
```

Input আপাতত Code-এর মধ্যে রাখতে পারো:

```c
char str[] = "COMPETITIVE";
```

Expected:

```text
11
```

তোমার Analysis:

```text
Pattern:
State:
Initialization:
Stop Condition:
Update Rule:
Complexity:
```

---

# Task 5 — Count a Character

String:

```text
competitiveprogramming
```

Target:

```text
m
```

নিজে:

```text
1. Manual Count
2. Pattern
3. State
4. Pipeline
5. C Code
6. Dry Run
```

করবে।

---

# Task 6 — Search a Character

Problem:

> Check whether character `'z'` exists in a string.

তোমার Analysis:

```text
Pattern:
...

State:
...

Initialization:
...

Stop Condition:
...

When can break be used?
...

Output if found:
...

Output if missing:
...
```

---

# Task 7 — First Index

Problem:

> Find the first index of `'a'`.

String:

```text
bananas
```

Expected:

```text
1
```

নিজে:

```text
Pattern:
State:
Initialization:
Pipeline:
Code:
```

লিখবে।

---

# Task 8 — Last Index

একই String:

```text
bananas
```

Target:

```text
a
```

Expected:

```text
5
```

Compare করবে:

```text
First Occurrence:
Why break?

Last Occurrence:
Why no break?
```

---

# Task 9 — Pattern Transfer

নিচের Pair-গুলোর Structural Similarity Explain করবে।

### Pair A

```text
Count Even Numbers in Integer Array
```

vs

```text
Count Vowels in String
```

### Pair B

```text
Find Target Number
```

vs

```text
Find Target Character
```

### Pair C

```text
Count Target Number Frequency
```

vs

```text
Count Target Character Frequency
```

Format:

```text
Shared Pattern:
...

Different Data:
...

Same State:
...

Same Update Idea:
...
```

---

# Task 10 — Chapter Reflection

নিজের ভাষায় Answer করবে:

```text
1. String সম্পর্কে আগে আমার ধারণা কী ছিল?

2. এখন C String-কে কীভাবে দেখি?

3. '\0' কেন দরকার?

4. Character এবং String-এর পার্থক্য কী?

5. Day 2-এর কোন Pattern Day 3-তে reuse হচ্ছে?

6. String Traversal-এর Stop Condition কী?

7. কোন বিষয়টি এখনো confusing?
```

---

# 🐞 Chapter 1 Mistake Checklist

```text
[ ] Character-এর জন্য double quote ব্যবহার করছি না

[ ] String-এর জন্য single quote ব্যবহার করছি না

[ ] '0' এবং '\0' confuse করছি না

[ ] String length এবং array capacity confuse করছি না

[ ] %c এবং %s-এর পার্থক্য বুঝি

[ ] String traversal-এ '\0' বুঝি

[ ] Index 0 থেকে শুরু হয় মনে আছে

[ ] Last visible character এবং '\0' position আলাদা বুঝি
```

---

# 🧠 Chapter 1 Self-Test

Notes না দেখে উত্তর দাও।

### Question 1

C String কী?

### Question 2

```c
char str[] = "ABC";
```

Memory-তে কয়টি Character Slot দরকার?

### Question 3

`'\0'`-এর কাজ কী?

### Question 4

`'0'` এবং `'\0'` কেন আলাদা?

### Question 5

`'A'` এবং `"A"`-এর পার্থক্য কী?

### Question 6

String-এর individual Character কীভাবে access করবে?

### Question 7

`%c` কখন ব্যবহার করবে?

### Question 8

`%s` কখন ব্যবহার করবে?

### Question 9

```c
char str[100] = "HELLO";
```

এখানে Capacity এবং Length কত?

### Question 10

Library Function ছাড়া String Traversal-এর Stop Condition কী হতে পারে?

### Question 11

Character Count Problem কোন Day 2 Pattern reuse করে?

### Question 12

First Character Occurrence এবং Last Character Occurrence-এর Traversal Rule কীভাবে আলাদা?

---

# 🏁 Chapter 1 Completion Checklist

```text
[ ] Character বুঝি

[ ] String বুঝি

[ ] Character Array Mental Model বুঝি

[ ] Null Terminator বুঝি

[ ] '0' এবং '\0' আলাদা করতে পারি

[ ] Single Quote এবং Double Quote বুঝি

[ ] String Index বুঝি

[ ] Individual Character access করতে পারি

[ ] %c এবং %s ব্যবহার বুঝি

[ ] String Length এবং Capacity আলাদা বুঝি

[ ] '\0' পর্যন্ত manually traverse করতে পারি

[ ] Manual Length Logic বুঝি

[ ] Character Comparison করতে পারি

[ ] Day 2 Pattern-এর সঙ্গে String Pattern connect করতে পারি

[ ] Chapter Exercises complete করেছি

[ ] Chapter Assignment complete করেছি
```

---

# 🎓 Chapter 1 Final Mental Model

Day 3-এর শুরুতে সবচেয়ে গুরুত্বপূর্ণ Transformation:

```text
String
```

কে একটি mysterious special object হিসেবে দেখবে না।

C-তে Basic Mental Model:

```text
String
=
Character Array
+
'\0'
```

Example:

```text
"CODE"
```

Mental Representation:

```text
Index     0      1      2      3      4
          C      O      D      E      \0
```

Processing:

```text
Start at 0
↓
Read Character
↓
Check '\0'
↓
Process
↓
Move Next
↓
Repeat
```

আর Day 2-এর সঙ্গে Connection:

```text
Integer Array
      ↓
Traverse Values
      ↓
Check Condition
      ↓
Update State
```

Day 3:

```text
Character Array
      ↓
Traverse Characters
      ↓
Check Condition
      ↓
Update State
```

অর্থাৎ:

```text
Data Changed
     ↓
Core Problem-Solving Pattern Survived
```

এই Connection বুঝতে পারা Day 3-এর সবচেয়ে বড় advantage।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ⏳ Chapter 2 — String Input & Output
│
├── ⏳ Chapter 3 — String Traversal Pattern
│
├── ⏳ Chapter 4 — Character Classification
│
├── ⏳ Chapter 5 — Counting Patterns on Strings
│
├── ⏳ Chapter 6 — Character Search & Frequency
│
├── ⏳ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 1 এখানেই শেষ।**

পরের Chapter-এ সবচেয়ে গুরুত্বপূর্ণ practical অংশ হবে: **`scanf("%s")`, `fgets()`, space-containing input, input buffer এবং newline handling**—কারণ String Problem-এ Logic ঠিক থাকার পরেও Input Handling-এর কারণে Beginner-দের অনেক ভুল হয়।

---

# 📘 Day 3 — Chapter 2

# ⌨️ String Input & Output in C

## From “Code Works” to “Input Works Correctly”

Day 3 — Chapter 1-এ তুমি String-এর Internal Mental Model শিখেছ:

```text
C String
=
Character Array
+
'\0'
```

তুমি আরও শিখেছ:

```text
Character
↓
String
↓
Character Array
↓
Index
↓
Null Terminator
↓
Traversal
```

এখন আমাদের পরের সমস্যা:

> **String তৈরি করলাম, কিন্তু User বা Online Judge থেকে Input নেব কীভাবে?**

Integer Input সহজ ছিল:

```c
int x;

scanf("%d", &x);
```

Array Input:

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
```

কিন্তু String Input-এর ক্ষেত্রে কয়েকটি নতুন বিষয় আসে:

```text
Single Character
Single Word
Full Line
Space
Newline
Input Buffer
Leftover Character
```

এই Chapter-এর লক্ষ্য শুধু কয়েকটি Function মুখস্থ করা না।

আমরা বুঝব:

```text
What Input Do I Need?
        ↓
Character?
Word?
Full Line?
        ↓
Choose Correct Input Method
        ↓
Understand What It Reads
        ↓
Handle Newline If Needed
        ↓
Verify Input
```

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* একটি Character Input নিতে;
* একটি Word Input নিতে;
* Space-সহ Full Line Input নিতে;
* `%c` এবং `%s` Input-এর পার্থক্য বুঝতে;
* String Input-এ `&` কেন সাধারণত লাগে না বুঝতে;
* `scanf("%s", str)` কোথায় থামে বুঝতে;
* `fgets()` কীভাবে কাজ করে বুঝতে;
* `fgets()`-এর Size Argument বুঝতে;
* Input Buffer-এর Basic Mental Model তৈরি করতে;
* leftover newline problem বুঝতে;
* `" %c"` কেন ব্যবহার করা হয় বুঝতে;
* `strcspn()` দিয়ে trailing newline remove করতে;
* Input Method Problem অনুযায়ী নির্বাচন করতে;
* CP Problem-এ unnecessary input complexity avoid করতে;
* common String Input bugs debug করতে।

---

# 📖 Chapter Map

```text
Chapter 2
│
├── Part 1  — Input Type Recognition
├── Part 2  — Single Character Input
├── Part 3  — Single Word Input
├── Part 4  — Why String Input Uses No &
├── Part 5  — Full Line Input
├── Part 6  — fgets() Mental Model
├── Part 7  — Newline Character Problem
├── Part 8  — Input Buffer Mental Model
├── Part 9  — Mixed Input Problems
├── Part 10 — Safe Input Habits for CP
├── Part 11 — Common Bugs
├── Part 12 — Guided Practice
├── Part 13 — Exercises
└── Part 14 — Assignment & Reflection
```

---

# 🧠 Chapter 2 Master Mental Model

String Input দেখলেই আগে Function চিন্তা করবে না।

প্রথম Question:

```text
What Kind of Input?
        │
        ├── One Character
        │       ↓
        │      %c
        │
        ├── One Word
        │       ↓
        │      %s
        │
        └── Full Line
                ↓
              fgets()
```

Example:

```text
Input:
A
```

একটি Character।

---

```text
Input:
Rafi
```

একটি Word।

---

```text
Input:
Competitive Programming
```

একটি Full Line, কারণ মাঝখানে Space আছে।

Mental Rule:

```text
Input Shape
    ↓
Choose Input Method
```

---

# Part 1 — Input Type Recognition

# Lesson 1 — সব String Input একই না

ধরো Problem A:

> Read a character.

Input:

```text
A
```

দরকার:

```c
char ch;

scanf("%c", &ch);
```

---

Problem B:

> Read a word.

Input:

```text
security
```

দরকার হতে পারে:

```c
char word[100];

scanf("%99s", word);
```

---

Problem C:

> Read a sentence.

Input:

```text
I love competitive programming
```

দরকার হতে পারে:

```c
char line[200];

fgets(line, sizeof(line), stdin);
```

তাই:

```text
Character Input
      ≠
Word Input
      ≠
Line Input
```

---

# Lesson 2 — Problem Statement-এর Signal চিনো

Problem-এ যদি লেখা থাকে:

```text
Read a character
```

Signal:

```text
Single Character
↓
%c
```

যদি লেখা থাকে:

```text
Read a word
```

বা Input Guarantee করে:

```text
The string contains no spaces
```

Signal:

```text
Single Token
↓
%s
```

যদি লেখা থাকে:

```text
Read a line
Read a sentence
String may contain spaces
```

Signal:

```text
Full Line
↓
fgets()
```

এটা Pattern Recognition-এর অংশ।

```text
Statement Signal
↓
Input Structure
↓
Input Tool
```

---

# Part 2 — Single Character Input

# Lesson 3 — `%c`

একটি Character Input:

```c
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    printf("%c\n", ch);

    return 0;
}
```

Input:

```text
A
```

Output:

```text
A
```

এখানে:

```text
%c
↓
Read one character
```

এবং:

```text
&ch
↓
Address of character variable
```

---

# Lesson 4 — `%c` Whitespace-ও পড়তে পারে

এটা খুব গুরুত্বপূর্ণ।

`%c`:

```text
Space
Newline
Tab
Letter
Digit
Symbol
```

সবকেই Character হিসেবে পড়তে পারে।

ধরো:

```c
int n;
char ch;

scanf("%d", &n);
scanf("%c", &ch);
```

Input:

```text
10
A
```

তুমি ভাবছ:

```text
n  = 10
ch = A
```

কিন্তু `ch` অনেক সময় `'\n'` হয়ে যেতে পারে।

কেন?

Input Stream conceptually:

```text
1 0 \n A \n
```

প্রথম:

```c
scanf("%d", &n);
```

পড়ে:

```text
10
```

কিন্তু newline থেকে যায়।

Conceptually:

```text
\n A \n
↑
Next unread character
```

তারপর:

```c
scanf("%c", &ch);
```

একটি Character নেয়।

সামনে কী আছে?

```text
\n
```

তাই:

```text
ch = '\n'
```

---

# Lesson 5 — `" %c"` কেন?

Solution:

```c
scanf(" %c", &ch);
```

খেয়াল করো:

```text
"%c"
```

এবং:

```text
" %c"
```

এক না।

দ্বিতীয়টির শুরুতে Space আছে।

```c
scanf(" %c", &ch);
```

এর Mental Model:

```text
Skip leading whitespace
        ↓
Read next character
```

তাই Mixed Input-এ:

```c
int n;
char ch;

scanf("%d", &n);
scanf(" %c", &ch);
```

সাধারণ CP input-এর জন্য useful।

---

## Important Nuance

এই Rule blindly ব্যবহার করবে না।

যদি Problem-এ সত্যিই Space Character input হিসেবে দরকার হয়, তাহলে:

```c
scanf(" %c", &ch);
```

leading whitespace skip করবে।

তখন সেটা Goal-এর জন্য ভুল হতে পারে।

Mental Rule:

```text
Do I want whitespace itself?
        │
        ├── No
        │    ↓
        │  " %c" useful
        │
        └── Yes
             ↓
          Do not skip it blindly
```

---

# Part 3 — Single Word Input

# Lesson 6 — `%s`

একটি Word Input:

```c
#include <stdio.h>

int main()
{
    char word[100];

    scanf("%99s", word);

    printf("%s\n", word);

    return 0;
}
```

Input:

```text
competitive
```

Output:

```text
competitive
```

এখানে:

```text
%s
↓
Read a whitespace-delimited string
```

---

# Lesson 7 — `%s` কোথায় থামে?

`scanf("%s", str)` whitespace পর্যন্ত পড়ে।

Whitespace বলতে সাধারণভাবে:

```text
Space
Tab
Newline
```

ধরো Input:

```text
hello world
```

Code:

```c
char str[100];

scanf("%99s", str);

printf("%s\n", str);
```

Output:

```text
hello
```

কারণ:

```text
Input
hello world
     ↑
   Space
     ↓
 scanf("%s") stops
```

Mental Model:

```text
%s
↓
Skip leading whitespace
↓
Read non-whitespace characters
↓
Whitespace found
↓
Stop
```

---

# Lesson 8 — `%s` মানেই Full String Input না

Beginner confusion:

```text
String variable
↓
Always use %s
```

এটা ভুল Mental Model।

Correct:

```text
String without spaces
        ↓
%s can work
```

```text
String may contain spaces
        ↓
Need line-based input
```

Example:

Input:

```text
C Programming Language
```

যদি:

```c
scanf("%99s", str);
```

তাহলে শুধু:

```text
C
```

পড়বে।

তাই Input Requirement আগে বুঝতে হবে।

---

# Lesson 9 — `%99s` কেন?

ধরো:

```c
char str[100];
```

তাহলে:

```c
scanf("%99s", str);
```

লেখা safer।

কারণ String-এর শেষে `'\0'`-এর জন্য জায়গা দরকার।

Conceptually:

```text
Array Capacity = 100

Maximum visible characters read = 99

Remaining slot = '\0'
```

Mental Rule:

```text
char str[N];

scanf("%N-1s", str);
```

অবশ্য C Format String-এ `N-1` expression লেখা যায় না; actual number লিখতে হয়।

Example:

```c
char str[20];

scanf("%19s", str);
```

---

# Part 4 — String Input-এ `&` কেন লাগে না?

# Lesson 10 — Beginner-এর খুব Common Question

Integer Input:

```c
int x;

scanf("%d", &x);
```

Character Input:

```c
char ch;

scanf("%c", &ch);
```

কিন্তু String:

```c
char str[100];

scanf("%99s", str);
```

এখানে:

```text
&str
```

কেন লিখলাম না?

---

## Mental Model

ধরো:

```c
char str[100];
```

Expression হিসেবে অনেক Context-এ:

```text
str
```

array-এর first element-এর address-এর মতো ব্যবহৃত হয়।

Conceptually:

```text
str
↓
address of str[0]
```

অর্থাৎ:

```text
str
```

`scanf`-কে character storage-এর শুরু কোথায় তা জানাতে পারে।

তাই:

```c
scanf("%99s", str);
```

---

## Compare

Single Integer:

```text
x
↓
value
```

তাই address দিতে:

```c
&x
```

---

Character Array:

```text
str
↓
in this context, usable as pointer to first element
```

তাই:

```c
scanf("%99s", str);
```

---

## Beginner Rule

এখনের জন্য:

```text
Single Variable Input
int / char / float
        ↓
Usually &
```

```text
Character Array String Input
        ↓
Use array name
        ↓
No extra & needed
```

Pointers Chapter-এ এর deeper reason আরও পরিষ্কার হবে।

---

# Part 5 — Full Line Input

# Lesson 11 — Space-সহ Input

Problem:

> Read a full sentence.

Input:

```text
I love C programming
```

`scanf("%s")` যথেষ্ট না।

আমাদের দরকার:

```c
fgets()
```

Basic Example:

```c
#include <stdio.h>

int main()
{
    char line[100];

    fgets(line, sizeof(line), stdin);

    printf("%s", line);

    return 0;
}
```

Input:

```text
I love C programming
```

Output:

```text
I love C programming
```

---

# Lesson 12 — `fgets()` Structure

```c
fgets(line, sizeof(line), stdin);
```

এখানে তিনটি অংশ:

```text
fgets(
    destination,
    maximum buffer size,
    input stream
)
```

আমাদের Example:

```text
line
↓
Where to store?
```

```text
sizeof(line)
↓
How much space is available?
```

```text
stdin
↓
Read from standard input
```

Mental Model:

```text
Keyboard / Judge Input
        ↓
      stdin
        ↓
      fgets
        ↓
   char array
```

---

# Part 6 — `fgets()` Mental Model

# Lesson 13 — `fgets()` কতটুকু পড়ে?

ধরো:

```c
char str[10];

fgets(str, sizeof(str), stdin);
```

এখানে buffer capacity:

```text
10
```

`fgets()` সর্বোচ্চ এমনভাবে পড়ে যেন শেষে `'\0'` রাখার জায়গা থাকে।

অর্থাৎ buffer full হলে conceptually:

```text
Up to 9 input characters
+
'\0'
```

তবে newline আগে পাওয়া গেলে সেটিও String-এর মধ্যে থাকতে পারে।

---

# Lesson 14 — `fgets()` newline রাখতে পারে

Input:

```text
HELLO
```

User Enter চাপল।

Conceptual input:

```text
H E L L O \n
```

যদি Buffer-এ জায়গা থাকে, `fgets()` String হতে পারে:

```text
H E L L O \n \0
```

তাই:

```text
Visible typed text length = 5
```

কিন্তু:

```c
strlen(str)
```

হতে পারে:

```text
6
```

কারণ:

```text
H
E
L
L
O
\n
```

সবগুলো `'\0'`-এর আগে।

এটা Day 3-এর খুব গুরুত্বপূর্ণ Bug Source।

---

# Lesson 15 — Newline কি সবসময় থাকবে?

না।

এখানে careful হতে হবে।

যদি:

* line buffer-এর মধ্যে fit করে;
* এবং newline read হয়;

তাহলে newline String-এর মধ্যে থাকবে।

কিন্তু input line buffer-এর চেয়ে বড় হলে, current `fgets()` call newline পর্যন্ত পৌঁছাতেও নাও পারে।

তাই Rule:

```text
fgets() may keep newline if it reads it
```

এটা:

```text
fgets() always adds newline
```

এর চেয়ে বেশি accurate Mental Model।

---

# Part 7 — Newline Remove করা

# Lesson 16 — `strcspn()` Method

আমরা ব্যবহার করতে পারি:

```c
#include <string.h>
```

তারপর:

```c
str[strcspn(str, "\n")] = '\0';
```

Full Example:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("%s\n", str);

    return 0;
}
```

---

# Lesson 17 — এই Line আসলে কী করে?

```c
str[strcspn(str, "\n")] = '\0';
```

এটাকে একবারে magic line হিসেবে দেখবে না।

Break করি।

```c
strcspn(str, "\n")
```

conceptually খুঁজে:

> `str`-এর শুরু থেকে প্রথম newline character-এর position পর্যন্ত কত character আছে?

ধরো:

```text
str = "HELLO\n"
```

Index:

```text
0 → H
1 → E
2 → L
3 → L
4 → O
5 → \n
6 → \0
```

তাহলে:

```c
strcspn(str, "\n")
```

return করবে:

```text
5
```

তাই:

```c
str[5] = '\0';
```

Before:

```text
H E L L O \n \0
```

After:

```text
H E L L O \0
```

Mental Pipeline:

```text
Find newline index
↓
Replace newline
↓
Put '\0'
↓
String ends there
```

---

# Lesson 18 — যদি Newline না থাকে?

এই idiom-এর একটি useful property আছে।

```c
str[strcspn(str, "\n")] = '\0';
```

যদি newline না পাওয়া যায়, `strcspn()` current String length return করে।

তখন assignment existing terminating `'\0'` position-এই `'\0'` বসায়।

তাই common line cleanup-এর জন্য এটি convenient।

---

# Part 8 — Input Buffer Mental Model

# Lesson 19 — Buffer বলতে এখানে কী বুঝব?

এখন low-level internal implementation শেখার দরকার নেই।

Beginner Mental Model:

```text
Input Characters
        ↓
Waiting to be consumed
        ↓
Input Function reads some part
        ↓
Unread characters remain
```

ধরো Input:

```text
10
APPLE
```

Conceptually:

```text
1 0 \n A P P L E \n
```

প্রথম:

```c
scanf("%d", &n);
```

পড়ে:

```text
1 0
```

remaining conceptually:

```text
\n A P P L E \n
```

এরপর Input Function কীভাবে whitespace handle করে, তার উপর Result নির্ভর করবে।

---

# Lesson 20 — সব `scanf` Specifier একইভাবে whitespace handle করে না

এটা মনে রাখা দরকার।

For common CP usage:

```text
%d
%s
```

leading whitespace skip করে।

কিন্তু:

```text
%c
```

next character directly পড়ে, whitespace হলেও।

তাই:

```c
scanf("%d", &n);
scanf("%s", str);
```

অনেক ক্ষেত্রে ঠিক কাজ করবে।

কিন্তু:

```c
scanf("%d", &n);
scanf("%c", &ch);
```

এখানে leftover newline problem হতে পারে।

তাই:

```c
scanf(" %c", &ch);
```

প্রায়ই দরকার হয়।

---

# Part 9 — Mixed Input Problems

# Lesson 21 — Integer তারপর Word

Example:

```c
#include <stdio.h>

int main()
{
    int n;
    char word[100];

    scanf("%d", &n);
    scanf("%99s", word);

    printf("%d\n", n);
    printf("%s\n", word);

    return 0;
}
```

Input:

```text
5
hello
```

এখানে `%s` leading whitespace skip করে।

তাই এটা সাধারণত ঠিক কাজ করে।

---

# Lesson 22 — Integer তারপর Character

Potential issue:

```c
int n;
char ch;

scanf("%d", &n);
scanf("%c", &ch);
```

Better for non-whitespace target character:

```c
scanf("%d", &n);
scanf(" %c", &ch);
```

---

# Lesson 23 — Integer তারপর `fgets()`

এখানে Beginner-দের সবচেয়ে বেশি confusion হয়।

Problematic Example:

```c
#include <stdio.h>

int main()
{
    int n;
    char line[100];

    scanf("%d", &n);

    fgets(line, sizeof(line), stdin);

    printf("%s", line);

    return 0;
}
```

Input:

```text
10
Hello World
```

কি হতে পারে?

```text
scanf("%d")
↓
Reads 10
↓
newline remains
↓
fgets()
↓
Reads that newline
↓
line appears empty
```

---

# Lesson 24 — Simple Cleanup Strategy

একটি simple controlled case-এ:

```c
scanf("%d", &n);
getchar();
fgets(line, sizeof(line), stdin);
```

এখানে:

```c
getchar();
```

একটি Character consume করে।

যদি আমরা জানি next unread character ঠিক newline, তাহলে এটা কাজ করতে পারে।

কিন্তু blindly:

```c
getchar();
```

দিয়ে সব input সমস্যা solve করা উচিত না।

কারণ Input Format ভিন্ন হলে next character অন্য কিছু হতে পারে।

Mental Rule:

```text
Understand what remains
↓
Then consume intentionally
```

---

# Lesson 25 — Line-Based Strategy

যদি Problem heavily line-based হয়, একটি alternative approach:

```text
Read lines consistently
↓
Parse if necessary
```

কিন্তু আমাদের বর্তমান CP Level-এ সবকিছু line-based করার দরকার নেই।

আমরা simple rule রাখব:

```text
Numbers
↓
scanf

Single word
↓
scanf with bounded %s

Full line
↓
fgets

Mixed scanf + fgets
↓
Handle pending newline carefully
```

---

# Part 10 — Safe Input Habits for CP

# Lesson 26 — Contest-এ Input Requirement Follow করো

CP-তে unnecessary complexity avoid করতে হবে।

যদি Problem বলে:

```text
The string contains only lowercase English letters
```

এবং spaces নেই, তাহলে:

```c
scanf("%s", str);
```

বা bounded form:

```c
scanf("%1000s", str);
```

constraint অনুযায়ী যথেষ্ট হতে পারে।

তখন শুধু “`fgets` safer” শুনে unnecessarily complicated input handling করার দরকার নেই।

---

# Lesson 27 — Constraint দেখে Array Size

Problem:

```text
1 ≤ |s| ≤ 100
```

তাহলে minimum storage conceptually:

```text
100 visible characters
+
1 null terminator
=
101
```

তাই:

```c
char s[101];
```

একটি natural choice।

Mental Rule:

```text
Maximum String Length = N
↓
Need at least N + 1 char slots
```

---

# Lesson 28 — Variable Length Array নিয়ে Careful হও

তুমি লিখতে পারো:

```c
int n;
scanf("%d", &n);

char str[n + 1];
```

C-এর কিছু standard/version context-এ VLA supported।

কিন্তু beginner CP-তে constraints জানা থাকলে fixed maximum buffer অনেক সময় simpler:

```c
char str[1001];
```

যদি:

```text
|s| ≤ 1000
```

এতে Input Logic সহজ থাকে।

---

# Lesson 29 — Output Formatting

String print:

```c
printf("%s\n", str);
```

Character print:

```c
printf("%c\n", ch);
```

Multiple characters manually:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    printf("%c", str[i]);
}

printf("\n");
```

---

# Lesson 30 — `puts()`

Basic String output-এর জন্য:

```c
puts(str);
```

এটাও ব্যবহার করা যায়।

Example:

```c
char str[] = "HELLO";

puts(str);
```

Output:

```text
HELLO
```

`puts()` শেষে newline দেয়।

তবে Bootcamp-এর শুরুতে আমরা বেশি ব্যবহার করব:

```c
printf("%s\n", str);
```

কারণ output formatting control পরিষ্কার থাকে।

---

# Part 11 — Common Bugs

# 🐞 Bug 1 — Space-containing line with `%s`

Code:

```c
char str[100];

scanf("%99s", str);
```

Input:

```text
hello world
```

Expected:

```text
hello world
```

Actual stored word:

```text
hello
```

Root Cause:

```text
%s stops at whitespace
```

Correct Pattern:

```text
Full Line
↓
fgets()
```

---

# 🐞 Bug 2 — Wrong Format Specifier

```c
char ch = 'A';

printf("%s\n", ch);
```

Wrong।

কারণ:

```text
ch
↓
Single Character
```

Need:

```c
printf("%c\n", ch);
```

---

# 🐞 Bug 3 — String Input with Tiny Buffer

```c
char str[5];

scanf("%s", str);
```

যদি Input:

```text
security
```

তাহলে buffer overflow risk।

Better Mental Model:

```text
Constraint
↓
Maximum Length
↓
Buffer Size
↓
Input Width
```

---

# 🐞 Bug 4 — Forgetting `'\0'` Space

Maximum input length:

```text
100
```

Wrong:

```c
char str[100];
```

যদি সত্যিই 100 visible character store করতে হয়।

Need:

```c
char str[101];
```

কারণ:

```text
100 characters
+
'\0'
```

---

# 🐞 Bug 5 — Mixed `%d` and `%c`

```c
int n;
char ch;

scanf("%d", &n);
scanf("%c", &ch);
```

Potential issue:

```text
ch receives newline
```

For non-whitespace character input:

```c
scanf(" %c", &ch);
```

---

# 🐞 Bug 6 — `fgets()` “Skipped Input”

```c
scanf("%d", &n);
fgets(line, sizeof(line), stdin);
```

Possible Root Cause:

```text
Pending newline
↓
fgets reads it
```

Debugging Question:

```text
What characters remain unread before fgets()?
```

---

# 🐞 Bug 7 — `strlen()` Unexpectedly One More

Input via `fgets()`:

```text
HELLO + Enter
```

Possible stored String:

```text
H E L L O \n \0
```

তাই:

```text
strlen = 6
```

যদি newline remove করো:

```c
str[strcspn(str, "\n")] = '\0';
```

তারপর:

```text
strlen = 5
```

---

# 🐞 Bug 8 — Blindly Using `gets()`

পুরোনো Tutorial-এ দেখতে পারো:

```c
gets(str);
```

এটা ব্যবহার করবে না।

Modern C-তে `gets()` removed এবং unsafe।

আমাদের Rule:

```text
Single Word
↓
bounded scanf("%Ns", str)
```

```text
Full Line
↓
fgets()
```

---

# Part 12 — Guided Practice

# Practice 1 — Choose Input Method

নিচের Problem-গুলোর জন্য Method select করো।

### A

> Read one uppercase letter.

```text
Method:
?
```

---

### B

> Read a lowercase word with no spaces.

```text
Method:
?
```

---

### C

> Read a sentence that may contain spaces.

```text
Method:
?
```

---

### D

> Read an integer and then one non-whitespace character.

```text
Method:
?
```

---

### E

> Read a full name containing spaces.

```text
Method:
?
```

---

# Practice 2 — Predict the Result

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    printf("%s\n", str);

    return 0;
}
```

Input:

```text
competitive programming
```

Predict:

```text
Output:
?
```

তারপর Explain:

```text
Why:
...
```

---

# Practice 3 — Predict the Character

```c
#include <stdio.h>

int main()
{
    int n;
    char ch;

    scanf("%d", &n);
    scanf("%c", &ch);

    printf("%d\n", n);
    printf("[%c]\n", ch);

    return 0;
}
```

Input:

```text
10
A
```

Answer:

```text
n:
?

ch:
?

Why:
?
```

---

# Practice 4 — Fix the Input

Problem:

> Read age and then grade letter.

Input:

```text
20
A
```

Buggy Code:

```c
int age;
char grade;

scanf("%d", &age);
scanf("%c", &grade);
```

তুমি Fix করবে।

তারপর লিখবে:

```text
Bug:
...

Fix:
...

Reason:
...
```

---

# Practice 5 — `fgets()` Memory Drawing

Input:

```text
HELLO
```

Assume newline is read and buffer is large enough।

Draw:

```text
Index:
0 1 2 3 4 5 6

Value:
? ? ? ? ? ? ?
```

তারপর newline removal-এর পরে আবার draw করবে।

---

# Practice 6 — Select Buffer Size

Constraint:

```text
1 ≤ |s| ≤ 500
```

Answer:

```text
Minimum char array size:
?

Why:
?
```

---

# Part 13 — Exercises

# Exercise 1 — Character Input

একটি Program লিখবে:

> Read one character and print it.

Input:

```text
Z
```

Output:

```text
You entered: Z
```

Required Analysis:

```text
Input Type:
Format Specifier:
Variable Type:
Output Format:
```

---

# Exercise 2 — Word Input

Problem:

> Read a username containing no spaces and print it.

Input:

```text
0xrafi
```

Output:

```text
Username: 0xrafi
```

Requirement:

```text
Use a bounded %s width appropriate for your buffer.
```

---

# Exercise 3 — Full Line Input

Problem:

> Read a sentence and print it.

Input:

```text
I am learning competitive programming
```

Output:

```text
I am learning competitive programming
```

Requirement:

```text
Use fgets()
```

তারপর newline remove করবে।

---

# Exercise 4 — Compare `%s` and `fgets()`

একই Input:

```text
C programming is fun
```

দুটি আলাদা Program বানাও।

Program A:

```text
Use %s
```

Program B:

```text
Use fgets()
```

তারপর লিখবে:

```text
Program A stored:
...

Program B stored:
...

Reason for difference:
...
```

---

# Exercise 5 — Integer + Character

Input:

```text
5
X
```

Program লিখবে যাতে output:

```text
Number: 5
Character: X
```

তারপর Explain করবে:

```text
Why did I use " %c" instead of "%c"?
```

---

# Exercise 6 — Integer + Full Line

Input:

```text
25
Competitive Programming Bootcamp
```

Output:

```text
Number: 25
Text: Competitive Programming Bootcamp
```

নিজে solve করবে।

Analysis:

```text
First input method:
...

Second input method:
...

Possible leftover:
...

How I handled it:
...
```

---

# Exercise 7 — Newline Investigation

Program:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    printf("Length before cleanup: %zu\n", strlen(str));

    str[strcspn(str, "\n")] = '\0';

    printf("Length after cleanup: %zu\n", strlen(str));

    return 0;
}
```

Input:

```text
HELLO
```

Run করে Observation লিখবে।

```text
Before:
...

After:
...

Why:
...
```

---

# Exercise 8 — Input Method Decision Table

নিজে Table Complete করবে।

| Input Requirement     | Method | Reason |
| --------------------- | ------ | ------ |
| One character         | `?`    | `?`    |
| One word              | `?`    | `?`    |
| Sentence              | `?`    | `?`    |
| Number then character | `?`    | `?`    |
| Number then line      | `?`    | `?`    |

---

# Part 14 — Chapter Assignment

# 📝 Task 1 — Input Classification

নিচের প্রতিটির জন্য Input Category এবং Method লিখবে।

```text
1. A
2. hello
3. hello world
4. 12345
5. x
6. Competitive Programming
7. security_researcher
8. I love C
```

Format:

```text
Input:
hello world

Category:
Full Line

Method:
fgets()

Reason:
Contains whitespace.
```

---

# 📝 Task 2 — Explain `%c`

নিজের ভাষায় লিখবে:

```text
What does %c read?

Can it read whitespace?

Why can newline become input?

When is " %c" useful?

When can " %c" be wrong for the problem?
```

---

# 📝 Task 3 — Explain `%s`

নিজের ভাষায়:

```text
What does %s read?

Where does it stop?

Can it read a full sentence?

Why use a field width?

What buffer size is needed for N visible characters?
```

---

# 📝 Task 4 — Explain `fgets()`

এই Call:

```c
fgets(str, sizeof(str), stdin);
```

Breakdown করবে:

```text
str:
...

sizeof(str):
...

stdin:
...

Possible newline behavior:
...

Null terminator behavior:
...
```

---

# 📝 Task 5 — Debug the Code

Code:

```c
#include <stdio.h>

int main()
{
    int age;
    char name[100];

    scanf("%d", &age);

    fgets(name, sizeof(name), stdin);

    printf("Age: %d\n", age);
    printf("Name: %s\n", name);

    return 0;
}
```

Input:

```text
20
Rafi Kaji
```

তুমি লিখবে:

```text
Expected:
...

Possible Actual:
...

Root Cause:
...

Remaining Input Before fgets:
...

Fix Strategy:
...
```

তারপর Correct Code লিখবে।

---

# 📝 Task 6 — Newline Removal Dry Run

Input:

```text
CODE
```

Assume:

```text
C O D E \n \0
```

এই Expression dry run করো:

```c
str[strcspn(str, "\n")] = '\0';
```

Required:

```text
Newline Index:
...

strcspn Return:
...

Assignment Becomes:
str[?] = '\0';

Before:
...

After:
...
```

---

# 📝 Task 7 — Build an Input Decision Tree

নিজের `Day_3_assignment.md`-এ এই Tree Complete করবে:

```text
Need Input
│
├── Single Character?
│       │
│       └── ...
│
├── Single Word?
│       │
│       └── ...
│
└── Full Line?
        │
        └── ...
```

এর নিচে Mixed Input যোগ করবে:

```text
Previous Input Was scanf?
        ↓
Next Input Is fgets?
        ↓
Check for pending newline
        ↓
Handle intentionally
```

---

# 📝 Task 8 — Write Three Programs

তিনটি আলাদা File বানাবে।

Suggested Structure:

```text
Day_3/
└── Assignment_and_Exercise/
    ├── char_input.c
    ├── word_input.c
    └── line_input.c
```

### `char_input.c`

```text
Read one non-whitespace character
Print it
```

### `word_input.c`

```text
Read one word
Print it
```

### `line_input.c`

```text
Read full line
Remove trailing newline if present
Print it
```

---

# 📝 Task 9 — Mixed Input Program

File:

```text
mixed_input.c
```

Input:

```text
21
A
Competitive Programming Student
```

Store:

```text
age
grade
description
```

Output:

```text
Age: 21
Grade: A
Description: Competitive Programming Student
```

Code লেখার আগে লিখবে:

```text
Input 1 Type:
Method:

Input 2 Type:
Method:

Input 3 Type:
Method:

Potential Whitespace Problems:
...

Input Pipeline:
...
```

---

# 📝 Task 10 — Chapter Reflection

এই Template Complete করবে:

````markdown
# 🧠 Day 3 — Chapter 2 Reflection

## 1. What I Learned

- ...
- ...
- ...

---

## 2. Input Types I Can Recognize

- Character:
- Word:
- Full Line:

---

## 3. My Input Decision Rule

```text
...
↓
...
↓
...
```

---

## 4. `%c` Important Lesson

...

---

## 5. `%s` Important Lesson

...

---

## 6. `fgets()` Important Lesson

...

---

## 7. Newline Problem

### What happens?

...

### Why?

...

### How do I handle it?

...

---

## 8. Most Confusing Topic

...

---

## 9. A Bug I Can Now Explain

...

---

## 10. Confidence Score

```text
Character Input:      ?/10
Word Input:           ?/10
Full Line Input:      ?/10
Newline Handling:     ?/10
Mixed Input:          ?/10
Input Method Choice:  ?/10
```
````

---

# 🧪 Chapter 2 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

একটি Character Input নিতে কোন Format Specifier?

---

## Question 2

কেন:

```c
scanf("%d", &n);
scanf("%c", &ch);
```

problematic হতে পারে?

---

## Question 3

`" %c"`-এর leading space কী করে?

---

## Question 4

`scanf("%s", str)` কোথায় থামে?

---

## Question 5

Space-সহ Line Input-এর জন্য কোন Function useful?

---

## Question 6

`fgets()` newline রাখতে পারে কেন?

---

## Question 7

```c
str[strcspn(str, "\n")] = '\0';
```

এর কাজ কী?

---

## Question 8

Maximum String Length `1000` হলে minimum char array size কত?

---

## Question 9

কেন:

```c
scanf("%s", str);
```

এখানে সাধারণত `&str` দরকার হয় না?

---

## Question 10

`%c` এবং `%s` whitespace handling-এ কীভাবে আলাদা?

---

## Question 11

Integer Input-এর পর `fgets()` immediately call করলে কী সমস্যা হতে পারে?

---

## Question 12

`getchar()` blindly ব্যবহার করা কেন ভালো habit না?

---

# 🐞 Chapter 2 Mistake Checklist

```text
[ ] Full line-এর জন্য blindly %s ব্যবহার করছি না

[ ] Character এবং String format specifier confuse করছি না

[ ] Mixed %d + %c input-এ newline issue বুঝি

[ ] " %c" কেন কাজ করে বুঝি

[ ] fgets() newline রাখতে পারে জানি

[ ] strlen() unexpected হলে newline check করি

[ ] String capacity constraint অনুযায়ী রাখি

[ ] '\0'-এর জন্য extra slot রাখি

[ ] bounded %s width ব্যবহার করতে পারি

[ ] scanf + fgets mix করলে unread input চিন্তা করি

[ ] getchar() blindly ব্যবহার করি না

[ ] gets() ব্যবহার করি না
```

---

# 🧠 Chapter 2 Pattern Library Entry

তোমার Pattern Library-তে String Input-এর জন্য একটি ছোট Section রাখতে পারো:

````markdown
# 🔤 String Input Decision Pattern

## Signal

Problem requires character, word, or full line input.

---

## Decision Tree

```text
One Character
↓
%c

One Non-Whitespace Character After Other Input
↓
" %c"

Single Word / Token
↓
bounded %s

Full Line / Spaces Allowed
↓
fgets()
```

---

## Mixed Input Warning

```text
scanf
↓
Unread whitespace may remain
↓
%c or fgets may consume it
↓
Understand remaining input
↓
Handle intentionally
```

---

## Full Line Cleanup

```c
str[strcspn(str, "\n")] = '\0';
```

Requires:

```c
#include <string.h>
```

---

## Common Bugs

- `%s` stops at whitespace.
- `%c` can read newline.
- `fgets()` may keep newline.
- Buffer needs space for `'\0'`.
- Mixed input methods require careful whitespace handling.
````

---

# 🏁 Chapter 2 Completion Checklist

```text
[ ] Input type recognize করতে পারি

[ ] Single character input নিতে পারি

[ ] Single word input নিতে পারি

[ ] Full line input নিতে পারি

[ ] %c whitespace behavior বুঝি

[ ] " %c" বুঝি

[ ] %s কোথায় stop করে বুঝি

[ ] bounded %s ব্যবহার বুঝি

[ ] String input-এ array name কেন ব্যবহার হয় basic idea বুঝি

[ ] fgets() arguments বুঝি

[ ] fgets() newline behavior বুঝি

[ ] strcspn newline removal বুঝি

[ ] Input buffer-এর basic mental model বুঝি

[ ] Mixed %d + %c handle করতে পারি

[ ] Mixed scanf + fgets problem explain করতে পারি

[ ] Constraint থেকে buffer size বের করতে পারি

[ ] Common input bugs identify করতে পারি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 2 Final Mental Model

String Input Problem দেখলে:

```text
Input দেখলাম
      ↓
সরাসরি scanf লিখলাম
```

এভাবে না।

নতুন Workflow:

```text
Read Input Requirement
        ↓
What is the input unit?
        │
        ├── Character
        │
        ├── Word
        │
        └── Full Line
        ↓
Can spaces appear?
        ↓
Choose Input Method
        ↓
Check Previous Input Method
        ↓
Could unread whitespace matter?
        ↓
Read Input
        ↓
Remove newline if required
        ↓
Verify with a small test
```

সবচেয়ে ছোট Decision Map:

```text
Character
↓
%c
```

```text
Word
↓
bounded %s
```

```text
Full Line
↓
fgets()
```

Mixed Input-এর জন্য:

```text
Previous Read
      ↓
What remains unread?
      ↓
How does next input function treat whitespace?
      ↓
Handle intentionally
```

আর আজকের সবচেয়ে গুরুত্বপূর্ণ Connection:

```text
Correct Algorithm
+
Wrong Input Handling
=
Wrong Answer
```

তাই CP-তে Input Handling কোনো “extra C topic” না।

এটা Solution Correctness-এর অংশ।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ⏳ Chapter 3 — String Traversal Pattern
│
├── ⏳ Chapter 4 — Character Classification
│
├── ⏳ Chapter 5 — Counting Patterns on Strings
│
├── ⏳ Chapter 6 — Character Search & Frequency
│
├── ⏳ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 2 Complete.**

পরবর্তী Chapter-এর Core Idea হবে:

```text
String
↓
Character by Character Traversal
↓
Observe Current Character
↓
Update State
```

অর্থাৎ **Chapter 3 — String Traversal Pattern**-এ Day 2-এর Traversal Mental Model সরাসরি String-এর উপর প্রয়োগ করা হবে।

---

# 📘 Day 3 — Chapter 3

# 🔁 String Traversal Pattern

## Character by Character Thinking

Day 3 — Chapter 1-এ তুমি শিখেছ:

```text
String
=
Character Array
+
'\0'
```

Day 3 — Chapter 2-এ তুমি শিখেছ:

```text
Input Requirement
        ↓
Character / Word / Full Line
        ↓
Choose Correct Input Method
        ↓
Handle Input Correctly
```

এখন আমরা String Problem Solving-এর সবচেয়ে গুরুত্বপূর্ণ Foundation-এ আসছি:

# **String Traversal**

Day 2-তে Array Traversal শিখেছিলে:

```text
Array
↓
একটা একটা Element দেখা
↓
Condition Check
↓
State Update
```

আজ একই Mental Model String-এর জন্য ব্যবহার করব:

```text
String
↓
একটা একটা Character দেখা
↓
Condition Check
↓
State Update
```

Example:

```text
"CODE"

C → দেখো
O → দেখো
D → দেখো
E → দেখো
\0 → STOP
```

এটাই String Traversal-এর Core।

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* String character-by-character traverse করতে;
* `'\0'`-based traversal বুঝতে;
* `strlen()`-based traversal বুঝতে;
* `for` এবং `while` দিয়ে String traverse করতে;
* Current Character Mental Model ব্যবহার করতে;
* Index এবং Character আলাদা করে চিন্তা করতে;
* Forward Traversal করতে;
* Backward Traversal-এর foundation বুঝতে;
* Position বা Index track করতে;
* Character inspect করতে;
* Traversal + Condition combine করতে;
* Traversal + Counter combine করতে;
* Traversal + Flag combine করতে;
* Early termination বা `break` চিনতে;
* Multiple State maintain করতে;
* String Problem-এর Pipeline তৈরি করতে;
* Common traversal bugs detect করতে;
* Array Pattern থেকে String Pattern transfer করতে।

---

# 📖 Chapter Map

```text
Chapter 3
│
├── Part 1  — Traversal Mental Model
├── Part 2  — Why Traversal Is Needed
├── Part 3  — '\0'-Based Traversal
├── Part 4  — for Loop Traversal
├── Part 5  — while Loop Traversal
├── Part 6  — Current Character Thinking
├── Part 7  — Index vs Character
├── Part 8  — Traversal + Condition
├── Part 9  — Traversal + Counter
├── Part 10 — Traversal + Flag
├── Part 11 — Early Termination
├── Part 12 — Position Tracking
├── Part 13 — Multiple State
├── Part 14 — Forward & Backward Thinking
├── Part 15 — strlen() and Traversal
├── Part 16 — Common Bugs & Edge Cases
├── Part 17 — Guided Problem Solving
├── Part 18 — Exercises
└── Part 19 — Assignment & Reflection
```

---

# 🧠 Chapter 3 Master Mental Model

String Problem দেখলে প্রথমে এই Structure চিনবে:

```text
String Input
      ↓
Start at Index 0
      ↓
Observe Current Character
      ↓
Check Condition
      ↓
Update State if Needed
      ↓
Move to Next Index
      ↓
'\0' Found?
      │
      ├── No → Continue
      │
      └── Yes → Stop
      ↓
Use Final State
      ↓
Output
```

Short Version:

```text
Traverse
↓
Observe
↓
Decide
↓
Update
```

এই চারটি শব্দ আজকের Chapter-এর Foundation।

---

# Part 1 — Traversal Mental Model

# Lesson 1 — Traversal মানে কী?

Traversal মানে:

> কোনো Data Structure-এর Element-গুলো প্রয়োজন অনুযায়ী একে একে Visit করা।

Array Example:

```c
int arr[] = {10, 20, 30, 40};
```

Traversal:

```text
10
↓
20
↓
30
↓
40
```

String Example:

```c
char str[] = "CODE";
```

Traversal:

```text
C
↓
O
↓
D
↓
E
↓
STOP
```

তাই:

```text
Array Traversal
=
Element by Element
```

এবং:

```text
String Traversal
=
Character by Character
```

---

# Lesson 2 — Traversal নিজে Final Goal না

এটা খুব গুরুত্বপূর্ণ।

ধরো Problem:

> Count vowels in a string.

এখানে শুধু Traversal করলে Solution হবে না।

Traversal শুধু তোমাকে প্রতিটি Character-এর কাছে নিয়ে যাবে।

```text
Traversal
↓
Current Character
↓
Is it vowel?
↓
Yes → count++
↓
No → nothing
```

অর্থাৎ:

```text
Traversal
=
Visit Mechanism
```

আর:

```text
Condition
=
Decision
```

আর:

```text
State Update
=
Remember Information
```

Full Pattern:

```text
Traversal
+
Condition
+
State
=
Solution
```

এই Formula মনে রাখবে।

---

# Part 2 — Why Traversal Is Needed

# Lesson 3 — কেন একটা একটা Character দেখতে হয়?

ধরো String:

```text
competitive
```

Problem:

> কতগুলো `'t'` আছে?

তুমি যদি String-এর Character-গুলো না দেখো, তাহলে জানবে কীভাবে কোন Position-এ `'t'` আছে?

তাই:

```text
Need information about characters
        ↓
Need to inspect characters
        ↓
Need traversal
```

Manual:

```text
c → not t
o → not t
m → not t
p → not t
e → not t
t → match
i → not t
t → match
i → not t
v → not t
e → not t
```

Final:

```text
count = 2
```

---

# Lesson 4 — Traversal Signal Words

Problem Statement-এ কিছু Signal আছে।

যেমন:

```text
count
find
check whether
how many
first occurrence
last occurrence
replace
convert
frequency
reverse
palindrome
```

এই শব্দগুলোর অনেক Problem-এ Character inspect করা লাগে।

Mental Signal:

```text
Need to know something about characters?
                ↓
          Likely Traversal
```

তবে সব Problem-এ full traversal লাগবে এমন না।

Example:

> Print first character.

এখানে:

```c
printf("%c\n", str[0]);
```

যথেষ্ট।

তাই blindly:

```text
String Problem
↓
Always full traversal
```

এটা Rule না।

Correct:

```text
Need to inspect multiple characters?
        ↓
Consider traversal
```

---

# Part 3 — `'\0'`-Based Traversal

# Lesson 5 — String কোথায় শেষ?

Chapter 1 থেকে:

```text
C String
=
Characters
+
'\0'
```

Example:

```c
char str[] = "CAT";
```

Memory:

```text
Index     0      1      2      3
Value     C      A      T      \0
```

Visible Character:

```text
C A T
```

Stop Marker:

```text
\0
```

তাই Traversal Condition:

```c
str[i] != '\0'
```

Meaning:

```text
Current Character কি String End Marker না?
        │
        ├── Yes → Process
        │
        └── No → Stop
```

---

# Lesson 6 — Basic Traversal Skeleton

```c
int i = 0;

while (str[i] != '\0')
{
    // process str[i]

    i++;
}
```

এটাই Fundamental String Traversal Skeleton।

Breakdown:

```text
i = 0
↓
Start from first character
```

```text
str[i] != '\0'
↓
Continue while current character is not end marker
```

```text
Process str[i]
↓
Use current character
```

```text
i++
↓
Move to next character
```

---

# Lesson 7 — Dry Run

String:

```text
DOG
```

Memory:

```text
Index     0      1      2      3
Value     D      O      G      \0
```

Loop:

```c
int i = 0;

while (str[i] != '\0')
{
    printf("%c\n", str[i]);
    i++;
}
```

Dry Run:

|  `i` | `str[i]` | `str[i] != '\0'` | Action  |
| ---: | -------- | ---------------- | ------- |
|    0 | `D`      | True             | Print D |
|    1 | `O`      | True             | Print O |
|    2 | `G`      | True             | Print G |
|    3 | `'\0'`   | False            | Stop    |

Output:

```text
D
O
G
```

---

# Part 4 — `for` Loop Traversal

# Lesson 8 — Basic `for` Loop

String Traversal:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    printf("%c\n", str[i]);
}
```

Structure:

```text
Initialization
↓
int i = 0
```

```text
Condition
↓
str[i] != '\0'
```

```text
Update
↓
i++
```

Mental Pipeline:

```text
Start at 0
↓
Check current character
↓
Process
↓
Move next
↓
Repeat
```

---

# Lesson 9 — Complete Example

```c
#include <stdio.h>

int main()
{
    char str[] = "HELLO";

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
```

Output:

```text
H
E
L
L
O
```

---

# Lesson 10 — Same Line-এ Print

```c
#include <stdio.h>

int main()
{
    char str[] = "HELLO";

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
```

Output:

```text
HELLO
```

এখানে আমরা পুরো String `%s` দিয়ে print করছি না।

আমরা:

```text
H
↓
E
↓
L
↓
L
↓
O
```

একটা একটা করে print করছি।

এটা Traversal Practice।

---

# Part 5 — `while` Loop Traversal

# Lesson 11 — একই কাজ `while` দিয়ে

```c
#include <stdio.h>

int main()
{
    char str[] = "HELLO";

    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);

        i++;
    }

    return 0;
}
```

এখানে:

```text
Initialization
↓
Loop-এর আগে
```

```text
Condition
↓
while-এর মধ্যে
```

```text
Update
↓
Loop Body-এর শেষে
```

---

# Lesson 12 — `for` নাকি `while`?

দুটোই Valid।

### `for` useful যখন:

```text
Index-based traversal
↓
Clear start
↓
Clear update
```

Example:

```c
for (int i = 0; str[i] != '\0'; i++)
```

### `while` useful যখন:

```text
Process flow more conditional
↓
Index movement needs special control
```

আমাদের Bootcamp-এর Basic String Traversal-এর জন্য বেশি ব্যবহার করব:

```c
for (int i = 0; str[i] != '\0'; i++)
```

কারণ Structure compact এবং readable।

কিন্তু দুটোই বুঝতে হবে।

---

# Part 6 — Current Character Thinking

# Lesson 13 — `str[i]` হলো Current Character

এটা খুব গুরুত্বপূর্ণ Mental Model।

Loop:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // current character = str[i]
}
```

প্রতিটি Iteration-এ:

```text
i
↓
Current Position
```

আর:

```text
str[i]
↓
Current Character
```

Example:

```text
String: CODE
```

|  `i` | `str[i]` |
| ---: | -------- |
|    0 | `C`      |
|    1 | `O`      |
|    2 | `D`      |
|    3 | `E`      |

Mental Model:

```text
Index tells WHERE

Character tells WHAT
```

এটা খুব গুরুত্বপূর্ণ।

---

# Lesson 14 — Current Character Variable

কখনো readability-এর জন্য লিখতে পারো:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    char current = str[i];

    printf("%c\n", current);
}
```

Mental Model:

```text
str[i]
↓
Current Character
↓
current
```

এটা সবসময় দরকার না।

কিন্তু complex condition-এ useful হতে পারে।

Example:

```c
char current = str[i];

if (current >= 'A' && current <= 'Z')
{
    // uppercase
}
```

---

# Part 7 — Index vs Character

# Lesson 15 — সবচেয়ে Common Confusion

ধরো:

```text
String: CAT
```

তাহলে:

```text
i = 0
str[i] = 'C'
```

```text
i = 1
str[i] = 'A'
```

```text
i = 2
str[i] = 'T'
```

এখানে:

```text
i
```

হলো Index।

আর:

```text
str[i]
```

হলো Character।

---

## Wrong Thinking

```c
if (i == 'A')
```

যদি Goal হয় current character `'A'` কিনা check করা, তাহলে এটা ভুল।

Correct:

```c
if (str[i] == 'A')
```

কারণ:

```text
Need Character Comparison
        ↓
Use str[i]
```

আর যদি Position Check করতে চাও:

```c
if (i == 2)
```

তাহলে Index ব্যবহার করবে।

---

# Lesson 16 — প্রশ্ন করো: WHERE না WHAT?

Problem-solving-এর সময় নিজেকে প্রশ্ন করবে:

> আমি Position নিয়ে কাজ করছি, নাকি Character নিয়ে?

যদি:

```text
Which position?
```

তাহলে:

```text
i
```

যদি:

```text
Which character?
```

তাহলে:

```text
str[i]
```

Mental Rule:

```text
WHERE?
↓
Index
```

```text
WHAT?
↓
Value / Character
```

এই একই Rule Day 2 Array-তেও ছিল।

---

# Part 8 — Traversal + Condition

# Lesson 17 — Character Inspect করা

Problem:

> Print only character `'a'`.

String:

```text
banana
```

Pattern:

```text
Traverse
↓
Current Character
↓
Is it 'a'?
↓
Yes → Print
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[] = "banana";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
```

Output:

```text
a a a
```

Pattern:

```text
Traversal
+
Condition
```

---

# Lesson 18 — Print Characters Except Target

Problem:

> Print every character except `'a'`.

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] != 'a')
    {
        printf("%c", str[i]);
    }
}
```

Input String:

```text
banana
```

Output:

```text
bnn
```

Mental Model:

```text
Traverse
↓
Is current character not 'a'?
↓
Yes → Print
No  → Skip
```

---

# Lesson 19 — Multiple Conditions

Problem:

> Print only lowercase vowels.

Condition:

```c
str[i] == 'a' ||
str[i] == 'e' ||
str[i] == 'i' ||
str[i] == 'o' ||
str[i] == 'u'
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a' ||
        str[i] == 'e' ||
        str[i] == 'i' ||
        str[i] == 'o' ||
        str[i] == 'u')
    {
        printf("%c ", str[i]);
    }
}
```

এখানে এখনো আমরা Counting করছি না।

শুধু:

```text
Traversal
+
Classification Condition
+
Action
```

Chapter 4-এ Character Classification আরও বিস্তারিত হবে।

---

# Part 9 — Traversal + Counter

# Lesson 20 — Count Target Character

Problem:

> Count `'a'` in a string.

String:

```text
banana
```

Analysis:

```text
Need to inspect all characters?
Yes
↓
Traversal
```

```text
Need to remember number of matches?
Yes
↓
Counter
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

## Code

```c
#include <stdio.h>

int main()
{
    char str[] = "banana";

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

Output:

```text
3
```

---

# Lesson 21 — Dry Run

String:

```text
banana
```

Initial State:

```text
count = 0
```

Dry Run:

|  `i` | Character | Match `'a'`? | `count` |
| ---: | --------- | ------------ | ------: |
|    0 | `b`       | No           |       0 |
|    1 | `a`       | Yes          |       1 |
|    2 | `n`       | No           |       1 |
|    3 | `a`       | Yes          |       2 |
|    4 | `n`       | No           |       2 |
|    5 | `a`       | Yes          |       3 |

Final:

```text
count = 3
```

---

# Lesson 22 — State Dependency

এখানে State:

```text
count
```

Initialization:

```c
int count = 0;
```

কেন?

কারণ শুরুতে:

```text
Processed Characters = 0
Matched Characters = 0
```

Update:

```c
count++;
```

কখন?

```text
Only when condition is true
```

Pipeline:

```text
Input
↓
Initialize count = 0
↓
Traverse
↓
Compare current character
↓
Match?
↓
count++
↓
Continue
↓
Print count
```

---

# Part 10 — Traversal + Flag

# Lesson 23 — Character Exists কি না?

Problem:

> Check whether `'x'` exists.

এখানে Count দরকার নেই।

শুধু:

```text
Found?
Yes / No
```

তাই State:

```text
flag
```

Example:

```c
int found = 0;
```

Meaning:

```text
0 → Not found yet
1 → Found
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[] = "example";

    int found = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'x')
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

---

# Lesson 24 — Why Flag?

আমরা Traversal-এর পরে Result জানতে চাই।

Problem:

```text
Does 'x' exist?
```

During Traversal:

```text
x পাওয়া গেল
```

কিন্তু Loop-এর বাইরে এই Information মনে রাখতে হবে।

তাই:

```text
Need to remember a Yes/No state
        ↓
Flag
```

Mental Pattern:

```text
Search
↓
Flag
↓
Found?
```

---

# Part 11 — Early Termination

# Lesson 25 — `break` কেন?

Problem:

> Check whether `'x'` exists.

String:

```text
examplexxxxxxxx
```

প্রথম `'x'` পাওয়ার পর:

```text
Does x exist?
```

এর Answer হয়ে গেছে:

```text
Yes
```

তাই আর Traverse করা প্রয়োজন নেই।

```c
if (str[i] == 'x')
{
    found = 1;
    break;
}
```

Mental Rule:

```text
Goal Already Satisfied?
        ↓
Remaining Traversal Unnecessary?
        ↓
break may be useful
```

---

# Lesson 26 — কোথায় `break` দেওয়া যাবে না?

Problem:

> Count all `'a'`.

String:

```text
banana
```

যদি:

```c
if (str[i] == 'a')
{
    count++;
    break;
}
```

তাহলে প্রথম `'a'` পাওয়ার পর Loop থেমে যাবে।

Result:

```text
1
```

কিন্তু Correct:

```text
3
```

কারণ Problem বলেছে:

```text
Count ALL occurrences
```

তাই:

```text
Existence Search
↓
Can stop after first match
```

কিন্তু:

```text
Count All
↓
Must continue traversal
```

---

# Lesson 27 — Goal Determines Traversal Length

এটা খুব গুরুত্বপূর্ণ CP Principle।

```text
Check Exists
↓
Can stop early
```

```text
Find First
↓
Can stop after first match
```

```text
Count All
↓
Need full traversal
```

```text
Find Last
↓
Usually need full traversal
```

```text
Frequency of All Characters
↓
Need full traversal
```

Problem-এর Goal-ই বলে দেবে:

```text
How far must I traverse?
```

---

# Part 12 — Position Tracking

# Lesson 28 — Character না, Index দরকার

Problem:

> Find the first index of `'a'`.

String:

```text
banana
```

Indices:

```text
0 1 2 3 4 5
b a n a n a
```

First `'a'`:

```text
Index = 1
```

এখানে State:

```c
int position = -1;
```

কেন `-1`?

কারণ Valid Index:

```text
0
1
2
3
...
```

তাই:

```text
-1
↓
Not found
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[] = "banana";

    int position = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            position = i;
            break;
        }
    }

    printf("%d\n", position);

    return 0;
}
```

Output:

```text
1
```

Pattern:

```text
Traversal
+
Condition
+
Index Storage
+
Early Stop
```

---

# Lesson 29 — Last Occurrence

Problem:

> Find last index of `'a'`.

String:

```text
banana
```

Expected:

```text
5
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[] = "banana";

    int position = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            position = i;
        }
    }

    printf("%d\n", position);

    return 0;
}
```

Notice:

```text
No break
```

কেন?

কারণ প্রতিবার `'a'` পেলে:

```text
position update
```

Flow:

```text
i = 1
position = 1

i = 3
position = 3

i = 5
position = 5
```

Final:

```text
position = 5
```

---

# First vs Last Occurrence

| Goal             | Update                       | Break? |
| ---------------- | ---------------------------- | ------ |
| First Occurrence | Save first matching index    | Yes    |
| Last Occurrence  | Keep updating matching index | No     |

Mental Model:

```text
First
↓
Save
↓
Stop
```

```text
Last
↓
Save
↓
Continue
↓
Overwrite on later match
```

---

# Part 13 — Multiple State

# Lesson 30 — এক Traversal-এ একাধিক Information

Problem:

> Count `'a'` and `'b'`.

String:

```text
abracadabra
```

State:

```c
int countA = 0;
int countB = 0;
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a')
    {
        countA++;
    }

    if (str[i] == 'b')
    {
        countB++;
    }
}
```

Mental Model:

```text
One Traversal
      ↓
Current Character
      ↓
Update Relevant States
```

---

# Lesson 31 — Why not Two Traversals?

তুমি চাইলে করতে পারো:

```text
Traversal 1 → Count a
Traversal 2 → Count b
```

কিন্তু এক Traversal-এ:

```text
Traversal
↓
Check a
↓
Check b
↓
Update
```

করাও সম্ভব।

এখন Complexity-এর গভীরে যাচ্ছি না।

কিন্তু Mental Habit:

> একই Character দেখে প্রয়োজনীয় একাধিক State update করা যায় কি?

এই Question ভবিষ্যতে useful হবে।

---

# Lesson 32 — `if` vs `else if`

ধরো:

```c
if (str[i] == 'a')
{
    countA++;
}

if (str[i] == 'b')
{
    countB++;
}
```

এবং:

```c
if (str[i] == 'a')
{
    countA++;
}
else if (str[i] == 'b')
{
    countB++;
}
```

এই specific case-এ একটি Character একই সঙ্গে `'a'` এবং `'b'` হতে পারে না।

তাই দুটোই logically কাজ করতে পারে।

কিন্তু Conceptual Difference:

```text
Independent Conditions
↓
Separate if
```

```text
Mutually Exclusive Categories
↓
if / else if chain
```

Chapter 4-এ Character Classification-এর সময় এটা গুরুত্বপূর্ণ হবে।

---

# Part 14 — Forward & Backward Thinking

# Lesson 33 — Forward Traversal

আমাদের এখন পর্যন্ত Traversal:

```text
Left
↓
Right
```

Example:

```text
C O D E
→ → → →
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process
}
```

এটা Forward Traversal।

---

# Lesson 34 — Backward Traversal-এর Idea

ধরো String:

```text
CODE
```

Reverse order:

```text
E D O C
```

এখানে শুরু করতে হবে Last Visible Character থেকে।

যদি Length:

```text
4
```

তাহলে Last Index:

```text
3
```

Formula:

```text
Last Index
=
Length - 1
```

Backward:

```text
3
↓
2
↓
1
↓
0
```

Skeleton:

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

এখন শুধু Concept বুঝবে।

Reverse এবং Two Pointer Chapter 8-এ বিস্তারিত হবে।

---

# Lesson 35 — Direction Is Part of Pattern

Problem দেখে প্রশ্ন করবে:

```text
Need left-to-right information?
↓
Forward Traversal
```

```text
Need right-to-left processing?
↓
Backward Traversal
```

```text
Need compare both ends?
↓
Two-Pointer Thinking
```

Day 3 Progression:

```text
Chapter 3
Forward Traversal
        ↓
Chapter 8
Backward + Two Pointer
        ↓
Chapter 9
Palindrome
```

---

# Part 15 — `strlen()` and Traversal

# Lesson 36 — Two Common Traversal Styles

### Style A — Null Terminator

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process
}
```

### Style B — Known Length

```c
int len = strlen(str);

for (int i = 0; i < len; i++)
{
    // process
}
```

দুটোই useful।

---

# Lesson 37 — Bootcamp-এ এখন কোনটা prefer করব?

String Mental Model শক্ত করার জন্য:

```c
for (int i = 0; str[i] != '\0'; i++)
```

এটা বেশি practice করব।

কারণ তুমি directly বুঝবে:

```text
Character
↓
Character
↓
Character
↓
'\0'
↓
Stop
```

তবে Reverse Problem-এর জন্য Length দরকার হতে পারে:

```c
int len = strlen(str);
```

তারপর:

```c
for (int i = len - 1; i >= 0; i--)
```

---

# Lesson 38 — Loop Condition-এ Repeated `strlen()`

Beginner হিসেবে তুমি এমন লিখতে পারো:

```c
for (int i = 0; i < strlen(str); i++)
{
    // process
}
```

এটা simple Problem-এ কাজ করতে পারে।

কিন্তু ভালো habit:

```c
int len = strlen(str);

for (int i = 0; i < len; i++)
{
    // process
}
```

অথবা:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process
}
```

Mental Habit:

```text
Need Length?
↓
Calculate once if appropriate
↓
Reuse
```

---

# Part 16 — Common Bugs & Edge Cases

# 🐞 Bug 1 — Wrong Stop Condition

Wrong:

```c
for (int i = 0; i <= strlen(str); i++)
```

যদি Goal শুধু visible characters process করা হয়, তাহলে `<=` এর কারণে `'\0'` position-ও process হবে।

Correct:

```c
for (int i = 0; i < strlen(str); i++)
```

অথবা:

```c
for (int i = 0; str[i] != '\0'; i++)
```

---

# 🐞 Bug 2 — Forgetting `i++`

```c
int i = 0;

while (str[i] != '\0')
{
    printf("%c", str[i]);
}
```

Problem:

```text
i never changes
```

তাই:

```text
Same Character
↓
Same Character
↓
Same Character
↓
Infinite Loop
```

Correct:

```c
i++;
```

---

# 🐞 Bug 3 — Comparing Index with Character

Wrong:

```c
if (i == 'a')
```

যদি Goal current character check করা হয়।

Correct:

```c
if (str[i] == 'a')
```

Remember:

```text
i
↓
Position
```

```text
str[i]
↓
Character
```

---

# 🐞 Bug 4 — Wrong Counter Initialization

Wrong:

```c
int count;
```

তারপর:

```c
count++;
```

`count` uninitialized।

Correct:

```c
int count = 0;
```

Mental Rule:

```text
Counting State
↓
Usually starts at 0
```

---

# 🐞 Bug 5 — `break` in Count-All Problem

Wrong:

```c
if (str[i] == 'a')
{
    count++;
    break;
}
```

যদি Goal সব `'a'` count করা।

`break` শুধু প্রথম Match পর্যন্ত রাখবে।

---

# 🐞 Bug 6 — First Occurrence-এ `break` না দেওয়া

ধরো:

```c
if (str[i] == 'a')
{
    position = i;
}
```

Loop continue করলে final position হবে last occurrence।

যদি Goal first occurrence:

```c
position = i;
break;
```

---

# 🐞 Bug 7 — `fgets()` Newline ভুলে যাওয়া

Input:

```text
HELLO
```

Stored হতে পারে:

```text
H E L L O \n \0
```

তখন Traversal:

```text
H
E
L
L
O
\n
```

newline-ও Character হিসেবে process হতে পারে।

তাই Problem অনুযায়ী cleanup দরকার হতে পারে:

```c
str[strcspn(str, "\n")] = '\0';
```

---

# 🐞 Bug 8 — Empty String Assumption

String conceptually হতে পারে:

```text
\0
```

তখন:

```c
str[0] == '\0'
```

Loop:

```c
for (int i = 0; str[i] != '\0'; i++)
```

একবারও execute হবে না।

এটা logically correct।

---

# 🐞 Bug 9 — One Character String

String:

```text
A \0
```

Traversal:

```text
i = 0 → A → process
i = 1 → \0 → stop
```

One-character String edge case test করবে।

---

# 🐞 Bug 10 — All Same Characters

String:

```text
aaaaaa
```

Count target `'a'`:

```text
6
```

First occurrence:

```text
0
```

Last occurrence:

```text
5
```

এই Test Case অনেক Logic Bug ধরতে পারে।

---

# Part 17 — Guided Problem Solving

# Problem 1 — Print Every Character Separately

## Problem

একটি String-এর প্রতিটি Character নতুন Line-এ Print করো।

Input:

```text
CODE
```

Output:

```text
C
O
D
E
```

---

## Step 1 — What needs to be visited?

```text
Every Character
```

তাই:

```text
Need Traversal
```

---

## Step 2 — State দরকার?

না।

কারণ কিছু মনে রাখতে হচ্ছে না।

```text
State:
None
```

---

## Step 3 — Action কী?

```text
Print current character
```

---

## Pattern

```text
Traversal
+
Direct Action
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
```

---

# Problem 2 — Count Target Character

## Problem

একটি String এবং Target Character দেওয়া আছে।

Target কতবার আছে Count করো।

Input:

```text
banana
a
```

Output:

```text
3
```

---

## Step 1 — Need full traversal?

Yes।

কারণ সব occurrence count করতে হবে।

---

## Step 2 — State

```text
count
```

---

## Step 3 — Initialization

```text
count = 0
```

---

## Step 4 — Condition

```text
str[i] == target
```

---

## Step 5 — Update

```text
count++
```

---

## Pipeline

```text
Read String
↓
Read Target
↓
count = 0
↓
Traverse String
↓
Current == Target?
↓
Yes → count++
↓
Continue
↓
Print count
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Problem 3 — Find First Position

## Problem

Target Character-এর প্রথম Position বের করো।

না থাকলে:

```text
-1
```

Input:

```text
banana
a
```

Output:

```text
1
```

---

## Pattern Analysis

```text
Need to search
↓
Need position
↓
Need first match
↓
Save index
↓
Stop
```

Pattern:

```text
Traversal
+
Condition
+
Position State
+
Early Termination
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int position = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            position = i;
            break;
        }
    }

    printf("%d\n", position);

    return 0;
}
```

---

# Problem 4 — Find Last Position

## Problem

Target Character-এর Last Position বের করো।

Input:

```text
banana
a
```

Output:

```text
5
```

---

## Pattern Analysis

```text
Need to search
↓
Need position
↓
Need last match
↓
Update every match
↓
Continue full traversal
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int position = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            position = i;
        }
    }

    printf("%d\n", position);

    return 0;
}
```

---

# Part 18 — Exercises

# Exercise 1 — Print with Index

Input:

```text
CODE
```

Output:

```text
0 C
1 O
2 D
3 E
```

Before Code:

```text
Traversal:
...

Current Index:
...

Current Character:
...

Output Action:
...
```

---

# Exercise 2 — Count `'e'`

String:

```text
experience
```

নিজে:

```text
Manual Count:
...

Pattern:
...

State:
...

Initialization:
...

Condition:
...

Update:
...
```

তারপর Code লিখবে।

---

# Exercise 3 — Search `'z'`

String:

```text
competitive
```

Target:

```text
z
```

Expected:

```text
Not Found
```

নিজে `found` flag ব্যবহার করবে।

---

# Exercise 4 — First `'m'`

String:

```text
programming
```

Expected:

```text
6
```

নিজে আগে Index Table draw করবে।

তারপর:

```text
State:
...

Initial Value:
...

Break Needed?
...

Why?
...
```

---

# Exercise 5 — Last `'m'`

String:

```text
programming
```

Expected:

```text
7
```

Compare করবে:

```text
First Occurrence Logic:
...

Last Occurrence Logic:
...

Main Difference:
...
```

---

# Exercise 6 — Count Two Characters

String:

```text
abracadabra
```

Count:

```text
a
b
```

Expected:

```text
a = 5
b = 2
```

এক Traversal-এ করার চেষ্টা করবে।

---

# Exercise 7 — Print Odd Index Characters

String:

```text
ABCDEFG
```

Indices:

```text
0 1 2 3 4 5 6
A B C D E F G
```

Expected:

```text
BDF
```

Hint:

```text
Need Character?
Yes

But selection condition based on?
Index
```

Pattern:

```text
Traversal
+
Index Condition
+
Action
```

---

# Exercise 8 — Print Even Index Characters

Input:

```text
ABCDEFG
```

Expected:

```text
ACEG
```

নিজে solve করবে।

---

# Exercise 9 — Manual Length

Library Function ছাড়া Length বের করো।

Restriction:

```text
No strlen()
```

Pattern:

```text
Traversal
+
Counter
```

নিজে Explain করবে:

```text
Why does the counter equal string length?
```

---

# Exercise 10 — Compare Two Traversal Styles

একই String দুইভাবে Traverse করো।

### Version A

```text
'\0'-based
```

### Version B

```text
strlen()-based
```

তারপর লিখবে:

```text
What is common?
...

What is different?
...

Which one helps me understand C strings better?
...
```

---

# Part 19 — Chapter Assignment

# 📝 Task 1 — Traversal Mental Model

নিজের ভাষায় Explain করবে:

```text
1. Traversal কী?

2. String Traversal কী?

3. Traversal নিজে কেন পুরো Solution না?

4. Current Character কী?

5. Index এবং Character-এর পার্থক্য কী?

6. '\0' traversal-এ কী role রাখে?
```

---

# 📝 Task 2 — Dry Run Table

String:

```text
SECURITY
```

এই Loop:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    printf("%c\n", str[i]);
}
```

Dry Run Table Complete করবে:

|  `i` | `str[i]` | Condition | Action |
| ---: | -------- | --------- | ------ |
|    0 | `S`      | True      | Print  |
|    1 | `?`      | `?`       | `?`    |
|    2 | `?`      | `?`       | `?`    |
|    3 | `?`      | `?`       | `?`    |
|    4 | `?`      | `?`       | `?`    |
|    5 | `?`      | `?`       | `?`    |
|    6 | `?`      | `?`       | `?`    |
|    7 | `?`      | `?`       | `?`    |
|    8 | `'\0'`   | False     | Stop   |

---

# 📝 Task 3 — Manual Length Program

File:

```text
manual_length.c
```

Input:

```text
competitive
```

Output:

```text
11
```

Restriction:

```text
Do not use strlen()
```

Before Code:

```text
Pattern:
...

State:
...

Initialization:
...

Traversal Condition:
...

Update:
...

Final State Meaning:
...
```

---

# 📝 Task 4 — Count Target Character

File:

```text
count_target.c
```

Input:

```text
mississippi
s
```

Expected Output:

```text
4
```

Required:

```text
Manual Count
↓
Pattern Identification
↓
State Selection
↓
Initialization
↓
Condition
↓
Update Rule
↓
Code
↓
Dry Run
```

---

# 📝 Task 5 — Character Existence

File:

```text
character_exists.c
```

Input:

```text
programming
g
```

Output:

```text
Found
```

Use:

```text
Traversal
+
Flag
+
Early Termination
```

তারপর Explain করবে:

```text
Why is count unnecessary?

Why is a flag enough?

Why can traversal stop early?
```

---

# 📝 Task 6 — First Occurrence

File:

```text
first_occurrence.c
```

Input:

```text
mississippi
s
```

Expected:

```text
2
```

Required Analysis:

```text
Goal:
...

Pattern:
...

State:
...

Initial State:
...

Update:
...

Break:
Yes / No

Reason:
...
```

---

# 📝 Task 7 — Last Occurrence

File:

```text
last_occurrence.c
```

Input:

```text
mississippi
s
```

Expected:

```text
6
```

Required Analysis:

```text
Why position starts at -1:
...

Why position updates on every match:
...

Why break is not used:
...
```

---

# 📝 Task 8 — First vs Last Comparison

নিজের Notes-এ Table বানাবে:

| Feature          | First Occurrence | Last Occurrence |
| ---------------- | ---------------- | --------------- |
| Initial Position | `?`              | `?`             |
| On Match         | `?`              | `?`             |
| Break            | `?`              | `?`             |
| Full Traversal   | `?`              | `?`             |
| Final Meaning    | `?`              | `?`             |

এর নিচে নিজের ভাষায় লিখবে:

```text
The structural difference between first and last occurrence is:
...
```

---

# 📝 Task 9 — One Traversal, Multiple States

File:

```text
multi_count.c
```

Problem:

একটি lowercase word-এর মধ্যে:

```text
a
e
i
```

প্রতিটি কতবার আছে count করো।

Input:

```text
competitive
```

নিজে তিনটি State ব্যবহার করবে:

```text
countA
countE
countI
```

Code-এর আগে:

```text
Why one traversal is enough:
...

State 1:
...

State 2:
...

State 3:
...

Update Rules:
...
```

---

# 📝 Task 10 — Index-Based Selection

File:

```text
index_selection.c
```

Input:

```text
COMPETITIVE
```

দুটি Output তৈরি করবে:

```text
Even Index Characters:
CMETTV

Odd Index Characters:
OPTIIE
```

নিজে আগে Index Table বানাবে।

তারপর Pattern লিখবে:

```text
Traversal
+
Index Condition
+
Direct Action
```

---

# 📝 Task 11 — Build Your Own Test Cases

এই Problem-এর জন্য Test Case বানাও:

> Count target character in a string.

কমপক্ষে এই Case-গুলো থাকবে:

```text
1. Target appears once

2. Target appears many times

3. Target does not appear

4. Every character is target

5. One-character string, target matches

6. One-character string, target does not match

7. Target at first position

8. Target at last position
```

Format:

```text
Test 1

String:
...

Target:
...

Expected:
...

Why this test matters:
...
```

---

# 📝 Task 12 — Pattern Recognition Drill

নিচের Problem-গুলোর Pattern Combination লিখবে।

### Problem A

> Print every character.

```text
Pattern:
...
```

### Problem B

> Count `'a'`.

```text
Pattern:
...
+
...
+
...
```

### Problem C

> Check whether `'x'` exists.

```text
Pattern:
...
+
...
+
...
```

### Problem D

> Find first `'x'`.

```text
Pattern:
...
+
...
+
...
+
...
```

### Problem E

> Find last `'x'`.

```text
Pattern:
...
+
...
+
...
```

### Problem F

> Print characters at even indices.

```text
Pattern:
...
+
...
+
...
```

---

# 📝 Task 13 — Chapter Reflection

Copy-paste Template:

````markdown
# 🧠 Day 3 — Chapter 3 Reflection

## 1. What Is String Traversal?

...

---

## 2. My Traversal Mental Model

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

## 3. Index vs Character

### Index means:

...

### Character means:

...

### Example:

```text
String:
...

i:
...

str[i]:
...
```

---

## 4. Traversal + Counter

### When do I need it?

...

### Example Problem:

...

### State:

...

---

## 5. Traversal + Flag

### When do I need it?

...

### Why can `break` be useful?

...

---

## 6. First vs Last Occurrence

### First:

...

### Last:

...

### Main Structural Difference:

...

---

## 7. Full Traversal vs Early Stop

### Full Traversal Needed When:

...

### Early Stop Possible When:

...

---

## 8. My Most Common Mistake

...

---

## 9. One Pattern I Recognized Today

...

---

## 10. Confidence Score

```text
Basic Traversal:       ?/10
Current Character:     ?/10
Index Thinking:        ?/10
Counter Pattern:       ?/10
Flag Pattern:          ?/10
First Occurrence:      ?/10
Last Occurrence:       ?/10
Early Termination:     ?/10
```
````

---

# 🧪 Chapter 3 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Traversal কী?

---

## Question 2

String Traversal-এর Basic Stop Condition কী?

---

## Question 3

এই দুটির পার্থক্য কী?

```text
i
```

এবং:

```text
str[i]
```

---

## Question 4

Count Target Problem-এর Pattern Combination কী?

---

## Question 5

Existence Check Problem-এ Counter-এর বদলে Flag কেন যথেষ্ট?

---

## Question 6

First Occurrence-এ `break` কেন ব্যবহার করা যায়?

---

## Question 7

Last Occurrence-এ সাধারণ Forward Traversal Solution-এ `break` কেন ব্যবহার করা যায় না?

---

## Question 8

`position = -1` কেন useful?

---

## Question 9

এই Code-এর Problem কী?

```c
int i = 0;

while (str[i] != '\0')
{
    printf("%c", str[i]);
}
```

---

## Question 10

এই Code কী বের করবে?

```c
int position = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        position = i;
    }
}
```

First occurrence না Last occurrence?

---

## Question 11

Problem:

> Print characters at even indices.

Condition Character-এর উপর হবে নাকি Index-এর উপর?

---

## Question 12

এক Traversal-এ একাধিক Counter update করা সম্ভব?

কখন useful?

---

# 🐞 Chapter 3 Mistake Checklist

```text
[ ] Traversal এবং Final Goal-কে একই জিনিস ভাবছি না

[ ] i এবং str[i] confuse করছি না

[ ] '\0' stop condition বুঝি

[ ] while loop-এ i++ ভুলে যাচ্ছি না

[ ] Counter initialize করছি

[ ] Count-all problem-এ ভুল করে break দিচ্ছি না

[ ] First occurrence-এ প্রয়োজন হলে break ব্যবহার করছি

[ ] Last occurrence-এ later match-এর জন্য continue করছি

[ ] Not-found state-এর জন্য -1 বুঝি

[ ] Character condition এবং index condition আলাদা করতে পারি

[ ] fgets input হলে newline নিয়ে সচেতন

[ ] Goal অনুযায়ী full traversal বা early stop নির্বাচন করি
```

---

# 🧠 Chapter 3 Pattern Library Update

তোমার `core_pattern.md`-এ এই Section add করতে পারো:

````markdown
# 🔁 String Traversal Pattern

## Core Idea

Visit a string character by character until the null terminator.

---

## Basic Skeleton

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process str[i]
}
```

---

## Mental Model

```text
Start at index 0
↓
Observe current character
↓
Check condition
↓
Update state if needed
↓
Move next
↓
Stop at '\0'
```

---

## Pattern Combination 1 — Direct Action

```text
Traversal
+
Action
```

Example:

- Print every character.

---

## Pattern Combination 2 — Counting

```text
Traversal
+
Condition
+
Counter
```

Example:

- Count target character.

---

## Pattern Combination 3 — Existence Search

```text
Traversal
+
Condition
+
Flag
+
Early Termination
```

Example:

- Check whether target exists.

---

## Pattern Combination 4 — First Occurrence

```text
Traversal
+
Condition
+
Position State
+
Break
```

---

## Pattern Combination 5 — Last Occurrence

```text
Traversal
+
Condition
+
Position State
+
Full Traversal
```

---

## Index vs Character

```text
i
↓
WHERE

str[i]
↓
WHAT
```

---

## Important Rule

```text
Problem Goal
↓
Determines State
↓
Determines Update Rule
↓
Determines Whether Full Traversal Is Needed
```
````

---

# 🏁 Chapter 3 Completion Checklist

```text
[ ] Traversal meaning বুঝি

[ ] String traversal-এর প্রয়োজন বুঝি

[ ] '\0'-based traversal করতে পারি

[ ] for loop দিয়ে traverse করতে পারি

[ ] while loop দিয়ে traverse করতে পারি

[ ] current character concept বুঝি

[ ] i এবং str[i] আলাদা করতে পারি

[ ] traversal + condition করতে পারি

[ ] traversal + counter করতে পারি

[ ] traversal + flag করতে পারি

[ ] early termination বুঝি

[ ] count-all problem-এ full traversal বুঝি

[ ] first occurrence solve করতে পারি

[ ] last occurrence solve করতে পারি

[ ] -1 sentinel state বুঝি

[ ] multiple states update করতে পারি

[ ] forward traversal বুঝি

[ ] backward traversal-এর basic idea বুঝি

[ ] strlen-based traversal বুঝি

[ ] common traversal bugs identify করতে পারি

[ ] নিজের test case বানাতে পারি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 3 Final Mental Model

String Problem দেখলে এখন তোমার Brain-এ শুধু:

```text
Loop চালাব
```

আসা উচিত না।

বরং:

```text
What do I need to know?
        ↓
Which characters must I inspect?
        ↓
Full traversal or early stop?
        ↓
What state do I need?
        │
        ├── Nothing
        ├── Counter
        ├── Flag
        ├── Position
        └── Multiple States
        ↓
What is the update condition?
        ↓
Traverse
        ↓
Observe str[i]
        ↓
Update State
        ↓
Produce Answer
```

আজকের সবচেয়ে গুরুত্বপূর্ণ Formula:

```text
Traversal
+
Condition
+
State
+
Update Rule
=
Large Family of String Problems
```

আর Day 2 থেকে Day 3-এর Connection:

```text
Day 2

Integer Array
↓
arr[i]
↓
Condition
↓
State Update
```

```text
Day 3

Character Array
↓
str[i]
↓
Condition
↓
State Update
```

অর্থাৎ:

```text
Array Problem Solving
        ↓
Same Core Pattern
        ↓
String Problem Solving
```

Data বদলেছে।

কিন্তু তোমার Problem-Solving Engine একই আছে।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ⏳ Chapter 4 — Character Classification
│
├── ⏳ Chapter 5 — Counting Patterns on Strings
│
├── ⏳ Chapter 6 — Character Search & Frequency
│
├── ⏳ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 3 Complete.**

Chapter 4-এ এই Traversal Engine-এর উপর **Character Classification** বসবে:

```text
Current Character
        ↓
What type is it?
        │
        ├── Uppercase?
        ├── Lowercase?
        ├── Digit?
        ├── Vowel?
        ├── Consonant?
        └── Space?
```

সেখান থেকেই Day 3-এর আরও powerful String Problem Solving শুরু হবে।

---

# 📘 Day 3 — Chapter 4

# 🔤 Character Classification

## Current Character-কে চিনতে শেখা

Day 3 — Chapter 3-এ তুমি শিখেছ:

```text
String
↓
Character by Character Traversal
↓
Observe Current Character
↓
Condition Check
↓
State Update
```

Basic Traversal:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // current character = str[i]
}
```

এখন প্রশ্ন:

> `str[i]`-কে পেলাম। কিন্তু বুঝব কীভাবে এটা Uppercase, Lowercase, Digit, Vowel, Consonant নাকি অন্য কিছু?

এই Chapter-এর বিষয়:

# **Character Classification**

Example:

```text
Input:

Rafi2026
```

আমরা Character-by-Character চিন্তা করতে পারি:

```text
R
↓
Uppercase Letter

a
↓
Lowercase Letter

f
↓
Lowercase Letter

i
↓
Lowercase Letter

2
↓
Digit

0
↓
Digit

2
↓
Digit

6
↓
Digit
```

অর্থাৎ:

```text
Traversal
↓
Current Character
↓
Classification
↓
Decision
↓
Action / State Update
```

এই Chapter Day 3-এর পরবর্তী String Problem-গুলোর Foundation।

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* Character Classification কী বুঝতে;
* Uppercase Letter identify করতে;
* Lowercase Letter identify করতে;
* Alphabet identify করতে;
* Digit identify করতে;
* Vowel identify করতে;
* Consonant identify করতে;
* Space detect করতে;
* Special Character সম্পর্কে basic classification করতে;
* Character Range Comparison বুঝতে;
* ASCII-এর প্রয়োজনীয় Mental Model বুঝতে;
* `'A'` থেকে `'Z'` range ব্যবহার করতে;
* `'a'` থেকে `'z'` range ব্যবহার করতে;
* `'0'` থেকে `'9'` range ব্যবহার করতে;
* `&&` এবং `||` classification-এ সঠিকভাবে ব্যবহার করতে;
* nested classification করতে;
* mutually exclusive categories বুঝতে;
* `if` বনাম `if-else if` নির্বাচন করতে;
* `<ctype.h>`-এর basic classification functions চিনতে;
* manual classification এবং library classification-এর পার্থক্য বুঝতে;
* Traversal + Classification combine করতে;
* classification-based problem pattern চিনতে;
* common logical bugs detect করতে।

---

# 📖 Chapter Map

```text
Chapter 4
│
├── Part 1  — Classification Mental Model
├── Part 2  — Character Range Thinking
├── Part 3  — Uppercase Classification
├── Part 4  — Lowercase Classification
├── Part 5  — Alphabet Classification
├── Part 6  — Digit Classification
├── Part 7  — Vowel Classification
├── Part 8  — Consonant Classification
├── Part 9  — Space & Other Characters
├── Part 10 — Classification Decision Tree
├── Part 11 — if vs else-if
├── Part 12 — Traversal + Classification
├── Part 13 — Multiple Category Tracking
├── Part 14 — ctype.h Introduction
├── Part 15 — Manual vs Library Method
├── Part 16 — Common Bugs & Edge Cases
├── Part 17 — Guided Problem Solving
├── Part 18 — Exercises
└── Part 19 — Assignment & Reflection
```

---

# 🧠 Chapter 4 Master Mental Model

একটি String:

```text
Rafi2026
```

Traversal শুরু হলো:

```text
R
↓
What type?
↓
Uppercase
```

তারপর:

```text
a
↓
What type?
↓
Lowercase
```

তারপর:

```text
2
↓
What type?
↓
Digit
```

General Pipeline:

```text
String Input
      ↓
Traversal
      ↓
Current Character = str[i]
      ↓
Which Category?
      │
      ├── Uppercase
      ├── Lowercase
      ├── Digit
      ├── Space
      └── Other
      ↓
Perform Required Action
```

Short Mental Model:

```text
Visit
↓
Classify
↓
Act
```

Chapter 3-এর:

```text
Traverse
↓
Observe
↓
Decide
↓
Update
```

এখন আরও specific হচ্ছে:

```text
Traverse
↓
Observe Character
↓
Classify Character
↓
Update Relevant State
```

---

# Part 1 — Classification Mental Model

# Lesson 1 — Classification মানে কী?

Classification মানে:

> কোনো Character কোন Category-এর মধ্যে পড়ে তা নির্ধারণ করা।

Example:

```text
'A'
```

Classification:

```text
Uppercase Letter
Alphabet
Not Digit
Not Lowercase
```

আর:

```text
'7'
```

Classification:

```text
Digit
Not Alphabet
Not Uppercase
Not Lowercase
```

আর:

```text
' '
```

Classification:

```text
Whitespace / Space
```

Mental Model:

```text
Character
↓
Check Property
↓
Determine Category
```

---

# Lesson 2 — একটি Character-এর একাধিক Property থাকতে পারে

ধরো:

```text
'A'
```

এটি:

```text
Uppercase
```

একই সঙ্গে:

```text
Alphabet
```

আবার:

```text
Vowel
```

অর্থাৎ:

```text
'A'
│
├── Alphabet
├── Uppercase
└── Vowel
```

তাই Classification-এর সময় খুব গুরুত্বপূর্ণ প্রশ্ন:

> Problem কোন Category জানতে চাচ্ছে?

Example:

Problem A:

> Count uppercase letters.

তাহলে:

```text
Need:
Uppercase Classification
```

Problem B:

> Count vowels.

তাহলে:

```text
Need:
Vowel Classification
```

Problem C:

> Count alphabets and digits separately.

তাহলে:

```text
Need:
Alphabet Classification
+
Digit Classification
```

---

# Lesson 3 — Classification নিজে Final Goal না

Chapter 3-এর মতো এখানেও:

```text
Classification
```

নিজে পুরো Solution না।

ধরো Problem:

> Count uppercase letters.

তাহলে:

```text
Traversal
+
Classification
+
Counter
```

Problem:

> Print all digits.

তাহলে:

```text
Traversal
+
Classification
+
Direct Action
```

Problem:

> Check whether string contains any digit.

তাহলে:

```text
Traversal
+
Classification
+
Flag
+
Early Termination
```

তাই নতুন Formula:

```text
Traversal
+
Classification
+
State / Action
=
Solution
```

---

# Part 2 — Character Range Thinking

# Lesson 4 — Character Compare করা যায়

C-তে Character লিখি:

```c
'A'
```

```c
'a'
```

```c
'7'
```

Character internally numeric character code দ্বারা represented হয়।

তাই Comparison করা যায়:

```c
ch >= 'A'
```

```c
ch <= 'Z'
```

এগুলো meaningful।

Example:

```c
if (ch >= 'A' && ch <= 'Z')
{
    printf("Uppercase\n");
}
```

Mental Model:

```text
Is ch inside the range:

'A' ... 'Z'

?
```

---

# Lesson 5 — Range Mental Model

Uppercase English Letters:

```text
A B C D E ... X Y Z
```

Range Check:

```c
ch >= 'A' && ch <= 'Z'
```

Lowercase:

```text
a b c d e ... x y z
```

Range Check:

```c
ch >= 'a' && ch <= 'z'
```

Digit Characters:

```text
0 1 2 3 4 5 6 7 8 9
```

Range Check:

```c
ch >= '0' && ch <= '9'
```

Master Map:

```text
Uppercase
'A' <= ch <= 'Z'

Lowercase
'a' <= ch <= 'z'

Digit
'0' <= ch <= '9'
```

কিন্তু C-তে Mathematical Style:

```text
'A' <= ch <= 'Z'
```

সরাসরি লিখবে না।

Correct C:

```c
ch >= 'A' && ch <= 'Z'
```

---

# Lesson 6 — কেন `&&`?

Uppercase হওয়ার জন্য দুটি Condition-ই True হতে হবে:

```text
ch >= 'A'
```

**AND**

```text
ch <= 'Z'
```

তাই:

```c
if (ch >= 'A' && ch <= 'Z')
```

Mental Model:

```text
Not before A
AND
Not after Z
↓
Inside A-Z range
```

---

# Lesson 7 — Wrong Range Logic

Wrong:

```c
if (ch >= 'A' || ch <= 'Z')
```

এখানে `||` ব্যবহার করা হয়েছে।

কিন্তু Range-এর ভিতরে থাকার জন্য সাধারণত দুটো Boundary Condition একসঙ্গে satisfy করতে হয়।

Correct:

```c
if (ch >= 'A' && ch <= 'Z')
```

Mental Rule:

```text
Inside One Continuous Range
↓
Lower Boundary AND Upper Boundary
```

---

# Part 3 — Uppercase Classification

# Lesson 8 — Uppercase Character Check

Problem:

> Check whether a character is uppercase.

Code:

```c
#include <stdio.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Not Uppercase\n");
    }

    return 0;
}
```

Input:

```text
G
```

Output:

```text
Uppercase
```

---

# Lesson 9 — Dry Run

Input:

```text
G
```

Condition:

```c
ch >= 'A' && ch <= 'Z'
```

Conceptually:

```text
Is G at or after A?
Yes

AND

Is G at or before Z?
Yes
```

Therefore:

```text
True && True
↓
True
```

Result:

```text
Uppercase
```

---

# Lesson 10 — String-এর Uppercase Character Print

Input:

```text
RaFi
```

Goal:

```text
RF
```

Pattern:

```text
Traversal
+
Uppercase Classification
+
Direct Action
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}
```

---

# Part 4 — Lowercase Classification

# Lesson 11 — Lowercase Character Check

Condition:

```c
ch >= 'a' && ch <= 'z'
```

Example:

```c
if (ch >= 'a' && ch <= 'z')
{
    printf("Lowercase\n");
}
```

Mental Range:

```text
a
↓
b
↓
c
↓
...
↓
z
```

---

# Lesson 12 — Count Lowercase Letters

Input:

```text
RaFi2026
```

Lowercase:

```text
a
i
```

Expected Count:

```text
2
```

Pattern:

```text
Traversal
+
Lowercase Classification
+
Counter
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Lesson 13 — Dry Run

String:

```text
RaFi2
```

Initial:

```text
count = 0
```

| Index | Character | Lowercase? | Count |
| ----: | --------- | ---------- | ----: |
|     0 | `R`       | No         |     0 |
|     1 | `a`       | Yes        |     1 |
|     2 | `F`       | No         |     1 |
|     3 | `i`       | Yes        |     2 |
|     4 | `2`       | No         |     2 |

Final:

```text
count = 2
```

---

# Part 5 — Alphabet Classification

# Lesson 14 — Alphabet মানে Uppercase OR Lowercase

একটি Character Alphabet যদি:

```text
Uppercase
OR
Lowercase
```

তাই:

```c
if ((ch >= 'A' && ch <= 'Z') ||
    (ch >= 'a' && ch <= 'z'))
{
    printf("Alphabet\n");
}
```

Mental Model:

```text
Uppercase Range?
        │
        ├── Yes → Alphabet
        │
        └── No
             ↓
        Lowercase Range?
             │
             ├── Yes → Alphabet
             └── No → Not Alphabet
```

---

# Lesson 15 — Parentheses কেন গুরুত্বপূর্ণ?

Condition:

```c
(ch >= 'A' && ch <= 'Z') ||
(ch >= 'a' && ch <= 'z')
```

এটাকে mentally দুইটি Group হিসেবে দেখো:

```text
Group 1
↓
Uppercase?
```

```text
Group 2
↓
Lowercase?
```

তারপর:

```text
Group 1
OR
Group 2
```

অর্থাৎ:

```text
Uppercase
OR
Lowercase
↓
Alphabet
```

Readable Code:

```c
if ((ch >= 'A' && ch <= 'Z') ||
    (ch >= 'a' && ch <= 'z'))
{
    // alphabet
}
```

---

# Lesson 16 — Alphabet Count

Input:

```text
CSE2026
```

Characters:

```text
C → Alphabet
S → Alphabet
E → Alphabet
2 → Not Alphabet
0 → Not Alphabet
2 → Not Alphabet
6 → Not Alphabet
```

Expected:

```text
3
```

Code:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if ((str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z'))
    {
        count++;
    }
}
```

---

# Part 6 — Digit Classification

# Lesson 17 — Character Digit vs Integer Digit

এখানে খুব গুরুত্বপূর্ণ Difference আছে।

Character:

```c
'5'
```

Integer:

```c
5
```

এগুলো একই জিনিস না।

```text
'5'
↓
Character
```

```text
5
↓
Integer Value
```

String:

```text
CSE2026
```

এর মধ্যে:

```text
'2'
'0'
'2'
'6'
```

এগুলো Character।

তাই Comparison:

```c
str[i] >= '0' && str[i] <= '9'
```

---

# Lesson 18 — Digit Check

```c
if (ch >= '0' && ch <= '9')
{
    printf("Digit\n");
}
```

Range:

```text
'0'
↓
'1'
↓
'2'
↓
...
↓
'9'
```

---

# Lesson 19 — Count Digits

Input:

```text
CSE1101
```

Digits:

```text
1
1
0
1
```

Count:

```text
4
```

Pattern:

```text
Traversal
+
Digit Classification
+
Counter
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int digitCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;
        }
    }

    printf("%d\n", digitCount);

    return 0;
}
```

---

# Lesson 20 — Digit Character থেকে Numeric Value

এটা Classification-এর বাইরে সামান্য extra knowledge, কিন্তু খুব useful।

ধরো:

```c
char ch = '7';
```

Numeric digit value পেতে:

```c
int digit = ch - '0';
```

তাহলে:

```text
digit = 7
```

Mental Model:

```text
Character Digit
'7'
↓
Subtract '0'
↓
Numeric Value
7
```

Example:

```c
char ch = '5';

int value = ch - '0';

printf("%d\n", value);
```

Output:

```text
5
```

এখন শুধু Concept মনে রাখবে।

পরের Problem-এ দরকার হলে ব্যবহার করবে।

---

# Part 7 — Vowel Classification

# Lesson 21 — Vowel Range না

Uppercase:

```text
A to Z
```

একটি Continuous Range।

Digit:

```text
0 to 9
```

একটি Continuous Range।

কিন্তু Vowel:

```text
a e i o u
```

এগুলো continuous range না।

তাই:

```c
ch >= 'a' && ch <= 'u'
```

লিখলে ভুল হবে।

কারণ এতে মাঝের অনেক Consonant-ও ঢুকে যাবে।

---

# Lesson 22 — Lowercase Vowel Condition

```c
if (ch == 'a' ||
    ch == 'e' ||
    ch == 'i' ||
    ch == 'o' ||
    ch == 'u')
{
    printf("Vowel\n");
}
```

Mental Model:

```text
Current Character
      ↓
a?
OR
e?
OR
i?
OR
o?
OR
u?
      ↓
Any one true?
      ↓
Vowel
```

---

# Lesson 23 — Uppercase + Lowercase Vowel

Condition:

```c
if (ch == 'a' || ch == 'e' ||
    ch == 'i' || ch == 'o' ||
    ch == 'u' ||
    ch == 'A' || ch == 'E' ||
    ch == 'I' || ch == 'O' ||
    ch == 'U')
{
    printf("Vowel\n");
}
```

এটা beginner-friendly direct method।

Mental Model:

```text
Lowercase Vowel?
OR
Uppercase Vowel?
↓
Vowel
```

---

# Lesson 24 — Count Vowels

Input:

```text
Competitive
```

Manual Traversal:

```text
C → No
o → Yes
m → No
p → No
e → Yes
t → No
i → Yes
t → No
i → Yes
v → No
e → Yes
```

Count:

```text
5
```

Pattern:

```text
Traversal
+
Vowel Classification
+
Counter
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int vowelCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' ||
            ch == 'u' ||
            ch == 'A' || ch == 'E' ||
            ch == 'I' || ch == 'O' ||
            ch == 'U')
        {
            vowelCount++;
        }
    }

    printf("%d\n", vowelCount);

    return 0;
}
```

---

# Part 8 — Consonant Classification

# Lesson 25 — `Not Vowel` মানেই Consonant না

এটা খুব গুরুত্বপূর্ণ।

ধরো:

```text
'7'
```

এটা Vowel না।

কিন্তু Consonant?

```text
No
```

ধরো:

```text
'#'
```

Vowel না।

Consonant?

```text
No
```

তাই:

```text
Not Vowel
=
Consonant
```

এটা ভুল।

Correct Mental Model:

```text
Consonant
=
Alphabet
AND
Not Vowel
```

---

# Lesson 26 — Consonant Decision Pipeline

```text
Current Character
      ↓
Is Alphabet?
      │
      ├── No → Not Consonant
      │
      └── Yes
             ↓
         Is Vowel?
             │
             ├── Yes → Not Consonant
             │
             └── No → Consonant
```

এটা Nested Classification।

---

# Lesson 27 — Code Structure

```c
int isAlphabet =
    (ch >= 'A' && ch <= 'Z') ||
    (ch >= 'a' && ch <= 'z');

int isVowel =
    ch == 'a' || ch == 'e' ||
    ch == 'i' || ch == 'o' ||
    ch == 'u' ||
    ch == 'A' || ch == 'E' ||
    ch == 'I' || ch == 'O' ||
    ch == 'U';

if (isAlphabet && !isVowel)
{
    printf("Consonant\n");
}
```

এখানে:

```text
!
↓
Logical NOT
```

তাই:

```text
!isVowel
↓
Not Vowel
```

Full:

```text
isAlphabet && !isVowel
↓
Alphabet AND Not Vowel
↓
Consonant
```

---

# Lesson 28 — Boolean-like State in C

C-তে basic level-এ আমরা:

```c
int isAlphabet;
int isVowel;
```

ব্যবহার করতে পারি।

Values:

```text
0
↓
False
```

```text
Non-zero
↓
True
```

আমাদের Condition Expression:

```c
int isAlphabet =
    (ch >= 'A' && ch <= 'Z') ||
    (ch >= 'a' && ch <= 'z');
```

result হবে logically:

```text
0 or 1
```

এটা Code readability বাড়াতে useful।

---

# Part 9 — Space & Other Characters

# Lesson 29 — Space Detect

Single Space Character:

```c
' '
```

খেয়াল করো:

```text
' '
```

এর quotes-এর মাঝে একটি Space আছে।

Check:

```c
if (ch == ' ')
{
    printf("Space\n");
}
```

---

# Lesson 30 — Full Line দরকার হতে পারে

যদি String-এর মধ্যে Space count করতে চাও:

```text
I LOVE C
```

তাহলে:

```c
scanf("%s", str);
```

যথেষ্ট না।

কারণ `%s` প্রথম whitespace-এ থেমে যাবে।

তাই:

```c
fgets(str, sizeof(str), stdin);
```

ব্যবহার করতে হবে।

Example:

```c
#include <stdio.h>

int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);

    int spaces = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("%d\n", spaces);

    return 0;
}
```

---

# Lesson 31 — Other Character Category

ধরো Input:

```text
CSE@2026!
```

Categories:

```text
C → Alphabet
S → Alphabet
E → Alphabet
@ → Other / Special
2 → Digit
0 → Digit
2 → Digit
6 → Digit
! → Other / Special
```

Basic Decision Tree:

```text
Character
      ↓
Alphabet?
      │
      ├── Yes → Alphabet
      │
      └── No
           ↓
         Digit?
           │
           ├── Yes → Digit
           │
           └── No → Other
```

যদি Space আলাদা Category হয়:

```text
Character
      ↓
Alphabet?
      │
      ├── Yes → Alphabet
      │
      └── No
           ↓
         Digit?
           │
           ├── Yes → Digit
           │
           └── No
                ↓
              Space?
                │
                ├── Yes → Space
                └── No → Other
```

---

# Part 10 — Classification Decision Tree

# Lesson 32 — Problem Solve করার আগে Category Tree বানাও

Problem:

> Count uppercase, lowercase and digits.

String:

```text
RaFi2026
```

Decision Tree:

```text
Current Character
      ↓
Uppercase?
      │
      ├── Yes → upperCount++
      │
      └── No
           ↓
       Lowercase?
           │
           ├── Yes → lowerCount++
           │
           └── No
                ↓
              Digit?
                │
                ├── Yes → digitCount++
                └── No → Ignore
```

এই Tree Code-এ naturally হয়:

```c
if (uppercase_condition)
{
    upperCount++;
}
else if (lowercase_condition)
{
    lowerCount++;
}
else if (digit_condition)
{
    digitCount++;
}
```

---

# Lesson 33 — Classification Pipeline

Problem দেখলে:

```text
What categories exist?
        ↓
Are categories overlapping?
        ↓
What state per category?
        ↓
How to classify current character?
        ↓
How to update state?
```

Example:

```text
Need:
Uppercase Count
Lowercase Count
Digit Count
```

State:

```c
int uppercase = 0;
int lowercase = 0;
int digits = 0;
```

Traversal:

```text
Every Character
```

Classification:

```text
A-Z?
a-z?
0-9?
```

Update:

```text
Relevant Counter++
```

---

# Part 11 — `if` vs `else if`

# Lesson 34 — Independent Conditions

ধরো Problem:

> Count alphabets and vowels.

একটি `'A'`:

```text
Alphabet
AND
Vowel
```

অর্থাৎ একই Character দুই Counter-এই count হতে পারে।

তাই:

```c
if (isAlphabet)
{
    alphabetCount++;
}

if (isVowel)
{
    vowelCount++;
}
```

এখানে separate `if` logical।

---

# Lesson 35 — Mutually Exclusive Categories

Problem:

> Classify each character as uppercase, lowercase, digit, or other.

একটি Character একই Classification Level-এ:

```text
Uppercase
or
Lowercase
or
Digit
or
Other
```

এখানে:

```c
if (uppercase)
{
    ...
}
else if (lowercase)
{
    ...
}
else if (digit)
{
    ...
}
else
{
    ...
}
```

natural structure।

---

# Lesson 36 — সবচেয়ে গুরুত্বপূর্ণ প্রশ্ন

`if` না `else if`?

নিজেকে জিজ্ঞেস করবে:

> একটি Character কি একাধিক Condition-এর Result-এ contribute করতে পারবে?

যদি:

```text
Yes
↓
Separate if may be needed
```

যদি:

```text
Only one category should be selected
↓
if / else if / else chain
```

Example:

### Alphabet Count + Vowel Count

`A` দুটিতেই count হবে।

```text
Independent Checks
```

### Uppercase vs Lowercase vs Digit

একটি Character একটিমাত্র category-তে যাবে।

```text
Exclusive Classification
```

---

# Part 12 — Traversal + Classification

# Lesson 37 — Core Pattern

এই Chapter-এর Main Pattern:

```text
String
↓
Traversal
↓
Current Character
↓
Classification
↓
State Update
```

Code Skeleton:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

    if (/* classification condition */)
    {
        // update state
    }
}
```

---

# Lesson 38 — Uppercase Count Pattern

```text
Need uppercase count
↓
Traversal
↓
Current Character
↓
Inside A-Z?
↓
Yes → count++
```

Code:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        count++;
    }
}
```

---

# Lesson 39 — Digit Exists Pattern

Problem:

> Check whether String contains any digit.

Pattern:

```text
Traversal
+
Digit Classification
+
Flag
+
Early Termination
```

Code:

```c
int found = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= '0' && str[i] <= '9')
    {
        found = 1;
        break;
    }
}
```

Notice:

```text
Count all digits?
↓
No
```

শুধু:

```text
Any digit exists?
↓
Yes / No
```

তাই:

```text
Flag
+
break
```

---

# Lesson 40 — Print Vowels Pattern

```text
Traversal
+
Vowel Classification
+
Direct Action
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

    if (ch == 'a' || ch == 'e' ||
        ch == 'i' || ch == 'o' ||
        ch == 'u')
    {
        printf("%c", ch);
    }
}
```

---

# Part 13 — Multiple Category Tracking

# Lesson 41 — Count Uppercase, Lowercase and Digit

Input:

```text
RaFi2026
```

Expected:

```text
Uppercase: 2
Lowercase: 2
Digit: 4
```

State:

```c
int uppercase = 0;
int lowercase = 0;
int digits = 0;
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lowercase++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
    }

    printf("Uppercase: %d\n", uppercase);
    printf("Lowercase: %d\n", lowercase);
    printf("Digit: %d\n", digits);

    return 0;
}
```

---

# Lesson 42 — Dry Run

Input:

```text
Ab2X
```

Initial:

```text
uppercase = 0
lowercase = 0
digits = 0
```

| Character | Category  | Upper | Lower | Digit |
| --------- | --------- | ----: | ----: | ----: |
| `A`       | Uppercase |     1 |     0 |     0 |
| `b`       | Lowercase |     1 |     1 |     0 |
| `2`       | Digit     |     1 |     1 |     1 |
| `X`       | Uppercase |     2 |     1 |     1 |

Final:

```text
Uppercase = 2
Lowercase = 1
Digit = 1
```

---

# Lesson 43 — One Traversal, Multiple States

এই Pattern আগের Chapter থেকে পরিচিত:

```text
One Traversal
↓
Current Character
↓
Classify
↓
Update Relevant State
```

তাই:

```text
Traversal 1 → Uppercase
Traversal 2 → Lowercase
Traversal 3 → Digit
```

করতেই হবে না।

এক Traversal-এ:

```text
Current Character
↓
Which category?
↓
Update corresponding counter
```

করতে পারো।

---

# Part 14 — `<ctype.h>` Introduction

# Lesson 44 — C Standard Library Classification Functions

C-তে Character Classification-এর জন্য:

```c
#include <ctype.h>
```

Header আছে।

Common Functions:

```text
isupper()
islower()
isalpha()
isdigit()
isspace()
```

Example:

```c
if (isupper(ch))
{
    printf("Uppercase\n");
}
```

---

# Lesson 45 — Common Functions Map

| Function      | Basic Purpose           |
| ------------- | ----------------------- |
| `isupper(ch)` | Uppercase কি না           |
| `islower(ch)` | Lowercase কি না           |
| `isalpha(ch)` | Alphabetic কি না          |
| `isdigit(ch)` | Decimal digit কি না       |
| `isspace(ch)` | Whitespace category কি না |

Example:

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    scanf(" %c", &ch);

    if (isdigit((unsigned char)ch))
    {
        printf("Digit\n");
    }

    return 0;
}
```

---

# Lesson 46 — এখনই Library Function-এ Depend করব?

Bootcamp-এর এই Stage-এ দুটোই শিখবে।

### Manual Method

```c
ch >= 'A' && ch <= 'Z'
```

### Library Method

```c
isupper((unsigned char)ch)
```

কিন্তু Learning-এর জন্য আগে Manual Logic বুঝবে।

কারণ Manual Logic তোমাকে শেখায়:

```text
Condition Building
Range Thinking
&&
||
Classification Logic
```

Library Function শেখায়:

```text
Readable Code
Standard Tool
```

আমাদের Strategy:

```text
Understand Manually
↓
Practice Manually
↓
Know Standard Library
↓
Use Problem-appropriate method
```

---

# Lesson 47 — `isspace()` শুধু `' '` না

এই Difference জানা useful।

Manual:

```c
ch == ' '
```

শুধু ordinary space check করে।

কিন্তু:

```c
isspace((unsigned char)ch)
```

whitespace category check করে, যার মধ্যে standard whitespace characters থাকতে পারে যেমন:

```text
space
newline
tab
```

তাই:

```text
Space Character Check
```

এবং:

```text
Whitespace Classification
```

একেবারে identical concept না।

---

# Part 15 — Manual vs Library Method

# Lesson 48 — Uppercase Example

Manual:

```c
if (ch >= 'A' && ch <= 'Z')
{
    ...
}
```

Library:

```c
if (isupper((unsigned char)ch))
{
    ...
}
```

---

# Lesson 49 — Digit Example

Manual:

```c
if (ch >= '0' && ch <= '9')
{
    ...
}
```

Library:

```c
if (isdigit((unsigned char)ch))
{
    ...
}
```

---

# Lesson 50 — কোনটা ব্যবহার করবে?

এই Bootcamp-এর current learning problems-এ:

```text
If goal is logic practice
↓
Manual condition
```

যদি Problem solving-এ standard classification function allowed এবং useful হয়:

```text
Library function
↓
Can improve readability
```

কিন্তু Contest Rule:

> যে Function ব্যবহার করছ, তার behaviour সম্পর্কে basic understanding থাকতে হবে।

Blind memorization না।

---

# Part 16 — Common Bugs & Edge Cases

# 🐞 Bug 1 — Wrong Range Operator

Wrong:

```c
if (ch >= 'A' || ch <= 'Z')
```

Correct:

```c
if (ch >= 'A' && ch <= 'Z')
```

Reason:

```text
Inside Range
↓
Both boundaries must hold
```

---

# 🐞 Bug 2 — Mathematical Chained Comparison

Wrong C:

```c
if ('A' <= ch <= 'Z')
```

এটা Mathematical notation-এর মতো দেখালেও C-তে intended range check হিসেবে কাজ করে না।

Correct:

```c
if (ch >= 'A' && ch <= 'Z')
```

---

# 🐞 Bug 3 — Character vs Integer

Wrong:

```c
if (ch >= 0 && ch <= 9)
```

যদি `ch`-এর মধ্যে character digit check করতে চাও।

Correct:

```c
if (ch >= '0' && ch <= '9')
```

Remember:

```text
'7'
↓
Character digit
```

```text
7
↓
Integer
```

---

# 🐞 Bug 4 — `Not Vowel = Consonant`

Wrong:

```c
if (!isVowel)
{
    consonantCount++;
}
```

যদি String-এ digit বা special character থাকতে পারে।

কারণ:

```text
'7'
↓
Not Vowel
↓
But Not Consonant
```

Correct Mental Model:

```text
Alphabet
AND
Not Vowel
↓
Consonant
```

---

# 🐞 Bug 5 — Lowercase Vowel Only

Condition:

```c
if (ch == 'a' ||
    ch == 'e' ||
    ch == 'i' ||
    ch == 'o' ||
    ch == 'u')
```

যদি Input uppercase-ও contain করতে পারে:

```text
A E I O U
```

তাহলে এগুলো miss হবে।

সবসময় Constraint পড়বে।

---

# 🐞 Bug 6 — `%s` দিয়ে Space Count

Input:

```text
I LOVE C
```

Code:

```c
scanf("%99s", str);
```

Stored:

```text
I
```

তাই full line-এর Space count হবে না।

Correct Input Method:

```c
fgets(str, sizeof(str), stdin);
```

---

# 🐞 Bug 7 — `if` / `else if` Wrong Structure

Problem:

> Count alphabets and vowels.

যদি:

```c
if (isAlphabet)
{
    alphabetCount++;
}
else if (isVowel)
{
    vowelCount++;
}
```

তাহলে Vowel Character alphabet condition-এই True হয়ে প্রথম block-এ ঢুকবে।

`else if` আর check হবে না।

তাই vowel count ভুল হবে।

যেহেতু একটি Character একই সঙ্গে Alphabet এবং Vowel হতে পারে:

```c
if (isAlphabet)
{
    alphabetCount++;
}

if (isVowel)
{
    vowelCount++;
}
```

---

# 🐞 Bug 8 — Forgetting Input Constraint

Problem বলেছে:

```text
String contains only lowercase letters.
```

তাহলে uppercase vowel condition হয়তো unnecessary।

Problem বলেছে:

```text
String may contain letters, digits and symbols.
```

তাহলে consonant count করার আগে alphabet check দরকার।

Rule:

```text
Read Constraint
↓
Know Possible Character Set
↓
Build Necessary Classification Logic
```

---

# 🐞 Bug 9 — Newline as Character

`fgets()` input:

```text
HELLO
```

Stored হতে পারে:

```text
H E L L O \n \0
```

যদি:

```text
Alphabet?
No

Digit?
No

Else
↓
Special Character Count++
```

তাহলে newline ভুল করে Other/Special হিসেবে count হতে পারে।

Problem অনুযায়ী:

```c
str[strcspn(str, "\n")] = '\0';
```

দিয়ে cleanup useful হতে পারে।

---

# Part 17 — Guided Problem Solving

# Problem 1 — Count Uppercase Letters

## Problem

একটি String-এর Uppercase Character count করো।

Input:

```text
RaFi
```

Output:

```text
2
```

---

## Step 1 — Need Traversal?

```text
Need to inspect every character
↓
Yes
```

---

## Step 2 — Need Classification?

```text
Need to know uppercase or not
↓
Yes
```

---

## Step 3 — Need State?

```text
Need total number
↓
Counter
```

---

## Pattern

```text
Traversal
+
Uppercase Classification
+
Counter
```

---

## State

```c
int count = 0;
```

---

## Condition

```c
str[i] >= 'A' && str[i] <= 'Z'
```

---

## Update

```c
count++;
```

---

## Full Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Problem 2 — Check Digit Exists

## Problem

একটি String-এর মধ্যে অন্তত একটি Digit আছে কি না check করো।

Input:

```text
CSE2026
```

Output:

```text
Yes
```

---

## Pattern Recognition

Need:

```text
Inspect characters
↓
Traversal
```

Need:

```text
Digit or not
↓
Classification
```

Need:

```text
Yes / No memory
↓
Flag
```

Need all characters after finding digit?

```text
No
↓
Early Termination
```

Pattern:

```text
Traversal
+
Digit Classification
+
Flag
+
Break
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int found = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
```

---

# Problem 3 — Count Vowels and Consonants

## Problem

একটি alphabet-only word-এর Vowel এবং Consonant count করো।

Input:

```text
programming
```

Expected:

```text
Vowels: 3
Consonants: 8
```

যেহেতু Constraint:

```text
Only lowercase English letters
```

তাই Decision সহজ:

```text
Vowel?
      │
      ├── Yes → vowelCount++
      │
      └── No → consonantCount++
```

কারণ input guarantee করেছে:

```text
Every character is alphabet
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
```

এখানে `else` safe কারণ Constraint alphabet-only lowercase word।

---

# Problem 4 — Mixed Character Classification

## Problem

একটি String-এ:

```text
Uppercase
Lowercase
Digit
Other
```

count করো।

Input:

```text
RaFi@2026!
```

Expected:

```text
Uppercase: 2
Lowercase: 2
Digit: 4
Other: 2
```

Pattern:

```text
Traversal
+
Exclusive Classification
+
Multiple Counters
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int others = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lowercase++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }
    }

    printf("Uppercase: %d\n", uppercase);
    printf("Lowercase: %d\n", lowercase);
    printf("Digit: %d\n", digits);
    printf("Other: %d\n", others);

    return 0;
}
```

---

# Part 18 — Exercises

# Exercise 1 — Classify One Character

Input:

```text
G
```

Output:

```text
Uppercase
```

Possible Categories:

```text
Uppercase
Lowercase
Digit
Other
```

Before Code:

```text
Input Type:
...

Classification Structure:
...

Conditions:
...
```

---

# Exercise 2 — Count Uppercase

Input:

```text
ComPetITive
```

নিজে Manual Count করবে।

তারপর:

```text
Pattern:
...

State:
...

Initialization:
...

Classification Condition:
...

Update:
...
```

Code লিখবে।

---

# Exercise 3 — Count Lowercase

Input:

```text
CSEBootCamp
```

নিজে:

```text
Manual Count:
...

Pattern:
...

Counter:
...

Condition:
...
```

তারপর Code।

---

# Exercise 4 — Count Digits

Input:

```text
CSE1101LAB2026
```

Goal:

```text
Total digit characters
```

Pattern লিখবে:

```text
...
+
...
+
...
```

তারপর Code।

---

# Exercise 5 — Check Alphabet

একটি Character Input নাও।

Output:

```text
Alphabet
```

অথবা:

```text
Not Alphabet
```

নিজে Condition তৈরি করবে:

```text
Uppercase Range
OR
Lowercase Range
```

---

# Exercise 6 — Print Only Digits

Input:

```text
CSE1101LAB2026
```

Expected:

```text
11012026
```

Pattern:

```text
Traversal
+
?
+
?
```

নিজে complete করবে।

---

# Exercise 7 — Print Only Letters

Input:

```text
CSE1101LAB2026
```

Expected:

```text
CSELAB
```

নিজে Alphabet Classification ব্যবহার করবে।

---

# Exercise 8 — Count Vowels

Input:

```text
competitive
```

Expected:

```text
5
```

নিজে:

```text
Traversal:
...

Classification:
...

State:
...

Update:
...
```

তারপর Code।

---

# Exercise 9 — Digit Exists

Input:

```text
security2026
```

Expected:

```text
Yes
```

Restriction:

```text
Use Flag
Use Early Termination
```

Explain করবে:

```text
Why count is unnecessary:
...

Why break is valid:
...
```

---

# Exercise 10 — Count Categories

Input:

```text
CP@Fest2026!
```

Count:

```text
Uppercase
Lowercase
Digit
Other
```

নিজে Dry Run Table বানাবে:

| Character | Category  | Updated State |
| --------- | --------- | ------------- |
| `C`       | Uppercase | `upper++`     |
| `P`       | `?`       | `?`           |
| `@`       | `?`       | `?`           |
| `F`       | `?`       | `?`           |
| `e`       | `?`       | `?`           |
| `s`       | `?`       | `?`           |
| `t`       | `?`       | `?`           |
| `2`       | `?`       | `?`           |
| `0`       | `?`       | `?`           |
| `2`       | `?`       | `?`           |
| `6`       | `?`       | `?`           |
| `!`       | `?`       | `?`           |

---

# Exercise 11 — Count Spaces

Input:

```text
I LOVE C PROGRAMMING
```

Requirement:

```text
Use full-line input
```

নিজে Explain করবে:

```text
Why scanf("%s") is not enough:
...

Why fgets() is appropriate:
...

Classification condition:
...
```

---

# Exercise 12 — Alphabet and Vowel Together

Input:

```text
A1e@B
```

Count:

```text
Alphabet Count
Vowel Count
```

Important Question:

> `if` + `if` ব্যবহার করবে, নাকি `if` + `else if`?

নিজের Answer এবং Reason লিখবে।

---

# Part 19 — Chapter Assignment

# 📝 Task 1 — Classification Dictionary

নিজের ভাষায় নিচের Terms explain করবে:

```text
Character Classification
Character Range
Uppercase
Lowercase
Alphabet
Digit Character
Vowel
Consonant
Whitespace
Special / Other Character
```

Format:

```text
Term:
Uppercase

Meaning:
...

Manual Condition:
...

Example:
...
```

---

# 📝 Task 2 — Range Table

নিজে Table Complete করবে:

| Category  | Start | End   | Condition |
| --------- | ----- | ----- | --------- |
| Uppercase | `'A'` | `'Z'` | `?`       |
| Lowercase | `'a'` | `'z'` | `?`       |
| Digit     | `'0'` | `'9'` | `?`       |

এর নিচে Explain করবে:

```text
Why && is used for range checking:
...
```

---

# 📝 Task 3 — Single Character Classifier

File:

```text
classify_character.c
```

Input:

```text
A
```

Possible Output:

```text
Uppercase
```

Categories:

```text
Uppercase
Lowercase
Digit
Space
Other
```

Required:

```text
Input Analysis
↓
Decision Tree
↓
Conditions
↓
Code
↓
Test Cases
```

কমপক্ষে Test করবে:

```text
A
z
5
@
```

Space test করতে input method নিয়ে নিজে চিন্তা করবে।

---

# 📝 Task 4 — Count Uppercase, Lowercase and Digits

File:

```text
count_categories.c
```

Input:

```text
RaFi2026
```

Expected:

```text
Uppercase: 2
Lowercase: 2
Digit: 4
```

Code-এর আগে:

```text
Pattern:
...

States:
...

Initial Values:
...

Classification Order:
...

Why one traversal is enough:
...
```

---

# 📝 Task 5 — Count Vowels

File:

```text
count_vowels.c
```

Input:

```text
competitive
```

Expected:

```text
5
```

Required Analysis:

```text
Need Traversal:
...

Need Classification:
...

Need State:
...

Initial State:
...

Condition:
...

Update:
...
```

---

# 📝 Task 6 — Count Vowels and Consonants Safely

File:

```text
vowel_consonant.c
```

এই Task-এ Input শুধু alphabet guaranteed না।

Input হতে পারে:

```text
CSE2026!
```

তাই তোমাকে count করতে হবে:

```text
Vowels
Consonants
```

Digits এবং Symbols ignore করবে।

Required Mental Model:

```text
Current Character
      ↓
Alphabet?
      │
      ├── No → Ignore
      │
      └── Yes
             ↓
          Vowel?
             │
             ├── Yes → vowel++
             └── No → consonant++
```

Expected Input:

```text
CSE2026!
```

Expected:

```text
Vowels: 1
Consonants: 2
```

---

# 📝 Task 7 — Find First Digit

File:

```text
first_digit.c
```

Input:

```text
CSE1101
```

Expected Output:

```text
3
```

কারণ:

```text
Index:
0 1 2 3 4 5 6

Value:
C S E 1 1 0 1
      ↑
First Digit Index = 3
```

Pattern Identify করবে:

```text
Traversal
+
?
+
?
+
?
```

Hint:

```text
Classification
Position State
Early Termination
```

---

# 📝 Task 8 — Check Uppercase Exists

File:

```text
uppercase_exists.c
```

Input:

```text
competitiveProgramming
```

Output:

```text
Found
```

Use:

```text
Traversal
+
Uppercase Classification
+
Flag
+
Early Termination
```

তারপর Explain করবে:

```text
Why full traversal may be unnecessary:
...
```

---

# 📝 Task 9 — Extract Digits

File:

```text
extract_digits.c
```

Input:

```text
CSE1101LAB2026
```

Output:

```text
11012026
```

Code-এর আগে:

```text
Need Traversal:
...

Need State:
Yes / No

Classification:
...

Action:
...
```

চিন্তা করবে:

> শুধু Print করতে হলে Counter দরকার কি?

---

# 📝 Task 10 — Full Line Classification

File:

```text
full_line_classification.c
```

Input:

```text
CSE Fest 2026!
```

Count:

```text
Uppercase
Lowercase
Digit
Space
Other
```

Requirement:

```text
Use fgets()
```

Newline behaviour মনে রাখবে।

Code-এর আগে:

```text
Input Method:
...

Why:
...

Possible Newline Problem:
...

Cleanup Strategy:
...

Classification Categories:
...
```

---

# 📝 Task 11 — `if` vs `else if` Analysis

নিচের দুই Problem compare করো।

### Problem A

Count:

```text
Alphabet
Vowel
```

### Problem B

Classify into exactly one:

```text
Uppercase
Lowercase
Digit
Other
```

লিখবে:

```text
Problem A Structure:
...

Reason:
...

Problem B Structure:
...

Reason:
...
```

---

# 📝 Task 12 — Manual vs Library Version

একই Problem দুইভাবে solve করবে:

> Count digits in a string.

### Version A

Manual:

```text
'0' to '9'
```

### Version B

Using:

```c
isdigit()
```

তারপর Compare করবে:

```text
Which is easier to understand:
...

Which is shorter:
...

What did manual version teach me:
...

What did library version teach me:
...
```

---

# 📝 Task 13 — Build Test Cases

Problem:

> Count vowels and consonants. Ignore non-alphabet characters.

কমপক্ষে Test করবে:

```text
1. Only vowels
2. Only consonants
3. Mixed vowels and consonants
4. Uppercase and lowercase mix
5. Digits included
6. Symbols included
7. One-character vowel
8. One-character consonant
9. No alphabet characters
```

Format:

```text
Test:
...

Input:
...

Expected Vowels:
...

Expected Consonants:
...

Why this test matters:
...
```

---

# 📝 Task 14 — Pattern Recognition Drill

নিচের Problem-গুলোর Pattern Combination লিখবে।

### A — Count Uppercase

```text
...
+
...
+
...
```

---

### B — Print Digits

```text
...
+
...
+
...
```

---

### C — Check Digit Exists

```text
...
+
...
+
...
+
...
```

---

### D — Find First Uppercase Position

```text
...
+
...
+
...
+
...
```

---

### E — Count Uppercase, Lowercase and Digit

```text
...
+
...
+
...
```

---

### F — Count Consonants from Mixed Input

```text
...
+
...
+
...
+
...
```

---

# 📝 Task 15 — Chapter Reflection

Copy-paste Template:

````markdown
# 🧠 Day 3 — Chapter 4 Reflection

## 1. What Is Character Classification?

...

---

## 2. My Classification Mental Model

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

## 3. Character Range Rules

### Uppercase

```c
...
```

### Lowercase

```c
...
```

### Digit

```c
...
```

---

## 4. Why Range Check Uses `&&`

...

---

## 5. Alphabet Classification

...

---

## 6. Vowel Classification

...

---

## 7. Consonant Mental Model

```text
...
+
...
=
...
```

---

## 8. Character vs Integer Digit

```text
'5'
=
...

5
=
...
```

---

## 9. `if` vs `else if`

### Separate `if` when:

...

### `else if` chain when:

...

---

## 10. Most Important Bug I Learned

...

---

## 11. Pattern I Can Now Recognize

...

---

## 12. Confidence Score

```text
Uppercase Check:        ?/10
Lowercase Check:        ?/10
Alphabet Check:         ?/10
Digit Check:            ?/10
Vowel Check:            ?/10
Consonant Check:        ?/10
Range Thinking:         ?/10
if vs else-if:          ?/10
Mixed Classification:   ?/10
Pattern Recognition:    ?/10
```
````

---

# 🧪 Chapter 4 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Uppercase Character-এর manual condition কী?

---

## Question 2

Lowercase Character-এর manual condition কী?

---

## Question 3

Digit Character check:

```text
0 to 9
```

নাকি:

```text
'0' to '9'
```

কোনটি ব্যবহার করবে এবং কেন?

---

## Question 4

Alphabet Classification-এর Logic কী?

---

## Question 5

কেন:

```text
Not Vowel
```

মানেই:

```text
Consonant
```

না?

---

## Question 6

Consonant-এর safe Mental Model কী?

---

## Question 7

Continuous Range Check-এ সাধারণত `&&` কেন লাগে?

---

## Question 8

Vowel check-এ Range Comparison কেন সরাসরি কাজ করে না?

---

## Question 9

একটি `'A'` কি একই সঙ্গে Alphabet এবং Vowel হতে পারে?

---

## Question 10

Alphabet Count এবং Vowel Count একই সঙ্গে করতে চাইলে separate `if` কেন দরকার হতে পারে?

---

## Question 11

Uppercase, Lowercase, Digit, Other—exactly one Category select করতে কোন Structure natural?

---

## Question 12

এই Code-এর Bug কী?

```c
if (ch >= 'A' || ch <= 'Z')
{
    printf("Uppercase");
}
```

---

## Question 13

এই Code-এর Problem কী?

```c
if (!isVowel)
{
    consonantCount++;
}
```

যদি Input-এ digits এবং symbols থাকতে পারে?

---

## Question 14

Space-containing line classify করতে `%s` কেন যথেষ্ট নাও হতে পারে?

---

## Question 15

Digit existence check-এ:

```text
Counter
```

নাকি:

```text
Flag
```

কোনটা বেশি natural?

কেন?

---

# 🐞 Chapter 4 Mistake Checklist

```text
[ ] Character Range-এ && এবং || confuse করছি না

[ ] Mathematical chained comparison C-তে লিখছি না

[ ] '5' এবং 5-এর পার্থক্য বুঝি

[ ] Digit check-এ '0' এবং '9' ব্যবহার করছি

[ ] Alphabet = Uppercase OR Lowercase বুঝি

[ ] Not Vowel = Consonant ধরে নিচ্ছি না

[ ] Consonant-এর আগে Alphabet check প্রয়োজন কি না দেখি

[ ] Uppercase input possibility constraint থেকে দেখি

[ ] Separate if এবং else-if chain-এর difference বুঝি

[ ] Overlapping categories চিনতে পারি

[ ] Mutually exclusive categories চিনতে পারি

[ ] Full line input-এ correct input method ব্যবহার করি

[ ] fgets newline classification-এ interfere করতে পারে জানি

[ ] Counter initialize করি

[ ] Existence problem-এ unnecessary count করি না

[ ] Early termination valid কি না বুঝি

[ ] Classification-এর আগে Problem Constraint পড়ি
```

---

# 🧠 Chapter 4 Pattern Library Update

তোমার `core_pattern.md`-এ এই Section add করতে পারো:

````markdown
# 🔤 Character Classification Pattern

## Core Idea

Inspect the current character and determine which category it belongs to.

---

## Mental Model

```text
Traversal
↓
Current Character
↓
Classification
↓
Action or State Update
```

---

## Uppercase

```c
ch >= 'A' && ch <= 'Z'
```

---

## Lowercase

```c
ch >= 'a' && ch <= 'z'
```

---

## Digit

```c
ch >= '0' && ch <= '9'
```

---

## Alphabet

```c
(ch >= 'A' && ch <= 'Z') ||
(ch >= 'a' && ch <= 'z')
```

---

## Lowercase Vowel

```c
ch == 'a' ||
ch == 'e' ||
ch == 'i' ||
ch == 'o' ||
ch == 'u'
```

---

## Safe Consonant Mental Model

```text
Alphabet
AND
Not Vowel
↓
Consonant
```

---

## Pattern Combination 1 — Classification Count

```text
Traversal
+
Classification
+
Counter
```

Example:

- Count uppercase letters.
- Count digits.
- Count vowels.

---

## Pattern Combination 2 — Classification Filter

```text
Traversal
+
Classification
+
Direct Action
```

Example:

- Print only digits.
- Print only uppercase letters.

---

## Pattern Combination 3 — Classification Existence

```text
Traversal
+
Classification
+
Flag
+
Early Termination
```

Example:

- Check whether any digit exists.

---

## Pattern Combination 4 — First Classified Position

```text
Traversal
+
Classification
+
Position State
+
Early Termination
```

Example:

- Find first digit index.
- Find first uppercase index.

---

## Multiple Category Pattern

```text
One Traversal
↓
Classify Current Character
↓
Update Relevant Counter
```

---

## Important Decision Rule

```text
Can one character contribute to multiple results?
        │
        ├── Yes
        │     ↓
        │ Separate if checks may be needed
        │
        └── No, exactly one category
              ↓
          if / else if / else
```
````

---

# 🏁 Chapter 4 Completion Checklist

```text
[ ] Character Classification বুঝি

[ ] Character Range concept বুঝি

[ ] Uppercase manually check করতে পারি

[ ] Lowercase manually check করতে পারি

[ ] Alphabet check করতে পারি

[ ] Digit Character check করতে পারি

[ ] '5' এবং 5 আলাদা বুঝি

[ ] Digit Character থেকে numeric value-এর basic idea বুঝি

[ ] Vowel check করতে পারি

[ ] Consonant-এর correct mental model বুঝি

[ ] Space check করতে পারি

[ ] Other/Special category তৈরি করতে পারি

[ ] && range logic বুঝি

[ ] || alternative logic বুঝি

[ ] Overlapping category বুঝি

[ ] Exclusive category বুঝি

[ ] if vs else-if select করতে পারি

[ ] Traversal + Classification combine করতে পারি

[ ] Classification + Counter করতে পারি

[ ] Classification + Flag করতে পারি

[ ] Classification + Position করতে পারি

[ ] Multiple category count করতে পারি

[ ] ctype.h basic functions চিনি

[ ] Manual এবং library method-এর difference বুঝি

[ ] Common classification bugs detect করতে পারি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 4 Final Mental Model

আগে String দেখলে তোমার Mental Model ছিল:

```text
String
↓
Traverse
↓
Current Character
```

এখন এর সঙ্গে নতুন Layer যোগ হলো:

```text
String
↓
Traverse
↓
Current Character
↓
Classify
      │
      ├── Uppercase?
      ├── Lowercase?
      ├── Alphabet?
      ├── Digit?
      ├── Vowel?
      ├── Consonant?
      ├── Space?
      └── Other?
↓
Take Action
↓
Update State
```

সবচেয়ে গুরুত্বপূর্ণ Formula:

```text
Traversal
+
Classification
+
State
+
Update Rule
=
Large Family of String Problems
```

আর Problem অনুযায়ী State বদলাবে:

```text
How many?
↓
Counter
```

```text
Does it exist?
↓
Flag
```

```text
Where is the first one?
↓
Position + Break
```

```text
Print matching characters
↓
Direct Action
```

```text
Count multiple categories
↓
Multiple Counters
```

আজকের সবচেয়ে গুরুত্বপূর্ণ Logical Connection:

```text
Problem Statement
↓
Possible Character Set
↓
Required Categories
↓
Classification Logic
↓
State Selection
↓
Traversal
↓
Answer
```

আর একটি খুব গুরুত্বপূর্ণ Rule:

```text
Never classify blindly
↓
Read constraints first
```

কারণ:

```text
Only lowercase letters
```

এবং:

```text
Letters + digits + symbols
```

এই দুই Problem-এর Consonant Logic এক হবে না।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ⏳ Chapter 5 — Counting Patterns on Strings
│
├── ⏳ Chapter 6 — Character Search & Frequency
│
├── ⏳ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 4 Complete.**

Chapter 5-এ এখন এই পর্যন্ত শেখা তিনটি বড় জিনিস একসঙ্গে ব্যবহার হবে:

```text
String Traversal
+
Character Classification
+
Counting State
```

অর্থাৎ:

```text
String
↓
Traverse
↓
Classify Current Character
↓
Which Counter Should Change?
↓
Update Count
↓
Final Frequency / Count
```

সেখান থেকে শুরু হবে **Day 3 — Chapter 5: Counting Patterns on Strings**।

---

# 🚀 CP Bootcamp 2026 — Day 3

# Chapter 5 — Counting Patterns on Strings

> **Day 3 Theme:** String Traversal → Character Classification → Counting → Search → Transformation  
> **Chapter Goal:** String traverse করার সময় বিভিন্ন ধরনের character count করা এবং **Traversal + Classification + Counter** pattern combine করতে শেখা।  
> **Estimated Time:** 45–60 minutes

---

# 🎯 Chapter Mission

আগের Chapter-গুলোতে আমরা শিখেছি:

```text
String
↓
Character Array
↓
Index
↓
Traversal
↓
Character Classification
```

এখন আমরা শিখব:

```text
String Traversal
+
Character Classification
+
Counter
```

এই তিনটি combine করে solve করা যায়:

```text
Count Vowels

Count Consonants

Count Digits

Count Spaces

Count Uppercase Letters

Count Lowercase Letters

Count Words

Count Specific Characters
```

এই Chapter-এর মূল mental model:

```text
Traverse Character
        ↓
Classify Character
        ↓
Condition Match?
        │
     ┌──┴──┐
     │     │
    Yes    No
     │     │
     ▼     ▼
 Counter++ Continue
```

---

# 1. String Counting Pattern কী?

ধরো string:

```text
Hello World
```

আমরা জানতে চাই:

```text
কতটি vowel আছে?
```

আমাদের process:

```text
H → vowel? No

e → vowel? Yes → count++

l → vowel? No

l → vowel? No

o → vowel? Yes → count++

(space) → vowel? No

W → vowel? No

o → vowel? Yes → count++

r → vowel? No

l → vowel? No

d → vowel? No
```

Final:

```text
Vowel Count = 3
```

এখানে pattern:

```text
Traversal
+
Condition
+
Counter
```

---

# 2. Basic Counting Template

General template:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

Mental Model:

```text
Start Counter
↓
Visit Every Character
↓
Check Condition
↓
Match?
↓
Increase Counter
```

এই template অনেক string problem-এর foundation।

---

# 3. Count Vowels

Problem:

> একটি string-এ মোট কতটি vowel আছে?

Vowels:

```text
a e i o u
```

এবং uppercase:

```text
A E I O U
```

Example:

```text
Programming
```

Characters:

```text
P r o g r a m m i n g
```

Vowels:

```text
o
a
i
```

Answer:

```text
3
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int vowelCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' ||
            ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
    }

    printf("%d\n", vowelCount);

    return 0;
}
```

Pattern:

```text
String Traversal
+
Vowel Condition
+
Counter
```

---

# 4. Why Use `char ch = str[i]`?

আমরা সরাসরি লিখতে পারি:

```c
if (str[i] == 'a' || str[i] == 'e' ...)
```

কিন্তু:

```c
char ch = str[i];
```

লিখলে code readable হয়।

Mental Meaning:

```text
str[i]
↓
Current Character
↓
Store in ch
↓
Test ch
```

Example:

```c
char ch = str[i];

if (ch == 'a')
{
    // current character is 'a'
}
```

এটা mandatory না।

কিন্তু complex condition readable করতে useful।

---

# 5. Count Digits

Problem:

> String-এর মধ্যে কয়টি digit আছে?

Input:

```text
Room 204, Floor 5
```

Digits:

```text
2
0
4
5
```

Answer:

```text
4
```

---

## Manual Condition

```c
if (str[i] >= '0' && str[i] <= '9')
{
    digitCount++;
}
```

Full Pattern:

```c
int digitCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= '0' && str[i] <= '9')
    {
        digitCount++;
    }
}
```

Mental Model:

```text
Current Character
↓
Between '0' and '9'?
↓
Yes
↓
digitCount++
```

---

# 6. Count Digits with `isdigit()`

Using:

```c
#include <ctype.h>
```

Code:

```c
if (isdigit((unsigned char)str[i]))
{
    digitCount++;
}
```

Full example:

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int digitCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)str[i]))
        {
            digitCount++;
        }
    }

    printf("%d\n", digitCount);

    return 0;
}
```

Mental Pattern:

```text
Traverse
↓
isdigit()
↓
True?
↓
digitCount++
```

---

# 7. Count Uppercase Letters

Input:

```text
Hello CP World
```

Uppercase:

```text
H
C
P
W
```

Answer:

```text
4
```

Code:

```c
int uppercaseCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        uppercaseCount++;
    }
}
```

অথবা:

```c
if (isupper((unsigned char)str[i]))
{
    uppercaseCount++;
}
```

Pattern:

```text
Traversal
+
Uppercase Classification
+
Counter
```

---

# 8. Count Lowercase Letters

Input:

```text
Hello CP
```

Lowercase:

```text
e
l
l
o
```

Answer:

```text
4
```

Code:

```c
int lowercaseCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (islower((unsigned char)str[i]))
    {
        lowercaseCount++;
    }
}
```

---

# 9. Count Spaces

Input:

```text
I love competitive programming
```

Spaces:

```text
I_love_competitive_programming
 ↑    ↑           ↑
```

Total:

```text
3
```

Code:

```c
int spaceCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == ' ')
    {
        spaceCount++;
    }
}
```

Pattern:

```text
Traversal
+
Exact Character Match
+
Counter
```

---

# 10. Multiple Counters in One Traversal

ধরো problem বলল:

> একটি string-এ uppercase, lowercase, digit এবং space count করো।

Beginner approach হতে পারে:

```text
Loop 1 → Uppercase Count

Loop 2 → Lowercase Count

Loop 3 → Digit Count

Loop 4 → Space Count
```

এটা কাজ করবে।

কিন্তু একই traversal-এ সব count করা যায়।

State:

```c
int uppercaseCount = 0;
int lowercaseCount = 0;
int digitCount = 0;
int spaceCount = 0;
```

Traversal:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    unsigned char ch = (unsigned char)str[i];

    if (isupper(ch))
    {
        uppercaseCount++;
    }
    else if (islower(ch))
    {
        lowercaseCount++;
    }
    else if (isdigit(ch))
    {
        digitCount++;
    }
    else if (ch == ' ')
    {
        spaceCount++;
    }
}
```

Mental Model:

```text
One Traversal
        ↓
Current Character
        ↓
Classify
        │
   ┌────┼────┬──────┐
   │    │    │      │
 Upper Lower Digit Space
   │    │    │      │
   ▼    ▼    ▼      ▼
  ++   ++   ++     ++
```

এটা খুব important pattern।

---

# 11. `if` vs `else if` in Counting

ধরো categories mutually exclusive:

```text
Uppercase
Lowercase
Digit
Space
```

একটি character একই সাথে:

```text
Uppercase এবং Digit
```

হতে পারে না।

তাই:

```c
if (...)
{
}
else if (...)
{
}
else if (...)
{
}
```

natural।

কিন্তু conditions overlap করতে পারে এমন problem-এ independent `if` দরকার হতে পারে।

Example:

```text
Character is alphabetic?

Character is vowel?
```

একটি vowel একই সাথে:

```text
Alphabet
+
Vowel
```

দুইটাই হতে পারে।

তাই problem অনুযায়ী condition structure choose করতে হবে।

---

# 12. Count Vowels and Consonants

Input:

```text
Hello World
```

Letters:

```text
H e l l o W o r l d
```

Vowels:

```text
e o o
```

Count:

```text
3
```

Consonants:

```text
H l l W r l d
```

Count:

```text
7
```

Space consonant না।

Newline consonant না।

Digit consonant না।

তাই logic:

```text
Is Alphabet?
        │
     ┌──┴──┐
     │     │
    No    Yes
     │     │
   Ignore  ▼
         Is Vowel?
          │
       ┌──┴──┐
       │     │
      Yes    No
       │     │
       ▼     ▼
    vowel++ consonant++
```

---

# 13. Vowel and Consonant Code

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char)str[i];

        if (isalpha(ch))
        {
            char lower = (char)tolower(ch);

            if (lower == 'a' ||
                lower == 'e' ||
                lower == 'i' ||
                lower == 'o' ||
                lower == 'u')
            {
                vowelCount++;
            }
            else
            {
                consonantCount++;
            }
        }
    }

    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}
```

Pattern Combination:

```text
Traversal
+
Alphabet Classification
+
Case Normalization
+
Vowel Condition
+
Multiple Counters
```

---

# 14. Why Check `isalpha()` First?

Wrong idea:

```c
if (vowel)
{
    vowelCount++;
}
else
{
    consonantCount++;
}
```

Problem:

Input:

```text
Hi 123!
```

Then:

```text
1
2
3
!
space
newline
```

সব consonant হিসেবে count হয়ে যেতে পারে।

Correct:

```text
Character
↓
Is Alphabet?
        │
    ┌───┴───┐
    │       │
   No      Yes
    │       │
 Ignore     ▼
         Vowel?
        ┌───┴───┐
        │       │
       Yes      No
        │       │
        ▼       ▼
     Vowel   Consonant
```

Lesson:

> **Classification-এর order গুরুত্বপূর্ণ।**

---

# 15. Count a Specific Character

Problem:

> String-এ character `'a'` কতবার এসেছে?

Input:

```text
banana
```

Traversal:

```text
b → No

a → count = 1

n → No

a → count = 2

n → No

a → count = 3
```

Answer:

```text
3
```

Code:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a')
    {
        count++;
    }
}
```

Generic version:

```c
char target;

scanf(" %c", &target);
```

তারপর:

```c
if (str[i] == target)
{
    count++;
}
```

Pattern:

```text
Traversal
+
Target Match
+
Counter
```

---

# 16. Case-Sensitive vs Case-Insensitive Count

Input:

```text
BanAna
```

Target:

```text
a
```

Case-sensitive count:

```text
Only lowercase 'a'
```

Answer:

```text
1
```

Case-insensitive count:

```text
a
A
A
```

Answer:

```text
3
```

Case-insensitive logic:

```c
if (tolower((unsigned char)str[i]) ==
    tolower((unsigned char)target))
{
    count++;
}
```

Mental Model:

```text
Normalize Both Characters
↓
Compare
```

---

# 17. Word Count — Basic Version

Input:

```text
I love C
```

Words:

```text
I

love

C
```

Count:

```text
3
```

Beginner shortcut:

```text
Words = Spaces + 1
```

এটা শুধুমাত্র clean input-এর জন্য কাজ করতে পারে:

```text
I love C
```

কিন্তু fail করবে:

```text
  I   love   C
```

কারণ এখানে multiple spaces আছে।

তাই professional mental model:

```text
Word starts when:

Current Character is not whitespace

AND

Previous position was whitespace
or
Current index is the start
```

আরও সহজভাবে:

```text
Outside Word
↓
See Non-Space
↓
New Word Starts
↓
wordCount++
↓
Inside Word
```

---

# 18. Word Boundary Pattern

String:

```text
  I   love C
```

Visual:

```text
__I___love_C
  ↑   ↑    ↑
 New Word Starts
```

আমরা প্রতিটি non-space character count করছি না।

আমরা count করছি:

```text
Transition
```

অর্থাৎ:

```text
Whitespace
↓
Non-Whitespace
```

এই transition মানে:

```text
New Word Started
```

---

# 19. Word Count Using State

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);

    int wordCount = 0;
    int insideWord = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char)str[i];

        if (!isspace(ch))
        {
            if (!insideWord)
            {
                wordCount++;
                insideWord = 1;
            }
        }
        else
        {
            insideWord = 0;
        }
    }

    printf("%d\n", wordCount);

    return 0;
}
```

Pattern Combination:

```text
Traversal
+
Character Classification
+
State Flag
+
Boundary Detection
+
Counter
```

---

# 20. Word Count Dry Run

Input:

```text
I  love C
```

Start:

```text
wordCount = 0

insideWord = 0
```

Character:

```text
'I'
```

Non-space।

```text
insideWord == 0
```

তাই:

```text
wordCount = 1

insideWord = 1
```

Next:

```text
space
```

তাই:

```text
insideWord = 0
```

আরেকটি space:

```text
insideWord = 0
```

Then:

```text
'l'
```

Non-space এবং:

```text
insideWord == 0
```

তাই:

```text
wordCount = 2

insideWord = 1
```

`o`, `v`, `e`:

```text
insideWord already 1
```

তাই count বাড়বে না।

Next space:

```text
insideWord = 0
```

Then `C`:

```text
wordCount = 3
```

Final:

```text
3
```

---

# 21. Counter vs Flag

এই Chapter-এ দুই ধরনের state দেখলে confuse করবে না।

## Counter

Example:

```c
int vowelCount = 0;
```

Purpose:

```text
How Many?
```

Update:

```c
vowelCount++;
```

---

## Flag / State

Example:

```c
int insideWord = 0;
```

Purpose:

```text
What State Am I In?
```

Possible meaning:

```text
0 → Outside Word

1 → Inside Word
```

এটা quantity count করছে না।

এটা current state remember করছে।

Mental Difference:

```text
Counter
→ How Many?
```

```text
Flag / State
→ What Situation Am I In?
```

---

# 22. Counting Multiple Categories

Input:

```text
Hello 123 World!
```

Suppose count করতে হবে:

```text
Letters

Digits

Spaces

Special Characters
```

Pattern:

```text
Traverse
↓
Classify
        │
   ┌────┼────┬─────────┐
   │    │    │         │
 Letter Digit Space  Special
   │    │    │         │
   ▼    ▼    ▼         ▼
  ++   ++   ++        ++
```

Code core:

```c
int letterCount = 0;
int digitCount = 0;
int spaceCount = 0;
int specialCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    unsigned char ch = (unsigned char)str[i];

    if (isalpha(ch))
    {
        letterCount++;
    }
    else if (isdigit(ch))
    {
        digitCount++;
    }
    else if (isspace(ch))
    {
        spaceCount++;
    }
    else
    {
        specialCount++;
    }
}
```

Important:

`fgets()` input-এর শেষে newline রাখতে পারে।

তাই:

```text
'\n'
```

`isspace()` অনুযায়ী whitespace হিসেবে count হতে পারে।

Problem যদি শুধু `' '` space count করতে বলে, তাহলে:

```c
ch == ' '
```

use করবে।

---

# 23. Space vs Whitespace

এগুলো same না।

## Space Character

```c
' '
```

শুধু normal space।

---

## Whitespace

`isspace()` সাধারণত recognize করে:

```text
space

newline

tab

carriage return

form feed

vertical tab
```

তাই:

```c
if (str[i] == ' ')
```

এবং:

```c
if (isspace((unsigned char)str[i]))
```

একই meaning না।

Problem statement দেখে choose করবে।

---

# 24. Counting Pattern Family

String counting problem-এ basic structure একই থাকে।

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

শুধু condition change হয়।

### Vowel

```c
if (isVowel)
```

### Digit

```c
if (isdigit((unsigned char)str[i]))
```

### Uppercase

```c
if (isupper((unsigned char)str[i]))
```

### Lowercase

```c
if (islower((unsigned char)str[i]))
```

### Specific Character

```c
if (str[i] == target)
```

### Space

```c
if (str[i] == ' ')
```

Mental Lesson:

```text
Same Traversal
+
Different Condition
=
Different Counting Problem
```

---

# 25. Pattern Combination Map

এই Chapter-এর problems আসলে আগের patterns-এর combination।

## Count Vowels

```text
String Traversal
+
Character Condition
+
Counter
```

---

## Count Digits

```text
String Traversal
+
Character Classification
+
Counter
```

---

## Count Multiple Categories

```text
String Traversal
+
Classification
+
Multiple Counters
```

---

## Word Count

```text
String Traversal
+
Whitespace Classification
+
State Flag
+
Boundary Detection
+
Counter
```

---

## Case-Insensitive Target Count

```text
String Traversal
+
Case Normalization
+
Comparison
+
Counter
```

---

# 26. Common Bug — Counting `'\n'`

Input:

```c
fgets(str, sizeof(str), stdin);
```

User enters:

```text
Hello
```

Memory may contain:

```text
H e l l o \n \0
```

যদি count করো:

```c
if (isspace((unsigned char)str[i]))
{
    whitespaceCount++;
}
```

তাহলে newline-ও count হবে।

এটা bug কিনা depends on problem।

Possible solution:

```c
str[strcspn(str, "\n")] = '\0';
```

এর জন্য:

```c
#include <string.h>
```

তারপর counting শুরু করা যায়।

---

# 27. Common Bug — Consonant Logic

Wrong:

```c
if (ch == 'a' ||
    ch == 'e' ||
    ch == 'i' ||
    ch == 'o' ||
    ch == 'u')
{
    vowelCount++;
}
else
{
    consonantCount++;
}
```

Input:

```text
abc 123!
```

Problem:

```text
space
1
2
3
!
```

সব consonant count হতে পারে।

Correct mental model:

```text
Is Alphabet?
        │
     ┌──┴──┐
     │     │
    No    Yes
     │     │
 Ignore    ▼
         Vowel?
```

---

# 28. Common Bug — Uppercase Vowel Miss করা

Condition:

```c
if (ch == 'a' ||
    ch == 'e' ||
    ch == 'i' ||
    ch == 'o' ||
    ch == 'u')
```

Input:

```text
APPLE
```

এখানে uppercase vowel count হবে না।

Solutions:

```text
Approach 1
Check both uppercase and lowercase
```

অথবা:

```text
Approach 2
Convert current character to lowercase
then compare
```

Example:

```c
char lower = (char)tolower((unsigned char)ch);
```

তারপর:

```c
if (lower == 'a' ||
    lower == 'e' ||
    lower == 'i' ||
    lower == 'o' ||
    lower == 'u')
```

---

# 29. Common Bug — Word Count = Spaces + 1

Input:

```text
I   love C
```

Spaces:

```text
multiple
```

তাই:

```text
spaces + 1
```

wrong answer দিতে পারে।

Better:

```text
Count Word Starts
```

Mental Model:

```text
Outside Word
↓
Enter Word
↓
Count++
```

---

# 30. Edge Cases

## Empty String

```text

```

Expected counts:

```text
Vowels = 0

Digits = 0

Words = 0
```

---

## All Spaces

```text
     
```

Word count:

```text
0
```

---

## One Word

```text
Hello
```

Word count:

```text
1
```

---

## Multiple Spaces

```text
I    love    C
```

Word count:

```text
3
```

---

## Mixed Characters

```text
AbC123! @
```

Need careful classification।

---

## Only Digits

```text
12345
```

Possible:

```text
Digit Count = 5

Letter Count = 0
```

---

# 31. Recognition Signals

Problem statement-এ দেখলে:

```text
count vowels

count consonants

count digits

count uppercase letters

count lowercase letters

count spaces

count words

how many times character appears

number of letters
```

Mental trigger:

```text
String
+
How Many?
        ↓
Traversal
+
Condition / Classification
+
Counter
```

যদি:

```text
Count Several Categories
```

তাহলে:

```text
One Traversal
+
Multiple Counters
```

যদি:

```text
Count Words
```

তাহলে:

```text
Boundary / Transition
+
State
+
Counter
```

---

# 🧠 Chapter 5 Master Mental Model

```text
                         STRING
                            │
                            ▼
                         Traverse
                            │
                            ▼
                   Current Character
                            │
                            ▼
                         Classify
                            │
          ┌─────────────────┼─────────────────┐
          │                 │                 │
          ▼                 ▼                 ▼
        Letter            Digit          Whitespace
          │
     ┌────┴────┐
     │         │
     ▼         ▼
   Vowel    Consonant
     │         │
     ▼         ▼
 Counter++  Counter++
```

আর word counting-এর জন্য:

```text
Character Stream
        ↓
Whitespace?
        │
    ┌───┴───┐
    │       │
   Yes      No
    │       │
    ▼       ▼
Outside   Already Inside?
 Word         │
           ┌──┴──┐
           │     │
          Yes    No
           │     │
           ▼     ▼
        Continue New Word
                    ↓
               wordCount++
```

---

# 🧪 Chapter 5 Practice

## Task 1 — Count Vowels

Input:

```text
Competitive Programming
```

Find:

```text
Vowel Count = ?
```

---

## Task 2 — Count Digits

Input:

```text
Room 204 Floor 5
```

Find:

```text
Digit Count = ?
```

---

## Task 3 — Count Character Types

Input:

```text
Hello123 World!
```

Find:

```text
Uppercase = ?

Lowercase = ?

Digits = ?

Spaces = ?

Special Characters = ?
```

---

## Task 4 — Count Specific Character

Input:

```text
banana
```

Target:

```text
a
```

Output:

```text
3
```

---

## Task 5 — Count Words

Input:

```text
  I   love   competitive programming
```

Expected:

```text
4
```

Important:

```text
Do not use:

spaces + 1
```

Use:

```text
Word Boundary
+
State Flag
+
Counter
```

---

## Task 6 — Vowel and Consonant Count

Input:

```text
Hello World 123!
```

Find:

```text
Vowels = ?

Consonants = ?
```

Digits, spaces এবং special characters ignore করবে।

---

# 🧠 Pattern Recognition Drill

## Problem 1

Problem:

> Count lowercase letters.

Complete:

```text
String Traversal
↓
________________
↓
Counter
```

---

## Problem 2

Problem:

> Count how many times `'x'` appears.

Complete:

```text
Traversal
↓
Current Character == ______?
↓
count++
```

---

## Problem 3

Problem:

> Count words even if multiple spaces exist.

Need:

```text
Traversal
+
Whitespace Classification
+
________ State
+
Boundary Detection
+
Counter
```

---

## Problem 4

What is the difference?

```c
str[i] == ' '
```

vs

```c
isspace((unsigned char)str[i])
```

নিজের ভাষায় explain করবে।

---

## Problem 5

Why is this dangerous?

```c
if (isVowel)
{
    vowelCount++;
}
else
{
    consonantCount++;
}
```

Hint:

```text
What about digits, spaces and punctuation?
```

---

# 📝 Chapter 5 Assignment

## Part A — Explain

নিজের ভাষায় লিখবে:

```text
1. String Counting Pattern কী?

2. Traversal + Condition + Counter কীভাবে কাজ করে?

3. Character Classification কী?

4. Multiple Counters কখন use করব?

5. Counter এবং State Flag-এর difference কী?

6. Word Boundary কী?

7. spaces + 1 দিয়ে word count সবসময় correct না কেন?

8. isspace() এবং ch == ' ' এর difference কী?

9. Vowel/Consonant counting-এর আগে alphabet check করা দরকার কেন?

10. fgets() এর newline counting problem কী?
```

---

## Part B — Mandatory Coding

নিজে code করবে:

```text
1. Count Vowels

2. Count Digits

3. Count Uppercase and Lowercase Letters

4. Count Letters, Digits, Spaces and Special Characters

5. Count a Specific Character

6. Count Vowels and Consonants

7. Count Words with Multiple Spaces
```

---

## Part C — Dry Run

String:

```text
Abc 12 E!
```

Table complete করো:

| Character | Type | Which Counter Changes? |
| --------- | ---- | ---------------------- |
| `A`       | ?    | ?                      |
| `b`       | ?    | ?                      |
| `c`       | ?    | ?                      |
| ` `       | ?    | ?                      |
| `1`       | ?    | ?                      |
| `2`       | ?    | ?                      |
| ` `       | ?    | ?                      |
| `E`       | ?    | ?                      |
| `!`       | ?    | ?                      |

Final:

```text
Uppercase = ?

Lowercase = ?

Digits = ?

Spaces = ?

Special = ?
```

---

## Part D — Word Count Dry Run

String:

```text
  C   is fun
```

Initial:

```text
wordCount = 0

insideWord = 0
```

প্রতিটি character-এর পরে লিখবে:

```text
Character:

Whitespace?

insideWord Before:

Action:

insideWord After:

wordCount:
```

---

## Part E — Debugging

এই code দেখো:

```c
int vowel = 0;
int consonant = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

    if (ch == 'a' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'o' ||
        ch == 'u')
    {
        vowel++;
    }
    else
    {
        consonant++;
    }
}
```

Find:

```text
Bug 1:
Uppercase vowels?

Bug 2:
Spaces?

Bug 3:
Digits?

Bug 4:
Punctuation?

Correct Mental Flow:
...
```

---

# 📚 Glossary Update

`CP_Dictionary.md`-এ add করবে:

```text
String Counting Pattern
Character Classification
Character Category
Multiple Counters
Word Boundary
Transition
Inside Word
Outside Word
Whitespace
Case-Sensitive
Case-Insensitive
Normalization
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

```md
## String Counting Pattern

### Recognition

Use when a problem asks:

- How many vowels?
- How many digits?
- How many uppercase letters?
- How many spaces?
- How many times does a character appear?

### Mental Model

```text
Traverse String
↓
Check Current Character
↓
Condition Match?
├── Yes → Counter++
└── No  → Continue
```

### Core Template

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

### Pattern Combination

```text
String Traversal
+
Character Classification
+
Counter
```

---

## Word Boundary Counting Pattern

### Mental Model

```text
Outside Word
↓
See Non-Whitespace
↓
New Word Starts
↓
wordCount++
↓
Inside Word
```

### State

```text
insideWord = 0
→ Currently outside a word

insideWord = 1
→ Currently inside a word
```

### Pattern Combination

```text
String Traversal
+
Whitespace Classification
+
State Flag
+
Boundary Detection
+
Counter
```
```

---

# 🔥 Chapter 5 Key Lesson

এই Chapter-এর main lesson:

```text
String Counting Problem
        ↓
Do Not Think About Whole String at Once
        ↓
Visit One Character
        ↓
Classify It
        ↓
Update the Correct Counter
```

Basic pattern:

```text
Traversal
+
Condition
+
Counter
```

More advanced version:

```text
Traversal
+
Classification
+
Multiple Counters
```

আর word counting:

```text
Traversal
+
State
+
Boundary Detection
+
Counter
```

---

# 🔗 Pattern Evolution

আগে:

```text
Array Traversal
↓
Visit Every Element
```

তারপর:

```text
String Traversal
↓
Visit Every Character
```

এখন:

```text
String Traversal
+
Character Classification
+
Counter
```

এবং:

```text
String Traversal
+
State Flag
+
Boundary Detection
+
Counter
```

এই Chapter-এর পরে তুমি শুধু character দেখছো না।

তুমি শিখছো:

```text
Current Character
↓
What Category?
↓
What State Change?
↓
Which Counter Updates?
```

---

# ✅ Chapter 5 Completion Checklist

```text
[ ] String Counting Pattern বুঝি

[ ] Traversal + Condition + Counter combine করতে পারি

[ ] Vowel count করতে পারি

[ ] Digit count করতে পারি

[ ] Uppercase count করতে পারি

[ ] Lowercase count করতে পারি

[ ] Space count করতে পারি

[ ] Specific character count করতে পারি

[ ] Case-sensitive এবং case-insensitive count-এর difference বুঝি

[ ] Multiple counters এক traversal-এ ব্যবহার করতে পারি

[ ] if এবং else if কখন use করতে হয় বুঝি

[ ] Vowel এবং consonant count করতে পারি

[ ] isalpha() check কেন দরকার বুঝি

[ ] Counter এবং State Flag-এর difference বুঝি

[ ] Word Boundary বুঝি

[ ] Multiple spaces সহ word count করতে পারি

[ ] Space এবং Whitespace-এর difference বুঝি

[ ] fgets() newline issue সম্পর্কে সচেতন

[ ] Practice complete করেছি

[ ] Assignment complete করেছি

[ ] Glossary update করেছি

[ ] Pattern Library update করেছি
```

---

# 🎯 Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ⬜ Chapter 6 — Character Search & Frequency
│
├── ⬜ Chapter 7 — String Transformation
│
├── ⬜ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⬜ Chapter 9 — Palindrome Pattern
│
├── ⬜ Chapter 10 — Common Bugs, Edge Cases & String Problem Solving Session
│
└── ⬜ Chapter 11 — Pattern Library Update, Final Assignment,
                   Mini Contest Review & Day 3 Reflection
```

# 🏁 Chapter 5 Final Position

Chapter 5 শেষে তোমার string problem-solving progression:

```text
String
↓
Character Array
↓
Index
↓
Traversal
↓
Current Character
↓
Classification
↓
Counter Update
```

আর একটু advanced problem-এ:

```text
String Traversal
↓
Current Character
↓
Previous State
↓
Transition Detected?
↓
Update Counter
↓
Update State
```

পরবর্তী **Chapter 6 — Character Search & Frequency**-তে progression হবে:

```text
Counting One Category
        ↓
Searching for Characters
        ↓
First Occurrence
        ↓
Last Occurrence
        ↓
Character Frequency
        ↓
Frequency Table Mental Model
```

---

# 📘 Day 3 — Chapter 6

# 🔎 Character Search & Frequency Analysis

## Search, First Position, Last Position, Occurrence এবং Frequency Analysis

Chapter 5-এ আমরা শিখেছি:

```text
String
↓
Traverse
↓
Check / Classify
↓
Count
```

এবং:

```text
Counter
↓
Multiple Counters
↓
Frequency Array
```

এখন আমরা একটি গুরুত্বপূর্ণ বিষয় শিখব:

> **একই String এবং একই Target থাকলেও Problem-এর Question বদলালে Algorithm-এর State এবং Control Flow বদলে যায়।**

ধরো:

```text
String:
banana

Target:
a
```

Problem বিভিন্নভাবে জিজ্ঞেস করতে পারে:

```text
'a' কি আছে?
```

```text
'a' প্রথম কোথায় আছে?
```

```text
'a' শেষ কোথায় আছে?
```

```text
'a' কতবার আছে?
```

```text
সব Character কতবার আছে?
```

Input একই:

```text
banana
```

কিন্তু Problem আলাদা।

তাই Algorithm-ও আলাদা।

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* Character existence check করতে;
* Search Pattern চিনতে;
* Flag State ব্যবহার করতে;
* First Occurrence বের করতে;
* Last Occurrence বের করতে;
* Total Occurrence count করতে;
* First এবং Last Search-এর difference বুঝতে;
* `break` কখন ব্যবহার করতে হবে বুঝতে;
* `break` কখন ব্যবহার করা যাবে না বুঝতে;
* Sentinel Value হিসেবে `-1` ব্যবহার করতে;
* Index এবং Position-এর difference বুঝতে;
* Frequency Array দিয়ে Query answer করতে;
* Direct Search এবং Preprocessing-এর difference বুঝতে;
* Repeated Query Problem চিনতে;
* Frequency Analysis করতে;
* Distinct, Unique এবং Repeated Character analyze করতে;
* Most Frequent এবং Least Frequent Character-এর mental model বুঝতে;
* Tie Case চিনতে;
* Search Problem-এর State Selection করতে;
* unnecessary nested loop avoid করতে;
* Constraint অনুযায়ী Search Strategy নির্বাচন করতে।

---

# 📖 Chapter Map

```text
Chapter 6
│
├── Part 1  — Search Mental Model
├── Part 2  — Existence Search
├── Part 3  — First Occurrence
├── Part 4  — Last Occurrence
├── Part 5  — Total Occurrence
├── Part 6  — Search Pattern Comparison
├── Part 7  — Index vs Position
├── Part 8  — Sentinel Value
├── Part 9  — Frequency as Search Memory
├── Part 10 — Direct Search vs Preprocessing
├── Part 11 — Repeated Query Pattern
├── Part 12 — Frequency Analysis
├── Part 13 — Maximum & Minimum Frequency
├── Part 14 — Tie Cases
├── Part 15 — Common Bugs & Edge Cases
├── Part 16 — Guided Problem Solving
├── Part 17 — Exercises
└── Part 18 — Assignment & Reflection
```

---

# 🧠 Chapter 6 Master Mental Model

ধরো:

```text
String:
mississippi

Target:
s
```

এখন Question অনুযায়ী চিন্তা দেখি।

---

## Question 1

```text
Does 's' exist?
```

Need:

```text
Traversal
+
Equality Check
+
Flag
+
Early Termination
```

---

## Question 2

```text
Where does 's' first appear?
```

Need:

```text
Traversal
+
Equality Check
+
Index State
+
Break
```

---

## Question 3

```text
Where does 's' last appear?
```

Need:

```text
Traversal
+
Equality Check
+
Index Update
+
Full Traversal
```

---

## Question 4

```text
How many times does 's' appear?
```

Need:

```text
Traversal
+
Equality Check
+
Counter
+
Full Traversal
```

---

## Question 5

```text
How many times does every lowercase character appear?
```

Need:

```text
Traversal
+
Character Mapping
+
Frequency Array
```

---

# 🔥 Most Important Idea

```text
Same Input
+
Same Target
+
Different Question
=
Different State and Control Flow
```

এটা CP Problem Solving-এর খুব গুরুত্বপূর্ণ Concept।

---

# Part 1 — Search Mental Model

# Lesson 1 — Search মানে কী?

Search মানে:

> একটি Collection-এর মধ্যে প্রয়োজনীয় Item খুঁজে দেখা।

Collection হতে পারে:

```text
Array
String
Matrix
List
Graph
```

এই Chapter-এ আমরা String Search করব।

Example:

```text
String:
competitive

Target:
t
```

Search Process:

```text
c → target?
↓
No

o → target?
↓
No

m → target?
↓
No

p → target?
↓
No

e → target?
↓
No

t → target?
↓
Yes
```

এখানে আমরা Character by Character inspect করছি।

Pattern:

```text
Traversal
+
Comparison
+
Decision
```

---

# Lesson 2 — Search Problem-এর ৫টি Question

Search Problem দেখলে নিজেকে জিজ্ঞেস করবে:

```text
1. What am I searching for?

2. Do I need only existence?

3. Do I need an index?

4. Do I need first or last occurrence?

5. Do I need one answer or all occurrences?
```

এই পাঁচটি Question তোমার Algorithm Design ঠিক করবে।

---

# Lesson 3 — Search State Selection

```text
Need only Yes / No?
↓
Flag
```

```text
Need First Index?
↓
Index State + Break
```

```text
Need Last Index?
↓
Index State + Full Traversal
```

```text
Need Total Occurrences?
↓
Counter
```

```text
Need Frequency of Every Character?
↓
Frequency Array
```

Master Decision Tree:

```text
Search Problem
      ↓
What answer is needed?
      │
      ├── Exists?
      │      ↓
      │     Flag
      │
      ├── First Location?
      │      ↓
      │   Index + Break
      │
      ├── Last Location?
      │      ↓
      │   Index + Update
      │
      ├── Total Matches?
      │      ↓
      │    Counter
      │
      └── All Character Frequencies?
             ↓
         Frequency Array
```

---

# Part 2 — Existence Search

# Lesson 4 — Character আছে কি না?

Problem:

> একটি String-এর মধ্যে target character আছে কি না বের করো।

Input:

```text
programming
g
```

Expected:

```text
Found
```

এখানে আমাদের দরকার নেই:

```text
Where?
```

বা:

```text
How many times?
```

শুধু দরকার:

```text
Exists?
Yes / No
```

তাই State:

```c
int found = 0;
```

এটাকে বলে:

```text
Flag
```

---

# Lesson 5 — Flag কী?

Flag হচ্ছে এমন একটি State যেটা সাধারণত দুইটি অবস্থা represent করে।

Example:

```text
0 → Not Found
1 → Found
```

Initialization:

```c
int found = 0;
```

Mental Meaning:

```text
Before Search
↓
Nothing found yet
↓
found = 0
```

Match পাওয়া গেলে:

```c
found = 1;
```

Meaning:

```text
Target Found
```

---

# Lesson 6 — Existence Search Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int found = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
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

---

# Lesson 7 — এখানে `break` কেন Valid?

Problem:

```text
Does target exist?
```

ধরো:

```text
String:
banana

Target:
a
```

Traversal:

```text
b → No

a → Yes
```

এখন Answer জানা হয়ে গেছে:

```text
Yes, 'a' exists.
```

বাকি:

```text
n a n a
```

check করার প্রয়োজন নেই।

তাই:

```text
First Match
↓
Answer Determined
↓
Stop Search
```

এটাই:

```text
Early Termination
```

---

# Lesson 8 — Early Termination Mental Model

নিজেকে জিজ্ঞেস করবে:

```text
If I find one match,
is the final answer already known?
```

যদি:

```text
Yes
```

তাহলে:

```text
break may be useful
```

যদি:

```text
No
```

তাহলে:

```text
continue traversal
```

Example:

### Exists?

```text
One match is enough
↓
break
```

### Count All?

```text
One match is not enough
↓
No break
```

### First Position?

```text
First match is the answer
↓
break
```

### Last Position?

```text
Later match may exist
↓
No break
```

---

# Part 3 — First Occurrence

# Lesson 9 — First Occurrence কী?

String:

```text
banana
```

Index:

```text
0 1 2 3 4 5
b a n a n a
```

Target:

```text
a
```

Occurrences:

```text
Index 1
Index 3
Index 5
```

First Occurrence:

```text
Index 1
```

---

# Lesson 10 — First Occurrence State

Need:

```text
Index
```

তাই:

```c
int index = -1;
```

Traversal:

```text
Visit Character
↓
Match?
│
├── No  → Continue
│
└── Yes → Save Index
           ↓
          Break
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int index = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("First Index: %d\n", index);
    }

    return 0;
}
```

---

# Lesson 11 — First Occurrence Dry Run

Input:

```text
mississippi
```

Target:

```text
s
```

Index Table:

| Index | Character | Match? | index |
| ----: | --------- | ------ | ----: |
|     0 | `m`       | No     |    -1 |
|     1 | `i`       | No     |    -1 |
|     2 | `s`       | Yes    |     2 |

তারপর:

```text
break
```

Final:

```text
First Index = 2
```

আমরা পরে থাকা `s`-গুলো inspect করিনি।

কারণ Problem ছিল:

```text
First Occurrence
```

---

# Lesson 12 — First Occurrence Formula

```text
Traversal from Left to Right
+
Equality Check
+
Save First Matching Index
+
Break
```

Short Mental Pattern:

```text
First Match
↓
Save
↓
Stop
```

---

# Part 4 — Last Occurrence

# Lesson 13 — Last Occurrence কী?

String:

```text
banana
```

Target:

```text
a
```

Matches:

```text
Index 1
Index 3
Index 5
```

Last Occurrence:

```text
Index 5
```

---

# Lesson 14 — Last Occurrence-এর Core Difference

First Occurrence:

```text
Match
↓
Save
↓
Break
```

Last Occurrence:

```text
Match
↓
Save
↓
Continue
```

কেন?

কারণ:

```text
A later match may exist.
```

---

# Lesson 15 — Last Occurrence Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int index = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            index = i;
        }
    }

    if (index == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Last Index: %d\n", index);
    }

    return 0;
}
```

---

# Lesson 16 — Last Occurrence Dry Run

String:

```text
banana
```

Target:

```text
a
```

Initial:

```text
index = -1
```

Dry Run:

| Index | Character | Match? | Saved Index |
| ----: | --------- | ------ | ----------: |
|     0 | `b`       | No     |          -1 |
|     1 | `a`       | Yes    |           1 |
|     2 | `n`       | No     |           1 |
|     3 | `a`       | Yes    |           3 |
|     4 | `n`       | No     |           3 |
|     5 | `a`       | Yes    |           5 |

Final:

```text
index = 5
```

Observe:

```text
Every new match overwrites the previous index.
```

তাই শেষে:

```text
Last Matching Index remains stored.
```

---

# Lesson 17 — Last Occurrence-এর Alternative চিন্তা

আমরা Left-to-Right traverse করেছি:

```text
0 → 1 → 2 → 3 → 4 → 5
```

এবং প্রতিবার Match হলে:

```text
index = i
```

করেছি।

আরেকটি Conceptual Approach:

```text
Traverse Right to Left
↓
First Match from Right
↓
That is Last Occurrence
```

যেমন:

```c
for (int i = length - 1; i >= 0; i--)
{
    if (str[i] == target)
    {
        index = i;
        break;
    }
}
```

কিন্তু এখানে Length জানা দরকার।

এই Chapter-এ আমাদের Primary Pattern:

```text
Left-to-Right Full Traversal
+
Overwrite Matching Index
```

---

# Part 5 — Total Occurrence

# Lesson 18 — Total Occurrence

Problem:

> Target Character মোট কতবার আছে?

String:

```text
mississippi
```

Target:

```text
s
```

Answer:

```text
4
```

State:

```c
int count = 0;
```

Pattern:

```text
Traversal
+
Equality Check
+
Counter
```

---

# Lesson 19 — Occurrence Count Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

# Lesson 20 — এখানে `break` দিলে কী হবে?

Wrong:

```c
if (str[i] == target)
{
    count++;
    break;
}
```

Input:

```text
mississippi
s
```

First `s` পাওয়ার পর:

```text
count = 1
```

তারপর Loop stop।

Output:

```text
1
```

কিন্তু Correct:

```text
4
```

Rule:

```text
Need all matches?
↓
Do not stop at first match.
```

---

# Part 6 — Search Pattern Comparison

# Lesson 21 — একই Problem Family-এর Comparison

String:

```text
banana
```

Target:

```text
a
```

| Problem     | State   | On Match    | Break? | Result |
| ----------- | ------- | ----------- | ------ | ------ |
| Exists?     | Flag    | `found = 1` | Yes    | Yes    |
| First Index | Index   | `index = i` | Yes    | 1      |
| Last Index  | Index   | `index = i` | No     | 5      |
| Total Count | Counter | `count++`   | No     | 3      |

এই Table মুখস্থ করার জন্য না।

Logic বুঝবে।

---

# Lesson 22 — Control Flow Decision

```text
What does a match mean for the final answer?
```

### Existence

```text
One match completely answers the question.
```

তাই:

```text
Stop
```

### First Occurrence

```text
First match completely answers the question.
```

তাই:

```text
Save + Stop
```

### Last Occurrence

```text
Current match may not be last.
```

তাই:

```text
Save + Continue
```

### Count

```text
Every future match matters.
```

তাই:

```text
Count + Continue
```

---

# Lesson 23 — State Transition View

## Existence

```text
0
↓ Match
1
↓
Done
```

---

## First Index

```text
-1
↓ First Match
i
↓
Done
```

---

## Last Index

```text
-1
↓ Match at 1
1
↓ Match at 3
3
↓ Match at 5
5
```

---

## Count

```text
0
↓ Match
1
↓ Match
2
↓ Match
3
```

এইভাবে State-এর পরিবর্তন চিন্তা করলে Code অনেক সহজ হয়ে যায়।

---

# Part 7 — Index vs Position

# Lesson 24 — Index কী?

C Array এবং String সাধারণত Zero-Based।

String:

```text
CODE
```

Index:

```text
0 1 2 3
C O D E
```

তাই:

```text
C → Index 0
O → Index 1
D → Index 2
E → Index 3
```

---

# Lesson 25 — Position কী?

Human-friendly Position সাধারণত 1 থেকে শুরু হতে পারে।

একই String:

```text
CODE
```

| Character | Index | Position |
| --------- | ----: | -------: |
| C         |     0 |        1 |
| O         |     1 |        2 |
| D         |     2 |        3 |
| E         |     3 |        4 |

Formula:

```text
Position = Index + 1
```

কিন্তু সব Problem-এ Position 1-based হবে এমন না।

Problem Statement পড়বে।

---

# Lesson 26 — Common Mistake

Problem চেয়েছে:

```text
0-based index
```

তুমি print করলে:

```c
printf("%d\n", index + 1);
```

Wrong Answer হতে পারে।

আবার Problem চেয়েছে:

```text
1-based position
```

তুমি print করলে:

```c
printf("%d\n", index);
```

সেটাও Wrong Answer।

Rule:

```text
Before Output
↓
Check Indexing Convention
```

---

# Part 8 — Sentinel Value

# Lesson 27 — `-1` কেন?

ধরো String Length:

```text
n
```

Valid Index:

```text
0 to n - 1
```

তাই:

```text
-1
```

কোনো Valid Index না।

এজন্য:

```c
int index = -1;
```

এর meaning:

```text
No valid matching index has been found yet.
```

---

# Lesson 28 — Sentinel Value কী?

Sentinel Value হলো একটি Special Value যা Special State represent করে।

Example:

```text
index = -1
↓
Not Found
```

এখানে:

```text
0
```

Not Found বোঝাতে ব্যবহার করা যাবে না।

কেন?

কারণ:

```text
0 is a valid index.
```

---

# Lesson 29 — Dangerous Initialization

Wrong:

```c
int index = 0;
```

Input:

```text
hello
z
```

Target পাওয়া যায়নি।

কিন্তু শেষে:

```text
index = 0
```

দেখে মনে হতে পারে Target index 0-তে ছিল।

তাই:

```text
Valid Data Range-এর বাইরে Meaningful Special Value
```

ব্যবহার করতে হয়।

এটাই Sentinel Design-এর basic idea।

---

# Part 9 — Frequency as Search Memory

# Lesson 30 — Frequency Array শুধু Count না

Chapter 5-এ:

```text
freq[i]
```

ব্যবহার করেছি Character কতবার এসেছে জানার জন্য।

কিন্তু Frequency Array-কে এভাবেও ভাবতে পারো:

```text
A memory of what was seen.
```

Example:

```text
banana
```

Frequency:

```text
a → 3
b → 1
n → 2
```

এখন Question:

```text
Does 'n' exist?
```

আমরা বলতে পারি:

```text
freq['n' - 'a'] > 0
```

Question:

```text
How many 'n'?
```

Answer:

```text
freq['n' - 'a']
```

তাই Frequency Array একবার build করার পর অনেক Search Query দ্রুত answer করা যায়।

---

# Lesson 31 — Presence from Frequency

Condition:

```c
if (freq[target - 'a'] > 0)
{
    printf("Found\n");
}
else
{
    printf("Not Found\n");
}
```

Mental Model:

```text
Frequency > 0
↓
Character exists
```

```text
Frequency == 0
↓
Character does not exist
```

---

# Lesson 32 — Count from Frequency

ধরো:

```c
int count = freq[target - 'a'];
```

এখানে আবার String Traverse করতে হচ্ছে না।

কারণ Frequency Array আগে থেকেই Summary ধরে রেখেছে।

```text
Raw String
↓
Preprocessing
↓
Frequency Summary
↓
Answer Queries
```

---

# Part 10 — Direct Search vs Preprocessing

# Lesson 33 — Direct Search

একটি Query:

```text
Does 'x' exist?
```

তুমি String traverse করতে পারো।

```text
String
↓
Traverse
↓
Compare with x
↓
Answer
```

এটাই:

```text
Direct Search
```

---

# Lesson 34 — Preprocessing

ধরো একই String-এর জন্য অনেক Query:

```text
How many a?
How many b?
How many x?
Does z exist?
How many m?
```

প্রতিবার পুরো String traverse করলে repeated work হবে।

Better:

```text
String
↓
Build Frequency Once
↓
Answer Multiple Queries
```

এটাকে আমরা basic level-এ বলতে পারি:

```text
Preprocessing
```

---

# Lesson 35 — Preprocessing মানে কী?

Preprocessing মানে:

> Main Query answer করার আগে Data-কে এমনভাবে প্রস্তুত করা যাতে পরে Query সহজ বা দ্রুত answer করা যায়।

Example:

```text
Raw String:
banana
```

Preprocessed Summary:

```text
a = 3
b = 1
n = 2
```

এখন:

```text
Count a?
↓
3
```

```text
Count n?
↓
2
```

```text
Does z exist?
↓
No
```

String আবার traverse করতে হচ্ছে না।

---

# Lesson 36 — One Query vs Many Queries

## One Query

```text
String Length = n
Queries = 1
```

Direct Traversal:

```text
O(n)
```

Conceptually simple।

---

## Many Queries

ধরো:

```text
String Length = n
Queries = q
```

প্রতিটি Query-তে full traversal:

```text
O(n × q)
```

Frequency build:

```text
O(n)
```

তারপর Query answer:

```text
O(1)
```

প্রতি lowercase character frequency query-এর জন্য।

Total:

```text
O(n + q)
```

এখন Complexity শুধু concept হিসেবে বুঝবে।

Day 3-এ Complexity calculation নিয়ে ভয় পাওয়ার দরকার নেই।

Core Idea:

```text
Repeated Questions about Same Data?
↓
Think about Preprocessing
```

---

# Part 11 — Repeated Query Pattern

# Lesson 37 — Query কী?

Query মানে:

> Data সম্পর্কে একটি Question।

Example Data:

```text
banana
```

Queries:

```text
a
n
z
```

প্রতিটি Query-এর meaning:

```text
How many times does this character occur?
```

Expected:

```text
a → 3
n → 2
z → 0
```

---

# Lesson 38 — Frequency Query Program

Constraint:

```text
String contains lowercase English letters.
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[1000];
    int q;

    scanf("%999s", str);

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    scanf("%d", &q);

    while (q--)
    {
        char target;

        scanf(" %c", &target);

        printf("%d\n", freq[target - 'a']);
    }

    return 0;
}
```

---

# Lesson 39 — Dry Run of Repeated Queries

Input:

```text
banana
3
a
n
z
```

Build Frequency:

```text
a → 3
b → 1
n → 2
```

Query 1:

```text
a
↓
freq[0]
↓
3
```

Query 2:

```text
n
↓
freq[13]
↓
2
```

Query 3:

```text
z
↓
freq[25]
↓
0
```

Output:

```text
3
2
0
```

---

# Lesson 40 — Important Pattern Recognition

Problem Statement-এ যদি দেখো:

```text
Given a string
```

তারপর:

```text
Answer Q queries
```

তাহলে চিন্তা করবে:

```text
Same Data
+
Many Questions
↓
Can I preprocess?
```

এখন সব Problem Frequency Array দিয়ে solve হবে না।

কিন্তু এই Question নিজেকে করার Habit তৈরি করো।

---

# Part 12 — Frequency Analysis

# Lesson 41 — Frequency Build করার পর কী করা যায়?

Frequency Array শুধু print করার জন্য না।

Build করার পর বের করা যায়:

```text
Which characters exist?
How many distinct characters?
How many appear exactly once?
How many are repeated?
Which character appears most?
Which character appears least among present characters?
```

Pattern:

```text
Raw String
↓
Build Frequency
↓
Analyze Frequency Array
↓
Final Answer
```

---

# Lesson 42 — Count Distinct Characters

Input:

```text
banana
```

Frequency:

```text
a → 3
b → 1
n → 2
```

Distinct Characters:

```text
a
b
n
```

Count:

```text
3
```

Condition:

```c
freq[i] > 0
```

Code:

```c
int distinct = 0;

for (int i = 0; i < 26; i++)
{
    if (freq[i] > 0)
    {
        distinct++;
    }
}
```

Pattern:

```text
Frequency Build
+
Frequency Traversal
+
Conditional Counter
```

---

# Lesson 43 — Count Exactly-Once Characters

Input:

```text
aabbcde
```

Frequency:

```text
a → 2
b → 2
c → 1
d → 1
e → 1
```

Exactly Once:

```text
c
d
e
```

Answer:

```text
3
```

Condition:

```c
freq[i] == 1
```

---

# Lesson 44 — Count Repeated Character Types

Input:

```text
aabbcdeee
```

Frequency:

```text
a → 2
b → 2
c → 1
d → 1
e → 3
```

Repeated Character Types:

```text
a
b
e
```

Answer:

```text
3
```

Condition:

```c
freq[i] > 1
```

খেয়াল করবে:

```text
Repeated Character Types
```

এবং:

```text
Total Duplicate Occurrences
```

এক জিনিস না।

---

# Lesson 45 — Frequency Condition Map

```text
freq[i] == 0
↓
Absent
```

```text
freq[i] > 0
↓
Present / Distinct
```

```text
freq[i] == 1
↓
Exactly Once
```

```text
freq[i] > 1
↓
Repeated
```

এই চারটি Condition খুব ভালোভাবে বুঝতে হবে।

---

# Part 13 — Maximum & Minimum Frequency

# Lesson 46 — Most Frequent Character

Input:

```text
banana
```

Frequency:

```text
a → 3
b → 1
n → 2
```

Maximum:

```text
3
```

Character:

```text
a
```

Need:

```text
Frequency Array
+
Maximum Pattern
+
Index State
```

---

# Lesson 47 — Most Frequent Code

```c
int maxFreq = 0;
int maxIndex = -1;

for (int i = 0; i < 26; i++)
{
    if (freq[i] > maxFreq)
    {
        maxFreq = freq[i];
        maxIndex = i;
    }
}
```

Output:

```c
printf("Character: %c\n", 'a' + maxIndex);
printf("Frequency: %d\n", maxFreq);
```

---

# Lesson 48 — Dry Run

Frequency:

```text
a → 3
b → 1
n → 2
```

Initial:

```text
maxFreq = 0
maxIndex = -1
```

At `a`:

```text
3 > 0
↓
Yes

maxFreq = 3
maxIndex = 0
```

At `b`:

```text
1 > 3?
↓
No
```

At `n`:

```text
2 > 3?
↓
No
```

Final:

```text
maxFreq = 3
maxIndex = 0
```

Character:

```text
'a' + 0
↓
a
```

---

# Lesson 49 — Least Frequent Present Character

এখানে একটি নতুন সমস্যা আছে।

ধরো:

```text
banana
```

Frequency Array-এর বেশিরভাগ Character:

```text
0
```

যদি simply minimum খুঁজো:

```text
Minimum = 0
```

কিন্তু আমরা চাই:

```text
Least frequent character among characters that exist.
```

তাই Condition:

```c
if (freq[i] > 0)
{
    // consider for minimum
}
```

এখানে absent character ignore করতে হবে।

---

# Lesson 50 — Minimum Initialization Problem

Maximum-এর জন্য:

```c
int maxFreq = 0;
```

সহজ ছিল।

Minimum-এর জন্য:

```c
int minFreq = 0;
```

দিলে সমস্যা হতে পারে।

কারণ valid positive frequency:

```text
1, 2, 3...
```

সবই:

```text
> 0
```

তাই `minFreq = 0` থাকলে update logic কাজ নাও করতে পারে।

একটি simple approach:

```c
int minFreq = 1000000;
int minIndex = -1;
```

তারপর:

```c
for (int i = 0; i < 26; i++)
{
    if (freq[i] > 0 && freq[i] < minFreq)
    {
        minFreq = freq[i];
        minIndex = i;
    }
}
```

পরে আমরা আরও robust initialization pattern শিখব।

এখন Mental Idea:

```text
Minimum Search
↓
Ignore Invalid Candidates
↓
Compare Only Valid Present Frequencies
```

---

# Part 14 — Tie Cases

# Lesson 51 — Tie কী?

Input:

```text
aabb
```

Frequency:

```text
a → 2
b → 2
```

Most Frequent Character কে?

```text
a
```

এবং:

```text
b
```

দুটির frequency same।

এটাই:

```text
Tie
```

---

# Lesson 52 — `>` vs `>=`

ধরো:

```c
if (freq[i] > maxFreq)
```

তাহলে equal frequency এলে update হবে না।

Result:

```text
Earlier character remains.
```

Alphabetical traversal হলে:

```text
Smallest alphabetical character among tied maximums
```

থাকতে পারে।

---

যদি:

```c
if (freq[i] >= maxFreq)
```

তাহলে equal frequency-তেও update হবে।

Result:

```text
Later character replaces earlier character.
```

তাই:

```text
>
```

এবং:

```text
>=
```

একই না।

---

# Lesson 53 — Tie Rule Problem Statement থেকে আসবে

Problem বলতে পারে:

```text
If multiple characters have maximum frequency,
print the lexicographically smallest.
```

অথবা:

```text
Print the lexicographically largest.
```

অথবা:

```text
Print all characters with maximum frequency.
```

তাই শুধু Maximum বের করলেই সবসময় Problem complete না।

Mental Rule:

```text
Find Best Value
↓
Check Tie Requirement
↓
Choose Update Rule / Second Pass
```

---

# Lesson 54 — Print All Maximum Frequency Characters

Approach:

### Phase 1

```text
Build Frequency
```

### Phase 2

```text
Find maxFreq
```

### Phase 3

```text
Print all freq[i] == maxFreq
```

Pattern:

```text
Build
↓
Find Best Value
↓
Collect / Print All Matching Best Candidates
```

এটা CP-তে খুব useful general pattern।

---

# Part 15 — Common Bugs & Edge Cases

# 🐞 Bug 1 — Existence Search-এ Counter ব্যবহার করা

Problem:

```text
Does target exist?
```

তুমি Count করছ:

```c
count++;
```

এটা wrong না, কিন্তু unnecessary State।

Better:

```text
Flag
```

বা directly result control।

Rule:

```text
Store only what the problem needs.
```

---

# 🐞 Bug 2 — First Occurrence-এ `break` না দেওয়া

Code:

```c
if (str[i] == target)
{
    index = i;
}
```

Full traversal করলে শেষে:

```text
Last Occurrence
```

পাবে।

First না।

---

# 🐞 Bug 3 — Last Occurrence-এ `break`

```c
if (str[i] == target)
{
    index = i;
    break;
}
```

এতে:

```text
First Occurrence
```

পাবে।

Last না।

---

# 🐞 Bug 4 — Count-এ `break`

```c
if (str[i] == target)
{
    count++;
    break;
}
```

এতে সব occurrence count হবে না।

---

# 🐞 Bug 5 — Index Initialize with `0`

```c
int index = 0;
```

Not Found এবং Found at Index 0 আলাদা করা যাবে না।

Use:

```c
int index = -1;
```

---

# 🐞 Bug 6 — Index এবং Position Confusion

```text
Index 0
```

মানে হতে পারে:

```text
Position 1
```

Problem Statement-এর indexing convention check করবে।

---

# 🐞 Bug 7 — Frequency Mapping without Constraint Check

```c
freq[ch - 'a']++;
```

শুধু তখন valid যখন:

```text
'a' <= ch <= 'z'
```

বা Input Constraint lowercase নিশ্চিত করে।

---

# 🐞 Bug 8 — Minimum Frequency-তে Zero Count Include করা

Wrong idea:

```text
Find minimum of all 26 frequencies.
```

তাহলে absent letters-এর:

```text
0
```

minimum হয়ে যাবে।

যদি Problem চায় least frequent present character:

```text
Consider only freq[i] > 0
```

---

# 🐞 Bug 9 — Tie Ignore করা

Input:

```text
aabb
```

দুটির frequency:

```text
2
```

Problem যদি tie rule দেয়, সেটা implement করতে হবে।

---

# 🐞 Bug 10 — Repeated Query-তে Repeated Full Traversal

যদি:

```text
Many frequency queries
```

থাকে, প্রতিবার full String traversal unnecessary হতে পারে।

Think:

```text
Preprocess Once
↓
Answer Many
```

---

# Part 16 — Guided Problem Solving

# Problem 1 — Character Exists?

## Problem

String-এর মধ্যে target character আছে কি না বের করো।

Input:

```text
security
r
```

Expected:

```text
Found
```

---

## Step 1 — What is needed?

```text
Existence only
```

---

## Step 2 — State?

```text
Flag
```

---

## Step 3 — Initial State?

```text
Not Found
```

Code State:

```c
int found = 0;
```

---

## Step 4 — On Match?

```text
found = 1
```

---

## Step 5 — Continue?

```text
No
```

কারণ one match enough।

Pattern:

```text
Traversal
+
Equality Check
+
Flag
+
Early Termination
```

---

# Problem 2 — First Occurrence

Input:

```text
programming
r
```

Indexes:

```text
0 1 2 3 4 5 6 7 8 9 10
p r o g r a m m i n g
```

First `r`:

```text
Index 1
```

Pattern:

```text
Traversal
+
Equality Check
+
Index State
+
Break
```

---

# Problem 3 — Last Occurrence

Same Input:

```text
programming
r
```

Matches:

```text
Index 1
Index 4
```

Last:

```text
4
```

Pattern:

```text
Traversal
+
Equality Check
+
Index Overwrite
+
Full Traversal
```

---

# Problem 4 — Count Occurrence

Input:

```text
programming
m
```

Answer:

```text
2
```

Pattern:

```text
Traversal
+
Equality Check
+
Counter
```

No:

```text
break
```

---

# Problem 5 — Multiple Frequency Queries

Input:

```text
abracadabra
4
a
b
r
z
```

Process:

```text
Build Frequency Once
↓
Answer 4 Queries
```

Pattern:

```text
Preprocessing
+
Frequency Array
+
Direct Indexed Query
```

---

# Problem 6 — Find Most Frequent Character

Input:

```text
mississippi
```

Frequencies:

```text
m → 1
i → 4
s → 4
p → 2
```

Maximum Frequency:

```text
4
```

Tie:

```text
i
s
```

এখন Problem Statement-এর tie rule দরকার।

যদি বলে:

```text
Print lexicographically smallest
```

Answer:

```text
i
```

এই Problem থেকে Lesson:

```text
Finding Maximum Value
is not always enough.
```

---

# Part 17 — Exercises

# Exercise 1 — Existence Search

Input:

```text
competitive
v
```

নিজে লিখবে:

```text
Target:
...

State:
...

Initial Value:
...

On Match:
...

Break?
...

Pattern:
...
```

তারপর Code।

---

# Exercise 2 — Not Found Case

Input:

```text
security
z
```

Expected:

```text
Not Found
```

Explain:

```text
Why found starts at 0:
...

Why index = 0 would be dangerous:
...
```

---

# Exercise 3 — First Occurrence

Input:

```text
mississippi
i
```

নিজে বের করো:

```text
First Index:
?
```

তারপর Dry Run Table:

| Index | Character | Match? | Saved Index |
| ----: | --------- | ------ | ----------: |
|       |           |        |             |

---

# Exercise 4 — Last Occurrence

Same Input:

```text
mississippi
i
```

Find:

```text
Last Index:
?
```

Explain:

```text
Why break cannot be used:
...
```

---

# Exercise 5 — Total Occurrence

Input:

```text
mississippi
i
```

Find:

```text
Count:
?
```

তারপর compare করো:

```text
First Index:
...

Last Index:
...

Total Count:
...
```

---

# Exercise 6 — Index vs Position

String:

```text
algorithm
```

Target:

```text
g
```

Find:

```text
0-based Index:
?

1-based Position:
?
```

---

# Exercise 7 — Frequency Query

String:

```text
competitiveprogramming
```

Queries:

```text
m
g
z
i
```

প্রথমে manual frequency বের করো।

তারপর `freq[26]` দিয়ে Query answer করো।

---

# Exercise 8 — Distinct Count

Input:

```text
mississippi
```

Find:

```text
Distinct Character Count:
?
```

Pattern complete করো:

```text
Build ...
+
Traverse ...
+
Count ...
```

---

# Exercise 9 — Exactly Once

Input:

```text
programming
```

Find:

```text
How many characters appear exactly once?
```

প্রথমে Frequency Table বানাও।

তারপর:

```text
Condition:
freq[i] ...
```

complete করো।

---

# Exercise 10 — Repeated Character Types

Input:

```text
aabbccddeef
```

Find:

```text
How many character types appear more than once?
```

নিজে explain করো:

```text
Why the answer is not the total number of repeated positions:
...
```

---

# Exercise 11 — Maximum Frequency

Input:

```text
banana
```

Find:

```text
Character:
?

Frequency:
?
```

Required State:

```text
maxFreq:
...

maxIndex:
...
```

---

# Exercise 12 — Tie Case

Input:

```text
aabbcc
```

Find:

```text
Maximum Frequency:
?
```

তারপর explain করো:

```text
If using > :
...

If using >= :
...
```

---

# Exercise 13 — All Maximum Characters

Input:

```text
aabbcccddd
```

Required Output Conceptually:

```text
c
d
```

কারণ:

```text
c → 3
d → 3
```

Three-Phase Pattern লিখবে:

```text
Phase 1:
...

Phase 2:
...

Phase 3:
...
```

---

# Exercise 14 — Direct Search vs Preprocessing

Scenario A:

```text
One String
One Character Query
```

তুমি কোন approach নেবে?

Explain।

Scenario B:

```text
One String
1000 Character Frequency Queries
```

তুমি কোন approach নেবে?

Explain।

---

# Exercise 15 — State Selection Drill

প্রতিটি Problem-এর জন্য State নির্বাচন করো।

### A

```text
Does x exist?
```

State:

```text
?
```

### B

```text
Where does x first appear?
```

State:

```text
?
```

### C

```text
Where does x last appear?
```

State:

```text
?
```

### D

```text
How many x?
```

State:

```text
?
```

### E

```text
How many times does every lowercase letter appear?
```

State:

```text
?
```

---

# Part 18 — Chapter Assignment

# 📝 Task 1 — Search Dictionary

নিজের ভাষায় explain করবে:

```text
Search
Target
Match
Flag
Occurrence
First Occurrence
Last Occurrence
Index
Position
Sentinel Value
Early Termination
Frequency
Preprocessing
Query
Tie
```

Format:

```text
Term:
Early Termination

Meaning:
...

When I use it:
...

Example:
...

When I should not use it:
...
```

---

# 📝 Task 2 — Four Search Variants

একই String এবং Target-এর জন্য চারটি Program লিখবে।

Input:

```text
mississippi
s
```

Files:

```text
01_exists.c

02_first_occurrence.c

03_last_occurrence.c

04_total_occurrence.c
```

Expected Concept:

```text
Exists:
Yes

First Index:
2

Last Index:
6

Total Occurrence:
4
```

প্রতিটি File-এর জন্য লিখবে:

```text
State:
...

Initialization:
...

On Match:
...

Break:
Yes / No

Reason:
...
```

---

# 📝 Task 3 — Comparison Table

নিজে পূরণ করবে:

| Problem          | State | Initial Value | Match Action | Break? |
| ---------------- | ----- | ------------- | ------------ | ------ |
| Exists           | ?     | ?             | ?            | ?      |
| First Occurrence | ?     | ?             | ?            | ?      |
| Last Occurrence  | ?     | ?             | ?            | ?      |
| Count            | ?     | ?             | ?            | ?      |

Table নিজে fill করবে।

Notes দেখে copy করবে না।

---

# 📝 Task 4 — Frequency Query System

File:

```text
05_frequency_queries.c
```

Input Format:

```text
string
q
query_character_1
query_character_2
...
```

Example:

```text
banana
4
a
n
b
z
```

Expected:

```text
3
2
1
0
```

Required Explanation:

```text
Why preprocessing is useful:
...

Preprocessing phase:
...

Query phase:
...

Character mapping:
...
```

---

# 📝 Task 5 — Frequency Analyzer

File:

```text
06_frequency_analyzer.c
```

Input:

```text
aabbcdeee
```

Program বের করবে:

```text
Distinct Count
Exactly-Once Count
Repeated Character Type Count
Maximum Frequency
```

Expected Analysis:

```text
a → 2
b → 2
c → 1
d → 1
e → 3
```

তুমি Expected Final Values নিজে বের করবে।

---

# 📝 Task 6 — Most Frequent Character

File:

```text
07_most_frequent.c
```

Input:

```text
banana
```

Output:

```text
Character: a
Frequency: 3
```

Required Explanation:

```text
Why maxFreq starts at 0:
...

Why maxIndex starts at -1:
...

Why value state alone is not enough:
...
```

---

# 📝 Task 7 — Tie Handling

File:

```text
08_max_frequency_tie.c
```

Input:

```text
mississippi
```

Program করবে:

```text
Find Maximum Frequency
Print Every Character Having That Frequency
```

Expected:

```text
i
s
```

Required Pattern:

```text
Phase 1
↓
...

Phase 2
↓
...

Phase 3
↓
...
```

---

# 📝 Task 8 — Least Frequent Present Character

File:

```text
09_least_frequent.c
```

Input:

```text
banana
```

Frequency:

```text
a → 3
b → 1
n → 2
```

Expected:

```text
b
```

Explain:

```text
Why zero-frequency characters must be ignored:
...

Why minFreq = 0 can be problematic:
...
```

---

# 📝 Task 9 — Test Case Design

Problem:

```text
Find First Occurrence
```

কমপক্ষে Test করবে:

```text
1. Target at first index
2. Target at last index
3. Target in middle
4. Target appears many times
5. Target does not exist
6. One-character string and match
7. One-character string and no match
8. All characters are target
```

Format:

```text
Test Name:
...

String:
...

Target:
...

Expected:
...

Why Important:
...
```

---

# 📝 Task 10 — Last Occurrence Test Cases

Problem:

```text
Find Last Occurrence
```

নিজে এমন Test Case বানাবে যেখানে:

```text
First Match != Last Match
```

Example copy করবে না।

নিজে বানাবে।

তারপর explain করবে:

```text
Why break would produce the wrong answer:
...
```

---

# 📝 Task 11 — Pattern Recognition Drill

Complete করো।

## A — Character Exists

```text
...
+
...
+
...
+
...
```

---

## B — First Occurrence

```text
...
+
...
+
...
+
...
```

---

## C — Last Occurrence

```text
...
+
...
+
...
+
...
```

---

## D — Total Occurrence

```text
...
+
...
+
...
```

---

## E — Many Character Frequency Queries

```text
...
+
...
+
...
```

---

## F — Most Frequent Character

```text
...
+
...
+
...
```

---

## G — Print All Most Frequent Characters

```text
Phase 1:
...

Phase 2:
...

Phase 3:
...
```

---

# 📝 Task 12 — Chapter Reflection

Copy-Paste Version:

````markdown
# 🧠 Day 3 — Chapter 6 Reflection

## 1. What Is Search?

...

---

## 2. My Search Decision Tree

```text
Need only existence?
↓
...

Need first location?
↓
...

Need last location?
↓
...

Need total matches?
↓
...

Need frequency of all values?
↓
...
```

---

## 3. Flag State

### Meaning

...

### Initial Value

...

### Update Rule

...

---

## 4. First Occurrence

### State

...

### Initial Value

...

### On Match

...

### Why Break?

...

---

## 5. Last Occurrence

### State

...

### Initial Value

...

### On Match

...

### Why No Break?

...

---

## 6. Total Occurrence

### State

...

### Initial Value

...

### Update

...

### Why No Break?

...

---

## 7. Sentinel Value

### My Understanding

...

### Why -1 Is Useful

...

### Why 0 Cannot Mean Not Found

...

---

## 8. Index vs Position

```text
Index:
...

Position:
...

Relationship:
...
```

---

## 9. Direct Search vs Preprocessing

### Direct Search

...

### Preprocessing

...

### When I Prefer Preprocessing

...

---

## 10. Frequency as Search Memory

...

---

## 11. Frequency Analysis Conditions

```text
Absent:
freq[i] ...

Present:
freq[i] ...

Exactly Once:
freq[i] ...

Repeated:
freq[i] ...
```

---

## 12. Maximum Frequency

### State Needed

...

### Why Position State Is Needed

...

---

## 13. Tie Case

### Meaning

...

### Difference Between > and >=

...

---

## 14. Biggest Mistake I Could Make

...

---

## 15. My Pattern Recognition Improvement

Before this chapter:

...

After this chapter:

...

---

## 16. Confidence Score

```text
Existence Search:            ?/10
Flag State:                  ?/10
First Occurrence:            ?/10
Last Occurrence:             ?/10
Total Occurrence:            ?/10
Sentinel Value:              ?/10
Index vs Position:           ?/10
Frequency Query:             ?/10
Preprocessing:               ?/10
Frequency Analysis:          ?/10
Maximum Frequency:           ?/10
Tie Handling:                ?/10
Pattern Recognition:         ?/10
```
````

---

# 🧪 Chapter 6 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Existence Search-এর জন্য কোন State ব্যবহার করা যায়?

---

## Question 2

First Occurrence-এর জন্য:

```text
Match
↓
?
↓
?
```

Complete করো।

---

## Question 3

Last Occurrence-এর জন্য `break` কেন ব্যবহার করা যাবে না?

---

## Question 4

`index = -1` কেন useful?

---

## Question 5

`index = 0` দিয়ে Not Found represent করা dangerous কেন?

---

## Question 6

String:

```text
banana
```

Target:

```text
a
```

Find:

```text
First Index:
?

Last Index:
?

Count:
?
```

---

## Question 7

Existence এবং Count Problem-এর Control Flow difference কী?

---

## Question 8

এই Code কী বের করবে?

```c
int index = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
    }
}
```

```text
First Occurrence?
Last Occurrence?
Total Count?
```

একটি select করো এবং explain করো।

---

## Question 9

এই Code কী বের করবে?

```c
int index = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
        break;
    }
}
```

Explain।

---

## Question 10

Preprocessing কী?

নিজের ভাষায় explain করো।

---

## Question 11

একই String-এর উপর 1000টি Character Frequency Query থাকলে কেন Frequency Array useful?

---

## Question 12

```c
freq[target - 'a']
```

কী represent করে?

---

## Question 13

```c
freq[i] > 0
```

কী বোঝায়?

---

## Question 14

Least Frequent Present Character বের করার সময় `freq[i] == 0` ignore করতে হয় কেন?

---

## Question 15

Most Frequent Character Problem-এ Tie Case কী?

---

## Question 16

`>` এবং `>=` Maximum Update Condition-এর behaviour কীভাবে বদলাতে পারে?

---

# 🐞 Chapter 6 Mistake Checklist

```text
[ ] Problem existence চায় নাকি count চায় বুঝি

[ ] First এবং Last Occurrence confuse করি না

[ ] First Occurrence-এ match পেলে break করতে জানি

[ ] Last Occurrence-এ full traversal-এর প্রয়োজন বুঝি

[ ] Count-all Problem-এ break দিই না

[ ] Flag State-এর কাজ বুঝি

[ ] Counter এবং Flag-এর difference বুঝি

[ ] Index State কেন দরকার বুঝি

[ ] -1 Sentinel Value বুঝি

[ ] 0 একটি Valid Index—এটা মনে রাখি

[ ] Index এবং Position confuse করি না

[ ] Problem-এর indexing convention পড়ি

[ ] Frequency Array-কে Search Memory হিসেবে বুঝি

[ ] One Query এবং Many Queries-এর difference বুঝি

[ ] Repeated Query দেখলে preprocessing চিন্তা করি

[ ] freq > 0 এবং freq == 1 confuse করি না

[ ] Repeated Character Type এবং Duplicate Occurrence confuse করি না

[ ] Maximum Frequency-তে value এবং index দুটো track করতে পারি

[ ] Minimum Frequency-তে absent characters ignore করি

[ ] Tie Case চিনতে পারি

[ ] > এবং >=-এর difference বুঝি

[ ] Input Constraint check না করে character mapping করি না

[ ] নিজে Edge Case বানাতে পারি
```

---

# 🧠 Chapter 6 Pattern Library Update

তোমার `core_pattern.md`-এ নিচের Section add করতে পারো:

````markdown
# 🔎 String Search Patterns

## 1. Existence Search

### Goal

Check whether a target exists.

### Pattern

```text
Traversal
+
Equality Check
+
Flag
+
Early Termination
```

### State

```c
int found = 0;
```

### On Match

```c
found = 1;
break;
```

---

## 2. First Occurrence

### Pattern

```text
Traversal
+
Equality Check
+
Index State
+
Break
```

### State

```c
int index = -1;
```

### On Match

```c
index = i;
break;
```

### Mental Model

```text
First Match
↓
Save
↓
Stop
```

---

## 3. Last Occurrence

### Pattern

```text
Traversal
+
Equality Check
+
Index Overwrite
+
Full Traversal
```

### State

```c
int index = -1;
```

### On Match

```c
index = i;
```

### Mental Model

```text
Match
↓
Save
↓
Continue
↓
Later Match?
↓
Overwrite
```

---

## 4. Total Occurrence

### Pattern

```text
Traversal
+
Equality Check
+
Counter
```

### State

```c
int count = 0;
```

### On Match

```c
count++;
```

### Important

```text
Need all matches
↓
No early break
```

---

## 5. Search State Selection

```text
Need Yes / No?
↓
Flag
```

```text
Need First Index?
↓
Index + Break
```

```text
Need Last Index?
↓
Index + Full Traversal
```

```text
Need Total Matches?
↓
Counter
```

```text
Need All Value Frequencies?
↓
Frequency Array
```

---

## 6. Sentinel Value Pattern

```text
Valid Index:
0 to n - 1

Special Not Found State:
-1
```

Example:

```c
int index = -1;
```

---

## 7. Frequency as Search Memory

```text
Raw String
↓
Build Frequency
↓
Store Occurrence Information
↓
Answer Queries
```

Presence:

```c
freq[target - 'a'] > 0
```

Count:

```c
freq[target - 'a']
```

---

## 8. Repeated Query Pattern

```text
Same Data
+
Many Queries
↓
Think About Preprocessing
```

Pattern:

```text
Preprocess Once
↓
Build Summary
↓
Answer Many Queries
```

---

## 9. Frequency Analysis Pattern

```text
Phase 1
↓
Build Frequency

Phase 2
↓
Analyze Frequency
```

Conditions:

```text
freq[i] == 0
↓
Absent
```

```text
freq[i] > 0
↓
Present
```

```text
freq[i] == 1
↓
Exactly Once
```

```text
freq[i] > 1
↓
Repeated
```

---

## 10. Most Frequent Character

### Pattern

```text
Frequency Array
+
Maximum Pattern
+
Position State
```

### State

```c
int maxFreq = 0;
int maxIndex = -1;
```

---

## 11. Tie Handling

```text
Find Best Value
↓
Check Tie Requirement
↓
Choose Update Rule
or
Perform Another Pass
```

For all maximum candidates:

```text
Build Frequency
↓
Find Maximum Frequency
↓
Print All freq[i] == maxFreq
```

---

## 12. Search Control Flow Rule

Ask:

```text
Does the current match completely determine the final answer?
```

If Yes:

```text
Early Termination may be valid
```

If No:

```text
Continue Traversal
```
````

---

# 🏁 Chapter 6 Completion Checklist

```text
[ ] Search Mental Model বুঝি

[ ] Search Target identify করতে পারি

[ ] Existence Search করতে পারি

[ ] Flag State ব্যবহার করতে পারি

[ ] Early Termination বুঝি

[ ] First Occurrence বের করতে পারি

[ ] Last Occurrence বের করতে পারি

[ ] Total Occurrence count করতে পারি

[ ] First এবং Last Search-এর difference বুঝি

[ ] break কখন দরকার বুঝি

[ ] break কখন ভুল বুঝি

[ ] Index State ব্যবহার করতে পারি

[ ] Sentinel Value বুঝি

[ ] -1 কেন useful বুঝি

[ ] Index vs Position বুঝি

[ ] Frequency Array দিয়ে existence query করতে পারি

[ ] Frequency Array দিয়ে count query করতে পারি

[ ] Direct Search বুঝি

[ ] Preprocessing বুঝি

[ ] Repeated Query Pattern চিনতে পারি

[ ] Frequency Analysis করতে পারি

[ ] Distinct Count করতে পারি

[ ] Exactly-Once Count করতে পারি

[ ] Repeated Character Type Count করতে পারি

[ ] Most Frequent Character বের করতে পারি

[ ] Least Frequent Present Character-এর issue বুঝি

[ ] Tie Case চিনতে পারি

[ ] > এবং >= update behaviour বুঝি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 6 Final Mental Model

Chapter 5 পর্যন্ত আমরা শিখেছিলাম:

```text
String
↓
Traversal
↓
Condition
↓
Count
```

Chapter 6-এ আমরা এটাকে expand করলাম:

```text
String
↓
Traversal
↓
Match
↓
What does the problem need?
```

তারপর:

```text
Exists?
↓
Flag
```

```text
First?
↓
Save + Stop
```

```text
Last?
↓
Save + Continue
```

```text
How Many?
↓
Count + Continue
```

```text
Many Frequency Questions?
↓
Preprocess + Query
```

সবচেয়ে গুরুত্বপূর্ণ Comparison:

```text
Existence
=
One Match Is Enough
```

```text
First Occurrence
=
First Match Is The Answer
```

```text
Last Occurrence
=
Latest Match Replaces Previous Match
```

```text
Total Occurrence
=
Every Match Contributes
```

আর এই Chapter-এর সবচেয়ে বড় Problem-Solving Question:

```text
When I find a match,
is my final answer complete?
```

যদি:

```text
Yes
↓
Maybe Stop
```

যদি:

```text
No
↓
Continue
```

আর Repeated Query-এর জন্য:

```text
Same Data
+
Many Questions
↓
Do not repeat unnecessary work
↓
Preprocess
↓
Store Summary
↓
Answer Queries
```

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ⏳ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 6 Complete.**

পরের Chapter:

```text
Day 3 — Chapter 7
String Transformation
```

সেখানে progression হবে:

```text
Read Character
↓
Inspect Character
↓
Decide Transformation
↓
Modify Character
```

যেমন:

```text
lowercase → uppercase
uppercase → lowercase
digit → replacement
specific character → another character
remove selected characters
```

এবং সবচেয়ে গুরুত্বপূর্ণ নতুন difference হবে:

```text
Analysis Problem
vs
Transformation Problem
```

অর্থাৎ এতদিন আমরা String **দেখে Answer বের করছিলাম**, Chapter 7 থেকে String-এর Character **পরিবর্তন করাও** শুরু করব।

---

# 📘 Day 3 — Chapter 7

# 🔄 String Transformation Pattern

## Character Modification, Case Conversion, Replacement, Filtering এবং In-Place Transformation

Chapter 6 পর্যন্ত আমরা String-এর Character **observe** করেছি।

যেমন:

```text
String
↓
Traverse
↓
Inspect Character
↓
Count / Search / Analyze
```

Example:

```text
banana
↓
How many 'a'?
↓
3
```

কিন্তু এখন নতুন একটি Problem Family শুরু হচ্ছে।

এখন Problem বলতে পারে:

```text
Convert all lowercase letters to uppercase.
```

অথবা:

```text
Replace every 'a' with 'x'.
```

অথবা:

```text
Remove all vowels.
```

অথবা:

```text
Toggle the case of every alphabetic character.
```

অর্থাৎ এবার:

```text
Input String
↓
Traverse
↓
Inspect Character
↓
Decide
↓
Transform
↓
Produce Modified String
```

এই Chapter-এ আমরা শিখব:

> **String Analysis এবং String Transformation-এর মধ্যে পার্থক্য।**

এবং সবচেয়ে গুরুত্বপূর্ণ বিষয়:

> **প্রতিটি Character-এর জন্য Decision নিয়ে কীভাবে Original String modify করা যায় অথবা নতুন Result String তৈরি করা যায়।**

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* Transformation Problem চিনতে;
* Analysis এবং Transformation আলাদা করতে;
* Character modify করতে;
* ASCII relationship ব্যবহার করে case conversion করতে;
* Lowercase → Uppercase করতে;
* Uppercase → Lowercase করতে;
* Toggle Case করতে;
* Specific Character Replace করতে;
* Multiple Character Replace করতে;
* Character Mapping Pattern বুঝতে;
* In-Place Transformation করতে;
* Output-on-the-fly Transformation বুঝতে;
* Filter করে নতুন String তৈরি করতে;
* Character Remove করতে;
* Vowel Remove করতে;
* Digit Remove করতে;
* Selected Character Keep করতে;
* Read Index এবং Write Index বুঝতে;
* Result String manually build করতে;
* Null Terminator ঠিক জায়গায় বসাতে;
* Conditional Transformation করতে;
* Transformation Pipeline বুঝতে;
* common transformation bugs avoid করতে;
* Transformation Problem-এর জন্য State নির্বাচন করতে।

---

# 📖 Chapter Map

```text
Day 3 — Chapter 7
│
├── Part 1  — Transformation Mental Model
├── Part 2  — Three Transformation Strategies
├── Part 3  — Character Replacement
├── Part 4  — Lowercase to Uppercase
├── Part 5  — Uppercase to Lowercase
├── Part 6  — Toggle Case
├── Part 7  — Conditional Transformation
├── Part 8  — Character Mapping Pattern
├── Part 9  — Filtering & Character Removal
├── Part 10 — Read Index & Write Index
├── Part 11 — Building a Result String
├── Part 12 — Keep vs Remove Mental Model
├── Part 13 — Transformation Pipeline
├── Part 14 — Common Bugs & Edge Cases
├── Part 15 — Guided Problem Solving
├── Part 16 — Exercises
└── Part 17 — Assignment & Reflection
```

---

# 🧠 Chapter 7 Master Mental Model

ধরো:

```text
Input:
aB3xY
```

Problem:

```text
Convert lowercase to uppercase.
```

Character-by-Character চিন্তা:

```text
a
↓
lowercase?
↓
Yes
↓
convert
↓
A
```

```text
B
↓
lowercase?
↓
No
↓
keep unchanged
↓
B
```

```text
3
↓
lowercase?
↓
No
↓
keep unchanged
↓
3
```

```text
x
↓
lowercase?
↓
Yes
↓
X
```

```text
Y
↓
lowercase?
↓
No
↓
Y
```

Final:

```text
AB3XY
```

Core Pattern:

```text
Traverse
↓
Inspect
↓
Condition
↓
Transform or Keep
↓
Continue
```

Short Form:

```text
Traversal
+
Classification
+
Decision
+
Modification
```

---

# Part 1 — Transformation Mental Model

# Lesson 1 — Analysis Problem vs Transformation Problem

এটি Chapter-এর সবচেয়ে গুরুত্বপূর্ণ foundation।

## Analysis Problem

Input:

```text
banana
```

Question:

```text
How many vowels?
```

আমরা String পরিবর্তন করছি না।

আমরা শুধু:

```text
Observe
↓
Calculate
↓
Answer
```

এটি:

```text
Analysis Problem
```

---

## Transformation Problem

Input:

```text
banana
```

Question:

```text
Replace every 'a' with 'x'.
```

Process:

```text
banana
↓
bxnxnx
```

এখানে Data পরিবর্তন হচ্ছে।

এটি:

```text
Transformation Problem
```

---

# Lesson 2 — Analysis ও Transformation Comparison

| Problem Type      |       Input Modify? | Common State               |
| ----------------- | ------------------: | -------------------------- |
| Count Vowels      |                  No | Counter                    |
| Find Character    |                  No | Flag / Index               |
| Frequency         |                  No | Frequency Array            |
| Replace Character |                 Yes | Usually no extra state     |
| Convert Case      |                 Yes | Usually no extra state     |
| Remove Character  | Result changes size | Write Index / Result Index |
| Build New String  |  New output created | Result Array + Index       |

Mental Model:

```text
Question asks information about string?
↓
Analysis
```

```text
Question asks modified string?
↓
Transformation
```

---

# Lesson 3 — Basic Transformation Pattern

Generic Structure:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        str[i] = transformed_value;
    }
}
```

Mental Model:

```text
Current Character
↓
Does transformation rule apply?
│
├── Yes → Modify
│
└── No  → Keep
```

---

# Lesson 4 — Transformation Function View

প্রতিটি Character-এর জন্য ভাবতে পারো:

```text
Input Character
↓
Rule
↓
Output Character
```

Example:

```text
'a'
↓
uppercase conversion
↓
'A'
```

```text
'b'
↓
uppercase conversion
↓
'B'
```

```text
'7'
↓
not lowercase
↓
'7'
```

Conceptually:

```text
f(character) → transformed character
```

এখন Function লিখতেই হবে এমন না।

এটি শুধু Mental Model।

---

# Part 2 — Three Transformation Strategies

String Transformation করার তিনটি common strategy আমরা এখন চিনব।

---

# Lesson 5 — Strategy 1: In-Place Transformation

Input String-এর মধ্যেই Character পরিবর্তন করা।

Example:

```text
hello
```

Memory Concept:

```text
h e l l o \0
```

Transform:

```text
H E L L O \0
```

Code Pattern:

```c
str[i] = new_character;
```

Example:

```c
if (str[i] == 'a')
{
    str[i] = 'x';
}
```

এটাকে বলা হয়:

```text
In-Place Transformation
```

অর্থাৎ:

```text
Same Array
↓
Modify Existing Elements
```

---

# Lesson 6 — Strategy 2: Output While Traversing

কখনো Original String modify না করেও transformed output print করা যায়।

Example:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a')
    {
        printf("x");
    }
    else
    {
        printf("%c", str[i]);
    }
}
```

Input:

```text
banana
```

Output:

```text
bxnxnx
```

Original `str`:

```text
banana
```

থেকেই যায়।

এটাকে ভাবতে পারো:

```text
Read
↓
Decide
↓
Print transformed output
```

---

# Lesson 7 — Strategy 3: Build a New Result String

Input:

```text
banana
```

Problem:

```text
Remove all 'a'
```

Output:

```text
bnn
```

এখানে Result-এর Length ছোট হয়ে গেছে।

আমরা নতুন Array ব্যবহার করতে পারি:

```c
char result[100];
```

তারপর:

```text
Read input character
↓
Should keep?
│
├── Yes → Copy to result
│
└── No  → Skip
```

এখানে দুইটি Position লাগে:

```text
i → Input Read Position
j → Result Write Position
```

এটি Chapter-এর সবচেয়ে গুরুত্বপূর্ণ নতুন Pattern-গুলোর একটি।

---

# Lesson 8 — Strategy Selection

```text
Same length after transformation?
↓
In-place may be easiest
```

Example:

```text
abc
↓
ABC
```

Length:

```text
3 → 3
```

---

```text
Only need transformed output?
↓
Can print while traversing
```

---

```text
Characters may be removed?
↓
Build result or use read/write indices
```

Example:

```text
banana
↓
bnn
```

Length:

```text
6 → 3
```

---

# Part 3 — Character Replacement

# Lesson 9 — Replace One Character

Problem:

> String-এর সব `a` character-কে `x` দিয়ে replace করো।

Input:

```text
banana
```

Output:

```text
bxnxnx
```

Mental Process:

```text
b → not a → keep b
a → is a  → x
n → not a → keep n
a → is a  → x
n → not a → keep n
a → is a  → x
```

---

# Lesson 10 — Replacement Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'x';
        }
    }

    printf("%s\n", str);

    return 0;
}
```

Pattern:

```text
Traversal
+
Equality Check
+
Assignment
```

---

# Lesson 11 — Target ও Replacement Input নেওয়া

Input:

```text
banana
a x
```

Code:

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;
    char replacement;

    scanf("%99s", str);
    scanf(" %c %c", &target, &replacement);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            str[i] = replacement;
        }
    }

    printf("%s\n", str);

    return 0;
}
```

এখন Program general।

Example:

```text
Input:
mississippi
s x
```

Output:

```text
mixxixxippi
```

---

# Lesson 12 — Replace First Occurrence Only

Problem:

```text
Replace only the first 'a' with 'x'
```

Input:

```text
banana
```

Output:

```text
bxnana
```

Pattern:

```text
Traversal
+
Equality Check
+
Modify
+
Break
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a')
    {
        str[i] = 'x';
        break;
    }
}
```

Chapter 6-এর Search Pattern এখানে ফিরে এসেছে।

Compare:

```text
Replace All
↓
No break
```

```text
Replace First
↓
Break after first modification
```

---

# Lesson 13 — Replace Last Occurrence Only

Input:

```text
banana
```

Replace last `a` with `x`:

```text
bananx
```

এখানে আগে Last Index খুঁজে নিতে পারি।

Phase 1:

```text
Find Last Occurrence
```

Phase 2:

```text
Modify that Index
```

Code:

```c
int lastIndex = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a')
    {
        lastIndex = i;
    }
}

if (lastIndex != -1)
{
    str[lastIndex] = 'x';
}
```

Pattern Composition:

```text
Last Occurrence Search
+
Conditional Modification
```

এখানে গুরুত্বপূর্ণ Lesson:

> নতুন Problem অনেক সময় আগের শেখা Pattern combine করে তৈরি হয়।

---

# Part 4 — Lowercase to Uppercase

# Lesson 14 — ASCII Relationship

Lowercase:

```text
'a' to 'z'
```

Uppercase:

```text
'A' to 'Z'
```

ASCII table-এ corresponding lowercase এবং uppercase character-এর মধ্যে fixed difference আছে।

Conceptually:

```text
'a' - 'A'
```

difference ব্যবহার করা যায়।

Lowercase → Uppercase:

```c
ch = ch - ('a' - 'A');
```

অথবা common expression:

```c
ch = ch - 'a' + 'A';
```

---

# Lesson 15 — Mapping Mental Model

ধরো:

```text
Character = 'c'
```

প্রথমে lowercase alphabet-এর মধ্যে offset:

```text
'c' - 'a'
↓
2
```

তারপর Uppercase Base-এর সাথে যোগ:

```text
'A' + 2
↓
'C'
```

তাই:

```c
str[i] = str[i] - 'a' + 'A';
```

Mental Model:

```text
Character
↓
Find offset from lowercase base
↓
Apply same offset to uppercase base
```

---

# Lesson 16 — Lowercase to Uppercase Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("%s\n", str);

    return 0;
}
```

Input:

```text
aBc12xY
```

Output:

```text
ABC12XY
```

---

# Lesson 17 — Condition কেন দরকার?

Wrong:

```c
str[i] = str[i] - 'a' + 'A';
```

সব Character-এর উপর করলে:

```text
Uppercase
Digit
Symbol
```

সবকিছু ভুলভাবে transform হতে পারে।

Correct:

```c
if (str[i] >= 'a' && str[i] <= 'z')
```

তারপর conversion।

Rule:

```text
Classify First
↓
Transform Only Valid Character
```

---

# Part 5 — Uppercase to Lowercase

# Lesson 18 — Reverse Mapping

Uppercase:

```text
'A' to 'Z'
```

Lowercase:

```text
'a' to 'z'
```

Conversion:

```c
str[i] = str[i] - 'A' + 'a';
```

Example:

```text
'D'
↓
'D' - 'A'
↓
3
```

তারপর:

```text
'a' + 3
↓
'd'
```

---

# Lesson 19 — Uppercase to Lowercase Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("%s\n", str);

    return 0;
}
```

Input:

```text
HeLLo123
```

Output:

```text
hello123
```

---

# Part 6 — Toggle Case

# Lesson 20 — Toggle Case কী?

Toggle মানে:

```text
Lowercase → Uppercase
Uppercase → Lowercase
Other     → Unchanged
```

Input:

```text
AbCxyZ123
```

Output:

```text
aBcXYz123
```

---

# Lesson 21 — Toggle Decision Tree

প্রতিটি Character-এর জন্য:

```text
Character
↓
Lowercase?
│
├── Yes → Convert to Uppercase
│
└── No
     ↓
   Uppercase?
     │
     ├── Yes → Convert to Lowercase
     │
     └── No  → Keep unchanged
```

এখানে:

```text
if
else if
```

natural choice।

---

# Lesson 22 — Toggle Case Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("%s\n", str);

    return 0;
}
```

---

# Lesson 23 — কেন `if` + `else if`?

ধরো original character:

```text
'a'
```

First `if`:

```text
'a' is lowercase
↓
convert to 'A'
```

যদি এরপর completely separate second `if` থাকে:

```c
if (lowercase)
{
    convert to uppercase;
}

if (uppercase)
{
    convert to lowercase;
}
```

তাহলে modified `'A'` second condition-এ আবার match করতে পারে।

Result:

```text
'a'
↓
'A'
↓
'a'
```

অর্থাৎ transformation undo হয়ে যেতে পারে।

তাই:

```c
if (...)
{
}
else if (...)
{
}
```

ব্যবহার করা safer।

Core Lesson:

```text
Transformation can affect later conditions.
```

এটা খুব গুরুত্বপূর্ণ।

---

# Part 7 — Conditional Transformation

# Lesson 24 — সব Character Transform করতে হবে না

Problem:

> শুধু vowels uppercase করো।

Input:

```text
competitive
```

Output:

```text
cOmpEtItIvE
```

এখানে দুইটি condition দরকার:

```text
Is vowel?
+
Is lowercase?
```

অথবা input constraint অনুযায়ী শুধু vowel check যথেষ্ট হতে পারে।

---

# Lesson 25 — Conditional Transformation Pattern

```text
Traverse
↓
Check Eligibility
↓
If Eligible
    Transform
Else
    Keep
```

Generic:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (eligible(str[i]))
    {
        str[i] = transformed_value;
    }
}
```

এখন `eligible()` function লিখতেই হবে এমন না।

Mental Pattern হিসেবে বুঝবে।

---

# Lesson 26 — Vowels to Uppercase

ধরি input lowercase English letters।

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == 'a' ||
        str[i] == 'e' ||
        str[i] == 'i' ||
        str[i] == 'o' ||
        str[i] == 'u')
    {
        str[i] = str[i] - 'a' + 'A';
    }
}
```

Input:

```text
programming
```

Output:

```text
prOgrAmmIng
```

Pattern:

```text
Traversal
+
Classification
+
Conditional Transformation
```

---

# Lesson 27 — Replace Digits with `#`

Input:

```text
user123pass45
```

Output:

```text
user###pass##
```

Condition:

```c
str[i] >= '0' && str[i] <= '9'
```

Transformation:

```c
str[i] = '#';
```

Full Core Logic:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= '0' && str[i] <= '9')
    {
        str[i] = '#';
    }
}
```

---

# Lesson 28 — Multiple Transformation Rules

Problem:

```text
Lowercase → Uppercase
Digit → #
Other → unchanged
```

Mental Decision Tree:

```text
Character
↓
Lowercase?
├── Yes → Uppercase
└── No
     ↓
    Digit?
     ├── Yes → #
     └── No  → Keep
```

Code Pattern:

```c
if (lowercase_condition)
{
    // convert
}
else if (digit_condition)
{
    // replace
}
```

এখানে transformation rules-এর order গুরুত্বপূর্ণ হতে পারে।

---

# Part 8 — Character Mapping Pattern

# Lesson 29 — Mapping কী?

Mapping মানে:

> একটি input value-এর জন্য একটি corresponding output value নির্ধারণ করা।

Example:

```text
a → A
b → B
c → C
```

এটি Case Mapping।

আরেকটি:

```text
a → 1
b → 2
c → 3
```

এটি Character-to-Number Mapping।

আরেকটি:

```text
0 → #
1 → #
2 → #
...
9 → #
```

এটি Category Replacement Mapping।

---

# Lesson 30 — Offset Mapping

Character:

```text
'd'
```

Lowercase Index:

```text
'd' - 'a'
↓
3
```

এখন:

```text
'A' + 3
↓
'D'
```

Generic Pattern:

```text
source_value
↓
source_value - source_base
↓
offset
↓
target_base + offset
↓
target_value
```

Formula:

```text
target = source - source_base + target_base
```

এই Pattern ভবিষ্যতে শুধু String-এ না, অনেক জায়গায় কাজে লাগবে।

---

# Lesson 31 — Character to Alphabet Index

Input:

```text
c
```

0-based alphabet index:

```c
int index = ch - 'a';
```

Result:

```text
2
```

1-based alphabet position:

```c
int position = ch - 'a' + 1;
```

Result:

```text
3
```

Compare:

```text
'a' → 0-based index 0
'a' → 1-based position 1
```

---

# Lesson 32 — Alphabet Index to Character

ধরো:

```text
index = 2
```

Character:

```c
char ch = 'a' + index;
```

Result:

```text
c
```

এই relation আমরা Frequency Array-তেও ব্যবহার করেছি:

```text
Character → Index
ch - 'a'
```

এখন Reverse:

```text
Index → Character
'a' + index
```

---

# Part 9 — Filtering & Character Removal

# Lesson 33 — Filtering কী?

Filtering মানে:

> প্রতিটি Character-এর জন্য decide করা—এটিকে Result-এ রাখব, নাকি বাদ দেব।

Input:

```text
banana
```

Rule:

```text
Remove all 'a'
```

Result:

```text
bnn
```

Mental Model:

```text
b → keep
a → remove
n → keep
a → remove
n → keep
a → remove
```

Result:

```text
b n n
```

---

# Lesson 34 — Filtering vs Replacement

Replacement:

```text
banana
↓
replace a with x
↓
bxnxnx
```

Length:

```text
6 → 6
```

Filtering:

```text
banana
↓
remove a
↓
bnn
```

Length:

```text
6 → 3
```

এটাই গুরুত্বপূর্ণ difference।

```text
Replacement
↓
One Character becomes another Character
```

```text
Filtering
↓
Some Characters do not enter Result
```

---

# Lesson 35 — Print While Filtering

যদি শুধু output দরকার:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] != 'a')
    {
        printf("%c", str[i]);
    }
}
```

Input:

```text
banana
```

Output:

```text
bnn
```

কিন্তু Original String:

```text
banana
```

অপরিবর্তিত।

---

# Lesson 36 — Build Filtered Result

```c
#include <stdio.h>

int main()
{
    char str[100];
    char result[100];

    scanf("%99s", str);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
```

এই Code Chapter 7-এর সবচেয়ে গুরুত্বপূর্ণ Code-গুলোর একটি।

---

# Part 10 — Read Index & Write Index

# Lesson 37 — `i` এবং `j` কী করছে?

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] != 'a')
    {
        result[j] = str[i];
        j++;
    }
}
```

এখানে:

```text
i
↓
Read Index
```

এবং:

```text
j
↓
Write Index
```

---

# Lesson 38 — Read Index

`i` সব Input Character visit করে।

Input:

```text
banana
```

`i`:

```text
0 1 2 3 4 5
```

সব index traverse হবে।

---

# Lesson 39 — Write Index

`j` শুধু তখন বাড়ে যখন Character Result-এ রাখা হয়।

Input:

```text
banana
```

Rule:

```text
Remove 'a'
```

Dry Run:

|  `i` | `str[i]` | Keep? | Action        | `j` after |
| ---: | -------- | ----- | ------------- | --------: |
|    0 | b        | Yes   | result[0] = b |         1 |
|    1 | a        | No    | Skip          |         1 |
|    2 | n        | Yes   | result[1] = n |         2 |
|    3 | a        | No    | Skip          |         2 |
|    4 | n        | Yes   | result[2] = n |         3 |
|    5 | a        | No    | Skip          |         3 |

শেষে:

```text
result:
b n n
```

তারপর:

```c
result[j] = '\0';
```

অর্থাৎ:

```text
b n n \0
```

এখন Valid C String।

---

# Lesson 40 — কেন `j++` সবসময় হয় না?

Wrong:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] != 'a')
    {
        result[j] = str[i];
    }

    j++;
}
```

এখানে removed character-এর জন্যও `j` বাড়ছে।

তাই Result-এর মধ্যে gap/uninitialized position তৈরি হতে পারে।

Correct:

```text
Character kept?
↓
Write
↓
Increment write index
```

অর্থাৎ:

```c
if (keep_condition)
{
    result[j] = str[i];
    j++;
}
```

---

# Lesson 41 — Read/Write Mental Model

```text
Read Pointer / Index
↓
Moves for every input character
```

```text
Write Pointer / Index
↓
Moves only when output receives a character
```

এটি খুব powerful Pattern।

আগামীতে Array filtering, duplicate removal, compression ইত্যাদিতেও similar idea দেখতে পাবে।

---

# Part 11 — Building a Result String

# Lesson 42 — Result String Construction Pattern

Generic:

```c
char result[100];
int j = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (keep_condition)
    {
        result[j] = str[i];
        j++;
    }
}

result[j] = '\0';
```

Mental Pattern:

```text
Initialize Write Index
↓
Traverse Input
↓
Check Keep Condition
↓
Copy Selected Character
↓
Advance Write Index
↓
Add Null Terminator
```

---

# Lesson 43 — Null Terminator কেন manually দিতে হচ্ছে?

Original String:

```text
banana\0
```

নতুন Result Array:

```c
char result[100];
```

এতে automaticভাবে meaningful String end তৈরি হবে না।

আমরা যদি লিখি:

```text
b n n
```

তাহলে String কোথায় শেষ হচ্ছে সেটা `%s` জানে না।

তাই:

```c
result[j] = '\0';
```

দিতে হবে।

Final:

```text
b n n \0
```

---

# Lesson 44 — Empty Result Case

Input:

```text
aaaa
```

Rule:

```text
Remove all 'a'
```

কোনো Character keep হবে না।

Initial:

```text
j = 0
```

Loop শেষে:

```text
j = 0
```

তারপর:

```c
result[j] = '\0';
```

মানে:

```c
result[0] = '\0';
```

Result:

```text
Empty String
```

এটাও valid।

---

# Lesson 45 — Remove Vowels

Input:

```text
competitive
```

Remove:

```text
a e i o u
```

Result:

```text
cmpttv
```

Need:

```text
Traversal
+
Vowel Classification
+
Negated Keep Condition
+
Result Construction
```

Code Logic:

```c
int j = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

    int isVowel =
        ch == 'a' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'o' ||
        ch == 'u';

    if (!isVowel)
    {
        result[j] = ch;
        j++;
    }
}

result[j] = '\0';
```

---

# Lesson 46 — Remove Digits

Input:

```text
abc123xyz45
```

Output:

```text
abcxyz
```

Keep Condition:

```text
Character is NOT a digit
```

Code:

```c
if (!(str[i] >= '0' && str[i] <= '9'))
{
    result[j] = str[i];
    j++;
}
```

Mental Model:

```text
Digit?
│
├── Yes → Skip
└── No  → Keep
```

---

# Part 12 — Keep vs Remove Mental Model

# Lesson 47 — দুইভাবে একই Problem ভাবা যায়

Problem:

```text
Remove vowels
```

তুমি ভাবতে পারো:

```text
If vowel
↓
Skip
```

অথবা:

```text
If not vowel
↓
Keep
```

Result-building code-এর জন্য দ্বিতীয় চিন্তা অনেক সময় cleaner:

```text
Should this character enter the result?
```

এই Question করবে।

---

# Lesson 48 — Keep Condition Pattern

Generic:

```c
if (keep_condition)
{
    result[j] = str[i];
    j++;
}
```

Examples:

### Keep only digits

```c
if (str[i] >= '0' && str[i] <= '9')
```

### Keep only lowercase

```c
if (str[i] >= 'a' && str[i] <= 'z')
```

### Keep everything except `x`

```c
if (str[i] != 'x')
```

### Keep only vowels

```text
if character is vowel
```

---

# Lesson 49 — Filtering Decision Tree

```text
Need Result with selected characters only?
↓
Define Keep Condition
↓
Traverse Input
↓
If Keep
    Copy to Result
↓
Terminate Result with '\0'
```

Short Pattern:

```text
Read
↓
Decide
↓
Keep or Skip
↓
Write
```

---

# Part 13 — Transformation Pipeline

# Lesson 50 — Pipeline কী?

কখনো Problem-এ একাধিক Transformation Rule থাকে।

Example:

```text
1. Remove digits
2. Convert lowercase letters to uppercase
```

Input:

```text
ab12Cd3
```

Expected:

```text
ABCD
```

Character Processing:

```text
a
↓
not digit
↓
lowercase
↓
A
↓
keep
```

```text
1
↓
digit
↓
skip
```

```text
C
↓
not digit
↓
already uppercase
↓
keep C
```

---

# Lesson 51 — Pipeline Mental Model

```text
Input Character
↓
Filter Rule
↓
Transformation Rule
↓
Output Character
```

অথবা Problem অনুযায়ী:

```text
Classify
↓
Decide
↓
Transform
↓
Store
```

---

# Lesson 52 — Filter + Transform Example

Problem:

> Digit remove করো এবং lowercase uppercase করো।

```c
char result[100];
int j = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    char ch = str[i];

    if (ch >= '0' && ch <= '9')
    {
        continue;
    }

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 'a' + 'A';
    }

    result[j] = ch;
    j++;
}

result[j] = '\0';
```

Observe:

```text
Read into temporary ch
↓
Maybe Skip
↓
Maybe Transform ch
↓
Store ch
```

এটি একটি clean Transformation Pipeline।

---

# Lesson 53 — `continue` কী করছে?

Code:

```c
if (ch >= '0' && ch <= '9')
{
    continue;
}
```

মানে:

```text
Current Character is digit
↓
Skip rest of current iteration
↓
Move to next character
```

তাই digit:

```text
result
```

এ যায় না।

কিন্তু `continue` না ব্যবহার করেও solve করা যায়।

এখন Pattern চিনবে, blindly ব্যবহার করবে না।

---

# Lesson 54 — Order Matters

ধরো Rules:

```text
1. Replace lowercase a with x
2. Convert all lowercase to uppercase
```

Input:

```text
a
```

যদি Rule 1 আগে:

```text
a
↓
x
↓
X
```

Result:

```text
X
```

যদি uppercase conversion আগে:

```text
a
↓
A
```

এখন:

```text
A != a
```

তাই replacement আর হবে না।

Result:

```text
A
```

Lesson:

> **Multiple transformation rules থাকলে order final result পরিবর্তন করতে পারে।**

---

# Part 14 — Common Bugs & Edge Cases

# 🐞 Bug 1 — Condition ছাড়া Case Conversion

Wrong:

```c
str[i] = str[i] - 'a' + 'A';
```

সব Character-এর জন্য।

Problem:

```text
Uppercase
Digit
Symbol
```

corrupt হতে পারে।

Correct:

```c
if (str[i] >= 'a' && str[i] <= 'z')
```

---

# 🐞 Bug 2 — Toggle Case-এ Two Independent `if`

Risky:

```c
if (lowercase)
{
    convert to uppercase;
}

if (uppercase)
{
    convert to lowercase;
}
```

First transformation second condition-কে true করতে পারে।

Better:

```c
if (lowercase)
{
}
else if (uppercase)
{
}
```

---

# 🐞 Bug 3 — Replacement-এ `==` এবং `=` Confusion

Wrong:

```c
str[i] == 'x';
```

এটি comparison।

Modification না।

Correct:

```c
str[i] = 'x';
```

Remember:

```text
== → Compare
=  → Assign
```

---

# 🐞 Bug 4 — Replace All Problem-এ `break`

```c
if (str[i] == target)
{
    str[i] = replacement;
    break;
}
```

এতে শুধু First Match replace হবে।

---

# 🐞 Bug 5 — Remove Character কিন্তু Original Index-এ Copy করা

Wrong idea:

```c
if (str[i] != 'a')
{
    result[i] = str[i];
}
```

Problem:

```text
i
```

removed character-এর position-ও skip করছে।

তাই Result contiguous থাকবে না।

Need:

```text
Separate Write Index
```

---

# 🐞 Bug 6 — `j++` Skip-এর সময়ও করা

Wrong:

```c
if (keep)
{
    result[j] = str[i];
}

j++;
```

Correct:

```c
if (keep)
{
    result[j] = str[i];
    j++;
}
```

---

# 🐞 Bug 7 — Null Terminator Forget করা

Wrong:

```c
printf("%s\n", result);
```

কিন্তু:

```c
result[j] = '\0';
```

দেওয়া হয়নি।

এতে garbage output বা undefined behavior হতে পারে।

---

# 🐞 Bug 8 — Original String Modified কি না না বোঝা

এই Code:

```c
printf("%c", transformed_character);
```

Original String modify করে না।

কিন্তু:

```c
str[i] = transformed_character;
```

Original Array modify করে।

Difference বুঝতে হবে।

---

# 🐞 Bug 9 — Empty Result Handle না করা

Input:

```text
aaaa
```

Remove `a`।

Result:

```text
""
```

যদি:

```c
result[j] = '\0';
```

ঠিকভাবে দেওয়া থাকে, empty result valid।

---

# 🐞 Bug 10 — Transformation Order Ignore করা

Multiple rules থাকলে:

```text
Rule A
↓
Rule B
```

এবং:

```text
Rule B
↓
Rule A
```

same result নাও দিতে পারে।

---

# 🐞 Bug 11 — Spaces থাকা String-এ `scanf("%s")`

Input:

```text
hello world
```

`scanf("%s", str)` শুধু:

```text
hello
```

পড়বে।

যদি full line লাগে:

```c
fgets(str, sizeof(str), stdin);
```

ব্যবহার করতে হবে।

এই Chapter-এর basic exercises-এর অনেকগুলো single-word input ধরে করা যাবে, কিন্তু Problem Statement অবশ্যই পড়বে।

---

# Part 15 — Guided Problem Solving

# Problem 1 — Replace All Occurrences

## Problem

সব `a` কে `x` দিয়ে replace করো।

Input:

```text
banana
```

---

## Step 1 — Problem Type

```text
Transformation
```

---

## Step 2 — Length Change?

```text
No
```

তাই:

```text
In-place transformation
```

ভালো choice।

---

## Step 3 — Condition

```text
str[i] == 'a'
```

---

## Step 4 — Transformation

```text
str[i] = 'x'
```

---

## Pattern

```text
Traversal
+
Equality Check
+
Assignment
```

---

# Problem 2 — Convert Lowercase to Uppercase

Input:

```text
aBc12x
```

Need:

```text
ABC12X
```

Decision:

```text
Current character lowercase?
│
├── Yes → Map to uppercase
└── No  → Keep
```

Pattern:

```text
Traversal
+
Range Classification
+
Offset Mapping
+
In-Place Modification
```

---

# Problem 3 — Toggle Case

Input:

```text
AbC123xY
```

Output:

```text
aBc123Xy
```

Decision Tree:

```text
Lowercase?
├── Yes → Uppercase
└── No
     ↓
   Uppercase?
     ├── Yes → Lowercase
     └── No  → Keep
```

State:

```text
No counter required
No flag required
No frequency array required
```

কারণ Problem শুধু direct transformation চায়।

---

# Problem 4 — Remove All `x`

Input:

```text
axxbxcxx
```

Output:

```text
abc
```

Length changes:

```text
8 → 3
```

Need:

```text
Read Index
+
Write Index
```

Pattern:

```text
Traversal
+
Keep Condition
+
Result Construction
+
Null Termination
```

---

# Problem 5 — Keep Only Digits

Input:

```text
ab12c3x90
```

Output:

```text
12390
```

Keep Condition:

```c
str[i] >= '0' && str[i] <= '9'
```

Mental Model:

```text
Character
↓
Digit?
├── Yes → Copy to Result
└── No  → Skip
```

---

# Problem 6 — Remove Vowels and Uppercase Remaining Lowercase Letters

Input:

```text
competitive
```

Process:

```text
c → consonant → C
o → vowel → skip
m → consonant → M
p → consonant → P
e → vowel → skip
t → consonant → T
i → vowel → skip
t → consonant → T
i → vowel → skip
v → consonant → V
e → vowel → skip
```

Output:

```text
CMPTTV
```

Pattern Composition:

```text
Classification
+
Filtering
+
Transformation
+
Result Construction
```

এটি single basic pattern না।

এটি:

```text
Pattern Combination
```

---

# Part 16 — Exercises

# Exercise 1 — Replace Character

Input:

```text
programming
```

Replace:

```text
m → x
```

Expected Output নিজে বের করো।

তারপর লিখবে:

```text
Problem Type:
...

Length Changes?
...

Best Strategy:
...

Pattern:
...
```

তারপর Code।

---

# Exercise 2 — Replace First Only

Input:

```text
mississippi
```

Replace first:

```text
s → x
```

নিজে Output বের করো।

Explain:

```text
Why break is valid:
...
```

---

# Exercise 3 — Replace Last Only

Input:

```text
mississippi
```

Replace last:

```text
s → x
```

Need:

```text
Search Phase
+
Transformation Phase
```

নিজে Code লিখবে।

---

# Exercise 4 — Lowercase to Uppercase

Input:

```text
seCurity123
```

নিজে Output বের করো।

তারপর Code লিখবে।

Required Explanation:

```text
Why condition is necessary:
...

Mapping formula:
...
```

---

# Exercise 5 — Uppercase to Lowercase

Input:

```text
HELLoWORLD123
```

নিজে Output বের করো।

---

# Exercise 6 — Toggle Case

Input:

```text
CpBootCamp2026
```

নিজে Expected Output লিখবে।

তারপর Code।

Explain:

```text
Why if + else if is safer here:
...
```

---

# Exercise 7 — Replace Digits

Input:

```text
user123pass456
```

Rule:

```text
Every digit → #
```

Expected Output নিজে বের করো।

---

# Exercise 8 — Remove Character

Input:

```text
banana
```

Remove:

```text
a
```

Dry Run Table বানাও:

|    i | Character | Keep? | j Before | Action | j After |
| ---: | --------- | ----- | -------: | ------ | ------: |
|      |           |       |          |        |         |

---

# Exercise 9 — Remove Vowels

Input:

```text
competitiveprogramming
```

Output নিজে বের করবে।

Then identify:

```text
Read Index:
...

Write Index:
...

Keep Condition:
...

Final Step:
...
```

---

# Exercise 10 — Keep Only Digits

Input:

```text
abc12x9p007
```

Expected Output নিজে বের করো।

Pattern complete করো:

```text
Traversal
+
...
+
...
+
...
```

---

# Exercise 11 — Keep Only Letters

Input:

```text
abc123XYZ@#p9
```

Result-এ শুধু:

```text
A-Z
a-z
```

range-এর Character রাখবে।

নিজে condition design করো।

---

# Exercise 12 — Transformation Pipeline

Input:

```text
a1b2C3d
```

Rules:

```text
1. Remove digits
2. Convert lowercase to uppercase
3. Keep uppercase unchanged
```

Expected Output নিজে বের করো।

তারপর Pipeline লিখো:

```text
Read
↓
...
↓
...
↓
...
```

---

# Exercise 13 — Order Matters

Input:

```text
abc
```

Rules:

```text
Rule A:
Replace 'a' with 'x'

Rule B:
Convert lowercase to uppercase
```

Answer:

```text
A then B result:
...

B then A result:
...
```

Explain কেন difference হয়।

---

# Exercise 14 — Empty Result

Input:

```text
aaaaa
```

Remove:

```text
a
```

Explain:

```text
Final j:
...

Where null terminator goes:
...

What result string contains:
...
```

---

# Exercise 15 — Strategy Selection Drill

প্রতিটি Problem-এর জন্য Strategy select করো।

Options:

```text
In-Place
Print While Traversing
Build Result String
Search Then Modify
```

### A

```text
Convert all lowercase to uppercase.
```

Strategy:

```text
?
```

### B

```text
Print string without vowels.
Original string is not needed later.
```

Strategy:

```text
?
```

### C

```text
Create and store a new string containing only digits.
```

Strategy:

```text
?
```

### D

```text
Replace only last occurrence of x.
```

Strategy:

```text
?
```

---

# Part 17 — Chapter Assignment

# 📝 Task 1 — Transformation Dictionary

নিজের ভাষায় explain করবে:

```text
Transformation
In-Place Transformation
Replacement
Filtering
Mapping
Offset
Read Index
Write Index
Keep Condition
Skip Condition
Result String
Transformation Pipeline
```

Format:

```text
Term:
Filtering

Meaning:
...

Mental Model:
...

Example:
...

Common Mistake:
...
```

---

# 📝 Task 2 — Basic Transformation Programs

নিচের Files বানাবে:

```text
01_replace_all.c
02_replace_first.c
03_replace_last.c
04_to_uppercase.c
05_to_lowercase.c
06_toggle_case.c
```

প্রতিটি File-এর জন্য Notes লিখবে:

```text
Problem Type:
...

Input Changes?
...

Length Changes?
...

State Needed:
...

Pattern:
...
```

---

# 📝 Task 3 — Filtering Programs

Files:

```text
07_remove_character.c
08_remove_vowels.c
09_remove_digits.c
10_keep_only_digits.c
```

প্রতিটির জন্য লিখবে:

```text
Read Index:
...

Write Index:
...

Keep Condition:
...

When j increments:
...

Where null terminator is added:
...
```

---

# 📝 Task 4 — Transformation Pipeline

File:

```text
11_filter_and_transform.c
```

Problem:

> একটি String থেকে সব Digit remove করো এবং সব Lowercase Character uppercase করো।

Example:

```text
Input:
a1b2C3d

Output:
ABCD
```

Required Mental Model:

```text
Read Character
↓
Digit?
├── Yes → Skip
└── No
     ↓
   Lowercase?
     ├── Yes → Convert
     └── No  → Keep
          ↓
        Store
```

নিজে Code লিখবে।

---

# 📝 Task 5 — Read/Write Dry Run

Input:

```text
a1b2c3
```

Problem:

```text
Remove digits
```

Table fill করবে:

|    i | char | Digit? | Keep? | j Before | Written Value | j After |
| ---: | ---- | ------ | ----- | -------: | ------------- | ------: |
|      |      |        |       |          |               |         |

শেষে লিখবে:

```text
Result before '\0':
...

Final j:
...

Null terminator index:
...

Final String:
...
```

---

# 📝 Task 6 — Pattern Comparison Table

নিজে পূরণ করবে:

| Problem              | Length Changes? | Extra Result Needed? | Main Pattern |
| -------------------- | --------------- | -------------------- | ------------ |
| Replace all x with y | ?               | ?                    | ?            |
| Convert to uppercase | ?               | ?                    | ?            |
| Remove vowels        | ?               | ?                    | ?            |
| Keep only digits     | ?               | ?                    | ?            |
| Replace first match  | ?               | ?                    | ?            |
| Replace last match   | ?               | ?                    | ?            |

---

# 📝 Task 7 — Edge Case Design

Transformation Problems-এর জন্য Test Case বানাবে।

কমপক্ষে:

```text
1. Empty result after filtering
2. Nothing needs transformation
3. Every character needs transformation
4. Mixed uppercase and lowercase
5. Only digits
6. No digits
7. Target appears once
8. Target appears many times
9. Target does not exist
10. One-character string
```

Format:

```text
Test Name:
...

Input:
...

Rule:
...

Expected:
...

Why Important:
...
```

---

# 📝 Task 8 — Bug Analysis

নিচের Code analyze করবে:

```c
char result[100];
int j = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] != 'a')
    {
        result[j] = str[i];
    }

    j++;
}

printf("%s\n", result);
```

নিজে identify করবে:

```text
Bug 1:
...

Bug 2:
...

Why result may be invalid:
...

Correct mental rule:
...
```

---

# 📝 Task 9 — Toggle Case Bug Analysis

Analyze:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - 'a' + 'A';
    }

    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] - 'A' + 'a';
    }
}
```

Explain:

```text
What happens to original lowercase letters?
...

Why?
...

How to fix?
...
```

---

# 📝 Task 10 — Pattern Recognition Drill

Complete করবে।

## A — Replace All

```text
...
+
...
+
...
```

---

## B — Case Conversion

```text
...
+
...
+
...
+
...
```

---

## C — Remove Character

```text
...
+
...
+
...
+
...
```

---

## D — Build Filtered String

```text
Read
↓
...
↓
...
↓
...
↓
Null Terminate
```

---

## E — Filter + Transform

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

# 📝 Task 11 — Chapter Reflection

Copy-Paste Version:

````markdown
# 🧠 Day 3 — Chapter 7 Reflection

## 1. What Is String Transformation?

...

---

## 2. Analysis vs Transformation

### Analysis

...

### Transformation

...

### Main Difference

...

---

## 3. My Transformation Mental Model

```text
Input Character
↓
...
↓
...
↓
...
```

---

## 4. In-Place Transformation

### Meaning

...

### When Useful

...

### Example

...

---

## 5. Output While Traversing

### Meaning

...

### Advantage

...

### Limitation

...

---

## 6. Result String Construction

### Why Needed

...

### Read Index

...

### Write Index

...

---

## 7. Read Index vs Write Index

```text
Read Index:
...

Moves when:
...

Write Index:
...

Moves when:
...
```

---

## 8. Null Terminator

### Why Needed

...

### Where It Goes

...

### Example

...

---

## 9. Replacement vs Filtering

### Replacement

...

### Filtering

...

### Length Difference

...

---

## 10. Character Mapping

### My Understanding

...

### Lowercase to Uppercase Formula

...

### Uppercase to Lowercase Formula

...

---

## 11. Toggle Case

### Decision Tree

```text
...
```

### Why `else if` Matters

...

---

## 12. Keep Condition

### My Understanding

...

### Example

...

---

## 13. Transformation Pipeline

### My Understanding

...

### Example Pipeline

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

## 14. Biggest Bug I Learned

...

---

## 15. Most Difficult Concept

...

---

## 16. My Pattern Recognition Improvement

Before this chapter:

...

After this chapter:

...

---

## 17. Confidence Score

```text
Transformation Mental Model: ?/10
Analysis vs Transformation:  ?/10
Character Replacement:       ?/10
Case Conversion:             ?/10
Toggle Case:                 ?/10
Character Mapping:           ?/10
Filtering:                   ?/10
Read/Write Index:            ?/10
Result String Building:      ?/10
Null Termination:            ?/10
Transformation Pipeline:     ?/10
Pattern Recognition:         ?/10
```
````

---

# 🧪 Chapter 7 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Analysis Problem এবং Transformation Problem-এর main difference কী?

---

## Question 2

এই Problem-এর best simple strategy কী?

```text
Convert all lowercase letters to uppercase.
```

Options:

```text
Counter
Flag
In-Place Transformation
Frequency Array
```

---

## Question 3

Input:

```text
banana
```

Replace all `a` with `x`।

Output কী?

---

## Question 4

Replace First এবং Replace All-এর Control Flow difference কী?

---

## Question 5

Lowercase to Uppercase mapping formula লিখো।

---

## Question 6

Uppercase to Lowercase mapping formula লিখো।

---

## Question 7

Toggle Case-এ two independent `if` কেন problem করতে পারে?

---

## Question 8

Filtering কী?

নিজের ভাষায় explain করো।

---

## Question 9

Input:

```text
banana
```

Remove:

```text
a
```

Final Result কী?

---

## Question 10

Read Index এবং Write Index-এর difference কী?

---

## Question 11

Filtering-এর সময় Write Index কখন increment হয়?

---

## Question 12

নতুন Result String build করার শেষে কী করতে হয়?

---

## Question 13

```c
result[j] = '\0';
```

কেন দরকার?

---

## Question 14

Input:

```text
aaaa
```

সব `a` remove করলে:

```text
Final j = ?
```

এবং:

```text
result[?] = '\0';
```

complete করো।

---

## Question 15

Replacement এবং Filtering-এর length behaviour কীভাবে আলাদা?

---

## Question 16

এই Pattern-এর নাম কী?

```text
Read Input Character
↓
Check Condition
↓
Keep or Skip
↓
Write Selected Character
```

---

## Question 17

Multiple Transformation Rules-এর order কেন গুরুত্বপূর্ণ হতে পারে?

---

## Question 18

এই Code-এর bug কী?

```c
if (str[i] != 'a')
{
    result[j] = str[i];
}

j++;
```

---

# 🐞 Chapter 7 Mistake Checklist

```text
[ ] Analysis এবং Transformation আলাদা করতে পারি

[ ] Problem modified output চায় কি না বুঝি

[ ] In-place transformation বুঝি

[ ] Original String modify হচ্ছে কি না বুঝি

[ ] Character Replacement করতে পারি

[ ] Replace First এবং Replace All confuse করি না

[ ] Replace Last-এর জন্য Search + Modify pattern বুঝি

[ ] Lowercase range check করতে পারি

[ ] Uppercase range check করতে পারি

[ ] Case Mapping formula বুঝি

[ ] Offset Mapping বুঝি

[ ] Toggle Case করতে পারি

[ ] Toggle-এ if/else-if issue বুঝি

[ ] Digit Classification করতে পারি

[ ] Conditional Transformation বুঝি

[ ] Filtering এবং Replacement আলাদা করতে পারি

[ ] Read Index-এর কাজ বুঝি

[ ] Write Index-এর কাজ বুঝি

[ ] Write Index শুধু kept character-এর জন্য বাড়াই

[ ] Result Array contiguous রাখি

[ ] Null Terminator দিতে ভুল করি না

[ ] Empty Result Case বুঝি

[ ] Keep Condition design করতে পারি

[ ] Skip Condition বুঝি

[ ] Output while traversing এবং result build-এর difference বুঝি

[ ] Filter + Transform combine করতে পারি

[ ] Transformation Pipeline বুঝি

[ ] Multiple rules-এর order check করি

[ ] Input-এ spaces থাকলে scanf limitation মনে রাখি

[ ] Edge Case নিজে বানাতে পারি
```

---

# 🧠 Chapter 7 Pattern Library Update

তোমার `core_pattern.md`-এ নিচের Section add করতে পারো:

````markdown
# 🔄 String Transformation Patterns

## 1. Basic Transformation

### Pattern

```text
Traversal
+
Inspection
+
Decision
+
Modification
```

### Generic Form

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        str[i] = transformed_value;
    }
}
```

---

## 2. In-Place Transformation

```text
Same Array
↓
Traverse
↓
Modify Existing Character
```

Useful when:

```text
Input Length == Output Length
```

Examples:

```text
Case Conversion
Character Replacement
Toggle Case
```

---

## 3. Replace All Occurrences

```text
Traversal
+
Equality Check
+
Assignment
```

```c
if (str[i] == target)
{
    str[i] = replacement;
}
```

Important:

```text
Replace All
↓
No break
```

---

## 4. Replace First Occurrence

```text
Traversal
+
Equality Check
+
Modify
+
Break
```

Mental Model:

```text
First Match
↓
Transform
↓
Stop
```

---

## 5. Replace Last Occurrence

```text
Find Last Index
↓
Check Found
↓
Modify Saved Position
```

Pattern Combination:

```text
Last Occurrence Search
+
Conditional Modification
```

---

## 6. Case Conversion

### Lowercase to Uppercase

Condition:

```c
ch >= 'a' && ch <= 'z'
```

Mapping:

```c
ch = ch - 'a' + 'A';
```

### Uppercase to Lowercase

Condition:

```c
ch >= 'A' && ch <= 'Z'
```

Mapping:

```c
ch = ch - 'A' + 'a';
```

---

## 7. Toggle Case

```text
Lowercase?
├── Yes → Uppercase
└── No
     ↓
   Uppercase?
     ├── Yes → Lowercase
     └── No → Keep
```

Important:

```text
Transformation can affect later conditions.
```

Use mutually exclusive control flow when needed.

---

## 8. Offset Mapping

```text
Source Value
↓
Subtract Source Base
↓
Get Offset
↓
Add Target Base
↓
Target Value
```

Formula:

```text
target = source - source_base + target_base
```

---

## 9. Filtering Pattern

```text
Input Character
↓
Keep?
├── Yes → Copy to Result
└── No  → Skip
```

Generic:

```c
int j = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (keep_condition)
    {
        result[j] = str[i];
        j++;
    }
}

result[j] = '\0';
```

---

## 10. Read Index & Write Index

```text
Read Index
↓
Visits every input character
```

```text
Write Index
↓
Moves only when output receives a character
```

Rule:

```text
Keep
↓
Write
↓
Increment Write Index
```

---

## 11. Result String Construction

```text
Initialize j = 0
↓
Traverse Input
↓
Check Keep Condition
↓
Copy Selected Character
↓
Increment j
↓
Add '\0'
```

---

## 12. Replacement vs Filtering

### Replacement

```text
One Character
↓
Another Character
```

Usually:

```text
Length stays same
```

### Filtering

```text
Character
↓
Keep or Skip
```

Usually:

```text
Output length <= Input length
```

---

## 13. Transformation Pipeline

```text
Read
↓
Classify
↓
Filter
↓
Transform
↓
Store
```

Example:

```text
Read Character
↓
Digit?
├── Yes → Skip
└── No
     ↓
   Lowercase?
     ├── Yes → Convert
     └── No → Keep
          ↓
        Store
```

---

## 14. Strategy Selection

```text
Same-size transformation?
↓
Think In-Place
```

```text
Only transformed output needed?
↓
Print While Traversing may work
```

```text
Need stored filtered result?
↓
Result Array + Write Index
```

```text
Need modify first occurrence?
↓
Search + Modify + Break
```

```text
Need modify last occurrence?
↓
Find Last Index + Modify
```

---

## 15. Transformation Control Question

Ask:

```text
For this character,
what should happen?
```

Possible answers:

```text
Keep
Transform
Replace
Skip
Store
Print
```

Then choose the correct state and control flow.
````

---

# 🏁 Chapter 7 Completion Checklist

```text
[ ] Transformation Mental Model বুঝি

[ ] Analysis vs Transformation বুঝি

[ ] In-Place Transformation করতে পারি

[ ] Output While Traversing বুঝি

[ ] New Result String build করতে পারি

[ ] Character Replacement করতে পারি

[ ] Replace All করতে পারি

[ ] Replace First করতে পারি

[ ] Replace Last করতে পারি

[ ] Lowercase to Uppercase করতে পারি

[ ] Uppercase to Lowercase করতে পারি

[ ] Toggle Case করতে পারি

[ ] Character Mapping বুঝি

[ ] Offset Mapping বুঝি

[ ] Digit Replacement করতে পারি

[ ] Conditional Transformation বুঝি

[ ] Filtering বুঝি

[ ] Character Remove করতে পারি

[ ] Vowel Remove করতে পারি

[ ] Digit Remove করতে পারি

[ ] Keep-Only Pattern বুঝি

[ ] Read Index বুঝি

[ ] Write Index বুঝি

[ ] j কখন increment হবে বুঝি

[ ] Result String contiguous রাখতে পারি

[ ] Null Terminator দিতে পারি

[ ] Empty Result Case বুঝি

[ ] Filter + Transform combine করতে পারি

[ ] Transformation Pipeline বুঝি

[ ] Rule Order-এর importance বুঝি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 7 Final Mental Model

Chapter 4-এ:

```text
Character
↓
Classify
```

Chapter 5-এ:

```text
Character
↓
Classify
↓
Count
```

Chapter 6-এ:

```text
Character
↓
Match?
↓
Search Decision
```

Chapter 7-এ:

```text
Character
↓
Inspect
↓
Decide
↓
Transform / Keep / Skip
```

এখন তোমার String Problem Solving Model অনেক বড় হয়েছে:

```text
String Problem
│
├── Need Information?
│      ↓
│    Analysis
│
│    ├── Count
│    ├── Search
│    ├── Frequency
│    └── Classification
│
└── Need Modified Output?
       ↓
    Transformation

       ├── Replace
       ├── Convert
       ├── Toggle
       ├── Filter
       └── Build Result
```

সবচেয়ে গুরুত্বপূর্ণ Transformation Decision:

```text
Will every input character produce exactly one output character?
```

যদি:

```text
Yes
↓
In-Place Transformation may work
```

যদি:

```text
No
↓
Think about Filtering
+
Read Index
+
Write Index
+
Result Construction
```

আর Character-level Mental Model:

```text
Current Character
↓
What category is it?
↓
What does the problem want me to do with it?
│
├── Keep
├── Transform
├── Replace
├── Skip
├── Store
└── Print
```

এই Chapter-এর সবচেয়ে গুরুত্বপূর্ণ নতুন Pattern:

```text
Input
↓
Read with i
↓
Decide
↓
Write with j
↓
Terminate with '\0'
```

অর্থাৎ:

```text
i = Where am I reading from?
```

এবং:

```text
j = Where am I writing next?
```

এই `Read Index + Write Index` Mental Model সামনে আরও powerful হবে।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ✅ Chapter 7 — String Transformation
│
├── ⏳ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 7 Complete.**

পরের Chapter:

```text
Day 3 — Chapter 8
Reverse & Two-Pointer Mental Model
```

সেখানে progression হবে:

```text
Single Index Traversal
↓
Two Positions
↓
Left + Right
↓
Move Toward Center
```

এবং প্রথমবার আমরা গভীরভাবে শিখব:

```text
left →           ← right
```

তারপর:

```text
Compare
or
Swap
↓
Move Both
↓
Meet at Center
```

এই Chapter থেকেই Chapter 9-এর **Palindrome Pattern**-এর foundation তৈরি হবে।

---

# 📘 Day 3 — Chapter 8

# 🔁 Reverse & Two-Pointer Mental Model

## Left Pointer, Right Pointer, Swap, Compare, Move Toward Center এবং Boundary Control

Chapter 7-এ আমরা শিখেছি:

```text
String
↓
Traverse
↓
Inspect Character
↓
Decide
↓
Transform / Keep / Skip
```

এখন পর্যন্ত আমাদের Traversal সাধারণত এমন ছিল:

```text
Start
↓
Index 0
↓
Index 1
↓
Index 2
↓
...
↓
End
```

অর্থাৎ:

```text
Left → Right
```

কিন্তু সব Problem একদিকে Traverse করে সবচেয়ে সহজে Solve করা যায় না।

কিছু Problem-এ আমাদের String-এর **দুই দিক** নিয়ে একই সঙ্গে চিন্তা করতে হয়।

Example:

```text
hello
```

Reverse:

```text
olleh
```

এখানে একটি interesting relationship আছে:

```text
Original Index 0 → Reverse Index 4
Original Index 1 → Reverse Index 3
Original Index 2 → Reverse Index 2
Original Index 3 → Reverse Index 1
Original Index 4 → Reverse Index 0
```

Visual:

```text
h  e  l  l  o
↑           ↑
left      right
```

তারপর:

```text
Swap
↓
o  e  l  l  h
   ↑     ↑
 left  right
```

তারপর:

```text
Swap
↓
o  l  l  e  h
      ↑
     Meet
```

Final:

```text
olleh
```

এখানেই আসে নতুন Mental Model:

> **একটি Sequence-এর দুই প্রান্ত থেকে কাজ করা।**

এই Pattern-এর নাম:

```text
Two-Pointer Pattern
```

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* Reverse Problem চিনতে;
* String Length এবং Last Valid Index-এর relationship বুঝতে;
* Left এবং Right Pointer বুঝতে;
* Pointer শব্দটি CP Mental Model হিসেবে বুঝতে;
* Actual C Pointer এবং Index Pointer-এর difference বুঝতে;
* Two-Pointer Pattern চিনতে;
* দুই প্রান্ত থেকে Traversal করতে;
* Character Swap করতে;
* Temporary Variable ব্যবহার করতে;
* In-Place String Reverse করতে;
* New Result Array দিয়ে Reverse করতে;
* Reverse Printing এবং Actual Reverse-এর difference বুঝতে;
* `left < right` কেন ব্যবহার হয় বুঝতে;
* `left <= right` কখন প্রয়োজন হতে পারে বুঝতে;
* Odd এবং Even Length String handle করতে;
* Middle Character-এর behaviour বুঝতে;
* Off-by-One Error avoid করতে;
* `length - 1` কেন Last Valid Index বুঝতে;
* Reverse Mapping Formula বুঝতে;
* Opposite Index বের করতে;
* Two-Pointer Dry Run করতে;
* Compare-based Two Pointer বুঝতে;
* Swap-based Two Pointer বুঝতে;
* Move Direction চিনতে;
* Palindrome Pattern-এর foundation তৈরি করতে।

---

# 📖 Chapter Map

```text
Day 3 — Chapter 8
│
├── Part 1  — Reverse Mental Model
├── Part 2  — Length & Last Index
├── Part 3  — Three Types of Reverse
├── Part 4  — Opposite Index Mapping
├── Part 5  — Two-Pointer Introduction
├── Part 6  — Left & Right Pointer
├── Part 7  — Swap Pattern
├── Part 8  — In-Place Reverse
├── Part 9  — New Result Array Reverse
├── Part 10 — Reverse Printing
├── Part 11 — Pointer Movement
├── Part 12 — Loop Stopping Condition
├── Part 13 — Odd vs Even Length
├── Part 14 — Compare vs Swap Two-Pointer
├── Part 15 — Common Bugs & Edge Cases
├── Part 16 — Guided Problem Solving
├── Part 17 — Exercises
└── Part 18 — Assignment & Reflection
```

---

# 🧠 Chapter 8 Master Mental Model

ধরো:

```text
String:
CODE
```

Indices:

```text
Index:   0   1   2   3
         C   O   D   E
```

আমরা Reverse করতে চাই:

```text
E   D   O   C
```

Two-Pointer setup:

```text
left = 0
right = length - 1
```

অর্থাৎ:

```text
left = 0
right = 3
```

Visual:

```text
C   O   D   E
↑           ↑
L           R
```

Swap:

```text
E   O   D   C
```

Move:

```text
left++
right--
```

এখন:

```text
E   O   D   C
    ↑   ↑
    L   R
```

Swap:

```text
E   D   O   C
```

Move:

```text
left = 2
right = 1
```

এখন:

```text
left > right
```

Stop।

Final:

```text
EDOC
```

Core Pattern:

```text
Initialize Left
+
Initialize Right
↓
Process Pair
↓
Move Left Forward
↓
Move Right Backward
↓
Repeat Until Meet/Cross
```

Short Form:

```text
L →       ← R
```

---

# Part 1 — Reverse Mental Model

# Lesson 1 — Reverse মানে কী?

Reverse মানে:

> Sequence-এর Element Order উল্টো করা।

Input:

```text
hello
```

Output:

```text
olleh
```

Input:

```text
abcde
```

Output:

```text
edcba
```

Input:

```text
12345
```

Output:

```text
54321
```

Important:

```text
Reverse
≠
Sort
```

Example:

```text
Input:
cab
```

Reverse:

```text
bac
```

Sorted:

```text
abc
```

দুইটি completely different operation।

---

# Lesson 2 — Reverse-এ Position Relationship

Input:

```text
ABCDE
```

Indices:

```text
0 1 2 3 4
A B C D E
```

Reverse:

```text
E D C B A
```

Relationship:

| Original Index | Character | Reverse Position |
| -------------: | --------- | ---------------: |
|              0 | A         |                4 |
|              1 | B         |                3 |
|              2 | C         |                2 |
|              3 | D         |                1 |
|              4 | E         |                0 |

Observe:

```text
0 ↔ 4
1 ↔ 3
2 ↔ 2
```

এখানে pair তৈরি হচ্ছে:

```text
First ↔ Last
Second ↔ Second Last
Third ↔ Third Last
```

এই Pair Relationship-ই Two-Pointer Pattern-এর foundation।

---

# Lesson 3 — Reverse Problem দেখলে প্রথম প্রশ্ন

Problem বলল:

```text
Reverse the string.
```

সঙ্গে সঙ্গে Code লেখা শুরু করবে না।

প্রথমে জিজ্ঞেস করবে:

```text
Do I only need to print in reverse?
```

অথবা:

```text
Do I need to modify the original string?
```

অথবা:

```text
Do I need to build a new reversed string?
```

কারণ এই তিনটি আলাদা Strategy।

```text
Reverse Problem
│
├── Only Print?
│      ↓
│   Backward Traversal
│
├── Modify Original?
│      ↓
│   Two Pointer + Swap
│
└── Need New Reversed String?
       ↓
    Opposite Index Mapping
```

---

# Part 2 — Length & Last Index

# Lesson 4 — Length এবং Index এক না

ধরো:

```text
hello
```

Length:

```text
5
```

কিন্তু Valid Indices:

```text
0 1 2 3 4
```

অর্থাৎ:

```text
Last Valid Index = Length - 1
```

Formula:

```text
right = length - 1
```

যদি:

```text
length = 5
```

তাহলে:

```text
right = 4
```

---

# Lesson 5 — Memory View

String:

```text
hello
```

Memory:

```text
Index:   0   1   2   3   4   5
Value:   h   e   l   l   o  \0
```

এখানে:

```text
String Length = 5
```

Last Character Index:

```text
4
```

Null Terminator Index:

```text
5
```

তাই Reverse করার সময়:

```text
right = length - 1
```

হবে।

এটা না:

```text
right = length
```

কারণ `str[length]` হলো:

```text
'\0'
```

---

# Lesson 6 — Length Manually বের করা

```c
int length = 0;

while (str[length] != '\0')
{
    length++;
}
```

Input:

```text
hello
```

Dry Run:

```text
str[0] = h → length = 1
str[1] = e → length = 2
str[2] = l → length = 3
str[3] = l → length = 4
str[4] = o → length = 5
str[5] = \0 → stop
```

Final:

```text
length = 5
```

Then:

```c
int right = length - 1;
```

---

# Lesson 7 — `strlen()` Version

C-এর `<string.h>` library ব্যবহার করলে:

```c
#include <string.h>
```

তারপর:

```c
int length = strlen(str);
```

Example:

```c
char str[] = "hello";

int length = strlen(str);
```

Result:

```text
5
```

Contest-এ `strlen()` ব্যবহার করা যায়।

তবে Mental Model বুঝতে manual length calculation-ও জানতে হবে।

---

# ⚠️ Important Performance Note

এই Code:

```c
for (int i = 0; i < strlen(str); i++)
{
    // work
}
```

প্রতিটি Loop Condition check-এর সময় `strlen()` আবার call হতে পারে।

Beginner stage-এ better habit:

```c
int length = strlen(str);

for (int i = 0; i < length; i++)
{
    // work
}
```

Mental Model:

```text
Calculate once
↓
Store
↓
Reuse
```

---

# Part 3 — Three Types of Reverse

# Lesson 8 — Reverse Strategy 1: Print Backward

Input:

```text
hello
```

Need only:

```text
olleh
```

print করতে।

Original String modify করতে হবে না।

Pattern:

```text
Start from Last Index
↓
Move Backward
↓
Print Character
```

Code:

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

এটি:

```text
Backward Traversal
```

এটি Two-Pointer নয়।

কারণ এখানে একটিই Index:

```text
i
```

---

# Lesson 9 — Reverse Strategy 2: New Result Array

Input:

```text
hello
```

Original:

```text
hello
```

New Result:

```text
olleh
```

Need:

```text
Original Index
↓
Opposite Result Index
```

অথবা:

```text
Read Backward
↓
Write Forward
```

Example:

```text
Input:
h e l l o

Read:
o l l e h

Write:
0 1 2 3 4
```

---

# Lesson 10 — Reverse Strategy 3: In-Place

Input Array:

```text
h e l l o
```

Same Array modify:

```text
o l l e h
```

Need:

```text
Left Pointer
+
Right Pointer
+
Swap
```

Pattern:

```text
Two Pointer
+
Swap
+
Move Toward Center
```

---

# Lesson 11 — Three Strategies Comparison

| Goal                    | Strategy           | Extra Array? | Original Modified? |
| ----------------------- | ------------------ | -----------: | -----------------: |
| শুধু reverse print        | Backward Traversal |           No |                 No |
| New reversed string     | Result Array       |          Yes |                 No |
| Original string reverse | Two Pointer + Swap |           No |                Yes |

Mental Decision:

```text
Need only output?
↓
Backward Traversal
```

```text
Need separate reversed copy?
↓
Result Array
```

```text
Need modify original?
↓
Two Pointer + Swap
```

---

# Part 4 — Opposite Index Mapping

# Lesson 12 — Opposite Index কী?

ধরো:

```text
length = 5
```

Indices:

```text
0 1 2 3 4
```

Opposite relationships:

```text
0 ↔ 4
1 ↔ 3
2 ↔ 2
```

Formula:

```text
Opposite Index = length - 1 - current_index
```

অর্থাৎ:

```c
opposite = length - 1 - i;
```

---

# Lesson 13 — Formula Dry Run

ধরো:

```text
length = 5
```

For:

```text
i = 0
```

Then:

```text
5 - 1 - 0
= 4
```

So:

```text
0 ↔ 4
```

For:

```text
i = 1
```

Then:

```text
5 - 1 - 1
= 3
```

So:

```text
1 ↔ 3
```

For:

```text
i = 2
```

Then:

```text
5 - 1 - 2
= 2
```

So:

```text
2 ↔ 2
```

---

# Lesson 14 — Reverse Mapping Pattern

Generic:

```c
result[i] = str[length - 1 - i];
```

Example:

```text
str = hello
length = 5
```

Then:

```text
result[0] = str[4] = o
result[1] = str[3] = l
result[2] = str[2] = l
result[3] = str[1] = e
result[4] = str[0] = h
```

Final:

```text
olleh
```

---

# Lesson 15 — New Reversed String Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char result[100];

    scanf("%99s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        result[i] = str[length - 1 - i];
    }

    result[length] = '\0';

    printf("%s\n", result);

    return 0;
}
```

Pattern:

```text
Length
+
Opposite Index Mapping
+
Result Construction
+
Null Termination
```

---

# Part 5 — Two-Pointer Introduction

# Lesson 16 — Two Pointer কী?

Two Pointer মানে:

> একই Data Structure-এর দুইটি Position track করে Problem Solve করা।

এই Chapter-এ আমাদের দুইটি position:

```text
left
```

এবং:

```text
right
```

Initialization:

```c
int left = 0;
int right = length - 1;
```

Visual:

```text
A B C D E
↑       ↑
L       R
```

তারপর:

```text
Process Pair
↓
left++
right--
```

---

# Lesson 17 — এখানে Pointer মানে কি C Pointer?

খুব গুরুত্বপূর্ণ।

Two-Pointer Algorithm বললে সবসময় C-এর:

```c
char *ptr;
```

এই pointer বোঝানো হয় না।

CP-তে `pointer` শব্দটি অনেক সময় Position বা Index বোঝায়।

Example:

```c
int left = 0;
int right = length - 1;
```

এগুলো:

```text
Integer Indices
```

কিন্তু Algorithmic Language-এ আমরা বলি:

```text
Left Pointer
Right Pointer
```

অর্থাৎ:

```text
Pointer = Position Tracker
```

এই Context-এ।

---

# Lesson 18 — Single Pointer vs Two Pointer

## Single Index Traversal

```text
0 → 1 → 2 → 3 → 4
```

Code:

```c
for (int i = 0; i < length; i++)
```

---

## Two Pointer

```text
0 →       ← 4
```

তারপর:

```text
  1 →   ← 3
```

তারপর:

```text
      2
```

Mental Model:

```text
Process Outside Pair
↓
Move Inward
↓
Process Next Pair
↓
Move Inward
↓
Meet/Cross
```

---

# Part 6 — Left & Right Pointer

# Lesson 19 — Left Pointer

Initialization:

```c
int left = 0;
```

Meaning:

```text
Start from first valid character
```

Movement:

```c
left++;
```

Meaning:

```text
Move one step toward right
```

Visual:

```text
A B C D E
↑
L
```

Then:

```text
A B C D E
  ↑
  L
```

---

# Lesson 20 — Right Pointer

Initialization:

```c
int right = length - 1;
```

Meaning:

```text
Start from last valid character
```

Movement:

```c
right--;
```

Meaning:

```text
Move one step toward left
```

Visual:

```text
A B C D E
        ↑
        R
```

Then:

```text
A B C D E
      ↑
      R
```

---

# Lesson 21 — Movement Together

Initial:

```text
A B C D E
↑       ↑
L       R
```

After:

```c
left++;
right--;
```

State:

```text
A B C D E
  ↑   ↑
  L   R
```

Again:

```c
left++;
right--;
```

State:

```text
A B C D E
    ↑
   L,R
```

এটাকে বলা যায়:

```text
Move Toward Center
```

---

# Lesson 22 — Pointer State Table

String:

```text
abcdef
```

Length:

```text
6
```

Initial:

```text
left = 0
right = 5
```

| Step | Left | Right | Pair |
| ---: | ---: | ----: | ---- |
|    1 |    0 |     5 | a, f |
|    2 |    1 |     4 | b, e |
|    3 |    2 |     3 | c, d |

তারপর:

```text
left = 3
right = 2
```

Pointers cross।

Stop।

---

# Part 7 — Swap Pattern

# Lesson 23 — Swap কী?

Swap মানে:

> দুইটি Variable বা Position-এর Value exchange করা।

Before:

```text
a = 10
b = 20
```

After Swap:

```text
a = 20
b = 10
```

String Reverse-এ:

```text
str[left]
```

এবং:

```text
str[right]
```

swap করি।

---

# Lesson 24 — Temporary Variable কেন দরকার?

ধরো:

```text
left character = A
right character = E
```

Wrong:

```c
str[left] = str[right];
str[right] = str[left];
```

Step 1:

```text
A ← E
```

এখন:

```text
E ... E
```

Original `A` হারিয়ে গেছে।

Step 2:

```text
right = left
```

কিন্তু left-এ এখন:

```text
E
```

তাই Result:

```text
E ... E
```

Wrong।

---

# Lesson 25 — Correct Swap

```c
char temp = str[left];

str[left] = str[right];

str[right] = temp;
```

Mental Model:

```text
Save Left
↓
Copy Right to Left
↓
Copy Saved Left to Right
```

Example:

```text
A ... E
```

Step 1:

```text
temp = A
```

Step 2:

```text
E ... E
```

Step 3:

```text
E ... A
```

Correct।

---

# Lesson 26 — Swap Pattern Template

```c
temp = a;
a = b;
b = temp;
```

String Position-এর জন্য:

```c
char temp = str[left];
str[left] = str[right];
str[right] = temp;
```

Array-এর জন্য:

```c
int temp = arr[left];
arr[left] = arr[right];
arr[right] = temp;
```

Core Pattern একই।

---

# Part 8 — In-Place Reverse

# Lesson 27 — Complete Algorithm

Input:

```text
hello
```

Step 1:

```text
Find Length
```

Step 2:

```text
left = 0
right = length - 1
```

Step 3:

```text
While left < right
```

Step 4:

```text
Swap str[left] and str[right]
```

Step 5:

```text
left++
right--
```

Step 6:

```text
Repeat
```

---

# Lesson 28 — Complete Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int length = strlen(str);

    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("%s\n", str);

    return 0;
}
```

---

# Lesson 29 — Code Breakdown

## Length

```c
int length = strlen(str);
```

Need:

```text
Last Valid Index
```

---

## Pointer Initialization

```c
int left = 0;
int right = length - 1;
```

Meaning:

```text
First Character
+
Last Character
```

---

## Loop Condition

```c
while (left < right)
```

Meaning:

```text
Continue while there is an unprocessed pair
```

---

## Swap

```c
char temp = str[left];
str[left] = str[right];
str[right] = temp;
```

Meaning:

```text
Exchange outer pair
```

---

## Movement

```c
left++;
right--;
```

Meaning:

```text
Move both toward center
```

---

# Lesson 30 — Full Dry Run: `hello`

Initial:

```text
h e l l o
↑       ↑
L       R
```

State:

```text
left = 0
right = 4
```

Swap:

```text
o e l l h
```

Move:

```text
left = 1
right = 3
```

Visual:

```text
o e l l h
  ↑   ↑
  L   R
```

Swap:

```text
o l l e h
```

Move:

```text
left = 2
right = 2
```

Condition:

```text
left < right
```

becomes:

```text
2 < 2
```

False।

Stop।

Final:

```text
olleh
```

---

# Part 9 — New Result Array Reverse

# Lesson 31 — Read Backward, Write Forward

Input:

```text
hello
```

Read Position:

```text
4 → 3 → 2 → 1 → 0
```

Write Position:

```text
0 → 1 → 2 → 3 → 4
```

এখানে দুইটি Index ব্যবহার করা যায়:

```text
i = input read position
j = result write position
```

Pattern:

```text
Read Backward
+
Write Forward
```

---

# Lesson 32 — Two-Index Result Construction

```c
int j = 0;

for (int i = length - 1; i >= 0; i--)
{
    result[j] = str[i];
    j++;
}

result[j] = '\0';
```

Input:

```text
code
```

Dry Run:

|  `i` | `str[i]` | `j` Before | Action        | `j` After |
| ---: | -------- | ---------: | ------------- | --------: |
|    3 | e        |          0 | result[0] = e |         1 |
|    2 | d        |          1 | result[1] = d |         2 |
|    1 | o        |          2 | result[2] = o |         3 |
|    0 | c        |          3 | result[3] = c |         4 |

Then:

```c
result[4] = '\0';
```

Final:

```text
edoc
```

---

# Lesson 33 — Mapping vs Two-Index Construction

দুইভাবেই new reversed string বানানো যায়।

## Method 1 — Formula

```c
result[i] = str[length - 1 - i];
```

## Method 2 — Two Indices

```c
int j = 0;

for (int i = length - 1; i >= 0; i--)
{
    result[j] = str[i];
    j++;
}
```

দুইটিই valid।

Beginner হিসেবে দুইটিই বুঝবে।

---

# Part 10 — Reverse Printing

# Lesson 34 — শুধু Print করলে Array কেন দরকার নেই?

Problem:

> Print the string in reverse order.

Input:

```text
hello
```

Need:

```text
olleh
```

যদি Original String পরে দরকার না হয় বা শুধু output চায়, তাহলে:

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

যথেষ্ট।

এখানে:

```text
No Swap
No Result Array
No Two Pointer
```

শুধু:

```text
Backward Traversal
```

---

# Lesson 35 — Reverse Print ≠ Reverse String

এই Code:

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

Output:

```text
olleh
```

কিন্তু memory-তে:

```text
str = hello
```

থাকবে।

অন্যদিকে In-Place Reverse-এর পরে:

```text
str = olleh
```

হয়ে যাবে।

এই difference খুব গুরুত্বপূর্ণ।

---

# Part 11 — Pointer Movement

# Lesson 36 — Two Pointer-এর চারটি Basic Movement Style

Two Pointer মানেই সবসময়:

```text
left++
right--
```

না।

Future-এ বিভিন্ন Movement থাকবে।

### Style 1 — Both Move Inward

```text
L →       ← R
```

Used in:

```text
Reverse
Palindrome
Symmetric Comparison
```

---

### Style 2 — Both Move Forward

```text
L →
R →
```

Used in future patterns like:

```text
Sliding Window
Same Direction Two Pointer
```

---

### Style 3 — Conditional Movement

```text
If condition A:
    left++

Else:
    right--
```

Used in sorted array problems।

---

### Style 4 — One Fixed, One Moving

```text
L fixed
R →
```

Used in some searching and partition-style problems।

এই Chapter-এ focus:

```text
Opposite Direction Two Pointer
```

---

# Lesson 37 — Reverse Movement Rule

Reverse-এর জন্য:

```text
Process Current Pair
↓
left++
↓
right--
```

Why?

কারণ:

```text
Current outer pair processed
↓
Move to next inner pair
```

Visual:

```text
A B C D E F
↑         ↑
L         R
```

After process:

```text
A B C D E F
  ↑     ↑
  L     R
```

Again:

```text
A B C D E F
    ↑ ↑
    L R
```

---

# Lesson 38 — Movement ভুল হলে কী হয়?

Suppose:

```c
left++;
```

কিন্তু:

```c
right--;
```

ভুলে গেলে।

Then:

```text
A B C D E
↑       ↑
L       R
```

Next:

```text
A B C D E
  ↑     ↑
  L     R
```

Next:

```text
A B C D E
    ↑   ↑
    L   R
```

Right একই জায়গায় থাকবে।

Algorithm intended pair processing করবে না।

তাই Two Pointer Problem-এ সবসময় জিজ্ঞেস করবে:

```text
Which pointer moves?
When does it move?
Which direction?
```

---

# Part 12 — Loop Stopping Condition

# Lesson 39 — কেন `left < right`?

Reverse:

```c
while (left < right)
```

কারণ:

> যতক্ষণ দুইটি আলাদা unprocessed position আছে, ততক্ষণ Swap করতে হবে।

যখন:

```text
left == right
```

তখন একই Character-এর সঙ্গে নিজেকেই swap করার প্রয়োজন নেই।

যখন:

```text
left > right
```

তখন pair processing complete।

---

# Lesson 40 — Odd Length Example

String:

```text
abcde
```

Indices:

```text
0 1 2 3 4
```

Pointer states:

```text
L=0, R=4
```

Then:

```text
L=1, R=3
```

Then:

```text
L=2, R=2
```

এখানে Middle Character:

```text
c
```

নিজের জায়গাতেই থাকবে।

Reverse:

```text
edcba
```

Middle Character change করার দরকার নেই।

---

# Lesson 41 — Even Length Example

String:

```text
abcd
```

Indices:

```text
0 1 2 3
```

States:

```text
L=0, R=3
```

Then:

```text
L=1, R=2
```

Then:

```text
L=2, R=1
```

Pointers cross।

Stop।

---

# Lesson 42 — `left <= right` কি সবসময় ভুল?

না।

কিন্তু Reverse Swap-এর জন্য সাধারণত:

```c
left < right
```

cleaner।

যদি:

```c
left <= right
```

ব্যবহার করো, Odd Length String-এ Middle Character নিজের সঙ্গে swap হবে।

Example:

```text
c ↔ c
```

Result ভুল হবে না, কিন্তু unnecessary operation।

তাই Reverse-এর জন্য:

```text
left < right
```

preferred।

---

# Lesson 43 — Compare Problem-এ `<=` কখন useful হতে পারে?

Problem-এর logic-এর উপর depend করে।

কিছু processing problem-এ middle element-ও process করতে হতে পারে।

তখন:

```text
left <= right
```

প্রয়োজন হতে পারে।

Rule:

> Loop Condition মুখস্থ করবে না। কোন Position process করা দরকার তা বুঝে condition নির্বাচন করবে।

এই Chapter-এর Reverse Pattern:

```text
while (left < right)
```

---

# Part 13 — Odd vs Even Length

# Lesson 44 — Odd Length

Example:

```text
RADAR
```

Length:

```text
5
```

Pairs:

```text
0 ↔ 4
1 ↔ 3
```

Middle:

```text
2
```

Visual:

```text
R A D A R
↑       ↑
```

Then:

```text
R A D A R
  ↑   ↑
```

Then:

```text
R A D A R
    ↑
```

Middle is unpaired।

---

# Lesson 45 — Even Length

Example:

```text
ABCD
```

Length:

```text
4
```

Pairs:

```text
0 ↔ 3
1 ↔ 2
```

No middle character।

Visual:

```text
A B C D
↑     ↑
```

Then:

```text
A B C D
  ↑ ↑
```

Then cross।

---

# Lesson 46 — Pair Count

For a String of length `n`, reverse করতে Swap লাগে:

```text
n / 2
```

integer division অনুযায়ী।

Examples:

| Length | Swaps |
| -----: | ----: |
|      1 |     0 |
|      2 |     1 |
|      3 |     1 |
|      4 |     2 |
|      5 |     2 |
|      6 |     3 |

কারণ প্রতিটি Swap দুইটি Position ঠিক করে।

Mental Model:

```text
1 Swap
↓
2 Positions Processed
```

---

# Part 14 — Compare vs Swap Two-Pointer

# Lesson 47 — Two Pointer শুধু Swap-এর জন্য না

Two Pointer-এর দুইটি বড় use এখন তোমার জানা দরকার।

## Type 1 — Swap-Based

```text
Compare না করে
Position-এর values exchange করা
```

Example:

```text
Reverse String
```

Pattern:

```text
L → Swap ← R
```

---

## Type 2 — Compare-Based

```text
Left Value
vs
Right Value
```

Example:

```text
Is the string symmetric?
```

Pattern:

```text
str[left] == str[right] ?
```

তারপর:

```text
left++
right--
```

এটাই পরের Chapter-এর:

```text
Palindrome Pattern
```

foundation।

---

# Lesson 48 — Swap-Based Flow

```text
Initialize L and R
↓
L < R?
↓
Swap Values
↓
L++
R--
↓
Repeat
```

Use:

```text
Reverse
```

---

# Lesson 49 — Compare-Based Flow

```text
Initialize L and R
↓
L < R?
↓
Compare Values
↓
Mismatch?
├── Yes → Decision
└── No  → Continue
↓
L++
R--
```

Use:

```text
Palindrome
Symmetric Pair Check
```

আমরা Chapter 9-এ এটি বিস্তারিত শিখব।

---

# Lesson 50 — Pair Processing Mental Model

Two Pointer Problem দেখলে জিজ্ঞেস করবে:

```text
What do I do with the current pair?
```

Possible answers:

```text
Swap
Compare
Calculate
Skip
Move conditionally
```

এই Chapter-এ:

```text
Reverse
↓
Swap
```

Next Chapter:

```text
Palindrome
↓
Compare
```

---

# Part 15 — Common Bugs & Edge Cases

# 🐞 Bug 1 — `right = length`

Wrong:

```c
int right = length;
```

Problem:

```text
str[length] = '\0'
```

Correct:

```c
int right = length - 1;
```

---

# 🐞 Bug 2 — Null Terminator Swap করা

Input:

```text
hello\0
```

যদি:

```text
right = length
```

তাহলে first swap:

```text
h ↔ \0
```

String corrupt হয়ে যাবে।

---

# 🐞 Bug 3 — Temporary Variable ছাড়া Swap

Wrong:

```c
str[left] = str[right];
str[right] = str[left];
```

কারণ Original Left Value হারিয়ে যায়।

Correct:

```c
char temp = str[left];
str[left] = str[right];
str[right] = temp;
```

---

# 🐞 Bug 4 — Pointer Move ভুলে যাওয়া

Wrong:

```c
while (left < right)
{
    // swap
}
```

কিন্তু:

```c
left++;
right--;
```

নেই।

Result:

```text
Infinite Loop
```

কারণ condition change হচ্ছে না।

---

# 🐞 Bug 5 — শুধু Left Move করা

```c
left++;
```

কিন্তু:

```c
right--;
```

নেই।

এতে expected symmetric pair traversal হবে না।

---

# 🐞 Bug 6 — Backward Loop-এ Wrong Start

Wrong:

```c
for (int i = length; i >= 0; i--)
```

প্রথমে access করবে:

```text
str[length]
```

যেটা:

```text
'\0'
```

Correct:

```c
for (int i = length - 1; i >= 0; i--)
```

---

# 🐞 Bug 7 — New Result String-এ `'\0'` না দেওয়া

Wrong:

```c
for (...)
{
    result[j++] = str[i];
}

printf("%s", result);
```

Need:

```c
result[j] = '\0';
```

---

# 🐞 Bug 8 — Reverse Print করে ভাবা String Reverse হয়েছে

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

এটি শুধু reversed order-এ print করে।

Original String unchanged।

---

# 🐞 Bug 9 — `i > 0` ব্যবহার

Backward Loop:

```c
for (int i = length - 1; i > 0; i--)
```

এতে:

```text
Index 0
```

process হবে না।

Correct:

```c
i >= 0
```

---

# 🐞 Bug 10 — Unsigned Index Trap

এটি এখন তোমার Contest-এর জন্য advanced warning।

যদি unsigned type ব্যবহার করো:

```c
size_t i;
```

তারপর:

```c
for (i = length - 1; i >= 0; i--)
```

problem হতে পারে, কারণ unsigned value negative হয় না।

Beginner Contest Code-এ backward traversal-এর জন্য simple `int` length/index ব্যবহার করা তোমার বর্তমান stage-এ সহজ।

---

# 🐞 Bug 11 — Empty String-এ `length - 1`

যদি:

```text
length = 0
```

তাহলে:

```text
right = -1
```

`int` হলে:

```text
left = 0
right = -1
```

Condition:

```text
0 < -1
```

False।

Loop চলবে না।

তবে Input Method এবং Problem Constraint অবশ্যই বুঝতে হবে।

---

# 🐞 Bug 12 — Space-containing String

Input:

```text
hello world
```

এই Input:

```c
scanf("%s", str);
```

দিয়ে নিলে শুধু:

```text
hello
```

পাবে।

Full Line Reverse করতে হলে `fgets()` প্রয়োজন।

---

# 🐞 Bug 13 — Length-এর মধ্যে Newline থাকা

যদি:

```c
fgets(str, sizeof(str), stdin);
```

ব্যবহার করো, input newline-সহ store হতে পারে।

Example:

```text
hello\n\0
```

তখন reverse করার আগে newline remove করা দরকার হতে পারে।

এই বিষয়টি Chapter 2-এর Input Handling-এর সঙ্গে related।

---

# 🐞 Bug 14 — Wrong Opposite Index Formula

Wrong:

```text
length - i
```

Correct:

```text
length - 1 - i
```

কারণ Last Valid Index:

```text
length - 1
```

---

# Part 16 — Guided Problem Solving

# Problem 1 — Print String in Reverse

## Problem

Input:

```text
security
```

Output:

```text
ytiruces
```

---

## Step 1 — Need Modified String?

```text
No
```

শুধু print করতে হবে।

---

## Step 2 — Best Strategy

```text
Backward Traversal
```

---

## Step 3 — Start Position

```text
length - 1
```

---

## Step 4 — End Position

```text
0
```

---

## Pattern

```text
Length
+
Backward Traversal
+
Output
```

Code Logic:

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

---

# Problem 2 — Reverse Original String

Input:

```text
code
```

Need:

```text
edoc
```

Original Array modify করতে হবে।

---

## Problem Type

```text
In-Place Transformation
```

---

## Pattern

```text
Length
+
Left Pointer
+
Right Pointer
+
Swap
+
Move Toward Center
```

---

## State

```text
left
right
temp
```

No need:

```text
Counter
Flag
Frequency Array
```

---

# Problem 3 — Create New Reversed Copy

Input:

```text
audit
```

Need:

```text
Original:
audit

Result:
tidua
```

Original unchanged থাকতে হবে।

Strategy:

```text
New Result Array
```

Possible Pattern:

```text
Backward Read
+
Forward Write
+
Null Termination
```

অথবা:

```text
Opposite Index Mapping
```

---

# Problem 4 — Reverse Only First and Last Pair

Input:

```text
abcde
```

Swap only:

```text
Index 0
Index 4
```

Result:

```text
ebcda
```

Need:

```text
left = 0
right = length - 1
```

একবার Swap।

No loop required।

Lesson:

> Pattern-এর অংশ ব্যবহার করা যায়। প্রতিবার complete Two-Pointer Loop লাগবে না।

---

# Problem 5 — Reverse a Character Array Manually

Input:

```text
abcdef
```

Initial:

```text
a b c d e f
↑         ↑
L         R
```

Step 1:

```text
f b c d e a
```

Step 2:

```text
f e c d b a
```

Step 3:

```text
f e d c b a
```

Final:

```text
fedcba
```

Pointer states:

```text
(0,5)
(1,4)
(2,3)
```

---

# Problem 6 — Decide: Swap or Compare?

### A

```text
Reverse the string.
```

Need:

```text
Swap
```

### B

```text
Check whether first and last characters are equal.
```

Need:

```text
Compare
```

### C

```text
Check whether all opposite character pairs are equal.
```

Need:

```text
Compare-Based Two Pointer
```

এটাই Palindrome-এর foundation।

---

# Part 17 — Exercises

# Exercise 1 — Reverse Output

Input:

```text
competitive
```

নিজে Output বের করো।

তারপর লিখবে:

```text
Length:
...

Last Valid Index:
...

Start Index:
...

End Index:
...

Traversal Direction:
...
```

Code লিখবে শুধু Backward Traversal দিয়ে।

---

# Exercise 2 — Manual Opposite Index

String Length:

```text
7
```

Indices:

```text
0 1 2 3 4 5 6
```

Table পূরণ করো:

| Current Index | Opposite Index |
| ------------: | -------------: |
|             0 |              ? |
|             1 |              ? |
|             2 |              ? |
|             3 |              ? |
|             4 |              ? |
|             5 |              ? |
|             6 |              ? |

Formula নিজে লিখবে:

```text
Opposite Index = ...
```

---

# Exercise 3 — Reverse with Result Array

Input:

```text
programmer
```

New Array-তে reverse করবে।

Required:

```text
Original must remain unchanged.
```

লিখবে:

```text
Strategy:
...

Read Direction:
...

Write Direction:
...

Null Terminator Position:
...
```

---

# Exercise 4 — In-Place Reverse

Input:

```text
bootcamp
```

নিজে Two-Pointer Code লিখবে।

Before Code:

```text
length =
...

left =
...

right =
...
```

তারপর Pointer Pair sequence লিখবে:

```text
(..., ...)
(..., ...)
...
```

---

# Exercise 5 — Swap Dry Run

Initial:

```text
A B C D E
```

Table পূরণ করো:

| Step | Left | Right | Pair Before Swap | String After Swap |
| ---: | ---: | ----: | ---------------- | ----------------- |
|    1 |      |       |                  |                   |
|    2 |      |       |                  |                   |

শেষে Middle Character কী হয় explain করবে।

---

# Exercise 6 — Even Length Dry Run

Input:

```text
HACKER
```

Length:

```text
6
```

Complete:

```text
Initial:
left = ?
right = ?

Pair 1:
...

Pair 2:
...

Pair 3:
...

Final:
...
```

---

# Exercise 7 — Odd Length Dry Run

Input:

```text
ARRAY
```

Complete:

```text
Length:
...

Last Index:
...

Pair 1:
...

Pair 2:
...

Middle Index:
...

Final Reverse:
...
```

---

# Exercise 8 — Strategy Selection

Options:

```text
Backward Traversal
Result Array
Two Pointer + Swap
Compare-Based Two Pointer
```

### A

```text
Print reverse without changing original.
```

Answer:

```text
?
```

### B

```text
Store a reversed copy separately.
```

Answer:

```text
?
```

### C

```text
Reverse original string without extra array.
```

Answer:

```text
?
```

### D

```text
Check opposite character pairs.
```

Answer:

```text
?
```

---

# Exercise 9 — Find the Bug

```c
int length = strlen(str);

int left = 0;
int right = length;

while (left < right)
{
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    left++;
    right--;
}
```

Explain:

```text
Bug:
...

Why:
...

Correct Line:
...
```

---

# Exercise 10 — Find the Infinite Loop

```c
int left = 0;
int right = length - 1;

while (left < right)
{
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
}
```

Answer:

```text
Missing:
...

Why loop never ends:
...
```

---

# Exercise 11 — Wrong Swap Analysis

Analyze:

```c
str[left] = str[right];
str[right] = str[left];
```

Input Pair:

```text
A E
```

Complete:

```text
Before:
Left =
Right =

After first line:
Left =
Right =

After second line:
Left =
Right =

What value was lost?
...
```

---

# Exercise 12 — Reverse Print vs Reverse Modify

Explain:

```text
Reverse Print:
...

Original String after operation:
...

In-Place Reverse:
...

Original String after operation:
...
```

Example use করবে:

```text
abc
```

---

# Exercise 13 — Pair Count

Table পূরণ করো:

| Length | Number of Swaps |
| -----: | --------------: |
|      1 |               ? |
|      2 |               ? |
|      3 |               ? |
|      4 |               ? |
|      5 |               ? |
|      6 |               ? |
|      7 |               ? |
|      8 |               ? |

তারপর relation লিখবে:

```text
Swaps = ...
```

---

# Exercise 14 — Loop Condition Analysis

Explain difference:

```c
while (left < right)
```

vs

```c
while (left <= right)
```

নিজের ভাষায় লিখবে:

```text
For reverse, I prefer:
...

Because:
...
```

---

# Exercise 15 — Pattern Recognition

Problem:

```text
Compare first with last,
second with second-last,
and continue toward center.
```

Complete:

```text
Need:
...
+
...
+
...
```

Possible State:

```text
left =
...

right =
...
```

Movement:

```text
...
...
```

---

# Part 18 — Chapter Assignment

# 📝 Task 1 — Two-Pointer Dictionary

নিজের ভাষায় explain করবে:

```text
Reverse
Backward Traversal
Opposite Index
Two Pointer
Left Pointer
Right Pointer
Pointer Movement
Move Toward Center
Swap
Temporary Variable
In-Place Reverse
Result Array Reverse
Compare-Based Two Pointer
Swap-Based Two Pointer
Boundary
Crossing Condition
Middle Element
```

Format:

```text
Term:
Two Pointer

Meaning:
...

Mental Model:
...

Example:
...

Common Mistake:
...
```

---

# 📝 Task 2 — Reverse Programs

নিচের Files বানাবে:

```text
01_reverse_print.c
02_reverse_result_array.c
03_reverse_in_place.c
04_reverse_manual_length.c
```

প্রতিটি File-এর জন্য লিখবে:

```text
Problem Goal:
...

Original Modified?
...

Extra Array Needed?
...

Traversal Direction:
...

Main Pattern:
...
```

---

# 📝 Task 3 — Swap Practice

File:

```text
05_swap_practice.c
```

Program:

```text
Input two characters
↓
Print before swap
↓
Swap
↓
Print after swap
```

Example:

```text
Input:
A Z

Before:
A Z

After:
Z A
```

নিজে Code লিখবে।

---

# 📝 Task 4 — Reverse Dry Run

Input:

```text
SECURITY
```

Table পূরণ করবে:

| Step | Left | Right | Left Char | Right Char | String After Swap |
| ---: | ---: | ----: | --------- | ---------- | ----------------- |
|    1 |      |       |           |            |                   |
|    2 |      |       |           |            |                   |
|    3 |      |       |           |            |                   |
|    4 |      |       |           |            |                   |

তারপর লিখবে:

```text
Length:
...

Last Valid Index:
...

Total Swaps:
...

Final String:
...
```

---

# 📝 Task 5 — Odd Length Analysis

Input:

```text
LEVEL
```

Reverse Algorithm manually dry run করবে।

Answer:

```text
Length:
...

Initial Left:
...

Initial Right:
...

Processed Pairs:
...

Middle Index:
...

Middle Character:
...

Was middle character swapped?
...

Final Result:
...
```

---

# 📝 Task 6 — Even Length Analysis

Input:

```text
CODE
```

Complete:

```text
Length:
...

Initial:
L = ?
R = ?

First Pair:
...

Second Pair:
...

When pointers cross:
L = ?
R = ?

Final:
...
```

---

# 📝 Task 7 — Opposite Index Table

Input:

```text
BOOTCAMP
```

প্রথমে নিজে Length বের করবে।

তারপর:

| Index `i` | Character | Opposite Index | Opposite Character |
| --------: | --------- | -------------: | ------------------ |
|         0 |           |                |                    |
|         1 |           |                |                    |
|         2 |           |                |                    |
|         3 |           |                |                    |
|         4 |           |                |                    |
|         5 |           |                |                    |
|         6 |           |                |                    |
|         7 |           |                |                    |

Formula:

```text
Opposite Index =
...
```

---

# 📝 Task 8 — Bug Analysis

Analyze:

```c
int length = strlen(str);

for (int i = length; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

Answer:

```text
Bug:
...

What is str[length]?
...

Correct Start:
...

Correct Loop:
...
```

---

# 📝 Task 9 — Pattern Comparison Table

নিজে পূরণ করবে:

| Problem                | Main Pattern | Extra Array? | Original Modified? |
| ---------------------- | ------------ | -----------: | -----------------: |
| Print reverse          | ?            |            ? |                  ? |
| Store reversed copy    | ?            |            ? |                  ? |
| Reverse original       | ?            |            ? |                  ? |
| Compare opposite pairs | ?            |            ? |                  ? |

---

# 📝 Task 10 — Two-Pointer Control Questions

নিচের Questions-এর answer নিজের ভাষায় লিখবে:

```text
1. Where does left start?

2. Where does right start?

3. What is the current pair?

4. What operation happens on the pair?

5. When does left move?

6. Which direction does left move?

7. When does right move?

8. Which direction does right move?

9. What is the stopping condition?

10. What happens for odd length?

11. What happens for even length?

12. What happens when pointers cross?
```

---

# 📝 Task 11 — Code Without Looking

Notes বন্ধ করে তিনটি Program লিখবে:

```text
1. Print String in Reverse

2. Build New Reversed String

3. Reverse Original String In-Place
```

তারপর compare করবে।

লক্ষ্য Code মুখস্থ করা না।

লক্ষ্য:

```text
Problem Goal
↓
Choose Strategy
↓
Choose State
↓
Choose Movement
↓
Choose Stop Condition
↓
Implement
```

---

# 📝 Task 12 — Chapter Reflection

Copy-Paste Version:

````markdown
# 🧠 Day 3 — Chapter 8 Reflection

## 1. What Is Reverse?

...

---

## 2. Reverse Is Not Sorting

### Reverse

...

### Sorting

...

### Example

...

---

## 3. Length vs Last Valid Index

```text
Length:
...

Last Valid Index:
...
```

Formula:

```text
...
```

---

## 4. My Reverse Mental Model

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

## 5. Three Reverse Strategies

### A. Reverse Print

...

### B. Result Array Reverse

...

### C. In-Place Reverse

...

---

## 6. Two Pointer

### My Understanding

...

### Left Pointer

...

### Right Pointer

...

### Movement

```text
...
```

---

## 7. Algorithmic Pointer vs C Pointer

### My Understanding

...

---

## 8. Swap Pattern

### Why Temporary Variable Is Needed

...

### Pattern

```text
...
...
...
```

---

## 9. In-Place Reverse

### State Needed

...

### Loop Condition

...

### Movement

...

---

## 10. Opposite Index

Formula:

```text
...
```

Example:

```text
...
```

---

## 11. Odd Length

...

### What Happens to Middle Character?

...

---

## 12. Even Length

...

### How Pointers Stop

...

---

## 13. `left < right`

### Why Used

...

---

## 14. Compare-Based vs Swap-Based Two Pointer

### Compare-Based

...

### Swap-Based

...

---

## 15. Reverse Print vs Actual Reverse

...

---

## 16. Biggest Bug I Learned

...

---

## 17. Most Difficult Concept

...

---

## 18. My Two-Pointer Mental Model

```text
L →                 ← R
         ...
         ↓
         ...
         ↓
         ...
```

---

## 19. Confidence Score

```text
Reverse Mental Model:          ?/10
Length vs Last Index:          ?/10
Backward Traversal:            ?/10
Opposite Index Mapping:        ?/10
Two Pointer:                   ?/10
Left/Right Movement:           ?/10
Swap Pattern:                  ?/10
In-Place Reverse:              ?/10
Result Array Reverse:          ?/10
Odd/Even Length Handling:      ?/10
Loop Stopping Condition:       ?/10
Compare vs Swap Two Pointer:   ?/10
Pattern Recognition:           ?/10
```
````

---

# 🧪 Chapter 8 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Reverse এবং Sort-এর difference কী?

---

## Question 2

String Length `8` হলে Last Valid Index কত?

---

## Question 3

এই expression কী বোঝায়?

```c
length - 1 - i
```

---

## Question 4

শুধু reverse order-এ print করতে চাইলে Two Pointer দরকার?

---

## Question 5

Original String modify করে Reverse করতে কোন Pattern ব্যবহার করবে?

---

## Question 6

Two Pointer Algorithm-এ `left` কোথা থেকে শুরু হয়?

---

## Question 7

`right` কোথা থেকে শুরু হয়?

---

## Question 8

Reverse-এর সময় movement কী?

```text
left = ...
right = ...
```

---

## Question 9

Swap-এর জন্য Temporary Variable কেন দরকার?

---

## Question 10

এই Code কেন ভুল?

```c
str[left] = str[right];
str[right] = str[left];
```

---

## Question 11

Reverse Loop-এর common condition কী?

```c
while ( ... )
```

---

## Question 12

Odd Length String-এর Middle Character-এর কী হয়?

---

## Question 13

Even Length String-এ Pointers কীভাবে stop করে?

---

## Question 14

Input:

```text
abcde
```

Initial:

```text
left = ?
right = ?
```

---

## Question 15

Input:

```text
abcdef
```

Pointer Pair sequence লিখো।

---

## Question 16

Reverse Print এবং In-Place Reverse-এর main difference কী?

---

## Question 17

New Result Array দিয়ে Reverse করলে শেষে কী দিতে হবে?

---

## Question 18

Two Pointer মানে কি অবশ্যই C-এর pointer variable ব্যবহার করতে হবে?

---

## Question 19

Swap-Based Two Pointer-এর example কী?

---

## Question 20

Compare-Based Two Pointer-এর একটি future use কী?

---

# 🐞 Chapter 8 Mistake Checklist

```text
[ ] Reverse এবং Sort confuse করি না

[ ] Length এবং Last Valid Index আলাদা বুঝি

[ ] Last Index = length - 1 মনে রাখি

[ ] str[length] হলো '\0' বুঝি

[ ] Backward Traversal করতে পারি

[ ] Reverse Print এবং Actual Reverse আলাদা বুঝি

[ ] New Result Array দিয়ে Reverse করতে পারি

[ ] Opposite Index Formula বুঝি

[ ] length - 1 - i ব্যবহার বুঝি

[ ] Two Pointer Mental Model বুঝি

[ ] Algorithmic Pointer এবং C Pointer confuse করি না

[ ] left = 0 initialize করতে পারি

[ ] right = length - 1 initialize করতে পারি

[ ] left++ এর direction বুঝি

[ ] right-- এর direction বুঝি

[ ] Move Toward Center বুঝি

[ ] Swap Pattern বুঝি

[ ] Temporary Variable-এর প্রয়োজন বুঝি

[ ] Wrong Swap Code চিনতে পারি

[ ] In-Place Reverse করতে পারি

[ ] while (left < right) বুঝি

[ ] Odd Length handle করতে পারি

[ ] Even Length handle করতে পারি

[ ] Middle Character behaviour বুঝি

[ ] Pointer Crossing বুঝি

[ ] Pointer movement ভুলে যাই না

[ ] Infinite Loop risk বুঝি

[ ] Null Terminator swap করি না

[ ] New Result String-এ '\0' দিতে ভুল করি না

[ ] Compare-Based Two Pointer বুঝি

[ ] Swap-Based Two Pointer বুঝি

[ ] Current Pair কী বুঝতে পারি

[ ] Pair Processing-এর পরে movement করি

[ ] Edge Case test করতে পারি
```

---

# 🧠 Chapter 8 Pattern Library Update

তোমার `core_pattern.md`-এ নিচের Section add করতে পারো:

````markdown
# 🔁 Reverse & Two-Pointer Patterns

## 1. Reverse Mental Model

```text
First ↔ Last
Second ↔ Second Last
Third ↔ Third Last
...
```

Core Relationship:

```text
Current Index
↔
length - 1 - current_index
```

---

## 2. Last Valid Index

```text
Length = n
```

Valid Indices:

```text
0 to n - 1
```

Therefore:

```text
Last Valid Index = length - 1
```

Important:

```text
str[length] = '\0'
```

for a properly terminated string.

---

## 3. Reverse Print Pattern

```text
Start from Last Character
↓
Move Backward
↓
Print
```

```c
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
```

Properties:

```text
Original Modified? No
Extra Array? No
Two Pointer? No
```

---

## 4. Opposite Index Mapping

Formula:

```text
opposite = length - 1 - i
```

Result Construction:

```c
result[i] = str[length - 1 - i];
```

Then:

```c
result[length] = '\0';
```

---

## 5. Two-Pointer Mental Model

```text
L →               ← R
```

Initialization:

```c
int left = 0;
int right = length - 1;
```

Movement:

```c
left++;
right--;
```

Stopping Condition for Reverse:

```c
left < right
```

---

## 6. Swap Pattern

```text
Save A
↓
A = B
↓
B = Saved A
```

```c
char temp = str[left];
str[left] = str[right];
str[right] = temp;
```

---

## 7. In-Place Reverse Pattern

```text
Find Length
↓
Initialize Left and Right
↓
While Left < Right
↓
Swap
↓
Move Both Toward Center
```

```c
int left = 0;
int right = length - 1;

while (left < right)
{
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    left++;
    right--;
}
```

---

## 8. Result Array Reverse

### Method A — Opposite Index

```c
for (int i = 0; i < length; i++)
{
    result[i] = str[length - 1 - i];
}

result[length] = '\0';
```

### Method B — Read Backward, Write Forward

```c
int j = 0;

for (int i = length - 1; i >= 0; i--)
{
    result[j] = str[i];
    j++;
}

result[j] = '\0';
```

---

## 9. Odd Length

```text
L →     M     ← R
```

Middle Character:

```text
Does not need swapping
```

Example:

```text
abcde
  ↓
edcba
```

Middle:

```text
c
```

remains in middle.

---

## 10. Even Length

```text
L →         ← R
```

No single middle element.

Pointers eventually:

```text
Cross
```

---

## 11. Swap-Based Two Pointer

```text
Current Pair
↓
Swap
↓
Move Inward
```

Use:

```text
Reverse
```

---

## 12. Compare-Based Two Pointer

```text
Current Pair
↓
Compare
↓
Decision
↓
Move Inward
```

Use:

```text
Palindrome Check
Symmetric Pair Validation
```

---

## 13. Reverse Strategy Selection

```text
Only need reverse output?
↓
Backward Traversal
```

```text
Need separate reversed copy?
↓
Result Array
```

```text
Need modify original string?
↓
Two Pointer + Swap
```

```text
Need compare opposite pairs?
↓
Compare-Based Two Pointer
```

---

## 14. Two-Pointer Control Questions

Before coding ask:

```text
Where does left start?

Where does right start?

What happens to the current pair?

Which pointer moves?

When does it move?

Which direction does it move?

When does the loop stop?
```

---

## 15. Core Two-Pointer Flow

```text
Initialize
↓
Check Boundary
↓
Process Current Pair
↓
Move Pointer(s)
↓
Repeat
```

For Reverse:

```text
left = 0
right = length - 1
↓
left < right?
↓
Swap
↓
left++
right--
↓
Repeat
```
````

---

# 🏁 Chapter 8 Completion Checklist

```text
[ ] Reverse Mental Model বুঝি

[ ] Reverse এবং Sorting-এর difference বুঝি

[ ] Length calculate করতে পারি

[ ] Last Valid Index বের করতে পারি

[ ] Null Terminator position বুঝি

[ ] Reverse Problem-এর strategy select করতে পারি

[ ] Backward Traversal করতে পারি

[ ] Reverse Print করতে পারি

[ ] Reverse Print original modify করে না বুঝি

[ ] New Result Array দিয়ে Reverse করতে পারি

[ ] Opposite Index Formula বুঝি

[ ] length - 1 - i ব্যবহার করতে পারি

[ ] Two Pointer বুঝি

[ ] Left Pointer বুঝি

[ ] Right Pointer বুঝি

[ ] Algorithmic Pointer এবং C Pointer আলাদা বুঝি

[ ] Pointer Movement বুঝি

[ ] Move Toward Center বুঝি

[ ] Swap Pattern বুঝি

[ ] Temporary Variable ব্যবহার করতে পারি

[ ] In-Place Reverse করতে পারি

[ ] left < right condition বুঝি

[ ] Odd Length handle করতে পারি

[ ] Even Length handle করতে পারি

[ ] Middle Character behaviour বুঝি

[ ] Pointer Crossing বুঝি

[ ] Pair Count বুঝি

[ ] Swap-Based Two Pointer বুঝি

[ ] Compare-Based Two Pointer-এর idea বুঝি

[ ] Common Bugs চিনতে পারি

[ ] Edge Cases design করতে পারি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 8 Final Mental Model

Chapter 3-এ:

```text
String
↓
Single Index
↓
Left to Right Traversal
```

Chapter 6-এ:

```text
String
↓
Traverse
↓
Search
```

Chapter 7-এ:

```text
String
↓
Traverse
↓
Transform / Keep / Skip
```

এখন Chapter 8-এ:

```text
String
↓
Two Positions
↓
Process a Pair
↓
Move Toward Center
```

তোমার Traversal Mental Model এখন expand হয়েছে:

```text
Traversal
│
├── Forward Traversal
│
│   0 → 1 → 2 → ... → n-1
│
├── Backward Traversal
│
│   n-1 → n-2 → ... → 0
│
└── Two-Pointer Traversal
    │
    └── L →         ← R
```

Reverse Problem দেখলে এখন তোমার Decision Tree হবে:

```text
Reverse Problem
↓
What exactly is required?
│
├── Only print reversed?
│      ↓
│   Backward Traversal
│
├── Need new reversed copy?
│      ↓
│   Result Array
│   +
│   Opposite Index Mapping
│
└── Need original reversed?
       ↓
    Two Pointer
    +
    Swap
```

Two-Pointer Problem দেখলে তোমার Core Questions:

```text
Where does Left start?
↓
Where does Right start?
↓
What happens to Current Pair?
↓
Swap or Compare?
↓
How do pointers move?
↓
When do they stop?
```

Reverse-এর জন্য Answer:

```text
Left = 0
↓
Right = length - 1
↓
Swap Current Pair
↓
left++
right--
↓
Stop when left >= right
```

অথবা Loop Form:

```text
while (left < right)
```

সবচেয়ে গুরুত্বপূর্ণ Visual:

```text
A B C D E F
↑         ↑
L         R

    Swap
      ↓

F B C D E A
  ↑     ↑
  L     R

    Swap
      ↓

F E C D B A
    ↑ ↑
    L R

    Swap
      ↓

F E D C B A
```

আর Chapter 8-এর সবচেয়ে গুরুত্বপূর্ণ Pattern:

```text
Two Ends
↓
One Pair
↓
One Decision / Operation
↓
Move Inward
↓
Repeat
```

এখন তুমি Chapter 9-এর জন্য ready, কারণ Palindrome আসলে Reverse Code মুখস্থ করার বিষয় না।

Palindrome-এর deeper Mental Model হলো:

```text
Left Character
        vs
Right Character
↓
Equal?
│
├── No → Not Palindrome
│
└── Yes
      ↓
   Move Inward
      ↓
   Compare Next Pair
```

অর্থাৎ Chapter 8-এ:

```text
Current Pair
↓
SWAP
```

Chapter 9-এ হবে:

```text
Current Pair
↓
COMPARE
```

এই একটি পরিবর্তন:

```text
Swap → Compare
```

কিন্তু তার উপর দাঁড়িয়ে তৈরি হবে সম্পূর্ণ নতুন Problem Pattern।

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ✅ Chapter 7 — String Transformation
│
├── ✅ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ⏳ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 8 Complete.**

পরের Chapter:

```text
Day 3 — Chapter 9
Palindrome Pattern
```

সেখানে progression হবে:

```text
Reverse Mental Model
↓
Opposite Pair Relationship
↓
Two Pointer
↓
Compare Left and Right
↓
Early Exit on Mismatch
↓
Palindrome Decision
```

Core visual হবে:

```text
r a c e c a r
↑           ↑
L           R
      =
      ↓
Move Inward
```

তারপর:

```text
r a c e c a r
  ↑       ↑
  L       R
      =
      ↓
Move Inward
```

এভাবেই আমরা **Palindrome Pattern**, **Flag Strategy**, **Early Exit**, **Reverse-based Solution বনাম Two-Pointer Solution**, এবং Contest-এ কোন approach কখন ব্যবহার করবে—সব build করব।

---

# 📘 Day 3 — Chapter 9

# 🔍 Palindrome Pattern

## Symmetric Comparison, Two-Pointer Decision Pattern, Flag Strategy, Early Exit এবং Reverse vs Compare Approach

Chapter 8-এ আমরা শিখেছি:

```text
String
↓
Two Ends
↓
Current Pair
↓
Process
↓
Move Toward Center
```

Reverse-এর ক্ষেত্রে:

```text
Current Pair
↓
SWAP
```

এখন Chapter 9-এ একই Two-Pointer Structure থাকবে।

কিন্তু Operation পরিবর্তন হবে:

```text
Current Pair
↓
COMPARE
```

অর্থাৎ:

```text
Chapter 8
Reverse
↓
Swap Opposite Characters
```

```text
Chapter 9
Palindrome
↓
Compare Opposite Characters
```

এই ছোট পরিবর্তন থেকেই আমরা একটি অত্যন্ত গুরুত্বপূর্ণ CP Pattern তৈরি করব:

```text
Symmetric Pair Comparison
```

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* Palindrome কী বুঝতে;
* Symmetry Mental Model তৈরি করতে;
* Opposite Character Pair চিনতে;
* Two-Pointer দিয়ে Palindrome Check করতে;
* `left` এবং `right` সঠিকভাবে initialize করতে;
* Pair-by-Pair Comparison করতে;
* Mismatch detect করতে;
* Flag Variable ব্যবহার করতে;
* Early Exit বা `break` ব্যবহার করতে;
* Direct Return Strategy বুঝতে;
* Reverse-based Palindrome Solution বুঝতে;
* Two-Pointer এবং Reverse Approach compare করতে;
* Time Complexity এবং Space Complexity-এর basic idea বুঝতে;
* Case Sensitivity বুঝতে;
* Spaces এবং Symbols থাকা Input সম্পর্কে চিন্তা করতে;
* Odd Length এবং Even Length Palindrome handle করতে;
* Single Character Edge Case বুঝতে;
* Empty String-এর conceptual behaviour বুঝতে;
* Common Palindrome Bugs detect করতে;
* Problem Statement থেকে Palindrome Pattern চিনতে;
* Symmetric Comparison Pattern future problems-এ apply করার foundation তৈরি করতে।

---

# 📖 Chapter Map

```text
Day 3 — Chapter 9
│
├── Part 1  — Palindrome Mental Model
├── Part 2  — Symmetry & Opposite Pairs
├── Part 3  — Manual Palindrome Checking
├── Part 4  — Two-Pointer Palindrome Pattern
├── Part 5  — Flag Strategy
├── Part 6  — Early Exit Pattern
├── Part 7  — Direct Return Strategy
├── Part 8  — Reverse-Based Palindrome Check
├── Part 9  — Two Approaches Comparison
├── Part 10 — Odd & Even Length Palindrome
├── Part 11 — Case, Space & Symbol Handling
├── Part 12 — Complexity Mental Model
├── Part 13 — Common Bugs & Edge Cases
├── Part 14 — Guided Problem Solving
├── Part 15 — Pattern Recognition Session
├── Part 16 — Exercises
└── Part 17 — Assignment & Reflection
```

---

# 🧠 Chapter 9 Master Mental Model

ধরো:

```text
racecar
```

Indices:

```text
Index:   0 1 2 3 4 5 6
         r a c e c a r
```

Two Pointers:

```text
r a c e c a r
↑           ↑
L           R
```

Compare:

```text
r == r
```

Yes।

Move:

```text
  a c e c a
  ↑       ↑
  L       R
```

Compare:

```text
a == a
```

Yes।

Move:

```text
    c e c
    ↑   ↑
    L   R
```

Compare:

```text
c == c
```

Yes।

Move:

```text
      e
      ↑
     L,R
```

Now:

```text
left < right
```

False।

কোনো Mismatch পাওয়া যায়নি।

Therefore:

```text
Palindrome
```

Core Pattern:

```text
Initialize Left and Right
↓
Compare Current Pair
↓
Mismatch?
│
├── Yes → Not Palindrome
│
└── No
      ↓
   Move Inward
      ↓
   Compare Next Pair
```

Short Form:

```text
L →   Compare Pairs   ← R
```

---

# Part 1 — Palindrome Mental Model

# Lesson 1 — Palindrome কী?

Palindrome হলো এমন Sequence যেটি:

```text
Forward
```

এবং:

```text
Backward
```

দুই দিক থেকেই একই।

Example:

```text
madam
```

Forward:

```text
madam
```

Backward:

```text
madam
```

Same।

Therefore:

```text
Palindrome
```

---

আরেকটি Example:

```text
hello
```

Forward:

```text
hello
```

Backward:

```text
olleh
```

Not Same।

Therefore:

```text
Not Palindrome
```

---

# Lesson 2 — কিছু Simple Palindrome Example

```text
a
```

Palindrome।

```text
aa
```

Palindrome।

```text
aba
```

Palindrome।

```text
abba
```

Palindrome।

```text
level
```

Palindrome।

```text
racecar
```

Palindrome।

```text
abcba
```

Palindrome।

---

Not Palindrome:

```text
ab
```

```text
abc
```

```text
hello
```

```text
programming
```

```text
abca
```

---

# Lesson 3 — Palindrome-এর প্রথম Mental Model

Beginner সাধারণত ভাবে:

```text
Palindrome
↓
Reverse String
↓
Compare Original with Reverse
```

এটি valid।

কিন্তু আরও direct Mental Model হলো:

```text
Palindrome
↓
Compare Opposite Positions
```

অর্থাৎ:

```text
First == Last?
Second == Second Last?
Third == Third Last?
...
```

যদি সব Pair equal হয়:

```text
Palindrome
```

যদি একটি Pair-ও unequal হয়:

```text
Not Palindrome
```

---

# Lesson 4 — Palindrome মানে Symmetry

Palindrome String:

```text
LEVEL
```

Visual:

```text
L E V E L
↑       ↑
|_______|
```

```text
L == L
```

তারপর:

```text
L E V E L
  ↑   ↑
  |___|
```

```text
E == E
```

Middle:

```text
V
```

নিজের opposite নিজেই।

তাই Palindrome-এর deeper concept:

```text
Symmetry
```

Mental Model:

```text
Left Half
↔
Right Half
```

---

# Lesson 5 — One Mismatch Is Enough

ধরো:

```text
abcca
```

Compare:

```text
a == a
```

Yes।

Move inward:

```text
b vs c
```

Mismatch।

এখন আর বাকি Character check করার দরকার নেই।

কারণ Palindrome হতে হলে:

```text
ALL opposite pairs must match
```

কিন্তু:

```text
One mismatch found
```

Therefore:

```text
Not Palindrome
```

এখানে একটি গুরুত্বপূর্ণ Decision Pattern আছে:

```text
Search for Failure
↓
Failure Found?
↓
Stop Immediately
```

এটাই:

```text
Early Exit Pattern
```

---

# Part 2 — Symmetry & Opposite Pairs

# Lesson 6 — Opposite Pair Relationship

Chapter 8 থেকে Formula:

```text
Opposite Index = length - 1 - i
```

ধরো:

```text
String = ABCBA
Length = 5
```

Indices:

```text
0 1 2 3 4
A B C B A
```

Pairs:

```text
0 ↔ 4
1 ↔ 3
2 ↔ 2
```

Character Comparison:

```text
str[0] == str[4]
A == A
```

```text
str[1] == str[3]
B == B
```

Middle:

```text
str[2]
C
```

---

# Lesson 7 — Palindrome Condition

Conceptually:

```text
For every valid i:
str[i] == str[length - 1 - i]
```

যদি কোনো Position-এ:

```text
str[i] != str[length - 1 - i]
```

তাহলে:

```text
Not Palindrome
```

---

# Lesson 8 — সব Character কেন Compare করতে হয় না?

String:

```text
racecar
```

Length:

```text
7
```

Pairs:

```text
0 ↔ 6
1 ↔ 5
2 ↔ 4
```

Middle:

```text
3
```

আমাদের Compare করতে হবে শুধু:

```text
3 pairs
```

অর্থাৎ approximately:

```text
n / 2
```

comparisons।

কারণ:

```text
0 ↔ 6
```

compare করার পরে আবার:

```text
6 ↔ 0
```

compare করা duplicate কাজ।

তাই:

```text
Process each pair once
```

---

# Lesson 9 — Pair Table

String:

```text
ABCDCBA
```

| Step | Left Index | Right Index | Left Char | Right Char | Match? |
| ---: | ---------: | ----------: | --------- | ---------- | ------ |
|    1 |          0 |           6 | A         | A          | Yes    |
|    2 |          1 |           5 | B         | B          | Yes    |
|    3 |          2 |           4 | C         | C          | Yes    |

Middle:

```text
Index 3 → D
```

No need to compare:

```text
D with D
```

Therefore:

```text
Palindrome
```

---

# Part 3 — Manual Palindrome Checking

# Lesson 10 — Code লেখার আগে Dry Run

Input:

```text
level
```

Write:

```text
Length = 5
Left = 0
Right = 4
```

Step 1:

```text
str[0] = l
str[4] = l

Match
```

Move:

```text
left = 1
right = 3
```

Step 2:

```text
str[1] = e
str[3] = e

Match
```

Move:

```text
left = 2
right = 2
```

Condition:

```text
left < right
```

False।

No mismatch found।

Result:

```text
Palindrome
```

---

# Lesson 11 — Not Palindrome Dry Run

Input:

```text
coding
```

Length:

```text
6
```

Initial:

```text
left = 0
right = 5
```

Compare:

```text
c vs g
```

Mismatch immediately।

Therefore:

```text
Not Palindrome
```

No need to compare:

```text
o vs n
d vs i
```

This is Early Exit।

---

# Lesson 12 — Later Mismatch Example

Input:

```text
abcca
```

Initial:

```text
a b c c a
↑       ↑
L       R
```

Compare:

```text
a == a
```

Move:

```text
a b c c a
  ↑   ↑
  L   R
```

Compare:

```text
b != c
```

Therefore:

```text
Not Palindrome
```

Stop।

---

# Part 4 — Two-Pointer Palindrome Pattern

# Lesson 13 — State Identification

Palindrome Problem-এ কী State লাগবে?

Minimum State:

```text
left
right
```

Decision store করতে চাইলে:

```text
flag
```

So:

```text
Palindrome State
│
├── left
├── right
└── flag
```

সবসময় দরকার নেই:

```text
Accumulator
Counter
Frequency Array
Result Array
```

Problem অনুযায়ী State নির্বাচন করতে হবে।

---

# Lesson 14 — Pointer Initialization

```c
int left = 0;
int right = length - 1;
```

Meaning:

```text
left
↓
First Character
```

```text
right
↓
Last Character
```

Visual:

```text
r a c e c a r
↑           ↑
L           R
```

---

# Lesson 15 — Comparison Condition

Current Pair compare:

```c
if (str[left] != str[right])
```

Meaning:

```text
Mismatch Found
```

Palindrome requirement:

```text
Every Pair Equal
```

তাই:

```text
One Pair Unequal
↓
Whole String Not Palindrome
```

---

# Lesson 16 — Pointer Movement

Pair match করলে:

```c
left++;
right--;
```

Visual:

```text
r a c e c a r
↑           ↑
L           R
```

After move:

```text
r a c e c a r
  ↑       ↑
  L       R
```

Again:

```text
r a c e c a r
    ↑   ↑
    L   R
```

Core:

```text
Compare
↓
Move Inward
↓
Compare
↓
Move Inward
```

---

# Lesson 17 — Basic Algorithm

```text
Find Length
↓
left = 0
right = length - 1
↓
Assume Palindrome
↓
While left < right
↓
Compare str[left] and str[right]
↓
Mismatch?
│
├── Yes
│     ↓
│   Mark Not Palindrome
│     ↓
│   Stop
│
└── No
      ↓
   left++
   right--
      ↓
   Continue
```

---

# Lesson 18 — Basic Two-Pointer Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int length = strlen(str);

    int left = 0;
    int right = length - 1;

    int isPalindrome = 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            isPalindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome == 1)
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

---

# Lesson 19 — Code Mental Breakdown

## Step 1

```c
int length = strlen(str);
```

Need:

```text
Right Boundary
```

---

## Step 2

```c
int left = 0;
int right = length - 1;
```

Need:

```text
Opposite Pair Tracking
```

---

## Step 3

```c
int isPalindrome = 1;
```

Initial assumption:

```text
Palindrome
```

---

## Step 4

```c
while (left < right)
```

Meaning:

```text
While an unprocessed pair exists
```

---

## Step 5

```c
if (str[left] != str[right])
```

Meaning:

```text
Check current pair for failure
```

---

## Step 6

```c
isPalindrome = 0;
break;
```

Meaning:

```text
Failure Found
↓
Save Decision
↓
Stop Searching
```

---

## Step 7

```c
left++;
right--;
```

Meaning:

```text
Current Pair Valid
↓
Move to Next Inner Pair
```

---

# Part 5 — Flag Strategy

# Lesson 20 — Flag Variable কী?

Flag হলো এমন একটি Variable যেটি কোনো State বা Decision remember করে।

Example:

```c
int found = 0;
```

Meaning:

```text
Not Found Yet
```

যদি পাওয়া যায়:

```c
found = 1;
```

---

Palindrome-এর জন্য:

```c
int isPalindrome = 1;
```

Meaning:

```text
Assume True
```

Mismatch পেলে:

```c
isPalindrome = 0;
```

Meaning:

```text
Now Proven False
```

---

# Lesson 21 — Flag Mental Model

```text
Initial State
↓
Assume Valid
↓
Search for Violation
↓
Violation Found?
│
├── Yes → Change Flag
└── No  → Keep Flag
```

Palindrome:

```text
isPalindrome = 1
↓
Compare Pairs
↓
Mismatch Found?
│
├── Yes → isPalindrome = 0
└── No  → remains 1
```

---

# Lesson 22 — কেন শুরুতে `1`?

Palindrome Check-এর logic:

```text
Valid Until Proven Invalid
```

তাই:

```c
int isPalindrome = 1;
```

তারপর আমরা Mismatch খুঁজি।

একটি Mismatch পেলেই:

```c
isPalindrome = 0;
```

এই Pattern অনেক Problem-এ আসবে:

```text
Assume Condition True
↓
Search for Counterexample
↓
Counterexample Found
↓
False
```

---

# Lesson 23 — Flag Name গুরুত্বপূর্ণ

Poor Name:

```c
int x = 1;
```

Better:

```c
int flag = 1;
```

Even Better:

```c
int isPalindrome = 1;
```

কারণ:

```text
Readable Variable Name
↓
Readable Logic
↓
Fewer Mistakes
```

Contest-এ short variable ব্যবহার করা যায়, কিন্তু শেখার সময় meaningful name better।

---

# Lesson 24 — Flag Without Break

এটাও technically কাজ করতে পারে:

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
    }

    left++;
    right--;
}
```

কিন্তু Mismatch পাওয়ার পরেও loop চলবে।

Example:

```text
coding
```

First pair:

```text
c != g
```

Already know:

```text
Not Palindrome
```

তবুও code compare করবে:

```text
o vs n
d vs i
```

Unnecessary।

Better:

```c
if (str[left] != str[right])
{
    isPalindrome = 0;
    break;
}
```

---

# Part 6 — Early Exit Pattern

# Lesson 25 — Early Exit কী?

Early Exit মানে:

> Final Answer জানা হয়ে গেলে unnecessary processing বন্ধ করা।

Palindrome:

```text
One Mismatch
↓
Answer Known
↓
Stop
```

Code:

```c
if (str[left] != str[right])
{
    isPalindrome = 0;
    break;
}
```

---

# Lesson 26 — কেন Early Exit গুরুত্বপূর্ণ?

ধরো String Length:

```text
1,000,000
```

First pair-ই mismatch:

```text
str[0] != str[999999]
```

Without Early Exit:

```text
Still checks many remaining pairs
```

With Early Exit:

```text
One comparison
↓
Stop
```

Worst-case complexity একই class থাকতে পারে, কিন্তু অনেক actual input-এ কাজ কম হয়।

---

# Lesson 27 — `break` কী করে?

```c
break;
```

বর্তমান Loop থেকে বের হয়ে যায়।

Example:

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }

    left++;
    right--;
}
```

Mismatch হলে control চলে যাবে loop-এর পরে।

Then:

```c
if (isPalindrome)
{
    printf("Palindrome\n");
}
else
{
    printf("Not Palindrome\n");
}
```

---

# Lesson 28 — `break` vs `return`

`break`:

```text
Exit Current Loop
```

`return`:

```text
Exit Current Function
```

Example with `break`:

```c
if (str[left] != str[right])
{
    isPalindrome = 0;
    break;
}
```

Example with direct return:

```c
if (str[left] != str[right])
{
    return 0;
}
```

কিন্তু `main()`-এ সরাসরি `return 0` দিলে output print করার logic আগে handle করতে হবে।

---

# Part 7 — Direct Return Strategy

# Lesson 29 — Function-Based Solution

Professional habit হিসেবে logic function-এ রাখা যায়।

```c
int isPalindrome(char str[])
{
    int length = strlen(str);

    int left = 0;
    int right = length - 1;

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
Mismatch Found
↓
Return False Immediately
```

If loop finishes:

```text
No Mismatch Found
↓
Return True
```

---

# Lesson 30 — Full Function Version

```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int length = strlen(str);

    int left = 0;
    int right = length - 1;

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

---

# Lesson 31 — Flag vs Direct Return

## Flag Strategy

```text
Initialize Flag
↓
Search
↓
Change Flag on Failure
↓
Break
↓
Check Flag
```

## Direct Return Strategy

```text
Search
↓
Failure?
├── Yes → return 0
└── No  → continue
↓
Loop Ends
↓
return 1
```

Both valid।

তোমার বর্তমান learning stage-এ:

```text
First understand Flag Strategy
↓
Then understand Direct Return
```

কারণ Flag Pattern অন্য অনেক CP Problem-এও কাজে লাগবে।

---

# Part 8 — Reverse-Based Palindrome Check

# Lesson 32 — Alternative Approach

Palindrome definition:

```text
Original == Reverse
```

তাই:

```text
Original String
↓
Create Reversed Copy
↓
Compare Original and Reverse
↓
Same?
├── Yes → Palindrome
└── No  → Not Palindrome
```

---

# Lesson 33 — Reverse-Based Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char reversed[100];

    scanf("%99s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0';

    if (strcmp(str, reversed) == 0)
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

---

# Lesson 34 — `strcmp()` Basic Idea

`strcmp()` দুইটি String compare করে।

```c
strcmp(str1, str2)
```

যদি Strings equal হয়:

```text
Return Value = 0
```

তাই:

```c
if (strcmp(str, reversed) == 0)
```

Meaning:

```text
Original and Reversed are Equal
```

Therefore:

```text
Palindrome
```

---

# Lesson 35 — Reverse Approach Mental Model

```text
Input
↓
Build Reverse
↓
Compare Whole Strings
↓
Decision
```

Example:

```text
level
```

Reverse:

```text
level
```

Compare:

```text
level == level
```

Yes।

---

# Lesson 36 — Two-Pointer Approach Mental Model

```text
Input
↓
Set Left and Right
↓
Compare Pair
↓
Mismatch?
├── Yes → Stop
└── No  → Move Inward
```

No reversed copy needed।

---

# Part 9 — Two Approaches Comparison

# Lesson 37 — Reverse vs Two Pointer

| Feature               | Reverse Approach               | Two Pointer               |
| --------------------- | ------------------------------ | ------------------------- |
| Reverse copy needed   | Yes                            | No                        |
| Extra Character Array | Yes                            | No                        |
| Pair comparison       | Indirect                       | Direct                    |
| Early Exit            | Usually after reverse creation | Yes                       |
| Beginner readability  | Easy                           | Very important CP pattern |
| Extra Space           | O(n)                           | O(1)                      |
| Time                  | O(n)                           | O(n)                      |

For your Bootcamp:

> **দুইটি Approach-ই বুঝবে, কিন্তু Palindrome Pattern হিসেবে Two-Pointer Approach-কে primary solution হিসেবে শিখবে।**

---

# Lesson 38 — কোনটা Contest-এ ব্যবহার করব?

যদি simple Palindrome Check হয়:

```text
Prefer:
Two Pointer
```

কারণ:

```text
No extra reversed array
+
Direct comparison
+
Early exit possible
+
Important reusable pattern
```

তবে যদি Problem-এর অন্য অংশে Reversed String এমনিতেই দরকার হয়:

```text
Reverse-Based Approach may be reasonable
```

Problem Context matters।

---

# Lesson 39 — Code ছোট হলেই সবসময় Better না

তুমি হয়তো library function দিয়ে short code লিখতে পারো।

কিন্তু CP learning stage-এ লক্ষ্য:

```text
Pattern Recognition
```

তাই Palindrome Problem-এ চিনবে:

```text
Symmetry
↓
Opposite Pairs
↓
Two Pointer
↓
Compare
↓
Early Exit
```

এই চিন্তাটা Code-এর length-এর চেয়ে বেশি important।

---

# Part 10 — Odd & Even Length Palindrome

# Lesson 40 — Odd Length Palindrome

Example:

```text
RADAR
```

Length:

```text
5
```

Pairs:

```text
0 ↔ 4
1 ↔ 3
```

Middle:

```text
2
```

Visual:

```text
R A D A R
↑       ↑
```

Compare:

```text
R == R
```

Move:

```text
R A D A R
  ↑   ↑
```

Compare:

```text
A == A
```

Move:

```text
R A D A R
    ↑
```

Stop।

Middle Character:

```text
D
```

does not need comparison।

---

# Lesson 41 — Even Length Palindrome

Example:

```text
ABBA
```

Length:

```text
4
```

Pairs:

```text
0 ↔ 3
1 ↔ 2
```

Visual:

```text
A B B A
↑     ↑
```

Compare:

```text
A == A
```

Move:

```text
A B B A
  ↑ ↑
```

Compare:

```text
B == B
```

Move:

```text
left = 2
right = 1
```

Pointers cross।

Stop।

Palindrome।

---

# Lesson 42 — Single Character

Input:

```text
A
```

Length:

```text
1
```

Initialization:

```text
left = 0
right = 0
```

Condition:

```text
left < right
```

```text
0 < 0
```

False।

No mismatch।

Therefore:

```text
Palindrome
```

Correct।

---

# Lesson 43 — Two Characters

Input:

```text
aa
```

Compare:

```text
a == a
```

Palindrome।

Input:

```text
ab
```

Compare:

```text
a != b
```

Not Palindrome।

এই Edge Case খুব useful test।

---

# Part 11 — Case, Space & Symbol Handling

# Lesson 44 — Case Sensitivity

Input:

```text
Level
```

Character Comparison:

```text
'L' != 'l'
```

C-তে uppercase এবং lowercase আলাদা character value।

তাই simple case-sensitive solution বলবে:

```text
Not Palindrome
```

কিন্তু Problem যদি বলে:

```text
Ignore case
```

তাহলে:

```text
Level
```

consider করা হতে পারে:

```text
level
```

Then:

```text
Palindrome
```

Rule:

> Problem Statement কী বলছে তা আগে পড়বে।

---

# Lesson 45 — Spaces

Input:

```text
nurses run
```

যদি Problem বলে:

```text
Ignore spaces
```

তাহলে normalized form:

```text
nursesrun
```

এটি Palindrome।

কিন্তু direct comparison-এ spaces include করলে behaviour আলাদা হতে পারে।

তাই Problem থেকে জানতে হবে:

```text
Are spaces significant?
```

---

# Lesson 46 — Symbols

Example:

```text
A man, a plan, a canal: Panama
```

Advanced Palindrome Problem বলতে পারে:

```text
Ignore:
- Spaces
- Punctuation
- Case
```

তখন Pattern হবে:

```text
Two Pointer
↓
Skip Invalid Left Characters
↓
Skip Invalid Right Characters
↓
Normalize Case
↓
Compare
↓
Move
```

এটি advanced version।

এই Bootcamp stage-এ প্রথমে simple version:

```text
Lowercase word
No spaces
No punctuation
```

master করবে।

---

# Lesson 47 — Problem Constraints আগে পড়ো

Palindrome Problem দেখেই assume করবে না:

```text
Only lowercase letters
```

Check:

```text
Input contains what?
```

Possible:

```text
Lowercase letters
Uppercase letters
Digits
Spaces
Symbols
Full sentence
```

Solution input handling এবং comparison logic এর উপর depend করবে।

---

# Part 12 — Complexity Mental Model

# Lesson 48 — Time Complexity কীভাবে ভাবব?

String Length:

```text
n
```

Two Pointer সর্বোচ্চ approximately:

```text
n / 2
```

pairs compare করে।

Big-O notation constants ignore করে।

তাই:

```text
O(n)
```

Time Complexity।

---

# Lesson 49 — Space Complexity

Two-Pointer Solution uses:

```text
left
right
flag
length
```

String length বাড়লেও extra variables-এর সংখ্যা constant।

তাই Extra Space:

```text
O(1)
```

---

# Lesson 50 — Reverse Approach Complexity

Reverse copy বানাতে:

```text
O(n) time
```

Compare করতে:

```text
O(n) time
```

Total:

```text
O(n) + O(n)
```

Big-O:

```text
O(n)
```

Extra reversed array:

```text
O(n)
```

So:

```text
Time:  O(n)
Space: O(n)
```

---

# Lesson 51 — Two-Pointer Complexity

Pair comparison:

```text
O(n)
```

Extra state:

```text
O(1)
```

So:

```text
Time:  O(n)
Space: O(1)
```

---

# 🧠 Complexity Comparison

```text
Reverse-Based
│
├── Time  → O(n)
└── Space → O(n)
```

```text
Two-Pointer
│
├── Time  → O(n)
└── Space → O(1)
```

তোমার এখন Complexity-এর deep mathematical proof দরকার নেই।

বর্তমান Mental Model:

```text
Traverse String Once
↓
Usually O(n)
```

```text
Create Another n-sized Array
↓
O(n) Extra Space
```

```text
Use Only Few Variables
↓
O(1) Extra Space
```

---

# Part 13 — Common Bugs & Edge Cases

# 🐞 Bug 1 — Wrong Right Boundary

Wrong:

```c
int right = length;
```

Correct:

```c
int right = length - 1;
```

কারণ:

```text
str[length] = '\0'
```

---

# 🐞 Bug 2 — Comparing Wrong Positions

Wrong:

```c
if (str[left] != str[left])
```

এটি সবসময় same position compare করছে।

Correct:

```c
if (str[left] != str[right])
```

---

# 🐞 Bug 3 — Pointer Move ভুলে যাওয়া

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }
}
```

যদি pair equal হয়:

```text
left and right never change
```

Result:

```text
Infinite Loop
```

Need:

```c
left++;
right--;
```

---

# 🐞 Bug 4 — Only One Pointer Moves

Wrong:

```c
left++;
```

but no:

```c
right--;
```

এতে symmetric inward movement হবে না।

---

# 🐞 Bug 5 — Flag Initialize না করা

Wrong:

```c
int isPalindrome;
```

তারপর শেষে:

```c
if (isPalindrome)
```

Uninitialized variable unpredictable value ধারণ করতে পারে।

Correct:

```c
int isPalindrome = 1;
```

---

# 🐞 Bug 6 — Mismatch-এ Flag ভুল Value

Wrong:

```c
if (str[left] != str[right])
{
    isPalindrome = 1;
}
```

Mismatch means:

```text
False
```

Correct:

```c
isPalindrome = 0;
```

---

# 🐞 Bug 7 — Wrong Comparison Operator

Wrong:

```c
if (str[left] == str[right])
{
    isPalindrome = 0;
}
```

এখানে matching pair-কে failure হিসেবে ধরা হচ্ছে।

Correct mismatch detection:

```c
if (str[left] != str[right])
```

---

# 🐞 Bug 8 — `=` vs `==`

Wrong:

```c
if (isPalindrome = 1)
```

এটি assignment।

Correct:

```c
if (isPalindrome == 1)
```

অথবা:

```c
if (isPalindrome)
```

---

# 🐞 Bug 9 — `strcmp()` Result ভুল বোঝা

Wrong:

```c
if (strcmp(str, reversed) == 1)
```

Equal Strings-এর জন্য:

```text
strcmp(...) == 0
```

Correct:

```c
if (strcmp(str, reversed) == 0)
```

---

# 🐞 Bug 10 — Reversed String Null-Terminate না করা

```c
for (int i = 0; i < length; i++)
{
    reversed[i] = str[length - 1 - i];
}
```

এর পরে দরকার:

```c
reversed[length] = '\0';
```

নাহলে `%s` বা `strcmp()` unsafe behaviour করতে পারে।

---

# 🐞 Bug 11 — Case Sensitivity Ignore করা

Input:

```text
Level
```

Simple comparison:

```text
L != l
```

তাই Problem যদি case-insensitive বলে, normalization দরকার।

---

# 🐞 Bug 12 — `scanf("%s")` দিয়ে Sentence Input

Input:

```text
nurses run
```

```c
scanf("%s", str);
```

পড়বে শুধু:

```text
nurses
```

Full line হলে:

```text
fgets()
```

প্রয়োজন হতে পারে।

---

# 🐞 Bug 13 — Newline Problem with `fgets()`

`fgets()` Input:

```text
level\n
```

store করতে পারে।

তখন last visible logical character-এর পরে newline আছে।

Palindrome check-এর আগে newline remove করতে হতে পারে।

---

# 🐞 Bug 14 — Reverse Approach-এ Original Modify করে ফেলা

যদি Original এবং Reverse compare করতে চাও, কিন্তু Original String-ই in-place reverse করে ফেলো, তাহলে original version হারিয়ে যাবে।

Need either:

```text
Original Copy
```

or:

```text
Separate Reversed Array
```

---

# 🐞 Bug 15 — Unnecessary Full Comparison

Mismatch পাওয়া গেছে:

```text
a != z
```

তারপরও সব pair check করা technically possible, কিন্তু unnecessary।

Use:

```c
break;
```

or function-based:

```c
return 0;
```

---

# Part 14 — Guided Problem Solving

# Problem 1 — Basic Palindrome

Input:

```text
madam
```

Question:

```text
Is it a palindrome?
```

---

## Step 1 — Problem Pattern

Need:

```text
Symmetric Comparison
```

---

## Step 2 — State

```text
left
right
isPalindrome
```

---

## Step 3 — Initialization

```text
left = 0
right = 4
isPalindrome = 1
```

---

## Step 4 — Pair Sequence

```text
m vs m
```

Match।

```text
a vs a
```

Match।

Middle:

```text
d
```

Stop।

Answer:

```text
Palindrome
```

---

# Problem 2 — Immediate Mismatch

Input:

```text
hello
```

Initial pair:

```text
h vs o
```

Mismatch।

Therefore:

```text
Not Palindrome
```

No need to check further।

Pattern:

```text
Compare
+
Early Exit
```

---

# Problem 3 — Late Mismatch

Input:

```text
abcca
```

Pair 1:

```text
a == a
```

Pair 2:

```text
b != c
```

Answer:

```text
Not Palindrome
```

Important Lesson:

> First and last character equal হলেই Palindrome নয়।

সব opposite pair match করতে হবে।

---

# Problem 4 — Single Character

Input:

```text
x
```

Pointer:

```text
left = 0
right = 0
```

Loop:

```text
0 < 0
```

False।

No mismatch।

Answer:

```text
Palindrome
```

---

# Problem 5 — Even Length

Input:

```text
noon
```

Pairs:

```text
n == n
o == o
```

Answer:

```text
Palindrome
```

---

# Problem 6 — Numeric String

Input:

```text
12321
```

Characters:

```text
'1' '2' '3' '2' '1'
```

Pairs:

```text
1 == 1
2 == 2
```

Answer:

```text
Palindrome
```

String Palindrome Pattern digits-এর ক্ষেত্রেও কাজ করে।

---

# Problem 7 — Decide the Approach

Problem:

> Check whether the given lowercase word is a palindrome.

Best current approach:

```text
Two Pointer
+
Compare
+
Early Exit
```

Problem:

> Create the reverse of the string and also report whether it is a palindrome.

Potential approach:

```text
Build Reversed String
+
Compare with Original
```

কারণ reversed string anyway required।

---

# Part 15 — Pattern Recognition Session

# Lesson 52 — কোন শব্দ দেখলে Palindrome Pattern চিনবে?

Problem Statement-এ থাকতে পারে:

```text
Palindrome
```

Direct clue।

কিন্তু সবসময় direct শব্দ থাকবে না।

Possible wording:

```text
Reads the same forward and backward
```

```text
Same from both directions
```

```text
Check symmetric characters
```

```text
Compare first with last, second with second-last
```

```text
Mirror sequence
```

এগুলো দেখলে ভাববে:

```text
Opposite Pair Relationship
↓
Two Pointer
```

---

# Lesson 53 — Pattern Recognition Tree

```text
Need to inspect opposite ends?
↓
Yes
↓
What operation?
│
├── Exchange values
│      ↓
│     Swap
│      ↓
│    Reverse Pattern
│
└── Check values
       ↓
     Compare
       ↓
   Symmetry / Palindrome Pattern
```

---

# Lesson 54 — Reverse vs Palindrome

## Reverse

```text
Pair:
A ... Z

Action:
Swap
```

## Palindrome

```text
Pair:
A ... Z

Action:
Compare
```

This is the key connection between Chapter 8 and Chapter 9।

---

# Lesson 55 — State Selection Practice

### Problem

Find sum of all elements।

Need:

```text
Traversal
+
Accumulator
```

### Problem

Count vowels।

Need:

```text
Traversal
+
Counter
+
Condition
```

### Problem

Find a character।

Need:

```text
Traversal
+
Search
+
Flag / Index
```

### Problem

Reverse string in-place।

Need:

```text
Two Pointer
+
Swap
```

### Problem

Check palindrome।

Need:

```text
Two Pointer
+
Compare
+
Decision State / Early Return
```

এখন তোমার Pattern Library ধীরে ধীরে connected হচ্ছে।

---

# Part 16 — Exercises

# Exercise 1 — Manual Palindrome Check

Input:

```text
racecar
```

Complete:

```text
Length:
...

Initial Left:
...

Initial Right:
...

Pair 1:
...

Pair 2:
...

Pair 3:
...

Middle Index:
...

Final Decision:
...
```

---

# Exercise 2 — Not Palindrome Dry Run

Input:

```text
abxda
```

Table পূরণ করো:

| Step | Left | Right | Left Char | Right Char | Match? |
| ---: | ---: | ----: | --------- | ---------- | ------ |
|    1 |      |       |           |            |        |
|    2 |      |       |           |            |        |

তারপর:

```text
First Mismatch:
...

Final Answer:
...
```

---

# Exercise 3 — Even Length Palindrome

Input:

```text
ABBA
```

Complete:

```text
Length:
...

Pair 1:
...

Pair 2:
...

Pointer State After Final Move:
left = ...
right = ...

Answer:
...
```

---

# Exercise 4 — Single Character

Input:

```text
Z
```

Answer:

```text
Length:
...

left:
...

right:
...

Does loop run?
...

Why?
...

Palindrome?
...
```

---

# Exercise 5 — Two Character Cases

Case A:

```text
aa
```

Case B:

```text
ab
```

দুইটির জন্য Pointer Dry Run করবে।

---

# Exercise 6 — Flag Strategy

Complete:

```text
Initial Flag:
...

Meaning:
...

On Mismatch:
...

New Flag:
...

Why break?
...
```

---

# Exercise 7 — Find the Bug

```c
int left = 0;
int right = length;

while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }

    left++;
    right--;
}
```

Answer:

```text
Bug:
...

Why:
...

Correct Line:
...
```

---

# Exercise 8 — Infinite Loop

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }
}
```

Explain:

```text
Why can it become infinite?
...

Missing lines:
...
```

---

# Exercise 9 — Wrong Flag Logic

```c
int isPalindrome = 0;

while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 1;
        break;
    }

    left++;
    right--;
}
```

Find:

```text
Initialization Problem:
...

Mismatch Assignment Problem:
...

Correct Initialization:
...

Correct Mismatch Assignment:
...
```

---

# Exercise 10 — Strategy Selection

Choose:

```text
Backward Traversal
Result Array
Two Pointer + Swap
Two Pointer + Compare
```

### A

Reverse original String।

```text
Answer:
...
```

### B

Check Palindrome।

```text
Answer:
...
```

### C

Print String backward।

```text
Answer:
...
```

### D

Create separate reversed copy।

```text
Answer:
...
```

---

# Exercise 11 — Reverse vs Palindrome

Complete:

| Problem    | Pair Operation | Pointer Movement | Early Exit Useful? |
| ---------- | -------------- | ---------------- | ------------------ |
| Reverse    | ?              | ?                | ?                  |
| Palindrome | ?              | ?                | ?                  |

---

# Exercise 12 — Complexity

Complete:

### Two-Pointer Palindrome

```text
Time:
...

Extra Space:
...
```

### Reverse-Copy Palindrome

```text
Time:
...

Extra Space:
...
```

---

# Exercise 13 — Pair Count

Complete:

| String Length | Maximum Pair Comparisons |
| ------------: | -----------------------: |
|             1 |                        ? |
|             2 |                        ? |
|             3 |                        ? |
|             4 |                        ? |
|             5 |                        ? |
|             6 |                        ? |
|             7 |                        ? |
|             8 |                        ? |

Relation:

```text
Maximum Pair Comparisons = ...
```

---

# Exercise 14 — Case Sensitivity

Input:

```text
Level
```

Explain:

```text
Case-sensitive result:
...

Why:
...

Case-insensitive normalized form:
...

Result after normalization:
...
```

---

# Exercise 15 — Pattern Recognition

Problem says:

> Compare the first character with the last character, then move toward the center.

Write:

```text
Pattern:
...

State:
...

Operation:
...

Movement:
...

Stopping Condition:
...
```

---

# Exercise 16 — Write Algorithm Without Code

Problem:

```text
Check whether "MALAYALAM" is a palindrome.
```

শুধু Algorithm লিখবে:

```text
Step 1:
...

Step 2:
...

Step 3:
...

Step 4:
...

Step 5:
...
```

---

# Exercise 17 — Early Exit Analysis

Input:

```text
abcdefghijklmZ
```

Suppose first and last character mismatch।

Answer:

```text
Without Early Exit:
...

With Early Exit:
...

Why further comparison is unnecessary:
...
```

---

# Exercise 18 — Function Logic

Complete:

```c
int isPalindrome(char str[])
{
    int length = strlen(str);

    int left = ___;
    int right = ___;

    while (___)
    {
        if (___)
        {
            return ___;
        }

        ___;
        ___;
    }

    return ___;
}
```

নিজে fill করবে।

---

# Part 17 — Chapter Assignment

# 📝 Task 1 — Palindrome Dictionary

নিজের ভাষায় explain করবে:

```text
Palindrome
Symmetry
Opposite Pair
Symmetric Comparison
Two-Pointer Comparison
Flag
Boolean State
Early Exit
Mismatch
Direct Return
Case Sensitivity
Normalization
Time Complexity
Space Complexity
```

Format:

```text
Term:
Early Exit

Meaning:
...

Mental Model:
...

Example:
...

Why Useful:
...

Common Mistake:
...
```

---

# 📝 Task 2 — Palindrome Programs

Files বানাবে:

```text
01_palindrome_flag.c
02_palindrome_function.c
03_palindrome_reverse_copy.c
04_palindrome_manual_length.c
```

প্রতিটি File-এর আগে Comment-এ লিখবে:

```c
/*
Problem Goal:

Main Pattern:

State Used:

Early Exit:

Time Complexity:

Extra Space Complexity:
*/
```

---

# 📝 Task 3 — Manual Dry Run

Input:

```text
ROTATOR
```

Table পূরণ করবে:

| Step | Left | Right | Left Char | Right Char | Match? | Action |
| ---: | ---: | ----: | --------- | ---------- | ------ | ------ |
|    1 |      |       |           |            |        |        |
|    2 |      |       |           |            |        |        |
|    3 |      |       |           |            |        |        |

Then:

```text
Length:
...

Middle Index:
...

Total Comparisons:
...

Mismatch Found?
...

Final Answer:
...
```

---

# 📝 Task 4 — Mismatch Dry Run

Input:

```text
ABCCXA
```

Table:

| Step | Left | Right | Pair | Match? | Flag Before | Flag After |
| ---: | ---: | ----: | ---- | ------ | ----------: | ---------: |
|    1 |      |       |      |        |             |            |
|    2 |      |       |      |        |             |            |

Then:

```text
Where did early exit happen?
...

Why were remaining pairs unnecessary?
...
```

---

# 📝 Task 5 — Write Three Solutions

Same Problem:

> Check whether a word is a palindrome.

তিনভাবে solve করবে:

```text
Method 1:
Flag + Two Pointer

Method 2:
Function + Direct Return

Method 3:
Reverse Copy + Compare
```

তারপর Comparison লিখবে:

| Method             | Time | Extra Space | Early Exit | My Confidence |
| ------------------ | ---- | ----------- | ---------- | ------------- |
| Flag + Two Pointer |      |             |            |               |
| Direct Return      |      |             |            |               |
| Reverse Copy       |      |             |            |               |

---

# 📝 Task 6 — Edge Case Testing

নিজের Program এই Inputs দিয়ে test করবে:

```text
a
```

```text
aa
```

```text
ab
```

```text
aba
```

```text
abba
```

```text
abcba
```

```text
abcca
```

```text
racecar
```

```text
hello
```

Expected Output নিজে আগে লিখবে, তারপর Program run করবে।

Format:

| Input   | My Expected Result | Program Result | Match? |
| ------- | ------------------ | -------------- | ------ |
| a       |                    |                |        |
| aa      |                    |                |        |
| ab      |                    |                |        |
| aba     |                    |                |        |
| abba    |                    |                |        |
| abcba   |                    |                |        |
| abcca   |                    |                |        |
| racecar |                    |                |        |
| hello   |                    |                |        |

---

# 📝 Task 7 — Bug Hunting

নিচের Code Analyze করবে:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%s", str);

    int length = strlen(str);

    int left = 0;
    int right = length;

    int isPalindrome = 0;

    while (left < right)
    {
        if (str[left] == str[right])
        {
            isPalindrome = 0;
            break;
        }

        left++;
    }

    if (isPalindrome = 1)
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

সব Bug খুঁজবে।

Hint:

```text
Right Boundary
Flag Initialization
Comparison Logic
Flag Update
Pointer Movement
Assignment vs Comparison
Input Width Safety
```

প্রতিটি Bug-এর জন্য লিখবে:

```text
Bug:
...

Why:
...

Fix:
...
```

---

# 📝 Task 8 — Pattern Conversion

Chapter 8 Reverse Pattern:

```text
Initialize L and R
↓
Swap Current Pair
↓
Move Inward
↓
Repeat
```

এটাকে Chapter 9 Palindrome Pattern-এ convert করবে:

```text
Initialize ...
↓
...
↓
Mismatch?
│
├── ...
└── ...
↓
...
```

নিজে Diagram complete করবে।

---

# 📝 Task 9 — Pattern Selection Drill

নিচের প্রতিটি Problem-এর জন্য শুধু Pattern লিখবে।

### Problem A

Find total sum।

```text
Pattern:
...
```

### Problem B

Count vowels।

```text
Pattern:
...
```

### Problem C

Find first occurrence।

```text
Pattern:
...
```

### Problem D

Reverse String।

```text
Pattern:
...
```

### Problem E

Check Palindrome।

```text
Pattern:
...
```

### Problem F

Build uppercase version।

```text
Pattern:
...
```

Goal:

```text
Problem Statement
↓
Pattern Recognition
```

---

# 📝 Task 10 — Explain Without Code

নিজের ভাষায় explain করবে:

> `racecar` Palindrome কেন?

Code লেখা যাবে না।

Use these words:

```text
Symmetry
Opposite Pair
Left
Right
Compare
Move Inward
Mismatch
Decision
```

---

# 📝 Task 11 — Code Without Looking

Notes বন্ধ করবে।

তারপর তিনটি Code লিখবে:

```text
1. Palindrome using Flag

2. Palindrome using Function and Direct Return

3. Palindrome using Reversed Copy
```

তারপর নিজে compare করবে।

যদি আটকে যাও:

প্রথমে Code দেখবে না।

এই Mental Model দেখবে:

```text
Palindrome
↓
Opposite Pairs
↓
Two Pointers
↓
Compare
↓
Mismatch?
↓
Decision
```

---

# 📝 Task 12 — Chapter Reflection

Copy-Paste Version:

````markdown
# 🧠 Day 3 — Chapter 9 Reflection

## 1. What Is a Palindrome?

...

---

## 2. My Palindrome Mental Model

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

## 3. Symmetry

### My Understanding

...

### Example

```text
...
```

---

## 4. Opposite Pair Relationship

Formula:

```text
...
```

Example:

```text
...
```

---

## 5. Two-Pointer Palindrome Pattern

### Left Initialization

```text
...
```

### Right Initialization

```text
...
```

### Comparison

```text
...
```

### Movement

```text
...
```

### Stop Condition

```text
...
```

---

## 6. Flag Strategy

### Initial Value

```text
...
```

### Meaning

...

### On Mismatch

```text
...
```

---

## 7. Early Exit

### My Understanding

...

### Why It Is Useful

...

### Code Keyword

```text
...
```

---

## 8. Direct Return Strategy

...

---

## 9. Reverse-Based Approach

```text
...
↓
...
↓
...
```

---

## 10. Two Pointer vs Reverse Copy

| Topic       | Two Pointer | Reverse Copy |
| ----------- | ----------- | ------------ |
| Time        |             |              |
| Extra Space |             |              |
| Early Exit  |             |              |
| Extra Array |             |              |

---

## 11. Odd Length Palindrome

...

### Middle Character

...

---

## 12. Even Length Palindrome

...

### Pointer Crossing

...

---

## 13. Case Sensitivity

...

---

## 14. One Mismatch Rule

...

---

## 15. Most Important Bug I Learned

...

---

## 16. Reverse vs Palindrome

### Reverse Pair Operation

```text
...
```

### Palindrome Pair Operation

```text
...
```

---

## 17. My Pattern Recognition Model

```text
Need Opposite Ends?
↓
...
↓
Operation?
│
├── ... → Reverse
└── ... → Palindrome
```

---

## 18. Most Difficult Concept

...

---

## 19. Confidence Score

```text
Palindrome Definition:           ?/10
Symmetry Mental Model:           ?/10
Opposite Pair:                   ?/10
Two-Pointer Comparison:          ?/10
Flag Strategy:                   ?/10
Early Exit:                      ?/10
Direct Return:                   ?/10
Reverse-Based Approach:          ?/10
Odd Length Handling:             ?/10
Even Length Handling:            ?/10
Case Sensitivity:                ?/10
Time Complexity:                 ?/10
Space Complexity:                ?/10
Pattern Recognition:             ?/10
Bug Detection:                   ?/10
```
````

---

# 🧪 Chapter 9 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

Palindrome কী?

---

## Question 2

Palindrome-এর core relationship কী?

```text
First ↔ ?
Second ↔ ?
```

---

## Question 3

Two-Pointer Palindrome Check-এ:

```text
left = ?
right = ?
```

---

## Question 4

Current Pair কীভাবে compare করবে?

---

## Question 5

একটি Mismatch পাওয়া গেলে কী সিদ্ধান্ত নেওয়া যায়?

---

## Question 6

Flag Strategy-তে initial value সাধারণত কী হবে?

```text
isPalindrome = ?
```

---

## Question 7

Mismatch হলে:

```text
isPalindrome = ?
```

---

## Question 8

`break` কেন ব্যবহার করা হয়?

---

## Question 9

Palindrome Check-এর common loop condition কী?

---

## Question 10

Odd Length String-এর Middle Character compare করা জরুরি?

---

## Question 11

Even Length String-এ pointers কীভাবে শেষ হয়?

---

## Question 12

Single Character String Palindrome কি না?

---

## Question 13

`Level` simple case-sensitive comparison-এ Palindrome হবে?

কেন?

---

## Question 14

Two-Pointer Palindrome-এর Time Complexity কী?

---

## Question 15

Two-Pointer Palindrome-এর Extra Space Complexity কী?

---

## Question 16

Reverse-Copy Approach-এর Extra Space Complexity কী?

---

## Question 17

Reverse এবং Palindrome Two-Pointer Pattern-এর operation difference কী?

---

## Question 18

এই Code-এ Bug কী?

```c
int right = length;
```

---

## Question 19

এই Code কেন dangerous?

```c
if (isPalindrome = 1)
```

---

## Question 20

Problem Statement বলল:

> Compare characters symmetrically from both ends.

কোন Pattern চিনবে?

---

# 🐞 Chapter 9 Mistake Checklist

```text
[ ] Palindrome Definition বুঝি

[ ] Forward এবং Backward same হওয়া বুঝি

[ ] Symmetry Mental Model বুঝি

[ ] Opposite Pair চিনতে পারি

[ ] First ↔ Last relationship বুঝি

[ ] Opposite Index Formula মনে আছে

[ ] Two-Pointer Pattern চিনতে পারি

[ ] left = 0 initialize করি

[ ] right = length - 1 initialize করি

[ ] str[left] এবং str[right] compare করি

[ ] == এবং != সঠিকভাবে ব্যবহার করি

[ ] Mismatch-এর meaning বুঝি

[ ] One Mismatch is Enough বুঝি

[ ] Flag Strategy বুঝি

[ ] isPalindrome = 1 কেন বুঝি

[ ] Mismatch-এ isPalindrome = 0 করি

[ ] Early Exit বুঝি

[ ] break ব্যবহার বুঝি

[ ] Direct Return Strategy বুঝি

[ ] Pointer movement ভুলে যাই না

[ ] left++ করি

[ ] right-- করি

[ ] Infinite Loop avoid করি

[ ] left < right condition বুঝি

[ ] Odd Length handle করতে পারি

[ ] Even Length handle করতে পারি

[ ] Single Character case বুঝি

[ ] Two Character edge case test করি

[ ] Case Sensitivity বুঝি

[ ] Space-containing Input সম্পর্কে সচেতন

[ ] scanf("%s") limitation বুঝি

[ ] fgets() newline issue সম্পর্কে জানি

[ ] Reverse-Based Approach বুঝি

[ ] Reversed Array null-terminate করি

[ ] strcmp() == 0 মানে equal বুঝি

[ ] Two Pointer vs Reverse Copy compare করতে পারি

[ ] O(n) Time Mental Model বুঝি

[ ] O(1) Extra Space বুঝি

[ ] O(n) Extra Array Space বুঝি

[ ] Reverse Problem এবং Palindrome Problem আলাদা চিনতে পারি

[ ] Swap-Based এবং Compare-Based Two Pointer আলাদা বুঝি

[ ] Problem Statement থেকে Pattern চিনতে পারি
```

---

# 🧠 Chapter 9 Pattern Library Update

তোমার `core_pattern.md`-এ নিচের Section add করতে পারো:

````markdown
# 🔍 Palindrome & Symmetric Comparison Patterns

## 1. Palindrome Mental Model

```text
Forward Sequence
==
Backward Sequence
```

Deeper Model:

```text
First == Last
Second == Second Last
Third == Third Last
...
```

---

## 2. Symmetric Pair Pattern

```text
L →               ← R
```

For each pair:

```text
Compare
↓
Match?
│
├── No  → Failure
└── Yes → Move Inward
```

---

## 3. Two-Pointer Palindrome

Initialization:

```c
int left = 0;
int right = length - 1;
```

Loop:

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        // Not Palindrome
    }

    left++;
    right--;
}
```

---

## 4. Flag Strategy

```text
Assume Valid
↓
Search for Violation
↓
Violation Found?
│
├── Yes → Mark Invalid
└── No  → Keep Valid
```

```c
int isPalindrome = 1;
```

On mismatch:

```c
isPalindrome = 0;
```

---

## 5. Early Exit Pattern

```text
Final Answer Known?
↓
Stop Unnecessary Work
```

Palindrome:

```c
if (str[left] != str[right])
{
    isPalindrome = 0;
    break;
}
```

---

## 6. Direct Return Pattern

```text
Search for Failure
↓
Failure Found?
↓
Return False Immediately
```

```c
int isPalindrome(char str[])
{
    int length = strlen(str);

    int left = 0;
    int right = length - 1;

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

---

## 7. Reverse-Based Palindrome

```text
Original
↓
Create Reverse
↓
Compare
↓
Same?
├── Yes → Palindrome
└── No  → Not Palindrome
```

Properties:

```text
Time: O(n)
Extra Space: O(n)
```

---

## 8. Two-Pointer Palindrome Complexity

```text
Time: O(n)
Extra Space: O(1)
```

---

## 9. Reverse vs Palindrome

### Reverse

```text
Current Pair
↓
SWAP
↓
Move Inward
```

### Palindrome

```text
Current Pair
↓
COMPARE
↓
Mismatch?
↓
Decision
↓
Move Inward
```

---

## 10. Pattern Selection

```text
Need to modify opposite positions?
↓
Two Pointer + Swap
```

```text
Need to compare opposite positions?
↓
Two Pointer + Compare
```

```text
Need only reversed output?
↓
Backward Traversal
```

```text
Need separate reversed copy?
↓
Result Array
```

---

## 11. Palindrome Control Questions

Before coding ask:

```text
What characters are allowed?

Is comparison case-sensitive?

Are spaces significant?

Are symbols significant?

Where does left start?

Where does right start?

What creates failure?

Can I stop immediately on failure?

How do pointers move?

When does processing stop?
```

---

## 12. Core Palindrome Flow

```text
Find Length
↓
left = 0
right = length - 1
↓
Assume Palindrome
↓
Compare Current Pair
↓
Mismatch?
│
├── Yes
│     ↓
│   Not Palindrome
│     ↓
│   Stop
│
└── No
      ↓
   left++
   right--
      ↓
   Repeat
↓
No Mismatch
↓
Palindrome
```
````

---

# 🏁 Chapter 9 Completion Checklist

```text
[ ] Palindrome কী বুঝি

[ ] Palindrome এবং Reverse-এর relationship বুঝি

[ ] Symmetry বুঝি

[ ] Opposite Pair বুঝি

[ ] Opposite Index Formula বুঝি

[ ] Manual Palindrome Dry Run করতে পারি

[ ] Two-Pointer Palindrome Pattern বুঝি

[ ] left initialize করতে পারি

[ ] right initialize করতে পারি

[ ] Pair Comparison করতে পারি

[ ] Mismatch detect করতে পারি

[ ] One Mismatch Rule বুঝি

[ ] Flag Variable বুঝি

[ ] Flag initialize করতে পারি

[ ] Flag update করতে পারি

[ ] Early Exit বুঝি

[ ] break ব্যবহার করতে পারি

[ ] Direct Return Strategy বুঝি

[ ] Function-based solution বুঝি

[ ] Reverse-Based Approach বুঝি

[ ] strcmp() basic use বুঝি

[ ] Reversed String null-terminate করতে পারি

[ ] Two Approaches compare করতে পারি

[ ] Odd Length handle করতে পারি

[ ] Even Length handle করতে পারি

[ ] Single Character case বুঝি

[ ] Two Character case বুঝি

[ ] Case Sensitivity বুঝি

[ ] Space handling-এর issue বুঝি

[ ] Symbol handling-এর concept বুঝি

[ ] Input Constraint check করার habit তৈরি হয়েছে

[ ] O(n) Time বুঝি

[ ] O(1) Extra Space বুঝি

[ ] O(n) Extra Space বুঝি

[ ] Common Bugs চিনতে পারি

[ ] Edge Cases design করতে পারি

[ ] Pattern Recognition করতে পারি

[ ] Exercises complete করেছি

[ ] Assignment complete করেছি

[ ] Pattern Library update করেছি

[ ] Reflection লিখেছি
```

---

# 🎓 Chapter 9 Final Mental Model

Chapter 8-এ আমরা শিখেছিলাম:

```text
Two Ends
↓
Current Pair
↓
Swap
↓
Move Inward
```

Chapter 9-এ:

```text
Two Ends
↓
Current Pair
↓
Compare
↓
Mismatch?
```

এখন তোমার Two-Pointer Mental Model expand হয়েছে:

```text
Two Pointer
│
├── Swap-Based
│   │
│   └── Reverse
│
└── Compare-Based
    │
    └── Palindrome
```

Palindrome Problem দেখলে তোমার চিন্তা হবে:

```text
Palindrome
↓
Symmetry
↓
Opposite Pairs
↓
Left + Right
↓
Compare
↓
Mismatch?
```

তারপর:

```text
Mismatch Found
↓
Not Palindrome
↓
Early Exit
```

অথবা:

```text
All Pairs Matched
↓
Palindrome
```

সবচেয়ে গুরুত্বপূর্ণ Visual:

```text
r a c e c a r
↑           ↑
L           R
      =
      ↓

r a c e c a r
  ↑       ↑
  L       R
      =
      ↓

r a c e c a r
    ↑   ↑
    L   R
      =
      ↓

No Mismatch
↓
PALINDROME
```

আর Not Palindrome:

```text
a b c x a
↑       ↑
L       R
    =
    ↓

a b c x a
  ↑   ↑
  L   R
    ≠
    ↓

NOT PALINDROME
↓
STOP
```

Chapter 9-এর সবচেয়ে গুরুত্বপূর্ণ Pattern:

```text
Assume Valid
↓
Search for Violation
↓
Violation Found?
│
├── Yes → Fail Early
└── No  → Continue
↓
No Violation Found
↓
Valid
```

এই Pattern শুধু Palindrome-এ সীমাবদ্ধ না।

Future-এ এটি কাজে লাগবে:

```text
Is Array Sorted?
```

```text
Are All Elements Positive?
```

```text
Does Every Character Follow a Rule?
```

```text
Are Two Sequences Compatible?
```

```text
Is a Structure Valid?
```

অর্থাৎ Chapter 9 থেকে তুমি শুধু Palindrome শিখছো না।

তুমি শিখছো:

```text
Validation Pattern
```

এর deeper structure:

```text
Assume Valid
↓
Inspect
↓
Find Counterexample
↓
Reject Early
```

---

# 🗺️ Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ✅ Chapter 7 — String Transformation
│
├── ✅ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ✅ Chapter 9 — Palindrome Pattern
│
├── ⏳ Chapter 10 — Common Bugs, Edge Cases & Problem Session
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

**Day 3 — Chapter 9 Complete.**

পরের Chapter:

```text
Day 3 — Chapter 10
Common Bugs, Edge Cases & Problem Solving Session
```

Chapter 10-এ নতুন Theory কম থাকবে। মূল কাজ হবে Day 3-এর সব String Pattern একসঙ্গে Problem-এর মধ্যে চিনতে শেখা:

```text
Problem Statement
↓
Input Type
↓
String Traversal?
│
├── Count?
├── Search?
├── Frequency?
├── Transform?
├── Reverse?
└── Palindrome?
↓
Choose State
↓
Choose Pattern
↓
Dry Run
↓
Code
↓
Test Edge Cases
```

অর্থাৎ Chapter 1–9 পর্যন্ত শেখা জিনিসগুলোকে আমরা **isolated lesson** থেকে **actual problem-solving system**-এ convert করব।

---

# 📘 Day 3 — Chapter 10

# 🧪 Common Bugs, Edge Cases & String Problem Solving Session

## Debugging System, Edge-Case Design, Pattern Selection, Dry Run, Mixed String Problems এবং Contest Thinking

Chapter 1 থেকে Chapter 9 পর্যন্ত আমরা String-এর অনেকগুলো গুরুত্বপূর্ণ Pattern শিখেছি।

এখন পর্যন্ত আমাদের Journey:

```text
String Mental Model
↓
Input / Output
↓
Traversal
↓
Character Classification
↓
Counting
↓
Search
↓
Frequency
↓
Transformation
↓
Reverse
↓
Two Pointer
↓
Palindrome
```

কিন্তু একটা সমস্যা আছে।

আলাদা আলাদা Chapter পড়ার সময় তুমি জানো:

```text
এই Chapter Counting নিয়ে
```

তাই তুমি আগে থেকেই জানো:

```text
Counter লাগবে
```

আবার Palindrome Chapter-এ Problem দেখলে আগে থেকেই জানো:

```text
Two Pointer লাগবে
```

কিন্তু Contest-এ কেউ বলবে না:

```text
এই Problem-এ Traversal Pattern ব্যবহার করো।
```

বা:

```text
এই Problem-এ Frequency Array লাগবে।
```

Contest-এ তুমি শুধু Problem Statement পাবে।

তারপর তোমাকেই বের করতে হবে:

```text
Problem কী চাইছে?
↓
Input কী?
↓
Output কী?
↓
কী Information Track করতে হবে?
↓
কোন Pattern লাগবে?
↓
কোন State লাগবে?
↓
কোন Edge Case আছে?
↓
Code কীভাবে লিখব?
```

এই Chapter-এর মূল উদ্দেশ্য এখানেই।

---

# 🎯 Chapter Mission

এই Chapter শেষে তুমি পারবে:

* String Problem দেখেই Requirement আলাদা করতে;
* Input এবং Output ঠিকভাবে identify করতে;
* Problem Statement থেকে Keyword ধরতে;
* Traversal, Counting, Search, Frequency, Transformation, Reverse এবং Palindrome Pattern আলাদা করতে;
* এক Problem-এ একাধিক Pattern combine করতে;
* প্রয়োজনীয় State নির্বাচন করতে;
* Code লেখার আগে Algorithm তৈরি করতে;
* Dry Run করতে;
* নিজের Test Case বানাতে;
* Edge Case চিনতে;
* Off-by-One Error detect করতে;
* `'\0'` সম্পর্কিত Bug ধরতে;
* `scanf()` এবং `fgets()`-এর Input Bug বুঝতে;
* Newline Bug fix করতে;
* Character Classification Bug চিনতে;
* Counter Reset Bug ধরতে;
* Frequency Array Initialization Bug বুঝতে;
* Reverse এবং Palindrome-এর ভুল Pattern Selection avoid করতে;
* Infinite Loop detect করতে;
* Wrong Boundary Bug চিনতে;
* Sample Test-এর বাইরে চিন্তা করতে;
* Wrong Answer হলে systematic debugging করতে;
* Contest-এ String Problem solve করার একটি fixed workflow follow করতে।

---

# 📖 Chapter Map

```text
Day 3 — Chapter 10
│
├── Part 1  — From Learning Patterns to Solving Problems
├── Part 2  — String Pattern Decision System
├── Part 3  — State Selection System
├── Part 4  — Common Input Bugs
├── Part 5  — Traversal & Boundary Bugs
├── Part 6  — Counting & Classification Bugs
├── Part 7  — Search & Frequency Bugs
├── Part 8  — Transformation Bugs
├── Part 9  — Reverse & Palindrome Bugs
├── Part 10 — Edge Case Engineering
├── Part 11 — Debugging Workflow
├── Part 12 — Guided Problem Solving Session
├── Part 13 — Mixed Pattern Problems
├── Part 14 — Contest Simulation
├── Part 15 — Exercises
└── Part 16 — Assignment & Reflection
```

---

# 🧠 Chapter 10 Master Mental Model

আজ থেকে কোনো String Problem দেখলে সরাসরি Code লিখবে না।

তোমার Mental Flow হবে:

```text
Read Problem
↓
What is the Input?
↓
What is the Required Output?
↓
What exactly must be discovered or changed?
↓
Choose Pattern
↓
Choose State
↓
Write Algorithm
↓
Dry Run
↓
Code
↓
Test Sample
↓
Build Edge Cases
↓
Debug if Needed
↓
Submit
```

Short Version:

```text
Understand
↓
Pattern
↓
State
↓
Algorithm
↓
Dry Run
↓
Code
↓
Test
↓
Submit
```

এটাই আজকের Chapter-এর সবচেয়ে গুরুত্বপূর্ণ System।

---

# Part 1 — From Learning Patterns to Solving Problems

# Lesson 1 — Pattern জানা এবং Problem Solve করা এক জিনিস না

ধরো তুমি জানো:

```text
Traversal
Counting
Search
Frequency
Transformation
Two Pointer
```

এগুলো জানা ভালো।

কিন্তু Problem Solve করতে আরও একটি Skill দরকার:

```text
Pattern Selection
```

অর্থাৎ:

> কোন Problem-এ কোন Pattern ব্যবহার করতে হবে?

Example:

### Problem A

> Count the number of vowels in a string.

তোমার চিন্তা:

```text
Need to inspect every character
↓
Traversal
```

তারপর:

```text
Need to count matching characters
↓
Counter
```

Final Pattern:

```text
Traversal
+
Classification
+
Counting
```

---

### Problem B

> Find whether character `x` exists in the string.

Thinking:

```text
Need to inspect characters
↓
Traversal
```

```text
Need to find target
↓
Search
```

Final:

```text
Traversal
+
Search
+
Early Exit
```

---

### Problem C

> Convert all lowercase letters to uppercase.

Thinking:

```text
Need to visit every character
↓
Traversal
```

```text
Need to modify characters
↓
Transformation
```

Final:

```text
Traversal
+
Classification
+
Transformation
```

---

### Problem D

> Check whether the string reads the same forward and backward.

Thinking:

```text
Need opposite positions
↓
Two Pointer
```

```text
Need comparison
↓
Palindrome Pattern
```

Final:

```text
Two Pointer
+
Symmetric Comparison
+
Early Exit
```

---

# Lesson 2 — Problem-এর Surface Story Ignore করতে শেখো

একই Pattern বিভিন্ন Story-এর মধ্যে আসতে পারে।

Problem 1:

> Count vowels.

Problem 2:

> Count uppercase letters.

Problem 3:

> Count digits.

Problem 4:

> Count occurrences of `a`.

Problem 5:

> Count special symbols.

দেখতে পাঁচটি Problem।

কিন্তু Structure:

```text
Traverse
↓
Check Condition
↓
Condition True?
↓
Increment Counter
```

একই।

Core Pattern:

```text
Conditional Counting
```

এই Skill CP-তে অত্যন্ত গুরুত্বপূর্ণ।

তোমার লক্ষ্য:

```text
Story
↓
Remove Story
↓
Find Structure
↓
Recognize Pattern
```

---

# Lesson 3 — Problem Statement ভাঙার ৪টি Question

প্রতিটি Problem-এ চারটি Question করবে।

## Question 1 — Input কী?

Example:

```text
Single word?
Full line?
Multiple strings?
String + target character?
String + number?
```

---

## Question 2 — Output কী?

Example:

```text
Count?
Index?
YES/NO?
Modified String?
Reversed String?
Frequency?
```

---

## Question 3 — Need কী?

Example:

```text
Visit?
Count?
Find?
Compare?
Modify?
Build?
```

---

## Question 4 — State কী?

Example:

```text
counter
index
flag
frequency array
left
right
result array
```

Mental Model:

```text
Input
↓
Required Output
↓
Operation
↓
State
↓
Pattern
```

---

# Lesson 4 — Output Type থেকে Pattern Guess করা

অনেক সময় Output দেখেও Pattern-এর clue পাওয়া যায়।

| Required Output       | Possible Pattern                 |
| --------------------- | -------------------------------- |
| Number of something   | Counting                         |
| Sum                   | Accumulation                     |
| YES / NO              | Flag / Validation                |
| Position              | Search + Index                   |
| Modified String       | Transformation                   |
| Reverse String        | Backward Traversal / Two Pointer |
| Character Frequencies | Frequency Array                  |
| Palindrome or Not     | Two Pointer + Compare            |

এটি absolute rule না।

কিন্তু Beginner হিসেবে useful clue।

---

# Part 2 — String Pattern Decision System

# Lesson 5 — Master Decision Tree

String Problem দেখলে এই Decision Tree ব্যবহার করবে:

```text
String Problem
│
├── Need to inspect characters?
│       ↓
│     Traversal
│
├── Need number of matches?
│       ↓
│     Counting
│
├── Need to locate something?
│       ↓
│     Search
│
├── Need occurrence count for many characters?
│       ↓
│     Frequency
│
├── Need to change characters?
│       ↓
│     Transformation
│
├── Need reverse order?
│       ↓
│     Reverse Pattern
│
└── Need opposite-side comparison?
        ↓
      Two Pointer
        ↓
      Palindrome / Symmetry
```

---

# Lesson 6 — Traversal Pattern Recognition

Problem says:

```text
Print every character
```

or:

```text
Inspect each character
```

or:

```text
Process all characters
```

or:

```text
Calculate something based on the string
```

Think:

```text
Traversal
```

Basic Skeleton:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process str[i]
}
```

Alternative:

```c
int length = strlen(str);

for (int i = 0; i < length; i++)
{
    // process str[i]
}
```

---

# Lesson 7 — Counting Pattern Recognition

Keywords:

```text
How many
Number of
Count
Total occurrences
```

Think:

```text
Counter
```

Pattern:

```text
counter = 0
↓
Traverse
↓
Condition True?
│
├── Yes → counter++
└── No  → continue
↓
Print counter
```

Skeleton:

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

---

# Lesson 8 — Search Pattern Recognition

Keywords:

```text
Find
Exists
Contains
First occurrence
Last occurrence
Position
Index
```

Think:

```text
Search
```

Possible State:

```text
flag
```

or:

```text
index
```

Example:

```c
int index = -1;
```

Meaning:

```text
Not Found Yet
```

---

# Lesson 9 — Frequency Pattern Recognition

Problem asks:

```text
How many times does each character appear?
```

or:

```text
Most frequent character
```

or:

```text
Frequency of every lowercase letter
```

Think:

```text
Frequency Array
```

Mental Model:

```text
Character
↓
Map to Index
↓
Increment Bucket
```

For lowercase letters:

```text
'a' → 0
'b' → 1
'c' → 2
...
'z' → 25
```

Mapping:

```c
str[i] - 'a'
```

Update:

```c
freq[str[i] - 'a']++;
```

---

# Lesson 10 — Transformation Pattern Recognition

Keywords:

```text
Convert
Replace
Change
Transform
Toggle
Remove
```

Think:

```text
Traversal
+
Condition
+
Modification
```

Example:

```text
lowercase → uppercase
```

Flow:

```text
Traverse
↓
Is Lowercase?
↓
Yes
↓
Convert
```

---

# Lesson 11 — Reverse Pattern Recognition

Keywords:

```text
Reverse
Backward
Opposite order
Last to first
```

Possible approaches:

```text
Backward Traversal
```

or:

```text
Result Array
```

or:

```text
Two Pointer + Swap
```

Selection depends on Requirement।

---

# Lesson 12 — Palindrome Pattern Recognition

Keywords:

```text
Palindrome
Same forward and backward
Symmetric
Mirror
Compare both ends
```

Think:

```text
Two Pointer
+
Compare
+
Early Exit
```

---

# Part 3 — State Selection System

# Lesson 13 — Pattern চিনলাম, এবার State কী?

Pattern জানলেই Code complete না।

তোমাকে State select করতে হবে।

State মানে:

> Processing-এর সময় কোন Information remember করতে হবে?

---

# Lesson 14 — State Table

| Need             | State              |
| ---------------- | ------------------ |
| Count            | `count`            |
| Sum              | `sum`              |
| Found or Not     | `flag`             |
| Position         | `index`            |
| Character counts | `freq[]`           |
| Two ends         | `left`, `right`    |
| New String       | `result[]`         |
| Current best     | `max`, `min`, etc. |

---

# Lesson 15 — Example: Count Vowels

Need:

```text
How many vowels?
```

State:

```text
count
```

Not needed:

```text
left
right
frequency array
result array
```

Mental Model:

```text
Need One Number
↓
One Counter
```

---

# Lesson 16 — Example: Character Exists?

Need:

```text
YES or NO
```

State:

```text
found
```

Initialization:

```c
int found = 0;
```

When found:

```c
found = 1;
```

Pattern:

```text
Assume Not Found
↓
Search
↓
Target Found?
↓
Update State
↓
Stop
```

---

# Lesson 17 — Example: First Occurrence

Need:

```text
Index
```

State:

```c
int index = -1;
```

Why `-1`?

Valid String Index:

```text
0 to length - 1
```

So:

```text
-1
```

can represent:

```text
Not Found
```

---

# Lesson 18 — Example: Character Frequency

Need:

```text
Count for many characters
```

One Counter enough না।

Need:

```text
Multiple Counters
```

Efficient structure:

```c
int freq[26] = {0};
```

Mental Model:

```text
One Character
↓
One Bucket
```

---

# Lesson 19 — Example: Palindrome

Need:

```text
Compare Opposite Positions
```

State:

```text
left
right
```

Optional:

```text
isPalindrome
```

So:

```text
Need Two Boundaries
↓
Two Pointer State
```

---

# Part 4 — Common Input Bugs

# Lesson 20 — Input Bug কেন Dangerous?

তোমার Algorithm perfect হতে পারে।

কিন্তু Input ভুল পড়লে:

```text
Correct Algorithm
+
Wrong Input
=
Wrong Answer
```

String Problem-এ Input Bug খুব common।

---

# 🐞 Bug 1 — `%s` দিয়ে Full Line পড়া

Input:

```text
I love C programming
```

Code:

```c
char str[100];

scanf("%s", str);
```

Stored:

```text
I
```

কারণ `%s` whitespace পর্যন্ত পড়ে।

---

## Fix

Full Line হলে:

```c
fgets(str, sizeof(str), stdin);
```

---

# Lesson 21 — Word vs Line

Problem Input:

```text
programming
```

Use:

```c
scanf("%99s", str);
```

Problem Input:

```text
I love programming
```

Use:

```c
fgets(str, sizeof(str), stdin);
```

Rule:

```text
Single Token
↓
scanf("%s")
```

```text
Spaces Included
↓
fgets()
```

---

# 🐞 Bug 2 — `fgets()` Newline

Input:

```text
hello
```

Possible stored characters:

```text
h e l l o \n \0
```

তুমি যদি length বের করো:

```c
strlen(str)
```

তাহলে expected:

```text
5
```

কিন্তু পেতে পারো:

```text
6
```

কারণ newline-ও Character।

---

## Fix Pattern

```c
str[strcspn(str, "\n")] = '\0';
```

Mental Model:

```text
Find Newline Position
↓
Replace with Null Terminator
```

---

# 🐞 Bug 3 — `scanf()` তারপর `fgets()`

Example:

```c
int n;
char str[100];

scanf("%d", &n);
fgets(str, sizeof(str), stdin);
```

Problem:

`scanf()`-এর পরে Input Buffer-এ newline থাকতে পারে।

তখন `fgets()` সেই newline পড়ে নিতে পারে।

Result:

```text
Empty-looking String
```

এই Mixed Input Situation-এ extra careful হতে হবে।

---

# 🐞 Bug 4 — Unsafe Width

Instead of:

```c
scanf("%s", str);
```

যদি array size:

```c
char str[100];
```

তাহলে safer form:

```c
scanf("%99s", str);
```

কারণ শেষ position:

```text
'\0'
```

এর জন্য রাখতে হবে।

---

# Part 5 — Traversal & Boundary Bugs

# 🐞 Bug 5 — Null Terminator Process করা

Suppose:

```text
hello
```

Memory conceptually:

```text
h e l l o \0
0 1 2 3 4 5
```

Valid visible Character:

```text
Index 0 to 4
```

`str[5]`:

```text
'\0'
```

তাই:

```c
for (int i = 0; i < strlen(str); i++)
```

visible characters process করে।

আর:

```c
for (int i = 0; str[i] != '\0'; i++)
```

এটাও visible characters process করে।

---

# 🐞 Bug 6 — `<= length`

Wrong:

```c
for (int i = 0; i <= length; i++)
```

এটি process করবে:

```text
0 ... length
```

যেখানে:

```text
str[length] = '\0'
```

Most normal character processing-এর জন্য:

```c
i < length
```

use করবে।

---

# Lesson 22 — Off-by-One Error

Off-by-One Error মানে:

> Boundary এক position বেশি বা কম হয়ে যাওয়া।

Example:

```text
Length = 5
```

Valid indices:

```text
0 1 2 3 4
```

Wrong right boundary:

```text
5
```

Correct:

```text
4
```

Formula:

```text
Last Index = Length - 1
```

---

# 🐞 Bug 7 — Wrong Start Index

Wrong:

```c
for (int i = 1; str[i] != '\0'; i++)
```

যদি পুরো String process করতে হয়, তাহলে index `0` skip হয়ে যাচ্ছে।

Correct:

```c
for (int i = 0; str[i] != '\0'; i++)
```

---

# 🐞 Bug 8 — Missing Increment

```c
int i = 0;

while (str[i] != '\0')
{
    printf("%c", str[i]);
}
```

Problem:

```text
i never changes
```

Result:

```text
Infinite Loop
```

Correct:

```c
i++;
```

---

# 🐞 Bug 9 — Increment Wrong Variable

```c
int i = 0;
int count = 0;

while (str[i] != '\0')
{
    if (str[i] == 'a')
    {
        count++;
    }

    count++;
}
```

এখানে `i` change হচ্ছে না।

Need:

```c
i++;
```

Debugging Question:

```text
What controls loop progress?
```

---

# Part 6 — Counting & Classification Bugs

# 🐞 Bug 10 — Counter Initialize না করা

Wrong:

```c
int count;
```

তারপর:

```c
count++;
```

Problem:

`count`-এর initial value undefined।

Correct:

```c
int count = 0;
```

Mental Rule:

```text
Counting Starts From Zero
```

---

# 🐞 Bug 11 — Counter Wrong Place-এ Initialize করা

Wrong:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    int count = 0;

    if (str[i] == 'a')
    {
        count++;
    }
}
```

প্রতিটি iteration-এ:

```text
count resets to 0
```

Correct:

```c
int count = 0;

for (...)
{
    ...
}
```

---

# 🐞 Bug 12 — Wrong OR Condition

Suppose vowel check:

Wrong:

```c
if (str[i] == 'a' &&
    str[i] == 'e' &&
    str[i] == 'i' &&
    str[i] == 'o' &&
    str[i] == 'u')
```

একটি Character একই সাথে:

```text
'a'
AND
'e'
AND
'i'
```

হতে পারে না।

Need:

```c
if (str[i] == 'a' ||
    str[i] == 'e' ||
    str[i] == 'i' ||
    str[i] == 'o' ||
    str[i] == 'u')
```

Mental Model:

```text
Is it A OR E OR I OR O OR U?
```

---

# 🐞 Bug 13 — Lowercase Range ভুল

Correct:

```c
if (str[i] >= 'a' && str[i] <= 'z')
```

Wrong logic:

```c
if (str[i] >= 'a' || str[i] <= 'z')
```

Range Check সাধারণত:

```text
Lower Bound
AND
Upper Bound
```

So:

```text
x >= low
AND
x <= high
```

---

# Lesson 23 — Classification Questions

প্রতিটি Character-এর জন্য তুমি Question করতে পারো:

```text
Is Lowercase?
Is Uppercase?
Is Digit?
Is Vowel?
Is Target?
Is Space?
```

Then:

```text
Condition
↓
Action
```

Example:

```text
Is Digit?
↓
Yes
↓
digitCount++
```

---

# Part 7 — Search & Frequency Bugs

# 🐞 Bug 14 — Search-এ Wrong Initial Index

First occurrence search:

Wrong:

```c
int index = 0;
```

Problem:

Target না পাওয়া গেলেও `0` output হতে পারে।

কিন্তু `0` valid index।

Better:

```c
int index = -1;
```

Meaning:

```text
Not Found
```

---

# 🐞 Bug 15 — First Occurrence-এ `break` না দেওয়া

String:

```text
banana
```

Target:

```text
a
```

Indices:

```text
1
3
5
```

Code:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
    }
}
```

Final:

```text
5
```

এটি Last Occurrence।

First Occurrence চাইলে:

```c
if (str[i] == target)
{
    index = i;
    break;
}
```

---

# Lesson 24 — First vs Last Occurrence

## First Occurrence

```text
Find Match
↓
Save Index
↓
Stop
```

## Last Occurrence

```text
Find Match
↓
Save Index
↓
Continue
↓
Later Match overwrites previous index
```

এই difference মনে রাখবে।

---

# 🐞 Bug 16 — Frequency Array Initialize না করা

Wrong:

```c
int freq[26];
```

তারপর:

```c
freq[index]++;
```

Problem:

Initial values undefined।

Correct:

```c
int freq[26] = {0};
```

---

# 🐞 Bug 17 — Wrong Frequency Mapping

For lowercase:

```c
int index = str[i] - 'a';
```

Example:

```text
'c' - 'a' = 2
```

Wrong:

```c
freq[str[i]]++;
```

এটি অন্য ধরনের larger ASCII-based frequency array-এর ক্ষেত্রে valid হতে পারে, কিন্তু `freq[26]` হলে unsafe।

কারণ `'a'`-এর character code 0–25 range-এর মধ্যে নয়।

---

# 🐞 Bug 18 — Character Type Validate না করে Mapping

Suppose:

```c
freq[str[i] - 'a']++;
```

কিন্তু String-এ আছে:

```text
A
1
#
```

তাহলে index invalid হতে পারে।

তাই Problem যদি only lowercase guarantee না করে:

```text
Classify
↓
Then Map
```

---

# Part 8 — Transformation Bugs

# Lesson 25 — Transformation-এর Core Structure

```text
Traverse
↓
Classify
↓
Transform
↓
Store
```

Transformation দুইভাবে হতে পারে:

```text
In-Place
```

or:

```text
Result Array
```

---

# 🐞 Bug 19 — Wrong ASCII Direction

Lowercase to Uppercase:

Conceptually:

```text
'a' → 'A'
```

Formula:

```c
str[i] = str[i] - 'a' + 'A';
```

Uppercase to Lowercase:

```c
str[i] = str[i] - 'A' + 'a';
```

Direction mix করলে wrong result হবে।

---

# 🐞 Bug 20 — Classification ছাড়া Transform

Suppose:

```c
str[i] = str[i] - 'a' + 'A';
```

সব Character-এর উপর apply করলে digit বা uppercase Character corrupt হতে পারে।

Need:

```c
if (str[i] >= 'a' && str[i] <= 'z')
{
    str[i] = str[i] - 'a' + 'A';
}
```

---

# 🐞 Bug 21 — Result String Null-Terminate না করা

Suppose:

```c
char result[100];

for (int i = 0; i < length; i++)
{
    result[i] = str[i];
}
```

Need:

```c
result[length] = '\0';
```

যখন manually নতুন C String বানাবে, Null Terminator নিয়ে সচেতন থাকবে।

---

# Part 9 — Reverse & Palindrome Bugs

# 🐞 Bug 22 — Reverse-এ Wrong Opposite Index

Correct:

```text
length - 1 - i
```

Wrong:

```text
length - i
```

Example:

```text
Length = 5
i = 0
```

Wrong:

```text
5 - 0 = 5
```

কিন্তু last character index:

```text
4
```

Correct:

```text
5 - 1 - 0 = 4
```

---

# 🐞 Bug 23 — In-Place Reverse-এ Full Length Loop

Suppose:

```c
for (int i = 0; i < length; i++)
{
    swap(str[i], str[length - 1 - i]);
}
```

Problem:

প্রথম half reverse করবে।

তারপর second half আবার swap করে original order ফিরিয়ে আনতে পারে।

Need:

```text
Process Each Pair Once
```

Two Pointer better:

```c
while (left < right)
```

---

# 🐞 Bug 24 — Palindrome-এ Swap করা

Palindrome Problem:

```text
Need Check
```

Operation:

```text
Compare
```

Reverse Problem:

```text
Need Change
```

Operation:

```text
Swap
```

Decision:

```text
Opposite Ends
↓
Need Modify?
├── Yes → Swap
└── No, Need Validate → Compare
```

---

# 🐞 Bug 25 — Wrong Palindrome Right Boundary

Wrong:

```c
int right = length;
```

Correct:

```c
int right = length - 1;
```

কারণ:

```text
str[length] = '\0'
```

---

# 🐞 Bug 26 — Palindrome Flag Wrong Initialization

Wrong:

```c
int isPalindrome = 0;
```

যদি logic হয়:

```text
Assume Valid
↓
Search for Mismatch
```

তাহলে initial:

```c
int isPalindrome = 1;
```

Mismatch:

```c
isPalindrome = 0;
```

---

# 🐞 Bug 27 — Two Pointers Move না করা

```c
while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }
}
```

Matching Pair হলে:

```text
Same Pair
↓
Again
↓
Again
↓
Infinite Loop
```

Need:

```c
left++;
right--;
```

---

# Part 10 — Edge Case Engineering

# Lesson 26 — Edge Case কী?

Edge Case হলো এমন Input যা:

```text
Normal-looking Input না
```

কিন্তু Problem Constraint-এর মধ্যে valid।

Example:

Normal:

```text
hello
```

Edge Cases:

```text
a
```

```text
aa
```

```text
aaaaa
```

```text
ABCDE
```

```text
12345
```

```text
a1B2#
```

Problem অনুযায়ী Edge Case আলাদা হবে।

---

# Lesson 27 — Sample Test যথেষ্ট না

Problem দেয়:

```text
Input:
hello

Output:
5
```

তুমি Code লিখে sample pass করলে তার মানে শুধু:

```text
One Test Passed
```

তার মানে এই না:

```text
Solution Correct
```

Professional Habit:

```text
Sample
+
Own Tests
+
Edge Cases
```

---

# Lesson 28 — Universal String Edge Case Checklist

String Problem solve করার পরে ভাববে:

```text
1. Minimum Length?
2. Single Character?
3. Two Characters?
4. All Same Characters?
5. No Matching Character?
6. Every Character Matches?
7. Match at First Position?
8. Match at Last Position?
9. Mixed Case?
10. Digits?
11. Spaces?
12. Special Symbols?
13. Odd Length?
14. Even Length?
15. Maximum Length?
```

সব Problem-এ সব Test দরকার হবে না।

Problem অনুযায়ী relevant Test বেছে নেবে।

---

# Lesson 29 — Counting Edge Cases

Problem:

> Count vowels.

Tests:

### No Vowel

```text
rhythm
```

Expected:

```text
0
```

### All Vowels

```text
aeiou
```

Expected:

```text
5
```

### One Character

```text
a
```

Expected:

```text
1
```

### One Non-Vowel

```text
z
```

Expected:

```text
0
```

### Repeated

```text
aaaaa
```

Expected:

```text
5
```

---

# Lesson 30 — Search Edge Cases

Problem:

> Find first occurrence of `x`.

Tests:

### At Beginning

```text
xabc
```

Expected:

```text
0
```

### At End

```text
abcx
```

Expected:

```text
3
```

### Multiple Matches

```text
xaxax
```

Expected first:

```text
0
```

### Not Found

```text
abcd
```

Expected:

```text
-1
```

---

# Lesson 31 — Palindrome Edge Cases

Tests:

```text
a
```

Palindrome।

```text
aa
```

Palindrome।

```text
ab
```

Not Palindrome।

```text
aba
```

Palindrome।

```text
abba
```

Palindrome।

```text
abca
```

Not Palindrome।

এখানে cover হচ্ছে:

```text
Single
Even
Odd
Immediate Mismatch
Inner Mismatch
```

---

# Lesson 32 — Edge Case Design Formula

Problem-এর Rule নিয়ে Question করো:

```text
What if condition never happens?
```

```text
What if condition always happens?
```

```text
What if it happens at first position?
```

```text
What if it happens at last position?
```

```text
What if input is minimum size?
```

```text
What if all values are same?
```

এই Questions থেকেই Test Case বের হবে।

---

# Part 11 — Debugging Workflow

# Lesson 33 — Wrong Answer হলে Random Change করবে না

Beginner Debugging:

```text
Wrong Answer
↓
Change Something
↓
Run
↓
Still Wrong
↓
Change Another Thing
```

এটি dangerous।

Better:

```text
Wrong Answer
↓
Find Small Failing Input
↓
Write Expected Output
↓
Dry Run Code
↓
Find First Wrong State
↓
Fix Cause
↓
Retest
```

---

# Lesson 34 — Debugging-এর ৭-Step System

```text
Step 1 — Reproduce the Bug
↓
Step 2 — Create Small Input
↓
Step 3 — Write Expected Output
↓
Step 4 — Track Variables
↓
Step 5 — Find First Divergence
↓
Step 6 — Fix Root Cause
↓
Step 7 — Run Old + New Tests
```

---

# Lesson 35 — Variable Tracking Table

Suppose vowel counting wrong।

Input:

```text
apple
```

Table:

|  `i` | `str[i]` | Is Vowel? | Count Before | Count After |
| ---: | -------- | --------- | -----------: | ----------: |
|    0 | a        | Yes       |            0 |           1 |
|    1 | p        | No        |            1 |           1 |
|    2 | p        | No        |            1 |           1 |
|    3 | l        | No        |            1 |           1 |
|    4 | e        | Yes       |            1 |           2 |

Expected:

```text
2
```

এভাবে Dry Run করলে Bug সহজে ধরা যায়।

---

# Lesson 36 — Search Debug Table

Input:

```text
banana
```

Target:

```text
a
```

First Occurrence expected:

```text
1
```

|  `i` | Char | Match? | Index Before | Action       | Index After |
| ---: | ---- | ------ | -----------: | ------------ | ----------: |
|    0 | b    | No     |           -1 | Continue     |          -1 |
|    1 | a    | Yes    |           -1 | Save + Break |           1 |

যদি তোমার Code continue করে:

```text
1 → 3 → 5
```

তাহলে তুমি বুঝবে:

```text
Missing Early Exit
```

---

# Lesson 37 — Palindrome Debug Table

Input:

```text
abca
```

| Step | Left | Right | Pair  | Match? | Action |
| ---: | ---: | ----: | ----- | ------ |
|    1 |    0 |     3 | a / a | Yes    | Move   |
|    2 |    1 |     2 | b / c | No     | Fail   |

যদি Code Palindrome বলে, inspect:

```text
Comparison operator?
Flag update?
Break?
Final condition?
```

---

# Lesson 38 — Print Debugging

Learning stage-এ temporary debug print ব্যবহার করতে পারো।

Example:

```c
printf("i = %d, char = %c, count = %d\n",
       i, str[i], count);
```

Palindrome:

```c
printf("left = %d, right = %d, %c vs %c\n",
       left, right, str[left], str[right]);
```

কিন্তু Submit করার আগে debug output remove করবে।

কারণ Online Judge exact output expect করে।

---

# Lesson 39 — Compiler Warning Ignore করবে না

Compile:

```bash
gcc -Wall -Wextra program.c -o program
```

এতে useful warning পাওয়া যায়।

Mental Rule:

```text
Compilation Success
≠
Code Definitely Correct
```

Warning থাকলে পড়বে।

বিশেষ করে:

```text
unused variable
assignment in condition
format mismatch
uninitialized variable
```

এগুলো Bug-এর clue হতে পারে।

---

# Part 12 — Guided Problem Solving Session

# Problem 1 — Count Vowels

## Problem

একটি lowercase word দেওয়া হবে।

কতটি vowel আছে print করো।

Example:

```text
Input:
education

Output:
5
```

---

## Step 1 — Input

```text
One String
```

---

## Step 2 — Output

```text
One Number
```

---

## Step 3 — Need

```text
Inspect Every Character
+
Check Vowel
+
Count Matches
```

---

## Step 4 — Pattern

```text
Traversal
+
Classification
+
Counting
```

---

## Step 5 — State

```text
count
```

---

## Step 6 — Algorithm

```text
Read String
↓
count = 0
↓
Traverse Characters
↓
Current Character Is Vowel?
│
├── Yes → count++
└── No  → continue
↓
Print count
```

---

## Step 7 — Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
```

---

## Step 8 — Tests

```text
aeiou → 5
```

```text
xyz → 0
```

```text
a → 1
```

```text
z → 0
```

---

# Problem 2 — Find First Occurrence

## Problem

একটি String এবং একটি target character দেওয়া হবে।

Target-এর first index print করো।

না পাওয়া গেলে:

```text
-1
```

---

## Pattern Recognition

Need:

```text
Find Target
```

Pattern:

```text
Search
```

Need:

```text
First Match
```

Pattern:

```text
Early Exit
```

Need output:

```text
Index
```

State:

```text
index
```

---

## Algorithm

```text
index = -1
↓
Traverse
↓
Current Character == Target?
│
├── Yes
│     ↓
│   index = i
│     ↓
│   break
│
└── No
      ↓
   continue
↓
Print index
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char target;

    scanf("%99s", str);
    scanf(" %c", &target);

    int index = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}
```

Notice:

```c
scanf(" %c", &target);
```

`%c`-এর আগে space আছে।

এটি previous whitespace skip করতে সাহায্য করে।

---

# Problem 3 — Count Uppercase, Lowercase and Digits

## Problem

একটি String দেওয়া হবে।

Count:

```text
Uppercase
Lowercase
Digits
```

---

## Need

একটি Character একাধিক Category-এর একটিতে যেতে পারে।

State:

```text
uppercaseCount
lowercaseCount
digitCount
```

Pattern:

```text
Traversal
+
Classification
+
Multiple Counters
```

---

## Algorithm

```text
Initialize 3 Counters
↓
Traverse
↓
Current Character?
│
├── Uppercase → uppercaseCount++
├── Lowercase → lowercaseCount++
├── Digit     → digitCount++
└── Other     → Ignore
↓
Print Results
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);

    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercaseCount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowercaseCount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;
        }
    }

    printf("Uppercase: %d\n", uppercaseCount);
    printf("Lowercase: %d\n", lowercaseCount);
    printf("Digits: %d\n", digitCount);

    return 0;
}
```

---

# Problem 4 — Toggle Case

Input:

```text
AbCdeF
```

Output:

```text
aBcDEf
```

---

## Pattern

```text
Traversal
+
Classification
+
Transformation
```

---

## Decision

```text
Lowercase?
├── Yes → Uppercase
└── No
      ↓
   Uppercase?
   ├── Yes → Lowercase
   └── No  → Keep Same
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("%s\n", str);

    return 0;
}
```

---

# Problem 5 — Character Frequency

## Problem

একটি lowercase String দেওয়া হবে।

প্রতিটি used Character কতবার এসেছে print করো।

Input:

```text
banana
```

Expected concept:

```text
a 3
b 1
n 2
```

---

## Pattern

```text
Traversal
+
Mapping
+
Frequency Array
```

---

## State

```c
int freq[26] = {0};
```

---

## Update

```c
freq[str[i] - 'a']++;
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};

    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
```

---

# Problem 6 — Reverse String In-Place

## Need

```text
Modify Original String
```

Pattern:

```text
Two Pointer
+
Swap
```

---

## Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("%s\n", str);

    return 0;
}
```

---

# Problem 7 — Palindrome Check

## Need

```text
Validate Symmetry
```

Pattern:

```text
Two Pointer
+
Compare
+
Early Exit
```

---

## Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%99s", str);

    int left = 0;
    int right = strlen(str) - 1;

    int isPalindrome = 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            isPalindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
```

---

# Part 13 — Mixed Pattern Problems

# Lesson 40 — এক Problem-এ একাধিক Pattern

Actual Problem-এ অনেক সময় Pattern combine হবে।

Example:

> Count how many times the most frequent lowercase character appears.

Need:

```text
Build Frequencies
↓
Find Maximum Frequency
```

Patterns:

```text
Traversal
+
Frequency
+
Maximum
```

এখানে Day 2 এবং Day 3 connect হচ্ছে।

---

# Mixed Problem 1 — Most Frequent Character

Input:

```text
banana
```

Frequency:

```text
a → 3
b → 1
n → 2
```

Answer:

```text
a
```

---

## Pattern Breakdown

Phase 1:

```text
String Traversal
+
Frequency Counting
```

Phase 2:

```text
Array Traversal
+
Maximum Pattern
```

Full:

```text
String
↓
Build Frequency Array
↓
Traverse Frequency Array
↓
Find Maximum
↓
Convert Index Back to Character
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};

    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    int maxFreq = freq[0];
    int maxIndex = 0;

    for (int i = 1; i < 26; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxIndex = i;
        }
    }

    printf("%c\n", 'a' + maxIndex);

    return 0;
}
```

---

# Lesson 41 — Tie Behaviour বুঝতে হবে

Input:

```text
aabb
```

Frequency:

```text
a → 2
b → 2
```

Code:

```c
if (freq[i] > maxFreq)
```

Tie-এ update করবে না।

তাই earlier character থাকবে।

কিন্তু:

```c
if (freq[i] >= maxFreq)
```

Tie-এ update করবে।

তাই later character আসতে পারে।

এই ছোট operator difference Answer change করতে পারে।

Problem Statement পড়বে:

```text
If multiple answers exist, print lexicographically smallest
```

নাকি:

```text
print largest
```

নাকি:

```text
print any
```

---

# Mixed Problem 2 — Count Distinct Lowercase Characters

Input:

```text
banana
```

Used characters:

```text
a
b
n
```

Answer:

```text
3
```

---

## Pattern

```text
Build Frequency
↓
Traverse Frequency Array
↓
Count freq[i] > 0
```

Combined:

```text
Frequency
+
Conditional Counting
```

---

## Code

```c
#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};

    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    int distinct = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            distinct++;
        }
    }

    printf("%d\n", distinct);

    return 0;
}
```

---

# Mixed Problem 3 — Is Every Character Unique?

Input:

```text
abcd
```

Output:

```text
YES
```

Input:

```text
abca
```

Output:

```text
NO
```

---

## Approach 1

```text
Frequency
↓
Any Frequency > 1?
↓
NO
```

Pattern:

```text
Frequency
+
Validation
+
Early Exit
```

---

## Mental Model

```text
Assume Unique
↓
Build Frequencies
↓
Search for freq > 1
↓
Found?
├── Yes → Not Unique
└── No  → Unique
```

---

# Mixed Problem 4 — Count Palindromic Words? Conceptual Preview

Suppose multiple words দেওয়া হলো।

প্রতিটি Word-এর জন্য:

```text
Palindrome Check
```

Then:

```text
If Palindrome
↓
Count++
```

Combined Pattern:

```text
Outer Repetition
+
Palindrome Validation
+
Counting
```

এখনই complex implementation দরকার নেই।

শুধু Pattern Combination বুঝো।

---

# Part 14 — Contest Simulation

# Lesson 42 — Problem দেখার পর প্রথম ৫ মিনিট

ধরো Contest-এ একটি String Problem এলো।

তুমি এভাবে কাজ করবে:

## Minute 0–1

Problem read।

Identify:

```text
Input
Output
Constraints
```

---

## Minute 1–2

নিজের ভাষায় Problem লিখো:

```text
আমাকে আসলে কী বের করতে হবে?
```

Example:

```text
Every character visit করে vowels count করতে হবে।
```

---

## Minute 2–3

Pattern লিখো:

```text
Traversal + Classification + Counting
```

State:

```text
count
```

---

## Minute 3–4

একটা Sample manually dry run।

---

## Minute 4–5

Edge Cases:

```text
No vowel
All vowel
Single character
```

তারপর Code।

---

# Lesson 43 — Coding-এর আগে ৩০-Second Checklist

```text
Input word নাকি line?

Array size enough?

Counter initialized?

Index initialized?

Loop boundary correct?

Need break?

Need '\0'?

Need left and right?

Case-sensitive?

Spaces possible?
```

---

# Lesson 44 — Submission-এর আগে Checklist

```text
[ ] Debug prints removed

[ ] Exact output format

[ ] Sample passed

[ ] Minimum case tested

[ ] No-match case tested

[ ] All-match case tested

[ ] Boundary tested

[ ] Compiler warnings checked

[ ] Correct file submitted
```

---

# Lesson 45 — Wrong Answer এলে Contest Workflow

```text
WA
↓
Do not rewrite immediately
↓
Check Output Format
↓
Check Input Handling
↓
Check Boundary
↓
Check Initialization
↓
Check Condition
↓
Check Update
↓
Check Edge Cases
↓
Create Small Failing Test
↓
Dry Run
```

Common order:

```text
Input
↓
Boundary
↓
Condition
↓
Update
↓
Output
```

---

# 🧠 The Five-Part Loop Debug Model

যেকোনো Loop Bug debug করতে পাঁচটি Question:

```text
1. Initialization correct?

2. Condition correct?

3. Current element correct?

4. State update correct?

5. Progress update correct?
```

Example:

```c
int i = 0;                  // Initialization

while (str[i] != '\0')      // Condition
{
    if (str[i] == 'a')      // Current Element + Decision
    {
        count++;            // State Update
    }

    i++;                    // Progress Update
}
```

এই ৫টি point check করলে অনেক Bug ধরতে পারবে।

---

# Part 15 — Exercises

# Exercise 1 — Pattern Identification

প্রতিটি Problem-এর Pattern লিখো।

### A

Count digits in a string.

```text
Pattern:
...
```

### B

Find first uppercase letter.

```text
Pattern:
...
```

### C

Convert lowercase to uppercase.

```text
Pattern:
...
```

### D

Print string backward.

```text
Pattern:
...
```

### E

Check palindrome.

```text
Pattern:
...
```

### F

Find most frequent character.

```text
Pattern:
...
```

### G

Count distinct characters.

```text
Pattern:
...
```

---

# Exercise 2 — State Selection

Fill:

| Problem                 | State Needed |
| ----------------------- | ------------ |
| Count vowels            |              |
| Find first `x`          |              |
| Character exists?       |              |
| Frequency of letters    |              |
| Palindrome              |              |
| Build reversed copy     |              |
| Most frequent character |              |

---

# Exercise 3 — Find Input Bug

```c
char str[100];

scanf("%s", str);
```

Input:

```text
I love C
```

Answer:

```text
What is actually stored?
...

Why?
...

Correct input method:
...
```

---

# Exercise 4 — Find Boundary Bug

```c
int length = strlen(str);

for (int i = 0; i <= length; i++)
{
    printf("%c", str[i]);
}
```

Explain:

```text
Valid visible index range:
...

What is str[length]?
...

Correct condition:
...
```

---

# Exercise 5 — Counter Bug

```c
for (int i = 0; str[i] != '\0'; i++)
{
    int count = 0;

    if (str[i] == 'a')
    {
        count++;
    }
}
```

Explain:

```text
Bug:
...

Why:
...

Fix:
...
```

---

# Exercise 6 — Search Bug

```c
int index = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
    }
}
```

Questions:

```text
Problem 1:
...

Problem 2:
...

If first occurrence is needed:
...

Correct initial value:
...
```

---

# Exercise 7 — Frequency Bug

```c
int freq[26];

for (int i = 0; str[i] != '\0'; i++)
{
    freq[str[i] - 'a']++;
}
```

Find:

```text
Bug:
...

Fix:
...
```

---

# Exercise 8 — Reverse Bug

```c
for (int i = 0; i < length; i++)
{
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
}
```

Explain:

```text
What happens?
...

Why?
...

Better stopping condition:
...
```

---

# Exercise 9 — Palindrome Bug Hunt

```c
int left = 0;
int right = length;

int isPalindrome = 1;

while (left < right)
{
    if (str[left] == str[right])
    {
        isPalindrome = 0;
        break;
    }

    left++;
}
```

Find all Bugs।

Format:

```text
Bug 1:
...

Fix:
...

Bug 2:
...

Fix:
...

Bug 3:
...

Fix:
...
```

---

# Exercise 10 — Build Edge Cases

Problem:

> Count lowercase letters.

Create:

```text
Normal Case:
...

No Match Case:
...

All Match Case:
...

Single Character Match:
...

Single Character No Match:
...

Mixed Character Case:
...
```

---

# Exercise 11 — Search Edge Cases

Problem:

> Find first occurrence of `a`.

Create Test for:

```text
Target at beginning:
...

Target at middle:
...

Target at end:
...

Multiple targets:
...

Target absent:
...

Single-character found:
...

Single-character absent:
...
```

---

# Exercise 12 — Dry Run

Input:

```text
aB3cdE9
```

Task:

Count:

```text
Uppercase
Lowercase
Digits
```

Fill:

| Index | Char | Category | Upper | Lower | Digit |
| ----: | ---- | -------- | ----: | ----: | ----: |
|     0 |      |          |       |       |       |
|     1 |      |          |       |       |       |
|     2 |      |          |       |       |       |
|     3 |      |          |       |       |       |
|     4 |      |          |       |       |       |
|     5 |      |          |       |       |       |
|     6 |      |          |       |       |       |

Final:

```text
Uppercase:
Lowercase:
Digits:
```

---

# Exercise 13 — Frequency Dry Run

Input:

```text
abacaba
```

Fill:

```text
freq[a] = ...
freq[b] = ...
freq[c] = ...
```

Then:

```text
Most Frequent Character:
...

Maximum Frequency:
...

Distinct Characters:
...
```

---

# Exercise 14 — Mixed Pattern Identification

Problem:

> Find the most frequent vowel in a lowercase string.

Think:

```text
Need Traverse?
...

Need Classification?
...

Need Frequency?
...

Need Maximum?
...
```

Final Pattern Chain:

```text
...
↓
...
↓
...
↓
...
```

Code এখন লিখতে হবে না।

শুধু Pattern decomposition।

---

# Exercise 15 — Debugging Table

Buggy Program `banana`-তে first `a` খুঁজছে কিন্তু output `5` দিচ্ছে।

Create Table:

|  `i` | Char | Match? | Index Before | Index After |
| ---: | ---- | ------ | -----------: | ----------: |
|    0 |      |        |              |             |
|    1 |      |        |              |             |
|    2 |      |        |              |             |
|    3 |      |        |              |             |
|    4 |      |        |              |             |
|    5 |      |        |              |             |

Then answer:

```text
Why output becomes 5?
...

What line/keyword is missing?
...
```

---

# Exercise 16 — Choose Correct Pattern

Options:

```text
A. Traversal + Counter
B. Search + Early Exit
C. Frequency Array
D. Two Pointer + Swap
E. Two Pointer + Compare
F. Traversal + Transformation
```

Match:

```text
Count vowels → ?

Find first x → ?

Character frequency → ?

Reverse in-place → ?

Palindrome → ?

Toggle case → ?
```

---

# Exercise 17 — Five-Part Loop Analysis

Code:

```c
int i = 0;
int count = 0;

while (str[i] != '\0')
{
    if (str[i] >= '0' && str[i] <= '9')
    {
        count++;
    }

    i++;
}
```

Identify:

```text
Initialization:
...

Condition:
...

Current Element:
...

State Update:
...

Progress Update:
...
```

---

# Exercise 18 — Problem Decomposition

Problem:

> Given a lowercase string, print the number of distinct characters and the most frequent character.

Do not code.

Write:

```text
Input:
...

Required Output 1:
...

Required Output 2:
...

Phase 1 Pattern:
...

Phase 2 Pattern:
...

Phase 3 Pattern:
...

State Needed:
...

Edge Cases:
...
```

---

# Part 16 — Chapter Assignment

# 📝 Task 1 — String Pattern Decision Sheet

নিজের ভাষায় নিচের Table complete করবে:

| Problem Signal    | Pattern | State | Early Exit? |
| ----------------- | ------- | ----- | ----------- |
| How many          |         |       |             |
| Exists?           |         |       |             |
| First occurrence  |         |       |             |
| Frequency of each |         |       |             |
| Convert           |         |       |             |
| Reverse in-place  |         |       |             |
| Palindrome        |         |       |             |
| Most frequent     |         |       |             |

---

# 📝 Task 2 — Bug Dictionary

তোমার Notes-এ Section বানাবে:

```text
String Bug Dictionary
```

এই Bugs explain করবে:

```text
Off-by-One Error
Wrong Boundary
Missing Null Terminator
Counter Reset Bug
Uninitialized Counter
Wrong OR/AND
Missing Break
Wrong Search Sentinel
Frequency Initialization Bug
Invalid Character Mapping
Missing Pointer Movement
Infinite Loop
Wrong Right Pointer
Assignment vs Comparison
scanf vs fgets Problem
fgets Newline Problem
```

Format:

````markdown
## Bug Name

### What It Means

...

### Buggy Example

```c
...
```

### Why It Fails

...

### Correct Version

```c
...
```

### Mental Rule

```text
...
```
````

---

# 📝 Task 3 — Solve 7 Core Problems

Files:

```text
01_count_vowels.c
02_first_occurrence.c
03_character_types.c
04_toggle_case.c
05_character_frequency.c
06_reverse_string.c
07_palindrome_check.c
```

প্রতিটি File-এর শুরুতে:

```c
/*
Problem:

Input:

Output:

Pattern:

State:

Edge Cases:

Time Complexity:

Extra Space:
*/
```

---

# 📝 Task 4 — Mixed Pattern Problems

Files:

```text
08_distinct_characters.c
09_most_frequent_character.c
10_all_characters_unique.c
```

প্রতিটির জন্য Code-এর আগে Markdown-এ লিখবে:

```text
Problem
↓
Requirement
↓
Pattern 1
↓
Pattern 2
↓
State
↓
Algorithm
↓
Edge Cases
```

---

# 📝 Task 5 — Test Case Sheet

এই Problems-এর জন্য নিজের Test Case তৈরি করবে:

```text
Count Vowels
First Occurrence
Toggle Case
Frequency
Reverse
Palindrome
Most Frequent Character
```

প্রতিটির জন্য minimum:

```text
1 Normal Test
1 Minimum Test
1 No-Match Test
1 All-Match Test
1 Boundary Test
```

যেখানে relevant না, সেখানে explain করবে কেন relevant না।

---

# 📝 Task 6 — Bug Hunting Challenge

নিচের Code fix করবে:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    scanf("%s", str);

    int length = strlen(str);

    int vowelCount;
    int firstA = 0;

    for (int i = 0; i <= length; i++)
    {
        if (str[i] == 'a' &&
            str[i] == 'e' &&
            str[i] == 'i' &&
            str[i] == 'o' &&
            str[i] == 'u')
        {
            vowelCount++;
        }

        if (str[i] == 'a')
        {
            firstA = i;
        }
    }

    printf("Vowels: %d\n", vowelCount);
    printf("First a: %d\n", firstA);

    return 0;
}
```

Find:

```text
Input Safety Issue
Counter Initialization Bug
Loop Boundary Bug
Vowel Logic Bug
First Occurrence Initialization Bug
Missing Early Exit Problem
```

Important:

`break` সরাসরি main loop-এ দিলে vowel counting অসম্পূর্ণ হয়ে যেতে পারে।

তাই চিন্তা করবে:

```text
এক Loop-এ দুইটি কাজ করলে
Early Exit দেওয়া safe কি না?
```

এটি খুব গুরুত্বপূর্ণ Mixed Pattern Thinking।

---

# 📝 Task 7 — Explain the Mixed Loop Problem

ধরো একই Loop:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // Count all vowels

    // Find first 'a'
}
```

যদি first `'a'` পেয়ে:

```c
break;
```

করো, তাহলে কী সমস্যা হতে পারে?

Explain:

```text
Search Goal:
...

Counting Goal:
...

Why Early Exit Conflicts:
...

Possible Solution:
...
```

Hint:

```text
One task may be complete
while another task is incomplete.
```

---

# 📝 Task 8 — Contest Workflow লিখবে

নিজের ভাষায়:

```text
Problem Open
↓
...
↓
...
↓
...
↓
Code
↓
...
↓
...
↓
Submit
```

Minimum steps:

```text
Read
Understand
Identify Input
Identify Output
Pattern
State
Algorithm
Dry Run
Code
Sample Test
Edge Cases
Submit
```

---

# 📝 Task 9 — Pattern Recognition Drill

নিচের Problems-এর Code লিখবে না।

শুধু Pattern identify করবে।

### Problem A

Count all digits.

### Problem B

Find last occurrence of `x`.

### Problem C

Find first vowel.

### Problem D

Convert every uppercase letter to lowercase.

### Problem E

Count each lowercase character.

### Problem F

Find least frequent used character.

### Problem G

Reverse a string in-place.

### Problem H

Check whether a string is palindrome.

### Problem I

Count distinct digits.

### Problem J

Check whether any character appears more than once.

Format:

```text
Problem:
...

Primary Pattern:
...

Secondary Pattern:
...

State:
...

Early Exit:
Yes / No / Depends

Reason:
...
```

---

# 📝 Task 10 — Manual Debugging Session

তোমার লেখা আগের String Programs থেকে যেকোনো ৩টি নাও।

প্রতিটির জন্য intentionally একটি Bug add করো।

Example:

```text
Wrong Boundary
Missing Increment
Wrong Flag
Wrong Counter Initialization
Missing Null Terminator
```

তারপর:

```text
1. Run Program
2. Observe Failure
3. Create Small Failing Input
4. Dry Run
5. Find First Wrong State
6. Fix
7. Retest
```

Report:

````markdown
# Debugging Report

## Program

...

## Bug Introduced

...

## Failing Input

```text
...
```

## Expected Output

```text
...
```

## Actual Output

```text
...
```

## First Wrong State

...

## Root Cause

...

## Fix

...

## Lesson Learned

...
````

---

# 📝 Task 11 — Mini Contest

Time Limit:

```text
60 Minutes
```

Problems:

```text
A — Count Vowels
B — Find First Occurrence
C — Toggle Case
D — Character Frequency
E — Reverse String
F — Palindrome Check
```

Rules:

```text
No Copilot
No AI
No Solution Search
Notes allowed only for first 10 minutes
Compile from Terminal
Test with own input
```

Suggested Order:

```text
A
↓
B
↓
C
↓
E
↓
F
↓
D
```

Track:

| Problem | Start Time | Finish Time | Wrong Attempts | Bugs Found |
| ------- | ---------- | ----------- | -------------: | ---------- |
| A       |            |             |                |            |
| B       |            |             |                |            |
| C       |            |             |                |            |
| D       |            |             |                |            |
| E       |            |             |                |            |
| F       |            |             |                |            |

Goal:

```text
Speed না
↓
Clean Pattern Recognition
+
Correct Implementation
+
Testing Habit
```

---

# 📝 Task 12 — Chapter Reflection

Copy-Paste Version:

````markdown
# 🧠 Day 3 — Chapter 10 Reflection

## 1. My Problem-Solving Workflow

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

## 2. How I Identify a Pattern

...

---

## 3. Traversal Pattern

### Signal Words

...

### State

...

---

## 4. Counting Pattern

### Signal Words

...

### State

...

### Common Bug

...

---

## 5. Search Pattern

### Signal Words

...

### First Occurrence Strategy

...

### Last Occurrence Strategy

...

---

## 6. Frequency Pattern

### Mental Model

```text
...
↓
...
↓
...
```

### State

```c
...
```

---

## 7. Transformation Pattern

...

---

## 8. Reverse Pattern

...

---

## 9. Palindrome Pattern

...

---

## 10. My State Selection Model

| Need          | State |
| ------------- | ----- |
| Count         |       |
| Search Result |       |
| Position      |       |
| Frequencies   |       |
| Two Ends      |       |
| New String    |       |

---

## 11. Input Bugs I Learned

1. ...
2. ...
3. ...

---

## 12. Boundary Bugs I Learned

1. ...
2. ...
3. ...

---

## 13. Counting Bugs I Learned

1. ...
2. ...
3. ...

---

## 14. Search Bugs I Learned

1. ...
2. ...
3. ...

---

## 15. Frequency Bugs I Learned

1. ...
2. ...
3. ...

---

## 16. Two-Pointer Bugs I Learned

1. ...
2. ...
3. ...

---

## 17. Edge Case Mental Model

```text
Minimum?
...

No Match?
...

All Match?
...

First Position?
...

Last Position?
...

Odd / Even?
...
```

---

## 18. My Debugging Workflow

```text
Wrong Answer
↓
...
↓
...
↓
...
↓
...
↓
Fixed
```

---

## 19. Five-Part Loop Debug Model

```text
1.
2.
3.
4.
5.
```

---

## 20. Hardest Bug for Me

...

---

## 21. Pattern I Recognize Fastest

...

---

## 22. Pattern I Need More Practice With

...

---

## 23. Mini Contest Result

```text
Problems Attempted:
...

Problems Solved:
...

Wrong Attempts:
...

Most Common Bug:
...

Average Time Per Problem:
...
```

---

## 24. Confidence Score

```text
String Traversal:              ?/10
Character Classification:      ?/10
Counting:                      ?/10
Search:                        ?/10
First Occurrence:              ?/10
Last Occurrence:               ?/10
Frequency Array:               ?/10
Transformation:                ?/10
Reverse:                       ?/10
Two Pointer:                   ?/10
Palindrome:                    ?/10
Pattern Selection:             ?/10
State Selection:               ?/10
Dry Run:                       ?/10
Edge Case Design:              ?/10
Bug Detection:                 ?/10
Debugging:                     ?/10
Contest Workflow:              ?/10
```
````

---

# 🧪 Chapter 10 Mini Test

Notes বন্ধ করে Answer করবে।

## Question 1

String Problem solve করার আগে প্রথম কাজ কী?

---

## Question 2

Problem asks:

> How many digits are in the string?

কোন Patterns লাগবে?

---

## Question 3

Problem asks:

> Does `x` exist?

কোন State useful?

---

## Question 4

First Occurrence-এর জন্য initial index কত হতে পারে?

কেন?

---

## Question 5

First Occurrence পেলে কেন `break` useful?

---

## Question 6

Frequency Array কেন initialize করতে হয়?

---

## Question 7

Lowercase Character Mapping Formula কী?

---

## Question 8

`freq[26]` ব্যবহার করলে input character validate করার দরকার কখন?

---

## Question 9

`scanf("%s")` full sentence কেন পড়তে পারে না?

---

## Question 10

`fgets()`-এর common extra character issue কী?

---

## Question 11

Last visible character index-এর formula কী?

---

## Question 12

এই Loop-এ সমস্যা কী?

```c
for (int i = 0; i <= length; i++)
```

---

## Question 13

Counter Loop-এর ভিতরে initialize করলে কী হয়?

---

## Question 14

Range Check-এ সাধারণত `&&` কেন লাগে?

---

## Question 15

Reverse এবং Palindrome-এর Pair Operation difference কী?

---

## Question 16

Two Pointer loop-এ pointer movement না করলে কী হতে পারে?

---

## Question 17

Edge Case-এর ৫টি category বলো।

---

## Question 18

Sample Pass মানেই Solution Correct?

কেন?

---

## Question 19

Wrong Answer হলে প্রথমে পুরো Code rewrite করা উচিত?

না হলে কী করবে?

---

## Question 20

Five-Part Loop Debug Model-এর পাঁচটি অংশ কী?

---

## Question 21

Most Frequent Character Problem-এ কোন দুইটি major Pattern combine হয়?

---

## Question 22

Distinct Character Count-এ Frequency-এর পরে কোন Pattern লাগে?

---

## Question 23

একই Loop-এ Vowel Count এবং First `'a'` Search করলে `'a'` পাওয়ার পর `break` করা dangerous কেন?

---

## Question 24

Problem asks:

> Convert every lowercase letter to uppercase.

Pattern Chain কী?

---

## Question 25

Contest Submission-এর আগে minimum কী কী check করবে?

---

# 🐞 Chapter 10 Master Bug Checklist

```text
[ ] Input word নাকি line check করি

[ ] scanf এবং fgets difference বুঝি

[ ] fgets newline সম্পর্কে জানি

[ ] Mixed scanf + fgets issue সম্পর্কে জানি

[ ] Input width safety বুঝি

[ ] strlen visible length কী বুঝি

[ ] str[length] = '\0' বুঝি

[ ] Last Index = length - 1 মনে আছে

[ ] < এবং <= boundary difference বুঝি

[ ] Loop start index check করি

[ ] Loop progress update করি

[ ] Infinite Loop detect করতে পারি

[ ] Counter initialize করি

[ ] Counter loop-এর বাইরে initialize করি

[ ] OR এবং AND logic বুঝি

[ ] Character range check সঠিকভাবে করি

[ ] Search sentinel হিসেবে -1 বুঝি

[ ] First occurrence-এ break ব্যবহার বুঝি

[ ] Last occurrence-এ continue করা বুঝি

[ ] Frequency Array zero initialize করি

[ ] Character mapping formula বুঝি

[ ] Invalid mapping avoid করি

[ ] Transformation-এর আগে classification করি

[ ] New String null-terminate করি

[ ] Reverse opposite index formula বুঝি

[ ] Reverse pair একবার process করি

[ ] Palindrome-এ compare করি

[ ] Reverse-এ swap করি

[ ] left এবং right update করি

[ ] Flag correct value দিয়ে initialize করি

[ ] Assignment এবং Comparison difference বুঝি

[ ] Sample-এর বাইরে Test করি

[ ] Minimum Input Test করি

[ ] No-Match Test করি

[ ] All-Match Test করি

[ ] First Position Test করি

[ ] Last Position Test করি

[ ] Odd Length Test করি

[ ] Even Length Test করি

[ ] Wrong Answer-এ small failing input বানাই

[ ] Variable Tracking Table বানাতে পারি

[ ] Debug Print ব্যবহার করতে পারি

[ ] Submit-এর আগে Debug Print remove করি

[ ] Compiler Warning check করি

[ ] Exact Output Format check করি
```

---

# 🧠 Pattern Integration Map

Day 2 এবং Day 3 এখন connect হচ্ছে।

```text
Problem
│
├── Numbers / Arrays
│   │
│   ├── Traversal
│   ├── Accumulation
│   ├── Counting
│   ├── Maximum
│   ├── Minimum
│   └── Searching
│
└── Strings
    │
    ├── Traversal
    ├── Classification
    ├── Counting
    ├── Search
    ├── Frequency
    ├── Transformation
    ├── Reverse
    └── Palindrome
```

কিন্তু আসল বিষয় হলো—এগুলো সম্পূর্ণ আলাদা জিনিস না।

Example:

```text
Array Traversal
```

এবং:

```text
String Traversal
```

দুটোর deeper structure:

```text
Sequence
↓
Visit Elements One by One
↓
Process Current Element
```

---

# 🧠 Unified Problem-Solving Model

```text
Problem
↓
What data structure?
│
├── Number
├── Array
└── String
↓
What operation?
│
├── Traverse
├── Count
├── Accumulate
├── Search
├── Compare
├── Modify
└── Build
↓
What state?
│
├── Counter
├── Accumulator
├── Flag
├── Index
├── Frequency Array
├── Left / Right
└── Result Array
↓
What stopping condition?
↓
What edge cases?
↓
Code
↓
Test
```

---

# 🧠 Chapter 10 Final Mental Model

এখন পর্যন্ত তুমি হয়তো Problem দেখলে ভাবতে:

```text
আমি Code কীভাবে লিখব?
```

এখন থেকে প্রথম Question হবে না:

```text
Code কী?
```

প্রথম Question হবে:

```text
Problem আসলে কী চাইছে?
```

তারপর:

```text
Need
↓
Pattern
↓
State
↓
Algorithm
↓
Code
```

Example:

```text
Count Vowels
↓
Need inspect every character
↓
Traversal
↓
Need identify vowels
↓
Classification
↓
Need number of matches
↓
Counter
```

Final:

```text
Traversal
+
Classification
+
Counting
```

আর:

```text
Check Palindrome
↓
Need compare opposite positions
↓
Two Pointer
↓
Need validate pairs
↓
Comparison
↓
One mismatch enough
↓
Early Exit
```

Final:

```text
Two Pointer
+
Symmetric Comparison
+
Early Exit
```

---

# 🔥 The Most Important Debugging Model

Code wrong হলে:

```text
Don't Guess
↓
Find Failing Input
↓
Dry Run
↓
Track State
↓
Find First Wrong State
↓
Fix Root Cause
↓
Retest
```

আর Loop-এর জন্য:

```text
Initialization
↓
Condition
↓
Current Element
↓
State Update
↓
Progress Update
```

এই পাঁচটি check করবে।

---

# 🏁 Day 3 Progress

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ✅ Chapter 7 — String Transformation
│
├── ✅ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ✅ Chapter 9 — Palindrome Pattern
│
├── ✅ Chapter 10 — Common Bugs, Edge Cases & Problem Solving Session
│
└── ⏳ Chapter 11 — Pattern Library Update, Assignment & Reflection
```

# 🎯 Day 3 — Chapter 10 Complete

এখন Day 3-এর নতুন Theory এবং core String Problem-Solving অংশ প্রায় complete।

পরের Chapter:

```text
Day 3 — Chapter 11
Pattern Library Update
+
Final Assignment
+
Mini Contest Review
+
Day 3 Reflection
+
Day 4 Readiness Check
```

Chapter 11-এ নতুন String Theory যোগ না করে Day 3-এর সবকিছু consolidate করা হবে:

```text
String Problem
↓
Recognize Pattern
↓
Select State
↓
Write Algorithm
↓
Dry Run
↓
Implement
↓
Test
↓
Debug
↓
Document Pattern
```

এবং Day 3 শেষে তোমার `Pattern_Library/core_pattern.md`, assignment structure, problem folders, mistake log এবং contest-readiness checklist—সব একসঙ্গে update করার মতো করে সাজানো হবে।

---

# 📘 Day 3 — Chapter 11

# 🏁 Pattern Library Update, Final Assignment, Mini Contest Review & Day 3 Reflection

## From **“I Learned String”** to **“I Can Solve Basic String Problems”**

---

# 🎯 Chapter Mission

Day 3-এর Chapter 1 থেকে Chapter 10 পর্যন্ত আমরা String-এর Core Foundation শিখেছি।

আজকের Chapter নতুন Theory শেখানোর জন্য না।

এই Chapter-এর কাজ হলো:

```text
Learned Concepts
↓
Organize
↓
Practice
↓
Test
↓
Find Weakness
↓
Fix Weakness
↓
Document Patterns
↓
Prepare for Day 4
```

Day 3 শেষে তোমার কাছে শুধু কিছু Notes থাকবে না।

তোমার কাছে থাকবে:

```text
Knowledge
+
Code
+
Pattern Library
+
Mistake Log
+
Test Cases
+
Problem-Solving Workflow
+
Mini Contest Experience
```

এই Chapter শেষে তুমি নিজের কাছে Answer করতে পারবে:

> **আমি কি একটি Beginner String Problem দেখে নিজে Pattern চিনে Code লিখতে পারি?**

---

# 📖 Chapter Map

```text
Day 3 — Chapter 11
│
├── Part 1  — Day 3 Knowledge Consolidation
│
├── Part 2  — String Pattern Library Update
│
├── Part 3  — Pattern Card System
│
├── Part 4  — Code Template Library
│
├── Part 5  — Repository Organization
│
├── Part 6  — Mistake Log System
│
├── Part 7  — Final Practice Ladder
│
├── Part 8  — Day 3 Mini Contest
│
├── Part 9  — Contest Review System
│
├── Part 10 — Final Assignment
│
├── Part 11 — Day 3 Reflection
│
├── Part 12 — Self Evaluation
│
└── Part 13 — Day 4 Readiness Check
```

---

# 🧠 Day 3 Master Journey

Day 3-তে আমাদের Journey ছিল:

```text
What is a String?
↓
How is it stored?
↓
How to take input?
↓
How to traverse?
↓
How to classify characters?
↓
How to count?
↓
How to search?
↓
How to build frequency?
↓
How to transform?
↓
How to reverse?
↓
How to use two pointers?
↓
How to detect palindrome?
↓
How to find bugs?
↓
How to build edge cases?
↓
How to select patterns?
```

এখন শেষ কাজ:

```text
সবকিছু Organized System-এ Convert করা
```

---

# Part 1 — Day 3 Knowledge Consolidation

# Lesson 1 — তুমি আসলে কী কী শিখেছ?

String Chapter শেষ করার পরে Beginner অনেক সময় ভাবে:

> “আমি String শিখেছি।”

কিন্তু এই Statement অনেক broad।

তোমাকে specific হতে হবে।

তুমি এখন পর্যন্ত শিখেছ:

```text
String
│
├── Representation
│   ├── char array
│   ├── index
│   └── '\0'
│
├── Input
│   ├── scanf("%s")
│   └── fgets()
│
├── Traversal
│   ├── forward
│   └── backward
│
├── Classification
│   ├── lowercase
│   ├── uppercase
│   ├── digit
│   ├── vowel
│   └── custom condition
│
├── Counting
│   ├── single counter
│   └── multiple counters
│
├── Searching
│   ├── exists
│   ├── first occurrence
│   └── last occurrence
│
├── Frequency
│   ├── mapping
│   ├── counting
│   └── frequency analysis
│
├── Transformation
│   ├── lowercase → uppercase
│   ├── uppercase → lowercase
│   └── toggle case
│
├── Reverse
│   ├── backward printing
│   ├── result string
│   └── in-place swap
│
├── Two Pointer
│   ├── left
│   ├── right
│   └── inward movement
│
└── Palindrome
    ├── compare
    ├── mismatch detection
    └── early exit
```

এটাই তোমার Day 3-এর Knowledge Map।

---

# Lesson 2 — Pattern আলাদা, Syntax আলাদা

একটা গুরুত্বপূর্ণ বিষয় মনে রাখবে।

ধরো Problem:

> Count vowels in a string.

Pattern:

```text
Traversal
+
Classification
+
Counting
```

এখন তুমি C-তে Code লিখছ:

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

এখানে:

```text
Pattern
≠
Syntax
```

Pattern হলো:

```text
Visit
↓
Check
↓
Count
```

C Syntax হলো:

```c
for (...)
{
    if (...)
    {
        count++;
    }
}
```

ভবিষ্যতে অন্য Language শিখলেও Pattern একই থাকতে পারে।

তোমার Solidity background-এর সাথে মিলিয়ে ভাবলে:

```text
Language Syntax Changes
↓
Problem-Solving Pattern Often Remains
```

CP-তে তোমার আসল লক্ষ্য:

```text
Syntax Memorization
        ↓
   প্রয়োজন আছে

Pattern Recognition
        ↓
   আরও বেশি প্রয়োজন
```

---

# Lesson 3 — Pattern Family চিনো

আমরা Day 3-তে অনেক Pattern শিখেছি।

কিন্তু এগুলোকে Family হিসেবে সাজালে মনে রাখা সহজ।

## Family 1 — Visit

```text
Traversal
```

## Family 2 — Measure

```text
Counting
Frequency
```

## Family 3 — Locate

```text
Search
First Occurrence
Last Occurrence
```

## Family 4 — Change

```text
Transformation
Reverse
```

## Family 5 — Validate

```text
Flag
Two Pointer
Palindrome
```

Master Map:

```text
String Problem
│
├── Visit?
│      └── Traversal
│
├── Measure?
│      ├── Counter
│      └── Frequency
│
├── Locate?
│      └── Search
│
├── Change?
│      ├── Transformation
│      └── Reverse
│
└── Validate?
       ├── Flag
       └── Two Pointer
```

---

# Part 2 — String Pattern Library Update

তোমার Repository-তে আগে থেকেই:

```text
18_Pattern_Library/
└── core_pattern.md
```

আছে।

এখন Day 3-এর String Patterns সেখানে add করবে।

---

# Lesson 4 — Pattern Library কী?

Pattern Library কোনো Code Dump না।

Wrong Approach:

```text
অনেক Code Copy করে রাখা
```

Better Approach:

```text
Pattern Name
↓
When to Use
↓
Signal Words
↓
Mental Model
↓
State
↓
Skeleton
↓
Common Bugs
↓
Edge Cases
```

অর্থাৎ Pattern Library হলো:

> **নিজের Problem-Solving Manual।**

---

# Lesson 5 — String Pattern Section Structure

`core_pattern.md`-এ নতুন Section:

```markdown
# String Patterns
```

তার নিচে:

```text
String Patterns
│
├── Pattern 01 — String Traversal
├── Pattern 02 — Conditional Counting
├── Pattern 03 — Character Classification
├── Pattern 04 — Character Search
├── Pattern 05 — First Occurrence
├── Pattern 06 — Last Occurrence
├── Pattern 07 — Frequency Array
├── Pattern 08 — String Transformation
├── Pattern 09 — Reverse String
├── Pattern 10 — Two Pointer
├── Pattern 11 — Palindrome Check
├── Pattern 12 — Distinct Character Count
└── Pattern 13 — Most Frequent Character
```

---

# Part 3 — Pattern Card System

এখন প্রতিটি Pattern-কে ছোট একটি Card-এর মতো লিখবে।

---

# Pattern Card 01 — String Traversal

## Problem Signal

```text
Process every character
Inspect every character
Print every character
Calculate something from all characters
```

## Mental Model

```text
Start at Index 0
↓
Process Current Character
↓
Move Forward
↓
Stop at '\0'
```

## State

```text
i
```

## Skeleton

```c
for (int i = 0; str[i] != '\0'; i++)
{
    // process str[i]
}
```

## Complexity

```text
Time: O(n)
Space: O(1)
```

## Common Bugs

```text
Starting from index 1
Using <= incorrectly
Forgetting increment in while loop
Processing wrong boundary
```

---

# Pattern Card 02 — Conditional Counting

## Problem Signal

```text
How many?
Count
Number of
Total matching characters
```

## Mental Model

```text
count = 0
↓
Traverse
↓
Condition True?
├── Yes → count++
└── No  → Continue
```

## State

```c
int count = 0;
```

## Skeleton

```c
int count = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        count++;
    }
}
```

## Complexity

```text
Time: O(n)
Space: O(1)
```

---

# Pattern Card 03 — Character Classification

## Problem Signal

```text
Lowercase?
Uppercase?
Digit?
Vowel?
Special Character?
```

## Mental Model

```text
Current Character
↓
Check Category
↓
Perform Action
```

## Common Conditions

```c
str[i] >= 'a' && str[i] <= 'z'
```

```c
str[i] >= 'A' && str[i] <= 'Z'
```

```c
str[i] >= '0' && str[i] <= '9'
```

## Common Bug

Wrong:

```c
str[i] >= 'a' || str[i] <= 'z'
```

Correct:

```c
str[i] >= 'a' && str[i] <= 'z'
```

Mental Rule:

```text
Inside Range
=
Above Lower Bound
AND
Below Upper Bound
```

---

# Pattern Card 04 — Character Search

## Problem Signal

```text
Exists?
Contains?
Find target
```

## Mental Model

```text
Assume Not Found
↓
Traverse
↓
Target Found?
├── Yes → Update State
└── No  → Continue
```

## State

```c
int found = 0;
```

## Skeleton

```c
int found = 0;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        found = 1;
        break;
    }
}
```

---

# Pattern Card 05 — First Occurrence

## Problem Signal

```text
First position
First index
First occurrence
```

## State

```c
int index = -1;
```

## Mental Model

```text
Not Found
↓
Traverse Left to Right
↓
First Match
↓
Save Index
↓
Stop
```

## Skeleton

```c
int index = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
        break;
    }
}
```

Key:

```text
First Occurrence
=
Save + Break
```

---

# Pattern Card 06 — Last Occurrence

## Problem Signal

```text
Last position
Last index
Last occurrence
```

## Mental Model

```text
Traverse Entire String
↓
Every Match Updates Index
↓
Last Match Remains
```

## Skeleton

```c
int index = -1;

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i] == target)
    {
        index = i;
    }
}
```

Difference:

```text
First Occurrence
→ break

Last Occurrence
→ continue
```

---

# Pattern Card 07 — Frequency Array

## Problem Signal

```text
How many times each character appears?
Frequency
Occurrences of every character
Most frequent
Least frequent
Distinct characters
```

## Mental Model

```text
Character
↓
Convert to Index
↓
Go to Bucket
↓
Increment Bucket
```

For lowercase:

```text
'a' → 0
'b' → 1
...
'z' → 25
```

## State

```c
int freq[26] = {0};
```

## Skeleton

```c
for (int i = 0; str[i] != '\0'; i++)
{
    int index = str[i] - 'a';
    freq[index]++;
}
```

## Complexity

```text
Time: O(n)
Space: O(1)
```

Why `O(1)` extra space?

কারণ:

```text
26
```

fixed size।

Input বড় হলেও array size বাড়ছে না।

---

# Pattern Card 08 — String Transformation

## Problem Signal

```text
Convert
Replace
Toggle
Change
Transform
```

## Mental Model

```text
Traverse
↓
Classify
↓
Modify
```

## Skeleton

```c
for (int i = 0; str[i] != '\0'; i++)
{
    if (condition)
    {
        str[i] = transformed_value;
    }
}
```

Examples:

```text
lowercase → uppercase
uppercase → lowercase
toggle case
replace character
```

---

# Pattern Card 09 — Reverse String

Reverse করার একাধিক Strategy আছে।

## Strategy A — Backward Print

```text
Need only output
↓
Traverse from end to beginning
```

## Strategy B — Build New String

```text
Need separate reversed copy
↓
Result Array
```

## Strategy C — In-Place Reverse

```text
Need modify original string
↓
Two Pointer + Swap
```

Skeleton:

```c
int left = 0;
int right = strlen(str) - 1;

while (left < right)
{
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    left++;
    right--;
}
```

---

# Pattern Card 10 — Two Pointer

## Problem Signal

```text
Both ends
Opposite positions
Pairs from left and right
Symmetric comparison
In-place reverse
```

## State

```c
int left = 0;
int right = length - 1;
```

## Movement

```text
left++
right--
```

## Mental Model

```text
Left End              Right End
   ↓                       ↓
   a   b   c   d   e   f
       →           ←
```

Stop:

```text
left >= right
```

---

# Pattern Card 11 — Palindrome

## Problem Signal

```text
Palindrome
Same forward and backward
Symmetric string
```

## Pattern

```text
Two Pointer
+
Comparison
+
Early Exit
```

## State

```c
int isPalindrome = 1;
```

## Mental Model

```text
Assume Valid
↓
Compare Opposite Pair
↓
Mismatch?
├── Yes → Invalid + Stop
└── No  → Move Inward
```

## Skeleton

```c
int left = 0;
int right = strlen(str) - 1;

int isPalindrome = 1;

while (left < right)
{
    if (str[left] != str[right])
    {
        isPalindrome = 0;
        break;
    }

    left++;
    right--;
}
```

---

# Pattern Card 12 — Distinct Character Count

## Problem Signal

```text
How many different characters?
Number of unique character types?
Distinct letters?
```

## Pattern Chain

```text
Build Frequency
↓
Traverse Frequency Array
↓
Count Positive Buckets
```

## Skeleton

```c
int distinct = 0;

for (int i = 0; i < 26; i++)
{
    if (freq[i] > 0)
    {
        distinct++;
    }
}
```

Combined Pattern:

```text
Frequency
+
Traversal
+
Conditional Counting
```

---

# Pattern Card 13 — Most Frequent Character

## Problem Signal

```text
Most frequent
Highest occurrence
Maximum frequency
```

## Pattern Chain

```text
String Traversal
↓
Frequency Array
↓
Frequency Array Traversal
↓
Maximum Pattern
```

State:

```c
int maxFreq;
int maxIndex;
```

Mental Model:

```text
Count First
↓
Analyze Counts Later
```

এই Pattern খুব গুরুত্বপূর্ণ।

কারণ এখানে Day 2 এবং Day 3 combine হচ্ছে।

---

# Part 4 — Code Template Library

# Lesson 6 — Template এবং Solution-এর Difference

Solution:

```text
Specific Problem-এর complete answer
```

Template:

```text
Repeated Pattern-এর reusable skeleton
```

তোমার:

```text
24_Templates/
```

folder-এ সব Problem Solution রাখা উচিত না।

এখানে থাকবে reusable code skeleton।

---

# Recommended Template Structure

```text
24_Templates/
│
├── template.c
├── string_traversal.c
├── character_counting.c
├── first_occurrence.c
├── frequency_array.c
├── reverse_two_pointer.c
└── palindrome_check.c
```

কিন্তু একটা গুরুত্বপূর্ণ Rule:

> Template মুখস্থ করার জন্য না। Pattern Structure মনে করানোর জন্য।

Contest-এর আগে Template পড়তে পারো যদি Rules allow করে।

কিন্তু Practice-এর সময়:

```text
First Try Without Template
↓
Stuck?
↓
Think Again
↓
Then Review Template
```

---

# Lesson 7 — Minimal CP C Template

`template.c`:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    // Input

    // Process

    // Output

    return 0;
}
```

এখনই বিশাল Template দরকার নেই।

যেমন:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
```

সব Problem-এ blindly add করার দরকার নেই।

Beginner stage-এ:

```text
Use What You Understand
```

---

# Part 5 — Repository Organization

তোমার CP Bootcamp Repository-তে Day 3-এর কাজ organized হওয়া দরকার।

Recommended Structure:

```text
CP-Bootcamp-2026/
│
├── 00_Day_0/
│
├── 01_Day_1/
│
├── 02_Day_2/
│
├── 03_Day_3/
│   │
│   ├── Assignment_and_Exercise/
│   │   ├── Day_3_assignment.md
│   │   ├── Day_3_exercise.md
│   │   └── Day_3_reflection.md
│   │
│   ├── Practice/
│   │   ├── 01_string_traversal.c
│   │   ├── 02_count_vowels.c
│   │   ├── 03_count_character_types.c
│   │   ├── 04_first_occurrence.c
│   │   ├── 05_last_occurrence.c
│   │   ├── 06_character_frequency.c
│   │   ├── 07_toggle_case.c
│   │   ├── 08_reverse_string.c
│   │   ├── 09_palindrome.c
│   │   ├── 10_distinct_characters.c
│   │   └── 11_most_frequent_character.c
│   │
│   ├── Mini_Contest/
│   │   ├── A.c
│   │   ├── B.c
│   │   ├── C.c
│   │   ├── D.c
│   │   ├── E.c
│   │   └── contest_review.md
│   │
│   ├── day_3.md
│   └── day_3.pdf
│
├── 17_Glossary/
│
├── 18_Pattern_Library/
│   └── core_pattern.md
│
├── 19_HackerRank/
│
├── 20_CSES/
│
├── 21_Codeforces/
│
├── 22_Contest/
│
├── 23_Notes/
│
└── 24_Templates/
```

---

# Lesson 8 — Practice Folder vs Platform Folder

তুমি প্রশ্ন করতে পারো:

> HackerRank-এর Problem করলে Day 3 folder-এ রাখব নাকি HackerRank folder-এ?

Rule:

```text
Learning Exercise
↓
Day Folder
```

```text
Online Judge Submission
↓
Platform Folder
```

Example:

নিজে Practice হিসেবে লিখেছ:

```text
03_Day_3/Practice/02_count_vowels.c
```

HackerRank-এর actual problem solve করেছ:

```text
19_HackerRank/C/Strings/problem_name.c
```

একই Concept হলেও purpose আলাদা।

---

# Part 6 — Mistake Log System

# Lesson 9 — Mistake Log কেন দরকার?

তুমি যদি একই Bug ৫ বার করো, কিন্তু record না করো:

```text
Mistake
↓
Forget
↓
Repeat
↓
Forget
↓
Repeat
```

Mistake Log থাকলে:

```text
Mistake
↓
Understand
↓
Document
↓
Review
↓
Avoid
```

---

# Lesson 10 — Mistake Categories

Day 3-এর জন্য Mistakes category:

```text
String Mistakes
│
├── Input Mistakes
├── Boundary Mistakes
├── Initialization Mistakes
├── Condition Mistakes
├── Search Mistakes
├── Frequency Mistakes
├── Two Pointer Mistakes
└── Output Mistakes
```

---

# Mistake Log Template

তোমার Notes বা Day 3 Assignment folder-এ:

````markdown
# 🐞 Day 3 Mistake Log

## Mistake 01

### Problem

...

### My Wrong Idea

...

### Bug Type

...

### Failing Input

```text
...
````

### Expected Output

```text
...
```

### Actual Output

```text
...
```

### Root Cause

...

### Correct Mental Model

```text
...
↓
...
↓
...
```

### Fixed Code Idea

...

### Will I Recognize It Next Time?

Yes / Not Sure

````

---

# Lesson 11 — Mistake Severity

সব Mistake same না।

Tag ব্যবহার করতে পারো:

```text
[S] Syntax Mistake
[L] Logic Mistake
[B] Boundary Mistake
[I] Input Mistake
[P] Pattern Selection Mistake
[E] Edge Case Mistake
````

Example:

```text
[B] Used right = length instead of length - 1
```

```text
[L] Used && instead of || for vowel checking
```

```text
[P] Used frequency array where simple counter was enough
```

```text
[E] Forgot target-not-found case
```

---

# Part 7 — Final Practice Ladder

Day 3 Final Practice random হবে না।

আমরা Difficulty Ladder ব্যবহার করব।

---

# Level 1 — Direct Pattern

এই Problems-এ Pattern প্রায় direct।

```text
1. Print Every Character
2. Count Vowels
3. Count Digits
4. Count Uppercase Letters
5. Find Character
```

Goal:

```text
Basic Implementation
```

---

# Level 2 — Search Variation

```text
1. Character Exists
2. First Occurrence
3. Last Occurrence
4. Count Occurrences of Target
```

Goal:

```text
Search Variations বুঝা
```

Compare:

```text
Exists
↓
Flag
```

```text
First
↓
Index + Break
```

```text
Last
↓
Index + Continue
```

```text
Count
↓
Counter + Continue
```

---

# Level 3 — Transformation

```text
1. Lowercase to Uppercase
2. Uppercase to Lowercase
3. Toggle Case
4. Replace Target Character
```

Goal:

```text
Classification
+
Modification
```

---

# Level 4 — Frequency

```text
1. Frequency of Lowercase Letters
2. Count Distinct Letters
3. Most Frequent Letter
4. Least Frequent Used Letter
5. Check Duplicate Character
```

Goal:

```text
Build Frequency
↓
Analyze Frequency
```

---

# Level 5 — Two Pointer

```text
1. Print Reverse
2. Reverse In-Place
3. Palindrome Check
```

Goal:

```text
Opposite Index Thinking
```

---

# Level 6 — Mixed Pattern

```text
1. Most Frequent Vowel
2. Count Distinct Digits
3. First Repeated Character
4. Character With Maximum Frequency
```

এখানে Problem নিজে Pattern বলে দেবে না।

তোমাকে decompose করতে হবে।

---

# Part 8 — Day 3 Mini Contest

এখন Day 3-এর Final Mini Contest।

এটি Chapter 10-এর practice mini contest-এর চেয়ে একটু বেশি structured।

---

# 🏆 Day 3 Mini Contest

## Duration

```text
90 Minutes
```

## Total Problems

```text
7 Problems
```

## Goal

```text
Minimum Goal: 4 Solve

Good Goal: 5 Solve

Excellent Day 3 Goal: 6 Solve

Perfect: 7 Solve
```

কিন্তু Score-এর চেয়ে important:

```text
Independent Thinking
```

---

# Contest Problem A — Character Type Counter

## Task

একটি String-এ count করো:

```text
Lowercase
Uppercase
Digit
```

Pattern expected:

```text
Traversal
+
Classification
+
Multiple Counters
```

---

# Contest Problem B — First Target Position

## Task

String এবং target character দেওয়া হবে।

First index print করো।

Not found:

```text
-1
```

Pattern expected:

```text
Search
+
Index
+
Early Exit
```

---

# Contest Problem C — Toggle Case

Input:

```text
AbC123xY
```

Output:

```text
aBc123Xy
```

Pattern expected:

```text
Traversal
+
Classification
+
Transformation
```

---

# Contest Problem D — Distinct Lowercase Letters

Input:

```text
banana
```

Output:

```text
3
```

Pattern expected:

```text
Frequency
+
Conditional Counting
```

---

# Contest Problem E — Reverse In-Place

Pattern expected:

```text
Two Pointer
+
Swap
```

---

# Contest Problem F — Palindrome

Pattern expected:

```text
Two Pointer
+
Compare
+
Early Exit
```

---

# Contest Problem G — Most Frequent Character

Input only lowercase letters।

যদি multiple characters-এর frequency same হয়, lexicographically smallest character print করবে।

Example:

```text
Input:
aabbcc

Output:
a
```

Pattern expected:

```text
Frequency
+
Maximum
+
Tie Handling
```

---

# Mini Contest Rules

```text
1. Timer start করবে

2. Problem আগে পড়বে

3. Easy Problem select করবে

4. Pattern লিখবে

5. State লিখবে

6. তারপর Code করবে

7. Sample Test করবে

8. নিজের Test বানাবে

9. Wrong হলে Debugging Workflow follow করবে

10. AI / Solution Search করবে না
```

---

# Suggested Contest Order

```text
A
↓
B
↓
C
↓
F
↓
E
↓
D
↓
G
```

কিন্তু Contest Skill হিসেবে পরে শিখবে:

```text
Problem Number Order
≠
Mandatory Solve Order
```

Easy Problem আগে solve করা যায়।

---

# Contest Tracking Table

| Problem | Start | End | Solved? | Wrong Attempts | Bug Type |
| ------- | ----- | --- | ------- | -------------: | -------- |
| A       |       |     |         |                |          |
| B       |       |     |         |                |          |
| C       |       |     |         |                |          |
| D       |       |     |         |                |          |
| E       |       |     |         |                |          |
| F       |       |     |         |                |          |
| G       |       |     |         |                |          |

---

# Part 9 — Contest Review System

# Lesson 12 — Contest শেষ মানে কাজ শেষ না

Contest:

```text
Attempt
```

Contest Review:

```text
Improvement
```

যদি 90-minute Contest দাও কিন্তু Review না করো:

```text
Experience হয়
```

কিন্তু structured learning কম হয়।

Review করলে:

```text
Experience
↓
Observation
↓
Correction
↓
Improvement
```

---

# Lesson 13 — Problem Review Categories

প্রতিটি unsolved বা wrong problem-এর জন্য identify করবে:

## Category A — Didn't Understand Statement

```text
Reading Problem
```

issue।

## Category B — Didn't Recognize Pattern

```text
Pattern Recognition
```

issue।

## Category C — Knew Pattern, Couldn't Implement

```text
Implementation
```

issue।

## Category D — Code Written, Wrong Answer

```text
Logic / Edge Case
```

issue।

## Category E — Too Slow

```text
Speed / Familiarity
```

issue।

এই classification খুব useful।

কারণ:

```text
সব Wrong Answer-এর Solution
=
আরও Code করা
```

না।

Different weakness-এর different solution আছে।

---

# Contest Review Template

```markdown
# 🏆 Day 3 Mini Contest Review

## Contest Summary

- Duration:
- Problems:
- Attempted:
- Solved:
- Wrong Attempts:

---

## Problem A

### Result

Solved / Unsolved

### Pattern

...

### Time Taken

...

### Mistake

...

### Root Cause

...

### Lesson

...

---

## Problem B

### Result

...

### Pattern

...

### Mistake

...

### Lesson

...

---

## My Biggest Weakness

...

---

## My Strongest Pattern

...

---

## Pattern I Failed to Recognize

...

---

## Most Common Bug

...

---

## Time Management Problem

...

---

## What I Will Fix Tomorrow

1. ...
2. ...
3. ...
```

---

# Part 10 — Final Assignment

এখন Day 3-এর Complete Final Assignment।

একটা Task-ও skip করবে না।

---

# 📝 Task 1 — Update Pattern Library

`18_Pattern_Library/core_pattern.md`-এ add করবে:

```text
String Traversal
Conditional Counting
Character Classification
Character Search
First Occurrence
Last Occurrence
Frequency Array
String Transformation
Reverse String
Two Pointer
Palindrome
Distinct Count
Most Frequent Character
```

প্রতিটির জন্য:

```text
Problem Signal
Mental Model
State
Skeleton
Complexity
Common Bugs
Edge Cases
```

---

# 📝 Task 2 — Create Day 3 Practice Folder

Structure:

```text
03_Day_3/
└── Practice/
    ├── 01_string_traversal.c
    ├── 02_count_vowels.c
    ├── 03_count_character_types.c
    ├── 04_first_occurrence.c
    ├── 05_last_occurrence.c
    ├── 06_character_frequency.c
    ├── 07_toggle_case.c
    ├── 08_reverse_string.c
    ├── 09_palindrome.c
    ├── 10_distinct_characters.c
    └── 11_most_frequent_character.c
```

---

# 📝 Task 3 — Every Code Must Have Analysis Header

প্রতিটি `.c` file-এর শুরুতে:

```c
/*
Problem:

Input:

Output:

Primary Pattern:

Secondary Pattern:

State:

Algorithm:

Edge Cases:

Time Complexity:

Extra Space:
*/
```

নিজের ভাষায় fill করবে।

---

# 📝 Task 4 — Solve Without Copying

এই ৭টি Problem Notes না দেখে লিখবে:

```text
1. Count Vowels
2. First Occurrence
3. Last Occurrence
4. Toggle Case
5. Frequency Array
6. Reverse In-Place
7. Palindrome
```

Rule:

```text
Try
↓
Compile
↓
Debug
↓
Try Again
```

কমপক্ষে 15 মিনিট চেষ্টা করার আগে Solution দেখবে না।

---

# 📝 Task 5 — Pattern Comparison Sheet

একটি File:

```text
03_Day_3/Assignment_and_Exercise/pattern_comparison.md
```

এখানে compare করবে:

## Comparison 1

```text
Counting
vs
Frequency
```

## Comparison 2

```text
First Occurrence
vs
Last Occurrence
```

## Comparison 3

```text
Reverse
vs
Palindrome
```

## Comparison 4

```text
Flag
vs
Index
```

## Comparison 5

```text
Backward Traversal
vs
Two Pointer
```

প্রতিটির format:

````markdown
## Pattern A vs Pattern B

### Pattern A Goal

...

### Pattern B Goal

...

### State Difference

...

### Stopping Condition Difference

...

### Example Problem for A

...

### Example Problem for B

...

### My Mental Rule

```text
...
````

````

---

# 📝 Task 6 — Build 20 Test Cases

Minimum 20 Test Case বানাবে।

Distribution:

```text
Count Problems        → 4 Tests
Search Problems       → 4 Tests
Frequency Problems    → 4 Tests
Transformation        → 2 Tests
Reverse               → 3 Tests
Palindrome            → 3 Tests
                       ─────────
Total                  20 Tests
````

File:

```text
03_Day_3/Assignment_and_Exercise/test_cases.md
```

---

# 📝 Task 7 — Build Mistake Log

File:

```text
03_Day_3/Assignment_and_Exercise/mistake_log.md
```

Minimum:

```text
5 Real Mistakes
```

Fake Mistake লিখবে না।

Practice করার সময় যেগুলো সত্যি হবে সেগুলো লিখবে।

Possible categories:

```text
Input
Boundary
Condition
Initialization
Search
Frequency
Two Pointer
Output
```

---

# 📝 Task 8 — Run Day 3 Mini Contest

Create:

```text
03_Day_3/
└── Mini_Contest/
    ├── A.c
    ├── B.c
    ├── C.c
    ├── D.c
    ├── E.c
    ├── F.c
    ├── G.c
    └── contest_review.md
```

Time:

```text
90 Minutes
```

Timer শেষ হলে Code লেখা বন্ধ করবে।

তারপর Review করবে।

---

# 📝 Task 9 — Redo Unsolved Problems

Contest-এর সময় যেগুলো solve হয়নি:

```text
Unsolved
↓
Review Problem
↓
Identify Pattern
↓
Try Again Without Solution
↓
Only Then Review Notes
↓
Solve
```

Important:

Original Contest File overwrite করবে না।

Example:

```text
G.c
```

Contest attempt।

আর:

```text
G_upsolve.c
```

Contest-এর পরে solved version।

এটাকে বলা হয়:

```text
Upsolving
```

CP-তে এই শব্দটি খুব common।

Meaning:

> Contest-এর পরে unsolved বা incorrectly solved Problem আবার solve করা।

---

# 📝 Task 10 — Update CP Dictionary

তোমার:

```text
17_Glossary/CP_Dictionary.md
```

file-এ add করবে:

```text
String
Character
Null Terminator
Traversal
Classification
Frequency Array
Mapping
Transformation
In-Place
Two Pointer
Palindrome
Sentinel Value
Early Exit
Off-by-One Error
Edge Case
Dry Run
Debugging
Wrong Answer
Upsolving
Tie Breaking
Distinct
Occurrence
```

Format:

````markdown
## Term

### Simple Meaning

...

### Example

...

### Mental Model

```text
...
````

````

---

# 📝 Task 11 — Complexity Analysis

নিচের Problems-এর Time এবং Extra Space Complexity লিখবে:

| Problem                 | Time | Extra Space |
| ----------------------- | ---- | ----------- |
| String Traversal        |      |             |
| Count Vowels            |      |             |
| Character Search        |      |             |
| First Occurrence        |      |             |
| Frequency Array         |      |             |
| Toggle Case             |      |             |
| Reverse In-Place        |      |             |
| Palindrome              |      |             |
| Distinct Count          |      |             |
| Most Frequent Character |      |             |

নিজে fill করবে।

Hint:

অনেক String Pattern-এর base traversal:

```text
O(n)
````

কিন্তু blindly সব জায়গায় লিখবে না।

বুঝে লিখবে।

---

# 📝 Task 12 — Pattern Chain Drill

নিচের Problemগুলোর Code লিখবে না।

শুধু Pattern Chain লিখবে।

## A — Count Vowels

```text
...
↓
...
↓
...
```

## B — First Occurrence

```text
...
↓
...
↓
...
```

## C — Most Frequent Character

```text
...
↓
...
↓
...
```

## D — Palindrome

```text
...
↓
...
↓
...
```

## E — Distinct Digits

```text
...
↓
...
↓
...
```

## F — First Repeated Character

```text
...
↓
...
↓
...
```

শেষের Problem-টি একটু চিন্তা করে করবে।

---

# 📝 Task 13 — Explain These Without Code

নিজের ভাষায় explain করবে:

### Question 1

`str[length]` কেন visible last character না?

### Question 2

First Occurrence এবং Last Occurrence-এর মূল difference কী?

### Question 3

একটি Counter এবং Frequency Array-এর difference কী?

### Question 4

Reverse এবং Palindrome দুটোতেই Two Pointer লাগলেও কাজের difference কী?

### Question 5

`left < right` কেন ব্যবহার করা হয়?

### Question 6

`-1` Search-এর useful initial value কেন?

### Question 7

Frequency Array zero initialize করা কেন দরকার?

### Question 8

Sample Test pass করলেই Solution correct বলা যায় না কেন?

### Question 9

Early Exit সবসময় safe না কেন?

### Question 10

Pattern Selection এবং Implementation-এর difference কী?

---

# Part 11 — Day 3 Reflection

এখন তোমাকে নিজের progress evaluate করতে হবে।

এটা কোনো Formal Exam না।

এখানে নিজের দুর্বলতা লুকালে ক্ষতি তোমারই।

---

# 📓 Day 3 Reflection Template

````markdown
# 🧠 Day 3 Final Reflection

## Day

Day 3

## Main Topic

String Fundamentals and Core String Patterns

---

# 1. What I Learned Today

Today I learned:

1. ...
2. ...
3. ...
4. ...
5. ...

---

# 2. My String Mental Model

```text
String
↓
...
↓
...
↓
...
```

---

# 3. Patterns I Learned

- [ ] String Traversal
- [ ] Character Classification
- [ ] Conditional Counting
- [ ] Character Search
- [ ] First Occurrence
- [ ] Last Occurrence
- [ ] Frequency Array
- [ ] Transformation
- [ ] Reverse
- [ ] Two Pointer
- [ ] Palindrome
- [ ] Distinct Count
- [ ] Most Frequent Character

---

# 4. Pattern I Understand Best

...

### Why?

...

---

# 5. Pattern I Find Most Difficult

...

### Why?

...

---

# 6. My Search Mental Model

```text
...
↓
...
↓
...
```

---

# 7. First vs Last Occurrence

## First Occurrence

...

## Last Occurrence

...

## Main Difference

...

---

# 8. My Frequency Mental Model

```text
Character
↓
...
↓
...
↓
...
```

---

# 9. My Two Pointer Mental Model

```text
Left
→
...

Right
←
...
```

---

# 10. Reverse vs Palindrome

## Reverse

Goal:

...

Operation:

...

## Palindrome

Goal:

...

Operation:

...

---

# 11. My Biggest Input Mistake

...

---

# 12. My Biggest Boundary Mistake

...

---

# 13. My Biggest Logic Mistake

...

---

# 14. My Biggest Pattern Selection Mistake

...

---

# 15. Edge Cases I Can Now Think Of

1. ...
2. ...
3. ...
4. ...
5. ...

---

# 16. My Debugging Workflow

```text
Wrong Answer
↓
...
↓
...
↓
...
↓
...
↓
Fixed
```

---

# 17. Mini Contest Result

```text
Total Problems:
Attempted:
Solved:
Unsolved:
Wrong Attempts:
```

---

# 18. Contest Problem Ranking

## Easiest

...

## Hardest

...

## Most Interesting

...

## Most Buggy

...

---

# 19. Why I Could Not Solve Some Problems

- [ ] Didn't understand statement
- [ ] Didn't recognize pattern
- [ ] Knew pattern but couldn't implement
- [ ] Boundary bug
- [ ] Input bug
- [ ] Logic bug
- [ ] Time management
- [ ] Didn't test edge cases

Explanation:

...

---

# 20. My Strongest Skill After Day 3

...

---

# 21. My Weakest Skill After Day 3

...

---

# 22. What I Need to Practice More

1. ...
2. ...
3. ...

---

# 23. My Day 3 Confidence Score

```text
String Mental Model:           ?/10
Input Handling:                ?/10
Traversal:                     ?/10
Character Classification:      ?/10
Counting:                      ?/10
Search:                        ?/10
First Occurrence:              ?/10
Last Occurrence:               ?/10
Frequency Array:               ?/10
Transformation:                ?/10
Reverse:                       ?/10
Two Pointer:                   ?/10
Palindrome:                    ?/10
Pattern Recognition:           ?/10
State Selection:               ?/10
Edge Cases:                    ?/10
Dry Run:                       ?/10
Debugging:                     ?/10
Independent Coding:            ?/10
Contest Confidence:            ?/10
```

---

# 24. Day 3 Final Statement

Before Day 3:

...

After Day 3:

...

The biggest thing I learned:

...

The biggest thing I need to improve:

...
````

---

# Part 12 — Self Evaluation

# 🧪 Day 3 Final Test

Notes বন্ধ করে Answer করবে।

---

## Question 1

C String কীভাবে stored হয়?

---

## Question 2

Null Terminator কী?

---

## Question 3

`scanf("%s")` এবং `fgets()`-এর main difference কী?

---

## Question 4

String Traversal-এর basic stopping condition কী হতে পারে?

---

## Question 5

Count Vowels Problem-এর Pattern Chain কী?

---

## Question 6

Character Classification বলতে কী বোঝায়?

---

## Question 7

একটি Character lowercase কিনা manually কীভাবে check করবে?

---

## Question 8

Search Problem-এ Flag কখন useful?

---

## Question 9

Index কখন useful?

---

## Question 10

First Occurrence-এর জন্য `break` কেন দরকার?

---

## Question 11

Last Occurrence-এর জন্য একইভাবে `break` দিলে কী সমস্যা?

---

## Question 12

Sentinel Value কী?

---

## Question 13

Search Index-এর initial value `-1` কেন useful?

---

## Question 14

Frequency Array কী?

---

## Question 15

Lowercase letter-এর mapping formula কী?

---

## Question 16

`'d' - 'a'` conceptually কত?

---

## Question 17

Distinct Character Count কীভাবে Frequency থেকে বের করবে?

---

## Question 18

Most Frequent Character বের করার Pattern Chain কী?

---

## Question 19

Transformation Pattern-এর তিনটি step কী?

---

## Question 20

Reverse করার তিনটি Strategy বলো।

---

## Question 21

In-Place বলতে কী বোঝায়?

---

## Question 22

Two Pointer Pattern-এ initial left এবং right কী?

---

## Question 23

Two Pointer movement কী?

---

## Question 24

Palindrome Check-এ Swap করব নাকি Compare?

---

## Question 25

Reverse In-Place-এ Compare করব নাকি Swap?

---

## Question 26

Off-by-One Error কী?

---

## Question 27

`right = length` কেন wrong হতে পারে?

---

## Question 28

Counter Loop-এর ভিতরে initialize করলে কী সমস্যা?

---

## Question 29

Frequency Array initialize না করলে কী সমস্যা?

---

## Question 30

Wrong Answer হলে তোমার Debugging Workflow কী?

---

## Question 31

Edge Case-এর minimum পাঁচটি category বলো।

---

## Question 32

Upsolving কী?

---

## Question 33

Tie Breaking কী?

---

## Question 34

Pattern এবং State-এর difference কী?

---

## Question 35

Problem asks:

> Find first digit in a string.

Pattern এবং State কী হবে?

---

## Question 36

Problem asks:

> Count how many different lowercase letters exist.

Pattern Chain কী?

---

## Question 37

Problem asks:

> Find the most frequent vowel.

কোন কোন Pattern combine হতে পারে?

---

## Question 38

একই Loop-এ দুইটি কাজ করলে Early Exit dangerous হতে পারে কেন?

---

## Question 39

Sample Test pass করা এবং Correct Solution হওয়া এক জিনিস না কেন?

---

## Question 40

Code লেখার আগে তোমার fixed Problem-Solving Workflow কী?

---

# Part 13 — Day 4 Readiness Check

Day 4 শুরু করার আগে এই Checklist complete করবে।

```text
[ ] আমি String কী বুঝি

[ ] char array এবং String-এর relation বুঝি

[ ] '\0' বুঝি

[ ] scanf("%s") কখন ব্যবহার করতে হয় জানি

[ ] fgets() কখন ব্যবহার করতে হয় জানি

[ ] String Traverse করতে পারি

[ ] Character classify করতে পারি

[ ] Vowel count নিজে লিখতে পারি

[ ] Digit count নিজে লিখতে পারি

[ ] Uppercase / Lowercase count করতে পারি

[ ] Character search করতে পারি

[ ] Found Flag ব্যবহার করতে পারি

[ ] First Occurrence লিখতে পারি

[ ] Last Occurrence লিখতে পারি

[ ] First এবং Last-এর difference বুঝি

[ ] Frequency Array বানাতে পারি

[ ] Character to Index Mapping বুঝি

[ ] Distinct Count করতে পারি

[ ] Most Frequent Character বের করতে পারি

[ ] Case Transformation করতে পারি

[ ] String Reverse করতে পারি

[ ] Two Pointer বুঝি

[ ] Palindrome Check লিখতে পারি

[ ] Odd Length Palindrome test করতে পারি

[ ] Even Length Palindrome test করতে পারি

[ ] Single Character Case বুঝি

[ ] No-Match Case test করি

[ ] All-Match Case test করি

[ ] Boundary Bug চিনতে পারি

[ ] Counter Initialization Bug চিনতে পারি

[ ] Search Sentinel বুঝি

[ ] Missing Break Bug বুঝি

[ ] Infinite Loop detect করতে পারি

[ ] Dry Run করতে পারি

[ ] Variable Tracking Table বানাতে পারি

[ ] Small Failing Test বানাতে পারি

[ ] Pattern Library update করেছি

[ ] Mistake Log update করেছি

[ ] Mini Contest দিয়েছি

[ ] Contest Review করেছি

[ ] Unsolved Problem upsolve করেছি

[ ] Day 3 Reflection লিখেছি
```

---

# 🧠 Day 3 Complete Pattern Map

```text
                    STRING PROBLEM
                           │
                           ▼
                 What does it need?
                           │
          ┌────────────────┼────────────────┐
          │                │                │
          ▼                ▼                ▼
        Visit            Measure          Locate
          │                │                │
          ▼                ▼                ▼
      Traversal         Counting          Search
                           │                │
                           ▼         ┌──────┴──────┐
                        Frequency    │             │
                                    ▼             ▼
                                  First          Last
                                    │             │
                                  Break        Continue

                           │
                           ▼
                    Need Modification?
                           │
                    ┌──────┴──────┐
                    │             │
                    ▼             ▼
              Transformation    Reverse
                                  │
                                  ▼
                             Two Pointer
                                  │
                                  ▼
                                Swap

                           │
                           ▼
                    Need Validation?
                           │
                           ▼
                       Two Pointer
                           │
                           ▼
                        Compare
                           │
                           ▼
                       Palindrome
```

---

# 🧠 Day 2 + Day 3 Integration

এখন তোমার Pattern Library শুধু Array বা শুধু String নিয়ে না।

তুমি ধীরে ধীরে বুঝতে শুরু করছ:

```text
Data Structure Changes
↓
Core Thinking Often Repeats
```

Example:

## Array Counting

```text
Traverse Array
↓
Check Condition
↓
Count
```

## String Counting

```text
Traverse String
↓
Check Condition
↓
Count
```

Deep Pattern:

```text
Traverse Sequence
↓
Inspect Element
↓
Condition
↓
Update State
```

---

## Array Search

```text
Visit Elements
↓
Compare with Target
↓
Save Index
```

## String Search

```text
Visit Characters
↓
Compare with Target
↓
Save Index
```

Deep Pattern:

```text
Sequence Search
```

এটাই Pattern Thinking।

---

# 🔥 Day 3 Final Problem-Solving System

এখন থেকে String Problem দেখলে:

```text
Step 1
Read Carefully
↓
Step 2
Identify Input
↓
Step 3
Identify Required Output
↓
Step 4
Remove Story
↓
Step 5
Find Core Operation
↓
Step 6
Choose Pattern
↓
Step 7
Choose State
↓
Step 8
Write Algorithm
↓
Step 9
Dry Run
↓
Step 10
Code
↓
Step 11
Compile
↓
Step 12
Run Sample
↓
Step 13
Build Edge Cases
↓
Step 14
Debug Systematically
↓
Step 15
Submit
↓
Step 16
Review Mistakes
```

Short Contest Version:

```text
Understand
↓
Pattern
↓
State
↓
Algorithm
↓
Code
↓
Test
↓
Submit
```

---

# 🏁 Day 3 Final Status

```text
Day 3
│
├── ✅ Chapter 1 — String Mental Model
│
├── ✅ Chapter 2 — String Input & Output
│
├── ✅ Chapter 3 — String Traversal Pattern
│
├── ✅ Chapter 4 — Character Classification
│
├── ✅ Chapter 5 — Counting Patterns on Strings
│
├── ✅ Chapter 6 — Character Search & Frequency
│
├── ✅ Chapter 7 — String Transformation
│
├── ✅ Chapter 8 — Reverse & Two-Pointer Mental Model
│
├── ✅ Chapter 9 — Palindrome Pattern
│
├── ✅ Chapter 10 — Common Bugs, Edge Cases & Problem Solving
│
└── ✅ Chapter 11 — Pattern Library, Final Assignment & Reflection
```

# 🎉 Day 3 Complete

Day 1-এ তুমি Problem Solving Language শিখেছিলে।

```text
Traversal
Accumulator
Counter
Flag
Index
Pattern
State
Edge Case
Dry Run
```

Day 2-এ তুমি Array-এর উপর Core Pattern apply করেছ।

```text
Array
↓
Traversal
↓
Accumulation
↓
Counting
↓
Max / Min
↓
Search
↓
Pattern Combination
```

Day 3-এ তুমি String-এর উপর একই Problem-Solving Foundation expand করেছ।

```text
String
↓
Traversal
↓
Classification
↓
Counting
↓
Search
↓
Frequency
↓
Transformation
↓
Reverse
↓
Two Pointer
↓
Palindrome
```

এখন পর্যন্ত Journey:

```text
Day 0
Environment + Setup
        ↓
Day 1
Problem-Solving Foundation
        ↓
Day 2
Array Core Patterns
        ↓
Day 3
String Core Patterns
        ↓
Day 4
Next Layer of Competitive Programming
```

সবচেয়ে গুরুত্বপূর্ণ পরিবর্তন হলো:

আগে Problem দেখলে Question ছিল:

```text
Code কীভাবে লিখব?
```

এখন Question হওয়া উচিত:

```text
Problem কী চাইছে?
↓
কোন Pattern?
↓
কোন State?
↓
কোন Boundary?
↓
কোন Edge Case?
```

এই চিন্তার অভ্যাসই তোমার ১৬ দিনের Bootcamp-এর মূল Foundation।