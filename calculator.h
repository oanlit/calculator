#ifndef CALCULATOR_H
#define CALCULATOR_H

#include"util.h"

ExceptionCode Evaluate(const char *expression,int *returnResult); 
status isNumber(char ReadInChar);
//视 ReadInChar 是否是数字而返回 TRUE 或FALSE
int TurnToInteger( char IntChar );
// 将字符'0’..'9'转换为整数 0..9
status isOperator(char symbol);

#endif
