/* 이름: 정승희
   학번: 22200671
   수업명: C프로그래밍(전산전자)
   교수님: 김호준 교수님
   프로그램 설명: 세 개의 정수를 입력 받아 최대값, 최소값, 평균값을 구하는 프로그램을 작성한다. 
   날짜: 2022.09.16(금) 
   */

#include <stdio.h> 

int main(void) { 
  int num1, num2, num3;
  int sum;
  int min, max;
  float average;

  printf("세 가지 정수를 입력하세요.");
  scanf("%d %d %d", &num1, &num2, &num3); 

  if (num1<=num2){
    if (num2<=num3)
      max=num3;
    else
      max=num2;
  }
  else{
    if (num1<=num3)
      max=num3;
    else
      min=num1;
      }

  printf("최대값은 %d이고, \n", max);

  if (num1<=num2){
    if (num1<=num3)
      min=num1;
    else
      min=num3;
  }
  else{
    if (num2<=num3)
      min=num2;
    else
      min=num3;
  }

  printf("최소값은 %d이고, \n", min);
  
  sum=num1+num2+num3;
  average=sum/3.0;
  printf("평균값은 %f입니다. ", average);
    
  
  return 0;

}


