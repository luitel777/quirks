#include <stdint.h>

typedef uint16_t a_char;

uint16_t a_strlen(a_char *a){
        uint16_t i = 0;
        while(a[i] != '\0'){
                i++;
        }
        return i * sizeof(a_char);
}

#define a_printf(something)\
        asm volatile("mov $0x01, %%rax;" \
            "mov $0x01, %%rdi;" \
            "lea %[m_val], %%rsi;" \
            "mov %%rcx, %%rdx;" \
            "syscall;" \
            :: [m_val]"m"(something), "c"(a_strlen(something)));

int _pheww() {
        // allocating array using char[n] does not work if n > 8 bytes
        // maybe something to do with reserving bytes but why does it
        // work on int[n]

        // char uwu = 'H';
        // *(&uwu+1) = 'e';
        // *(&uwu+2) = 'l';
        // *(&uwu+3) = 'l';
        // *(&uwu+5) = 'o';
        // *(&uwu+6) = ' ';
        // *(&uwu+7) = 'U';
        // *(&uwu+8) = 'w';
        // *(&uwu+9) = 'U';
        // *(&uwu+10) = '\n';
        // one problem with above is compiler does not says says below memory that
        // *(&uwu+1) is reserved so below data overwrites my uwu+1 and I am no longer
        // uwu'ing

        // pointers char cannot be used since they are allocated on runtime... I think

        a_char nandeska[12] = {'I', ' ', 'a', 'm', ' ', 'a', 't', 'o', 'm', 'i', 'c', '\n'};
        a_char nanimonodeska[16] = {'e', 'x', 'p', 'r', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 's', 'i', 'o', 'n', '\n'};

        a_printf(nanimonodeska);
        a_printf(nandeska);
        a_printf(nanimonodeska);
        a_printf(nanimonodeska);
        a_printf(nandeska);

        asm("mov $60, %rax;"
            "xor %rdi, %rdi;"
            "syscall;");

        return 0;
}

