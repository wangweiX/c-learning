# Step07 - Placing Classes in Separate Files

## Header files
Keep in mind that header files typically only contain declarations. They do not define how something is implemented.
- header guard. Header guards prevent a given header file from being #included more than once in the same file.
- The second part is the actual content of the .h file, which should be the declarations for all of the functions we want other files to be able to see. 

## Header file best practices
Here are a few best practices for creating your own header files.

- Always include header guards.
- Do not define variables in header files unless they are constants. Header files should generally only be used for declarations.
- Do not define functions in header files.
- Each header file should have a specific job, and be as independent as possible. 
  For example, you might put all your declarations related to functionality A in A.h and all your declarations related to functionality B in B.h. 
  That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.
- Give your header files the same name as the source files they’re associated with (e.g. grades.h goes with grades.cpp).
- Try to minimize the number of other header files you #include in your header files. Only #include what is necessary.
- Do not #include .cpp files.
