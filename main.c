#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    int x=0;
    int i=0;
    scanf("%s",str1);
    for(i=0;i,100;i++){
        if(strcmp(str1, "end")!=0)
        {
                printf("atr1[i]:%s\n",&str1);
                str2[i] = str1;
                printf("atr2[i]:%s\n",&str2);
                scanf("%c",str1);
        }
    else
        break;
    }
    return 0;
}
