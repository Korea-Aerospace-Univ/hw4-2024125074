#include <stdio.h>

int main(void)
{   
    int n=0, countE=0,countN=0,countEMax=0,countNmax=0; //n:입력받을 문자열의 수,
    char a[101]; // 배열 쓰지 말고 하나하나 다 입력 받
    
    
    scanf("%d",&n);
    scanf("%s",a);
    
    for (int i=0; i<n; i++) {
        char now =a[i];
        
        if (now >= 'a' && now <='z') {
            countE++;
            if (countEMax < countE ) {
                countEMax = countE;
            }    
        } else {
            countE=0;
        }
        if (now >= '0' && now <='9') {
            countN++;
            if (countN >countNmax) {
                countNmax = countN;
            }
        } else {
            countN=0;
        }
    }
    printf("%d\n",countEMax);
    printf("%d\n",countNmax);
    
    return 0;
}
