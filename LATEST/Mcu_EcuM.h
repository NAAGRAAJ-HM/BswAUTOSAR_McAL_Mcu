#pragma once
/*****************************************************/
/* File   : Mcu_EcuM.h                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Mcu.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class infMcu_EcuM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, MCU_CODE) GetResetReason (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infEcuMClient* gptrinfEcuMClient_Mcu;
extern infMcu_EcuM*   gptrinfMcu_EcuM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

