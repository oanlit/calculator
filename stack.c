#include "stack.h"

int pushValueStack(ValueStack* valueStack,int value){
    valueStack->values[valueStack->index] = value;
    valueStack->index+=1;
    return 1;
}
int popValueStack(ValueStack* valueStack){
    int data = getValue(valueStack);
    valueStack->values[valueStack->index] = 0;
    if(valueStack->index>0){
        valueStack->index-=1;
    }
    return data;
}
int getValue(ValueStack* valueStack){
    return valueStack->values[valueStack->index-1];
}

int pushSymbolStack(SymbolStack* symbolStack,char symbol){
    symbolStack->symbols[symbolStack->index] = symbol;
    symbolStack->index+=1;
    return 1;
}
char popSymbolStack(SymbolStack* symbolStack){
    char data = getSymbol(symbolStack);
    symbolStack->symbols[symbolStack->index] = 0;
    if(symbolStack->index > 0){
        symbolStack->index-=1;
    }
    return data;
}

char getSymbol(SymbolStack* symbolStack){
    return symbolStack->symbols[symbolStack->index-1];
}