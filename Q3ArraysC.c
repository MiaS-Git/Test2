#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void staticArrFun(void){
  static int a[50000];
}
void stackArrFun(void){
  int b[50000];
}
void heapArrFun(void){
   int *a = (int *) malloc(50000 * sizeof(int));
}


int main(void) {
  struct timespec start, end;
  int i;
  clock_gettime(CLOCK_REALTIME, &start);
  for(i = 0; i < 100000; i++){
    staticArrFun();
  }
  clock_gettime(CLOCK_REALTIME, &end);
  printf("After 100,000 runs it took %ld nanoseconds to run the static array\n",end.tv_nsec - start.tv_nsec );

 clock_gettime(CLOCK_REALTIME, &start);
  for(i = 0; i < 100000; i++){
    stackArrFun();
  }
  clock_gettime(CLOCK_REALTIME, &end);
  printf("After 100,000 runs it took %ld nanoseconds to run the stack array\n",end.tv_nsec - start.tv_nsec );
  
  clock_gettime(CLOCK_REALTIME, &start);
  for(i = 0; i < 100000; i++){
     heapArrFun();
  }
  clock_gettime(CLOCK_REALTIME, &end);
  printf("After 100,000 runs it took %f seconds to run the heap array\n", difftime(end.tv_sec, start.tv_sec));
   
  return 0;
}