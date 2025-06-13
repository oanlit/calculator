# ifndef STACK_H
#define STACK_H
#define MAX_STACK_NUM 100

#include"util.h"

typedef struct
{
    int index;
    int values[MAX_STACK_NUM];
} ValueStack;

typedef struct
{
    int index;
    int symbols[MAX_STACK_NUM];
} SymbolStack;

// 初始化栈
ValueStack getValueStack();
// 压入栈
int pushValueStack(ValueStack* valueStack,int value);
// 弹出栈并获取被弹出的值
int popValueStack(ValueStack* valueStack);
// 获取栈针上的值
int getValue(ValueStack* valueStack);
SymbolStack getSymbolStack();
int pushSymbolStack(SymbolStack* symbolStack,char symbol);
char popSymbolStack(SymbolStack* symbolStack);
char getSymbol(SymbolStack* symbolStack);

#endif
