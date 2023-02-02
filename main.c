#include "matrix.c"
#include <time.h>

int main(){
  srand(time(NULL));
  generateMatrix();
  printMatrix();
  easy_rotateMatrix();
  return 0;
}
