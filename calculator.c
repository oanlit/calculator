#include "calculator.h"
#include "stack.h"

char operators[] = {'+', '-', '*', '/', '(', ')'};
ExceptionCode Evaluate(const char *expression,int *returnResult){
    char c;
    int value;
    int result = 0;
    char opera;
    ValueStack valueStack = getValueStack();
    SymbolStack symbolStack = getSymbolStack();
    for (int i = 0; (c = expression[i]) != 0; i++){
        if(isNumber(c)){
            value = TurnToInteger(c);
            pushValueStack(&valueStack,value);
        }
        else if(isOperator(c)){
            if(c == ')'){
                opera = popSymbolStack(&symbolStack);
                result = popValueStack(&valueStack);
                switch (opera)
                {
                case '+':
                    result = popValueStack(&valueStack) + result;
                    break;
                
                case '-':
                    result = popValueStack(&valueStack) - result;
                    break;
                case '*':
                    result = popValueStack(&valueStack) * result;
                    break;
                case '/':
                    result = popValueStack(&valueStack) / result;
                    break;
                }
                pushValueStack(&valueStack,result);
                popSymbolStack(&symbolStack);
            }
            else{
                pushSymbolStack(&symbolStack,c);
            }
        }
        else {
        }
    }
    
    *returnResult = getValue(&valueStack);
    return SUCCESS;
}

status isNumber(char ReadInChar){
    if(ReadInChar >= '0' && ReadInChar <= '9'){
        return TRUE;
    }
    return FALSE;
}

status isOperator(char symbol){
    int operatorsLength = sizeof(operators) / sizeof(char);
    for(int i = 0;i <operatorsLength;i++){
        if (symbol == operators[i]){
            return TRUE;
        }
    }
    return FALSE;
}

int TurnToInteger( char IntChar ){
    return IntChar - '0';
}
