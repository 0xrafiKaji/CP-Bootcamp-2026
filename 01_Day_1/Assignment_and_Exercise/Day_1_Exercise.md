## Chapter 3

### Mini Exercise

নিচের Code-টা Professional Style-এ Rewrite করো।

```c
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}
```

Afeter Formating :

```c
#include <stdio.h>
int main() {
    int num1, num2, sum = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    return 0;
}
```

---

# Reflection

আজকের শেষে নিজের কাছে প্রশ্ন করো—

### ১.

আমি কি নিজের Code ৬ মাস পরে পড়তে পারব?

> Yes.

---

### ২.

আমার Variable-এর নাম Meaningful?

> Yes.

---

### ৩.

আমি কি Compiler-এর জন্য লিখছি...

নাকি Human-এর জন্যও?

> Both, Compiler to bujte parbei + Readability er dike ato focus dichi jekono coder ei code bujte parbe.

---

## Chapter 4

### Mini Assignment

Code লিখবে না।

শুধু Pattern লিখবে।

---

### Problem 1

```
Find the smallest number in an array.
```

Solve :
```
Input Array
    ↓
Assume First Element as Smallest
    ↓
Traversal
    ↓
Compare Current Element with Smallest
    ↓
Smaller?
    ├── Yes → Update Smallest
    └── No  → Continue
    ↓
Output Smallest
```

---

### Problem 2

```
Check whether a string is a palindrome.
```

Solve :
```
Input String
    ↓
Compare First and Last Character
    ↓
Move Toward Center
    ↓
All Pairs Same?
    ├── Yes → Palindrome
    └── No  → Not Palindrome
    ↓
Output Result
```

---

### Problem 3

```
Count how many numbers are divisible by 3.
```

Solve :
```
Input Numbers
    ↓
Initialize Count = 0
    ↓
Traversal
    ↓
Check Current Number % 3 == 0
    ↓
Divisible?
    ├── Yes → Count++
    └── No  → Continue
    ↓
Output Count
```

---

### Problem 4

```
Print the reverse of an array.
```

Solve :
```
Input Array
    ↓
Start Traversal from Last Index
    ↓
Move Backward One by One
    ↓
Print Current Element
    ↓
Reach First Index?
    ├── No  → Continue Backward
    └── Yes → Finish
```

---

### Problem 5

```
Find the average of N numbers.
```

Solve :
```
Input N
    ↓
Initialize Sum = 0
    ↓
Traverse N Numbers
    ↓
Add Each Number to Sum
    ↓
Average = Sum / N
    ↓
Output Average
```

---

Chapter 8 - Task 4:

Problem -> Read -> Highlight(Keyword) -> Pattern -> Own Example -> Brute Force -> Algorithm -> Dray run -> Code -> Review 