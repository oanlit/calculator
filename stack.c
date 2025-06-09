#include "stack.h"

ValueStack getValueStack(){
    ValueStack valueStack = {0};
    valueStack.index = -1;
    return valueStack;
}

int pushValueStack(ValueStack* valueStack,int value){
    valueStack->index+=1;
    valueStack->values[valueStack->index] = value;
    return 1;
}
int popValueStack(ValueStack* valueStack){
    int data = getValue(valueStack);
    valueStack->values[valueStack->index] = 0;
    if(valueStack->index>-1){
        valueStack->index-=1;
    }
    return data;
}
int getValue(ValueStack* valueStack){
    if(valueStack->index<=-1){
        return 0;
    }
    return valueStack->values[valueStack->index];
}

SymbolStack getSymbolStack(){
    SymbolStack symbolStack = {0};
    symbolStack.index = -1;
    return symbolStack;
}

int pushSymbolStack(SymbolStack* symbolStack,char symbol){
    symbolStack->index+=1;
    symbolStack->symbols[symbolStack->index] = symbol;
    return 1;
}
char popSymbolStack(SymbolStack* symbolStack){
    char data = getSymbol(symbolStack);
    symbolStack->symbols[symbolStack->index] = 0;
    if(symbolStack->index > -1){
        symbolStack->index-=1;
    }
    return data;
}

char getSymbol(SymbolStack* symbolStack){
    if(symbolStack->index<=-1){
        return 0;
    }
    return symbolStack->symbols[symbolStack->index];
}