#include <stdio.h>
#include <string.h>
int main()
{
    int i,cnt=0;
    char arr[100][100]={"\0",},a[100];
    for(;;){
        printf("스택의 항목 또는 개수 또는 POP 또는 STACK를 입력하세요(최대길이 100자 제한) : ");
        scanf("%s",a);
        if(strcmp(a,"EXIT")==0 || strcmp(a,"exit")==0 || strcmp(a,"종료")==0 || strcmp(a,"BYE")==0 || strcmp(a,"bye")==0){
            for(i=1;i<=cnt;i++){
                printf("%s ",arr[i]);
            }
            printf("\n프로그램을 종료합니다.\n");
            return 0;
        }
        if(strcmp(a,"POP")==0 || strcmp(a,"pop")==0 || strcmp(a,"팝")==0){
            if(cnt==0){
                printf("스택이 비어있습니다.\n");
            }
            else{
                printf("POP : %s\n",arr[cnt]);
                strcpy(arr[cnt],"\0");
                cnt--;
            }
        }
        else if(strcmp(a,"STACK")==0 || strcmp(a,"stack")==0 || strcmp(a,"스택")==0){
            if(cnt==0){
                printf("스택이 비어있습니다.\n");
            }
            else{
                for(i=1;i<=cnt;i++){
                    printf("%s ",arr[i]);
                }
                printf("\n");
            }
        }
        else if(strcmp(a,"COUNT")==0 || strcmp(a,"count")==0 || strcmp(a,"CNT")==0 || strcmp(a,"cnt")==0 || strcmp(a,"개수")==0){
            printf("스택의 개수 : %d\n",cnt);
        }
        else{
            if(cnt==99){
                printf("스택이 가득 찼습니다.\n");
            }
            else{
                cnt++;
                strcpy(arr[cnt],a);
                printf("PUSH : %s\n",arr[cnt]);
            }
        }
    }
}
