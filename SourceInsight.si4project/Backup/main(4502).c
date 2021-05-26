/**
  ******************************************************************************
  * @file    main.c
  * @author  周大侠
  * @version V1.0
  * @date    2021-5-14 17:33:30
  ******************************************************************************
  * @attention
    Default encoding UTF-8
  * @explain
	提供一个主频48Mhz的Led DEMO程序
  ******************************************************************************
  */

	
/******************************************************************************
 * Include files
 ******************************************************************************/
#include "main.h"



/*****************************************************************************
 * Function implementation - global ('extern') and local ('static')
 ******************************************************************************/

/**
 ******************************************************************************
 ** \brief  Main function of project
 **
 ** \return uint32_t return value, if needed
 **
 ** This sample
 **
 ******************************************************************************/
int32_t main(void)
{
	Dev_ClkCfg();//48M主频
    App_LedInit();//< LED端口初始化

    while(1)
    {
        ///< LED点亮
        Gpio_SetIO(EVB_LEDR_PORT, EVB_LEDR_PIN);
        delay1ms(1000);

        ///< LED关闭
        Gpio_ClrIO(EVB_LEDR_PORT, EVB_LEDR_PIN);
        delay1ms(1000);
    }
}





/******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/

