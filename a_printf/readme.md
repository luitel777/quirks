# a_printf
This is a continuation of ../linker\
I was not satisfied by how I printed so I hacked and hacked and somehow managed to create
my own shitty printf. Its more like print that no one should/will ever use. Anyway, the
point is I still hate inline asm +AT&T syntax and will 10/10 do it again.

One *minor* problem with this a_printf is, 1 byte memory like char or int8_t does not work. I have no clue why. So, you need to create 2 byte array holding the char (2 byte int specifically) of your string. It is what it is. Werks on my 8gb ram machine.


https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html