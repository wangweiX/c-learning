#Step03 - Creating a Basic Calculator



### std::cin, std::cout, <<, and >>

- ``std::cin`` and cout always go on the left-hand side of the statement.

- ``std::cout`` is used to output a value (cout = character output)

- ``std::cin`` is used to get an input value (cin = character input)

- ``<<`` is used with std::cout, and shows the direction that data is moving from the r-value to the console.

  > std::cout << 4 moves the value of 4 to the console

- ``>>`` is used with std::cin, and shows the direction that data is moving from the console into the variable.

  > std::cin >> x moves the value from the console into x



### std::endl

> If we want to print things to more than one line, we can do that by using std::endl. When used with std::cout, std::endl inserts a newline character (causing the cursor to go to the start of the next line).