# Step26 - Const class objects and member functions

#### Const variable
- Const variables must be initialized when you define them, and then that value can not be changed via assignment.

### Const Object
- Once a const class object has been initialized via constructor, any attempt to modify the member variables of the object is disallowed, as it would violate the const-ness of the object.
- Const class objects can only explicitly call const member function

### Const member functions
- A const member function is a member function that guarantees it will not modify the object or call any non-const member functions (as they may modify the object).
- Any const member function that attempts to change a member variable or call a non-const member function will cause a compiler error to occur.

### Const references
Although instantiating const class objects is one way to create const objects, a more common way is by passing an object to a function by const reference.
