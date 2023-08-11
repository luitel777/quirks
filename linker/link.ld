OUTPUT_FORMAT(elf64-x86-64)
OUTPUT_ARCH(i386:x86-64)

ENTRY(_pheww)

SECTIONS
{
	. = 0x0000000000400000;
	.text : { *(.text) }
	. = ALIGN (CONSTANT (COMMONPAGESIZE));
	.data : { *(.data) }
	.bss : { *(.bss) }
}
