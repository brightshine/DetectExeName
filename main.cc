#include <cstdio>
#include <cstdlib>
#include <cstring>

//int main(int argc, char **argv) {
    //printf("hello\n");

    // Use after free
    //int *array = new int[100];
    //delete [] array;
    //return array[argc];  // BOOM

    // Heap buffer overflow
    //int *array = new int[100];
    //array[0] = 0;
    //int res = array[argc + 100];  // BOOM
    //delete [] array;
    //return res;

    // Stack buffer overflow
    //int stack_array[100];
    //stack_array[1] = 0;
    //return stack_array[argc + 100];  // BOOM

    // Memory leak
    //void *p;
    //p = malloc(7);
    //p = 0; // The memory is leaked here.
    //return 0;

    // uninitialized memory
    //int* a = new int[10];
    //bzero(a,10);
    //a[5] = 0;
    //if (a[argc])
    //    printf("xx\n");
    //delete []a;
    //return 0;

    // memory leak
    //void *p;
    //p = malloc(7);
    //p = 0; // The memory is leaked here.
    //return 0;

    // Signed interger overflow
    //int k = 0x7fffffff;
    //k += argc;
    //return 0;
//}

//#include <pthread.h>
//#include <stdio.h>
//
//int Global;
//
//void *Thread1(void *x) {
//  Global++;
//  return NULL;
//}
//
//void *Thread2(void *x) {
//  Global--;
//  return NULL;
//}
//
//int main() {
//  pthread_t t[2];
//  pthread_create(&t[0], NULL, Thread1, NULL);
//  pthread_create(&t[1], NULL, Thread2, NULL);
//  pthread_join(t[0], NULL);
//  pthread_join(t[1], NULL);
//}
