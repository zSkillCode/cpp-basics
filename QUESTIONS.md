### Here are some questions I had while learning C++. There are many different answers for all of them but I selected those that I like the most.

<br>

#### Should I use ```using namespace std;```?
> No, that might lead to naming conflicts.

#### When should I use const?
> Use it whenever possible, it makes the code easier to read.

#### When to use pointers and when references (in functions)?
> Use a pointer when you want to deal with the memory address rather than with the object or when you want the parameter to be able to be null.

#### When to use pass by reference?

>1: You want to change the argument from within the function
>
> 2: It increases the performance for (big) objects <strong>but not for primitive data types</strong>.

#### When to use std::size_t?
> A good rule of thumb is for anything that you need to compare in the loop condition against something that is naturally a std::size_t itself.

#### Where should you put the default parameter values?
> Default parameter values should appear on the declaration, since that is the only thing that the caller sees.

#### Why should we dynamically allocate storage (new) when e.g. returning an array from a function?
> After the function was executed, the stack frame (box) of the function and all its automatically allocated variables are deleted. So if the array was created inside the function, it was deleted and we return a pointer to the first element of the array which also was deleted. 

#### Why do we need to nullify the pointer of the temporary object in move constructors and move assignment operators?
> This is very important because when the temporary object gets destroyed, it's going to take this data with it.