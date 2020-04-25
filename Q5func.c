#include <stdio.h>


int fun(int *k) {
    *k += 4;
    return 3 * (*k) - 1;
}
int main() {
    int i = 10, j = 10, sum1, sum2;
    sum1 = (i / 2) + fun(&i);
    printf("%d\n",sum1);
    sum2 = fun(&j) + (j / 2);
     printf("%d\n",j);
      printf("%d\n",fun(&j));
      printf("%d\n",sum2);
}
