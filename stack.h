# ifndef STACK_H
#define STACK_H
#define MAX_STACK_NUM 100

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

int pushValueStack(ValueStack* valueStack,int value);
int popValueStack(ValueStack* valueStack);
int getValue(ValueStack* valueStack);
int pushSymbolStack(SymbolStack* symbolStack,char symbol);
char popSymbolStack(SymbolStack* symbolStack);
char getSymbol(SymbolStack* symbolStack);

#endif
