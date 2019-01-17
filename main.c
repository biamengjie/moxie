#include <stdio.h>
char arr[1000];
int index=0;
int main(){

    printf("jinruminganzifuguanlixitong:\n");
    while(1){
        printf("1---tianjiayigeminganzifu:\n");
        printf("2---shanchuzuihouyigeminganzifu:\n");
        printf("3---xianshisouyoudeminganzifu:\n");
        printf("4---tihuanminganzifu:\n");
        printf("5---chengxutuichu:\n");
        printf("qingshuruxiangyingdegonggnegnbianhao:\n");
        int code;
        scanf("%d",code);
        if(code==1){
            printf("tianjiayigeminganzifu:\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index]=m;
            index++;
            printf("tianjiachenggong,dianjihuichejixu:\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
         if(code==2){
             printf("shanchuzuihouyigeminganzifu:\n");
             index--;
             printf("shanchuchenggong,dianjihuichejixu:\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x); 
            
        }
         if(code==3){
             printf("xianshisouyoudedeminganzifu:\n");
             for(int i=0;i<index;i++){
                 printf("%c\n",arr[i]);
             }
             printf("dianjihuichejixu:\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
         if(code==4){
            
        }
         if(code==5){
            
        }
    }

    return 0;

}