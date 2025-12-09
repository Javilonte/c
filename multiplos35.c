#include <stdio.h>

int main() {
    int objetivo = 1000;
    for (int i = 0; i < objetivo; i++) {
        if (i % 3 == 0 || i % 5 == 0) { 
            printf("%d\n", i);
        }
    }
    return 0;
}