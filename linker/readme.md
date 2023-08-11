Stdlib expects an entry point to its prefdefined location _start but my linker says the entry
point is _pheww and stdlib goes bonkers. And since I did not find any way to use syscall
defined in <asm/unistd.h> in a C abstraction I had to use assembly. I don't know how
asm("%0" : "where is docs"(nowhere)) works so I couldn't find a neater way except to
do fill in the next bytes of m.

# linker
## Elf section header table
![](https://upload.wikimedia.org/wikipedia/commons/7/77/Elf-layout--en.svg)\
## Linker tutorial
https://home.cs.colorado.edu/~main/cs1300/doc/gnu/ld_3.html
## Linker warnings
https://www.redhat.com/en/blog/linkers-warnings-about-executable-stacks-and-segments
## Stdlibc
https://stackoverflow.com/a/2548601