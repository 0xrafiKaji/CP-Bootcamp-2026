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

| `i` | `str[i]` | `str[i] != '\0'` | Action  |
| --: | -------- | ---------------- | ------- |
|   0 | `D`      | True             | Print D |
|   1 | `O`      | True             | Print O |
|   2 | `G`      | True             | Print G |
|   3 | `'\0'`   | False            | Stop    |

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

| `i` | `str[i]` |
| --: | -------- |
|   0 | `C`      |
|   1 | `O`      |
|   2 | `D`      |
|   3 | `E`      |

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

| `i` | Character | Match `'a'`? | `count` |
| --: | --------- | ------------ | ------: |
|   0 | `b`       | No           |       0 |
|   1 | `a`       | Yes          |       1 |
|   2 | `n`       | No           |       1 |
|   3 | `a`       | Yes          |       2 |
|   4 | `n`       | No           |       2 |
|   5 | `a`       | Yes          |       3 |

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

| `i` | `str[i]` | Condition | Action |
| --: | -------- | --------- | ------ |
|   0 | `S`      | True      | Print  |
|   1 | `?`      | `?`       | `?`    |
|   2 | `?`      | `?`       | `?`    |
|   3 | `?`      | `?`       | `?`    |
|   4 | `?`      | `?`       | `?`    |
|   5 | `?`      | `?`       | `?`    |
|   6 | `?`      | `?`       | `?`    |
|   7 | `?`      | `?`       | `?`    |
|   8 | `'\0'`   | False     | Stop   |

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

| Function      | Basic Purpose             |
| ------------- | ------------------------- |
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
