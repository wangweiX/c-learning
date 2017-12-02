# Step02 - variables, initialization, and assignment



### Objects

>  An object is a piece of memory that can be used to store values.
>
> When an object is defined, a piece of that memory is set aside for the object.



### Variables

> A **variable** in C++ is simply an object that has a name.



### l-values and r-values

##### l-value

> An **l-value** is a value that has a persistent address (in memory). Since all variables have addresses, all variables are l-values. 



##### r-value 

> An **r-value** refers to values that are not associated with a persistent memory address. 



### Initialization vs. assignment

##### assignment

> After a variable is defined, a value may be **assigned** to it via the assignment operator (the = sign):

```c++
int x; // this is a variable definition
x = 5; // assign the value 5 to variable x
```



##### Initialization

> C++ will let you both define a variable AND give it an initial value in the same step. This is called **initialization**.

```c++
int x = 5; // initialize variable x with the value 5
```



### **Uninitialized variables**

>  A variable that has not been given a known value (through initialization or assignment) is called an **uninitialized variable**.



### Undefined behavior

- Your program produces an consistently incorrect result.
- Your program produces different results every time it is executed.
- Your program behaves inconsistently.
- Your program seems like its working but produces incorrect results later in the program.
- Your program crashes, either immediately or later.
- Your program works on some compilers but not others.
- Your program works until you change some other unrelated code.