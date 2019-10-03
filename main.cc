#include <cstdio>
#include <cstdlib>
int main(int argc, char **argv) {
    printf("hello\n");

    // Use after free
    int *array = new int[100];
    delete [] array;
    return array[argc];  // BOOM

    // Stack buffer overflow
    //int stack_array[100];
    //stack_array[1] = 0;
    //return stack_array[argc + 100];  // BOOM

    // uninitialized memory
    //int* a = new int[10];
    //a[5] = 0;
    //if (a[argc])
    //    printf("xx\n");
    //return 0;

    // memory leak
    //void *p;
    //p = malloc(7);
    //p = 0; // The memory is leaked here.
    //return 0;
    //}
}
