#include <stdio.h>
 
int main() {

    // this is an addition ;-;
    int x, y;
    y = 0;
    for (x = 0; y < 23; x++) {
        int check;
        check = x % 2;
        if (check == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", x); // Print odd number
        y++; // Increment y only when an odd number is printed
    }
    return 0;

    // wow my name is jeff 

}
