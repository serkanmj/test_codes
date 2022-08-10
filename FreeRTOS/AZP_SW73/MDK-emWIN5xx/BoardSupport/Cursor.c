/*
*******************************************************************************
  Copyright (C), 2012-2014, Embest Tech. Co., Ltd.
  FileName		    : Cursor.c
  Author          : lichy       
  Version 		    : 1.0.0     
  Date			      : 2012/02/29
  Description	    : LCD Cursor graphy
  Function List   : 
  History		      :
  <author>  	    : lichy       
  <time>     	    : 2012/02/29
  <version >      : 1.0.0 	
  <desc>		      : build this moudle			 
*******************************************************************************
*/
#include "Cursor.h"

#if(0)

#pragma pack(4)
const unsigned char Cursor[(CURSOR_H_SIZE/4)*CURSOR_H_SIZE] = 
{
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 234, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 175, 255, 255, 254, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 255, 255, 255, 255, 234, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 175, 255, 255, 255, 255, 254, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170, 170,
170, 170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170, 170,
170, 170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170, 170,
170, 170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170, 170,
170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170,
170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170,
170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170,
170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170,
170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170,
170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 234, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170,
170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170,
170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170,
170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170,
170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170,
170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170,
170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170,
170, 170, 170, 170, 191, 255, 255, 255, 255, 255, 255, 255, 170, 170, 170, 170,
170, 170, 170, 170, 175, 255, 255, 255, 255, 255, 255, 254, 170, 170, 170, 170,
170, 170, 170, 170, 171, 255, 255, 255, 255, 255, 255, 250, 170, 170, 170, 170,
170, 170, 170, 170, 170, 255, 255, 255, 255, 255, 255, 234, 170, 170, 170, 170,
170, 170, 170, 170, 170, 175, 255, 255, 255, 255, 254, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 255, 255, 255, 255, 234, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 175, 255, 255, 254, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 234, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
};
#pragma pack()

#endif