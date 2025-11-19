// hodor
// make hodor
// ./hodor
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Buffer multiple "hodor\n" strings for efficient output
    char buf[8192];
    char *p = buf;
    char *end = buf + sizeof(buf) - 6;

    while (p < end) {
        memcpy(p, "hodor\n", 6);
        p += 6;
    }

    size_t len = p - buf;

    while (1) {
        fwrite(buf, 1, len, stdout);
    }

    return 0;
}
