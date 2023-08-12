int _pheww() {
        const char m[] = "Hello\n";

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
