# ifndef UTIL_H
#define UTIL_H

#define MAX_MESSAGE_SIZE 10000

typedef enum{
    FALSE,
    TRUE
}status;

typedef enum{
    SUCCESS,
    DIVISOR0,
    GRAMMATICAL_EXCEPTION,
    FILELOAD_EXCEPTION
}ExceptionCode;

typedef struct
{
    ExceptionCode code;
    char message[MAX_MESSAGE_SIZE];
}Exception;

#endif
