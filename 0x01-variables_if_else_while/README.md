# 0x01. C - Variables, if, else, while
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the if, if ... else statements
* How to use comments
* How to declare variables of types char, int, unsigned int
* How to assign values to variables
* How to print the values of variables of type char, int, unsigned int with printf
* How to use the while loop
* How to use variables with the while loop
* How to print variables using printf
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64
### Question #0
What is the size of the unsigned int data type?
- [ ] 1 byte


- [ ] 2 bytes


- [x] 4 bytes


- [ ] 8 bytes

Question #1
What is the size of the char data type?


- [x] 1 byte


- [ ] 2 bytes


- [ ] 4 bytes


- [ ] 8 bytes

Question #2
What is the size of the float data type?


- [ ] 1 byte


- [ ] 2 bytes


- [x] 4 bytes


- [ ] 8 bytes

Question #3
Which of the following are valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)
```
if (a > b)
{
  return (a);
}
```
```
if (a > b)
  return (a);
```
Question #4
Which of the following are valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)

```
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```
```
for (a = 0; a < b; a++)
    printf("%d\n", a);
```
```
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```
Question #5
Which of the following are valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)
```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);
```
```
a = 0;
while (a < b)
    printf("%d\n", a++);
```

