/* 이름: 정승희
   학번: 22200671
   수업명: C프로그래밍(전산전자)
   교수님: 김호준 교수님
   프로그램 설명: 두 개의 정수를 입력 받아 합, 곱, 평균을 구하는 프로그램을 작성한다. 
   날짜: 2022.09.16(금) 
   */

#include <stdio.h> 

int main(void) { 
  int num1, num2, sum, multi;
  float average;

  printf("첫번째 정수를 입력하세요 ");
  scanf("%d", &num1);
  printf("두번째 정수를 입력하세요 ");
  scanf("%d",&num2);

  sum=num1+num2;
  printf("두 정수의 합은 %d입니다. \n", sum);

  multi=num1*num2;
  printf("두 정수의 곱은 %d입니다. \n", multi);

  average=multi/2;
  printf("두 정수의 평균은 %f입니다. \n", average);

  return 0;

}