#include <stdio.h>
int add() {
    static int i = 0; // Use static variable to maintain state across calls
    i++;
    return i;
}
int main() {
    for (int i = 0; i < 4; i++) {
        printf("%d\n", add());
    }
    return 0;
}
