# Homework 5

## 1. Describe briefly what a static/dynamic library is and some reasons to use one over the other

A **static library** consists of routines that are compiled and linked directly into the program. When compiling a program which uses a static library, it becomes part of the executable. Since the library (or at least the parts used by the program) is sort of merged with the program / is part of the executable, the right version of said library is always used, since it is "built-in". However, this also means that to access any updates of the library, the entire executable needs to be replaced. 

**Dynamic libraries** are loaded into the application at run time. They do not become parts of the executable during compilation but instead remains separate. This makes it possible for many programs to share one copy, which saves space, but also ensures that no executables needs to be replaced if the library is upgraded to a newer version. However, since dynamic libraries are not included in the executable, the programs must have the added functionality needed to load and use the dynamic library. Also have to pay attention to library version since this is not handled automatically during compilation (as is done with a static library).

## 2. What flags would you need to pass to the linker to tell it to look for library files in a directory called /some/dir/lib and to link to a library file called libfmt-3.2.0.so
```bash
-L/some/dir/lib -lfmt-3.2.0
```


## 3. Describe the four parts of a function definition. What parts of the definition constitute the function's signature?
The return value, function name and parametes constitute the function's signature.
The fourth part is the code block that actually defines what the function is supposed to do. 

Example:
```cpp
int my_function(int i, int j) {  // returns an int, two parameters i, j
    int sum = i + j;             // function body
    return sum;
}
```




## 4. Given an object like `int x{3};`, 
### 4.1. How would you get its address?

By using the "address of" operator `&`, i.e. `&x`. 
### 4.2. How would you write the type of a pointer to the object?

For pointers, the type is denoted by `*`. For example: 
```cpp
int x{3};
int* pointer = &x;
```


## 5. Write the class declaration for a 2D point class consisting of an x and a y coordinate a destructor, and two constructors: one default and one taking two parameters.

```cpp
class Point2D {
    public:
    Point2D();  // default constructor
    Point2D(int x, int y);  // constructor with 2 parameters
    
    ~Point2D();  // destructor

    private:
        int x;
        int y;
};
``` 