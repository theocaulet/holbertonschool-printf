#include <unistd.h>
#include <stdarg.h>

int print_hex(unsigned long n)
{
    char *base = "0123456789abcdef";
    int count = 0;

    if (n >= 16)
        count += print_hex(n / 16);

    count += write(1, &base[n % 16], 1);
    return count;
}

int print_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    unsigned long addr = (unsigned long)ptr;
    int count = 0;

    count += write(1, "0x", 2);

    if (ptr == NULL)
    {
        count += write(1, "0", 1);
        return count;
    }

    count += print_hex(addr);
    return count;
}
