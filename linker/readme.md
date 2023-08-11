Yes I know this code gives segfault. Stdlib expects an entry to its prefdefined location
_start but my linker says the entry point is _pheww and stdlib goes bonkers.

# linker
## Elf section header table
![](https://upload.wikimedia.org/wikipedia/commons/7/77/Elf-layout--en.svg)\
## Linker tutorial
https://home.cs.colorado.edu/~main/cs1300/doc/gnu/ld_3.html\
## Linker warnings
https://www.redhat.com/en/blog/linkers-warnings-about-executable-stacks-and-segments
## Stdlibc
https://stackoverflow.com/a/2548601