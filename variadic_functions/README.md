explications exo :

/* va_list
What is it?

va_list is a special type that holds the list of arguments passed to a variadic function. You can think of it as a container that lets you access each argument passed to the function.
How to use it?

You declare a variable of type va_list that will be used to hold the list of arguments.
example:

va_list valist;

/* va_start
What is it?

va_start is a macro that initializes the va_list variable. It prepares the list of arguments so you can begin accessing them.
How to use it?

va_start takes two parameters:
The va_list variable.
The name of the last fixed argument (before the variable ones).
In your example, the last fixed argument is n (the count of numbers to sum), so you pass n as the second argument to va_start.
example:

va_start(valist, n);

/* va_arg
What is it?

va_arg is a macro used to retrieve the next argument from the va_list one by one.
How to use it?

Each time you call va_arg, you pass in:
The va_list variable.
The type of the argument you're trying to retrieve.
For example, if you are summing integers, you'll use va_arg(valist, int) to retrieve the next integer from the list of arguments.

exmaple:

result += va_arg(valist, int);

  // Retrieve the next integer
This will give you the next number passed to the function and add it to result.

/* va_end
What is it?

va_end is a macro used to clean up after using the va_list. It’s important to call this after you're done using the variable arguments to prevent memory issues.
How to use it?

You simply call va_end(valist) to clean up the va_list.
example:

va_end(valist);

This tells the program, "I’m done working with the list of arguments."
