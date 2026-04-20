#include <stdio.h>

int main(void)
{   
    int s=0,a=0, count=0; //정답변수 s, 입력 받을 변수 a, 시도횟수 세는 변수 count를 정수형으로 선언 
    
    scanf("%d",&s); //정수형 정답 입력 받기
    
    
    do { //do 부분에 있는건 일단 먼저 한번 하고 조건식 비교
        scanf("%d",&a); //정답을 시도할 변수 정수형으로 입력 받기
        count++; //정답을 시도하였으므로 시도 횟수 +1
        if (s==a) { // 만약 입력한 a가 정답 s와 같다면
            printf("%d==?",a); //같을 때의 결과값 출력
            printf("\n%d",count); //이때까지의 시도횟수 출력
        } else if (a>s) { //입력한 a가 정답 s보다 크다면
            printf("%d>?\n",a); //a가 정답보다 크다는 결과 출력
        } else { //입력한 a가 정답 s보다 작다면
            printf("%d<?\n",a); //a가 정답보다 작다는 결과 출력
        }
    } while (a!= s); //정답 s와 입력 변수a가 같을 때까지 반복

    return 0;
}
