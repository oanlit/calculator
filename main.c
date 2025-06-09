#include<stdio.h>
#include<stdlib.h>

#include "stack.h"
#include "calculator.h"

#define MAX_Expression 1024

void helpMenu(){
    printf("0:推出系统\n");
    printf("1:查看帮助\n");
    printf("2:读取文本计算LISP\n");
    printf("3:直接输入LISP表达式计算\n");
}

char context[MAX_Expression];

message readFile(int* result){
    FILE *fp = NULL;
    int value = 0;
    printf("请输入文件路径:");
    scanf("%s",context);
    fp = fopen(context, "r");
    if(fp == NULL){
        printf("读取文件失败!\n");
        return FILELOAD_EXCEPTION;
    }else{
        fscanf(fp, "%s", context);
        fclose(fp);
    }
    message info = Evaluate(context,result);
    return info;
}

message inputLISP(int* result){
    printf("请输入LISP表达式:");
    scanf("%s",context);
    message info = Evaluate(context,result);
    return info;
}

int main(){
    int option = 1;
    int value = 0;
    message info;
    while (option)
    {
        printf("请输入选项,输入1查看帮助\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            helpMenu();
            break;
        
        case 2:
            info = readFile(&value);
            if(info == SUCCESS){
                printf("结果是:%d\n",value);
            }
            break;
        case 3:
            info = inputLISP(&value);
            if(info == SUCCESS){
                printf("结果是:%d\n",value);
            }
            break;
        }
    }
    system("pause");
    return 0;
}
