#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int i,num;
    int ans = rand() % 100 + 1;
    
    printf("컴퓨터가 생각하는 1~100의 수를 맞추세요.\n");
    for(i=7;i>0;i--) {
        printf("기회 : %d | 입력 : ",i);
        scanf("%d",&num);
        if(num > ans) {
            printf("DOWN\n");
        }else if(num < ans) {
            printf("UP\n");
        }else {
            printf("정답입니다. %d번만에 맞추셨습니다.",8-i);
            break;
        }
    }
    if(!i) {
        printf("실패했습니다. 정답은 %d입니다.",ans);
    }
}
