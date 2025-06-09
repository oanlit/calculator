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
//�� ReadInChar �Ƿ������ֶ����� TRUE ��FALSE
int TurnToInteger( char IntChar );
// ���ַ�'0��..'9'ת��Ϊ���� 0..9
status isOperator(char symbol);

#endif
