#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL) );
  int arr[10];
  for (int i = 0; i < 10; i ++)
    arr[i] = rand();
  arr[9] = 0;
  printf("array of random ints:\n");
  for (int i = 0; i < 10; i ++)
    printf("%d\n", arr[i]);

  int foo[10];
  for (int i = 0; i < 10; i ++){
    *(foo + i) = *(arr + 9 - i);
  }
  printf("reversed:\n");
  for (int i = 0; i < 10; i ++)
    printf("%d\n", foo[i]);
  return 0;
}
