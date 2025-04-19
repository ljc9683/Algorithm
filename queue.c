#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,cnt=0;
    char arr[100][100]={"\0",},a[100];
    for(;;){
        printf("데이터 또는 개수 또는 REMOVE 또는 QUEUE를 입력하세요(최대길이 100자 제한) : ");
        scanf("%s",a);
        if(strcmp(a,"remove")==0 || strcmp(a,"REMOVE")==0 || strcmp(a,"DELETE")==0 || strcmp(a,"delete")==0 || strcmp(a,"삭제")==0 || strcmp(a,"제거")==0) {
            if (cnt == 0) {
                printf("큐(QUEUE)가 비어있습니다.\n");
            }
            else {
                printf("삭제된 항목 : %s\n", arr[1]);
                for (i = 1; i <= cnt; i++) {
                    strcpy(arr[i], arr[i + 1]);
                }
                cnt--;
            }
        }
        else if(strcmp(a,"exit")==0 || strcmp(a,"EXIT")==0 || strcmp(a,"종료")==0 || strcmp(a,"bye")==0 || strcmp(a,"BYE")==0) {
            for(i=1; i <= cnt; i++) {
                printf("%s ", arr[i]);
            }
            printf("\n프로그램을 종료합니다.\n");
            break;
        }
        else if(strcmp(a,"show")==0 || strcmp(a,"SHOW")==0 || strcmp(a,"보기")==0 || strcmp(a,"queue")==0 || strcmp(a,"QUEUE")==0) {
            if (cnt == 0) {
                printf("큐(QUEUE)가 비어있습니다.\n");
            }
            else {
                printf("큐(QUEUE)의 항목 : ");
                for (i = 1; i <= cnt; i++) {
                    printf("%s ", arr[i]);
                }
                printf("\n");
            }
        }
        else if(strcmp(a,"count")==0 || strcmp(a,"COUNT")==0 || strcmp(a,"개수")==0 || strcmp(a,"cnt")==0 || strcmp(a,"CNT")==0) {
            printf("큐(QUEUE)의 개수 : %d\n", cnt);
        }
        else{
            if (cnt == 100){
                printf("큐(QUEUE)가 가득 찼습니다.\n");
            }
            else{
                cnt++;
                strcpy(arr[cnt], a);
                printf("추가된 항목 : %s\n", arr[cnt]);
            }
        }
    }
}
