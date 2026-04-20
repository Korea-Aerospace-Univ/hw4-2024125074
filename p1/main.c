#include <stdio.h>

int main(void)
{   
    int s=0,a=0, count=0; //정답변수 s, 입력 받을 변수 a, 시도횟수 세는 변수 count를 정수형으로 선언 
    
    scanf("%d",&s); //정수형 정답 입력 받기
    
    
    do { //do 부분에 있는건 일단 먼저 한번 하고 조건식 비교
        scanf("%d",&a); //정답을 시도할 변수 정수형으로 입력 받기
        count++; //정답 시도 횟수 +1
        if (s==a) { //정답이라면
            printf("%d==?",a); 
            printf("\n%d",count); //시도횟수 출력
        } else if (a>s) { //입력한 변수가 정답보다 크다면
            printf("%d>?\n",a);
        } else { //입력한 변수가 정답보다 작다면
            printf("%d<?\n",a); 
        }
    } while (a!= s); //정답이랑 입력 변수가 같을 때까지 반복

    return 0;
}
