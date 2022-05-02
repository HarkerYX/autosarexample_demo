/***************************************************************************************************
**                                                                                                **
**  SRC-MODULE: Dio.c                                                                             **
**                                                                                                **
**  Copyright (C) Yigit Rahim Kuru                                                                **
**                                                                                                **
**  PROJECT   : MCAL Layer for DIO Driver                                                         **
**                                                                                                **
**  AUTHOR    : Yigit Rahim Kuru                                                                  **
**                                                                                                **
***************************************************************************************************/

/*Includes*/
#include "Dio.h"
#include <stdio.h>
#include <stdint.h>

/***************************************************************************************************
**          Function API to Read a Channel                                                        **
**          If pin Low return STD_LOW                                                             **
**          If pin high return STD_HIGH                                                           **
***************************************************************************************************/
Dio_LevelType Dio_ReadChannel( 
 		Dio_ChannelType ChannelId /*Channel ID*/
	)
	{
		unsigned int read_val;
	  	/*(Assume)Channel 10 is mapped to Port P2.0*/
	  	if(ChannelId==10)
	  	{
	 		/*(Assume)Reading Value*/
	 		read_val=P2IN&BIT0;
	 		if(read_val==0x00)
	 		{
				return(STD_LOW);
			}
			else
			{
				return(STD_HIGH);
			}			 	
	 }
	 	 
	/*Space for the other channels*/		
	}
	
/***************************************************************************************************
**          Function for write to a port                                                          **
***************************************************************************************************/
void Dio_WriteChannel(
		Dio_ChannelType ChannelId, /*Channel ID*/
		Dio_LevelType Level        /*Status of read value*/
	)
	{
		if(ChannelId==10)
		{
	
	    	if(Level ==STD_LOW)
	     	{
	     		P2OUT&=~BIT0; /*Lane for set pin LOW*/
		 	}
		 	else
		 	{
		 		P2OUT|=BIT0; /*Lane for set pin HIGH*/
		 	}
			 		 
	/*Space for the other pins*/
	}

/******************************************************************************************/






























