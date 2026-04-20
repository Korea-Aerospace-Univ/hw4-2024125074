#include <stdio.h>

int main(void)
{   
    int n=0, countE=0,countN=0; //n:입력될 문자의 개수,countE:현재 연속된 영어의 수,countN:현재 연속된 숫자의 수
    int countEMax=0,countNmax=0; //countEMax:연속된 영어의 최댓값, countNmax:연속된 숫자의 최댓값
    char a; //문자를 하나씩 읽기 위한 변수 a선언
    
    scanf("%d",&n); //입력될 문자의 개수 입력 받기
    
    for (int i=1; i<=n+1; i++) { //scanf 입력 후 \n이 포함하는 것을 막기 위해 i는 1부터 시작하고 입력될 문자의 개수만큼 반복해야하므로 n+1까지 1씩 증가하여 반복
        scanf("%c",&a); //문자 한개를 입력 받아 a에 저장
        
        if (a >= 'a' && a <='z') { //만약 입력 받은 a가 영어 소문자라면
            countE++; //현재 연속된 영어의 수 +1 증가
            if (countEMax < countE ) { //만약 현재 연속된 영어의 수가 연속된 영어의 최댓값보다 크다면
                countEMax = countE; //최댓값에 현재 영어값 넣기
            }    
        } else { //만약 영어 소문자가 없다면
            countE=0; //현재 연속된 영어의 수는 0
        }
        if (a >= '0' && a <='9') { //만약 입력 받은 a가 숫자라면
            countN++; //현재 연속된 숫자의 수 +1 증가
            if (countN >countNmax) { //만약 현재 연속된 숫자의 수가 연속된 숫자의 최댓값보다 크다면
                countNmax = countN; //최댓값에 현재 숫자값 넣기
            }
        } else { //만약 숫자가 없다면
            countN=0; //현재 연속된 숫자의 수는 0
        }
    }
    printf("%d\n",countEMax); //연속된 영어의 최댓값 출력
    printf("%d\n",countNmax); //연속된 숫자의 최댓값 출력
    
    return 0;
}
