### L and R Values
An L-value can always store something in it, an R-value can't.<br>
Here are some examples:<br><br>
int <strong>x</strong> = <u>100</u>;<br>
int <strong>y</strong> = <u>300 + 100</u>;<br>
int <strong>z</strong> = <strong>x</strong>;<br>
someFunction(<u>MyObject{10}</u>);


Everything <strong>bold</strong> is an L-value and everything <u>underlined</u> 
is an R-value.<br><br>
<u>It is very important to know that R-values are temporary and will be deleted after the 
expression is executed.</u>
### Move Constructor
To explain it as simply as possible, I'll start with two examples:<br>
Example 1:
```cpp
std::vector<MyObject> vector;
const MyObject obj{5};
vector.push_back(obj);

obj.doSomething();
```
Example 2:
```cpp
std::vector<MyObject> vector;
vector.push_back(MyObject{5});
```
So what's the difference between these 2 examples? In the first example, 
we declared a variable which stores the object, in the second one we didn't.<br>
In both examples, the vector will create a copy of the object by calling the copy
constructor. It is fine for the first example because we still want to do 
something with our variable, but for the second example, the object will be deleted
immediately after the expression is executed, so it's useless for us.<br>If we declare a
move constructor, it will be called instead of the copy constructor for the 2nd example. 
This move constructor allows us to make the pointer of the declared object to point
to the data of the temporary object and null out the pointer of the temporary object,
so the pointer was just moved instead of copied.
<br><br>
All of this is only possible because our object contains a pointer and
the vector has an alternate push_back method which takes an R-value reference and
then calls our move constructor.