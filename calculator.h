#ifndef CALCULATOR_H
#define CALCULATOR_H

typedef enum{
    FALSE,
    TRUE
}status;

typedef enum{
    SUCCESS,
    DIVISOR0,
    GRAMMATICAL_EXCEPTION,
    FILELOAD_EXCEPTION
}message;

message Evaluate(const char *expression,int *returnResult); 
status isNumber(char ReadInChar);
//视 ReadInChar 是否是数字而返回 TRUE 或FALSE
int TurnToInteger( char IntChar );
// 将字符'0’..'9'转换为整数 0..9
status isOperator(char symbol);

#endif
