 C Function Pointer Exam
 Instructions: Implement the following functions as described.
 You may add helper functions if needed.

 1. Implement a function named 'execute' that takes two parameters:
    an integer and a function pointer. The function pointer should
    point to a function that takes an int and returns void.
    Your 'execute' function should call the pointed-to function
    with the integer parameter.
 Declare your function here:


 2. Create a function 'math_operation' that takes three parameters:
    two integers and a function pointer. The function pointer should
    point to a function that performs a mathematical operation on
    two integers and returns an integer result.
    Your 'math_operation' function should apply the pointed-to function
    to the two integer parameters and return the result.
 Declare your function here:


 3. Write a function 'transform_array' that applies a given function to each element
    of an integer array, modifying the array in place. It should take three parameters:
    an integer array, the size of the array, and a function pointer to a function
    that takes an int and returns an int.
 Declare your function here:


 4. Implement a 'logger' function that takes a string message and a function pointer.
    The function pointer should point to a function that takes a const char* and returns void.
    Your 'logger' function should call the pointed-to function with the message.
    Also, implement three different logging functions that can be passed to 'logger':
    log_to_console, log_to_file, and log_to_network (you don't need to implement the actual file or network operations, just print where it would log to).
 Declare your functions here:


 5. Create a 'create_multiplier' function that takes an integer 'x' and returns a function pointer.
    The returned function pointer should point to a function that takes an integer parameter
    and returns the product of that parameter and 'x'.
 Declare your function here:


 6. Implement a simple command pattern using function pointers. Create a struct 'Command'
    that includes a function pointer to a function taking no parameters and returning void.
    Then, implement a function 'execute_command' that takes a Command struct and executes
    the command. Also, implement at least three different command functions.
 Declare your struct and functions here:


 7. Write a function 'reduce' that takes an integer array, its size, an initial value,
    and a function pointer. The function pointer should point to a function that takes
    two integers and returns an integer. Your 'reduce' function should apply the pointed-to
    function cumulatively to the array elements, starting with the initial value.
 Declare your function here:


 8. Implement a simple event system with 'register_handler' and 'trigger_event' functions.
    'register_handler' should take an event ID (integer) and a function pointer (void function taking no parameters).
    'trigger_event' should take an event ID and call all registered handlers for that event.
 Declare your functions here:


 9. Create a higher-order function named 'compose' that takes two function pointers
     and returns a new function pointer. Each function pointer should point to a function
     that takes an int and returns an int. The returned function pointer should represent
     a new function that applies the two functions in sequence.
 Declare your function here:
