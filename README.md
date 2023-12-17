## build cs50 and link
``` bash
# build static library
gcc -shared -o cs50lib.dll cs50.c 
# build hello.c and link library
gcc -o hello.exe .\hello.c -L. -lcs50lib
```

``` c
malloc()
free()
realloc()
```