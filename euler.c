#include <stdio.h>

int mult_of_3_and_5(int boundary){
  int sum = 0;
  int i;
  for (i = 0; i < boundary; i++){
    if (i % 3 == 0 || i % 5 ==0){
      sum += i;
    }
  }
    printf("Problem #1\nThe sum of all the multiples of 3 or 5 below 1000 is %d\n\n", sum);
  return 0;
}

int smallest_multiple(){
  int found = 0;
  int current = 2520;

  while (!found){
    current += 2;

    int j;
    for (j = 11; j <= 20; j++){
      if (current % j != 0) break;
      if (j == 20) found = 1;
    }

  }

  printf("Problem #5\nThe smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d\n\n", current);
  return 0;
}

int sum_square_difference(int boundary){
  int i;
  int sum_of_squares = 0;
  int square_of_sum = 0;
  for (i = 1; i <= boundary; i++){
    square_of_sum += i;
    sum_of_squares += i*i;
  }
  square_of_sum *= square_of_sum;
  printf("Problem #6\nThe difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d\n", square_of_sum-sum_of_squares);
  return 0;
}
