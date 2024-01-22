#include <stdio.h>

int main() {
    printf("Current file: %s\n", __FILE__);
    printf("Current line: %d\n", __LINE__);
    printf("Compilation date: %s\n", __DATE__);
    printf("Compilation time: %s\n", __TIME__);
#ifdef __cplusplus
    printf("This is a C++ file.\n");
#else
    printf("This is a C file.\n");
#endif
    return 0;
}
