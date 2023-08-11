int _pheww() {
        char m = 'H';
        *(&m + 1) = 'E';
        *(&m + 2) = 'L';
        *(&m + 3) = 'L';
        *(&m + 4) = 'O';
        *(&m + 5) = '\n';

        asm("mov $0x01, %%rax;"
            "mov $0x01, %%rdi;"
            "lea %0, %%rsi;"
            "mov $6, %%rdx;"
            "syscall;"
            :
            : "m"(m));

        asm("mov $60, %rax;"
            "xor %rdi, %rdi;"
            "syscall;");

        return 0;
}
