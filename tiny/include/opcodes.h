#pragma once

enum
{
    // Add an integer to the stack pointer
    TINY_OP_SP_ADD,

    TINY_OP_PUSH_NULL,

    TINY_OP_PUSH_TRUE,
    TINY_OP_PUSH_FALSE,

	TINY_OP_PUSH_INT,

    TINY_OP_PUSH_CHAR,

	TINY_OP_PUSH_FLOAT,
    TINY_OP_PUSH_STRING,

    TINY_OP_PUSH_STRUCT,

    TINY_OP_STRUCT_GET,
    TINY_OP_STRUCT_SET,

    TINY_OP_ADD_I,
    TINY_OP_SUB_I,
    TINY_OP_MUL_I,
    TINY_OP_DIV_I,
    TINY_OP_MOD_I,
    TINY_OP_OR_I,
    TINY_OP_AND_I,

    TINY_OP_LT_I,
    TINY_OP_LTE_I,
    TINY_OP_GT_I,
    TINY_OP_GTE_I,

    TINY_OP_ADD1_I,
    TINY_OP_SUB1_I,

    TINY_OP_ADD_F,
    TINY_OP_SUB_F,
    TINY_OP_MUL_F,
    TINY_OP_DIV_F,
    
    TINY_OP_LT_F,
    TINY_OP_LTE_F,
    TINY_OP_GT_F,
    TINY_OP_GTE_F,

    TINY_OP_ADD1_F,
    TINY_OP_SUB1_F,

    TINY_OP_EQU,

    TINY_OP_LOG_NOT,
    TINY_OP_LOG_AND,
    TINY_OP_LOG_OR,

    TINY_OP_SET,
    TINY_OP_GET,
    
    TINY_OP_READ,

    TINY_OP_GOTO,
    TINY_OP_GOTOZ,

    TINY_OP_CALL,
    TINY_OP_RETURN,
    TINY_OP_RETURN_VALUE,

    TINY_OP_CALLF,

    TINY_OP_GETLOCAL,
    TINY_OP_SETLOCAL,

    TINY_OP_GET_RETVAL,

    TINY_OP_HALT,

    TINY_OP_FILE,
    TINY_OP_LINE,

    TINY_OP_MISALIGNED_INSTRUCTION
};
