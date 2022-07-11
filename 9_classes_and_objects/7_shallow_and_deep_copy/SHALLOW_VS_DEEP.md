### Shallow Copy

Some members of the copy may reference the same objects as the original.

```cpp
class Deep {
public:
    Deep() : somePointer{new int} {}

    Deep(const Deep &copy) : somePointer(copy.somePointer) {}
private:
    const int *const somePointer;
};
```

### Deep copy:

All members of the original are cloned (recursively, if necessary). There are no shared objects.

```cpp
class Deep {
public:
    Deep() : somePointer{new int} {}

    Deep(const Deep &copy) : somePointer(new int{*copy.somePointer}) {}
private:
    const int *const somePointer;
};
```

<br>

###### SOURCE: https://stackoverflow.com/questions/2657810/deep-copy-vs-shallow-copy

