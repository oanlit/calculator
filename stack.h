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

// ��ʼ��ջ
ValueStack getValueStack();
// ѹ��ջ
int pushValueStack(ValueStack* valueStack,int value);
// ����ջ����ȡ��������ֵ
int popValueStack(ValueStack* valueStack);
// ��ȡջ���ϵ�ֵ
int getValue(ValueStack* valueStack);
SymbolStack getSymbolStack();
int pushSymbolStack(SymbolStack* symbolStack,char symbol);
char popSymbolStack(SymbolStack* symbolStack);
char getSymbol(SymbolStack* symbolStack);

#endif
