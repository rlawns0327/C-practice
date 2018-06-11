/*
 주제 : 두 개의 정수를 입력받아 사칙 연산을 수행하여 출력한다. 이때 이 작업을 10번 수행한다.
 날짜 : 2018.05.17
 개발자 : 김 준
*/

#include <stdio.h>
int main(void)
{
    int a, b;

    for (int i = 0; i < 10; i++)
    {
        printf("두 개의 정수를 입력하세요.\n");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %d\n", a, b, a * b);
        printf("%d / %d = %.2lf\n", a, b, (double)a / b);
    }
    return 0;
}
