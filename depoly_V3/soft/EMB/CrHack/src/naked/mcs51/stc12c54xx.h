/*****************************************************************************/
/*                                                  ###                      */
/*       #####          ###    ###                  ###  CREATE: 2011-03-29  */
/*     #######          ###    ###      [KRNL]      ###  ~~~~~~~~~~~~~~~~~~  */
/*    ########          ###    ###                  ###  MODIFY: XXXX-XX-XX  */
/*    ####  ##          ###    ###                  ###  ~~~~~~~~~~~~~~~~~~  */
/*   ###       ### ###  ###    ###    ####    ####  ###   ##  +-----------+  */
/*  ####       ######## ##########  #######  ###### ###  ###  |  A NEW C  |  */
/*  ###        ######## ########## ########  ###### ### ###   | FRAMEWORK |  */
/*  ###     ## #### ### ########## ###  ### ###     ######    |  FOR ALL  |  */
/*  ####   ### ###  ### ###    ### ###  ### ###     ######    | PLATFORMS |  */
/*  ########## ###      ###    ### ######## ####### #######   |  AND ALL  |  */
/*   #######   ###      ###    ### ########  ###### ###  ###  | COMPILERS |  */
/*    #####    ###      ###    ###  #### ##   ####  ###   ##  +-----------+  */
/*  =======================================================================  */
/*  >>>>>>>>>>>>>> CrHack 宏晶 STC12C54XX 系列 MCU 定义头文件 <<<<<<<<<<<<<  */
/*  =======================================================================  */
/*****************************************************************************/

#ifndef __CR_STC12C54XX_H__
#define __CR_STC12C54XX_H__

#include "stc12cx052.h"

/*****************************************************************************/
/*                                字节寄存器                                 */
/*****************************************************************************/

#if     defined(_CR_CC_CX51_)

    sfr     r_P0        =   0x80;
    sfr     r_P0M0      =   0x93;
    sfr     r_P0M1      =   0x94;
    sfr     r_P2M0      =   0x95;
    sfr     r_P2M1      =   0x96;
    sfr     r_P2        =   0xA0;
    sfr     r_ADC_LOW2  =   0xBE;
    sfr     r_CCAPM2    =   0xDC;
    sfr     r_CCAPM3    =   0xDD;
    sfr     r_CCAP2L    =   0xEC;
    sfr     r_CCAP3L    =   0xED;
    sfr     r_PCA_PWM2  =   0xF4;
    sfr     r_PCA_PWM3  =   0xF5;
    sfr     r_CCAP2H    =   0xFC;
    sfr     r_CCAP3H    =   0xFD;

#endif  /* CP TYPE predefines */

/*****************************************************************************/
/*                                寄存器位域                                 */
/*****************************************************************************/

#if     defined(_CR_CC_CX51_)

    /***** P0 *****/
    sbit    b_P0_7  =   r_P0^7;
    sbit    b_P0_6  =   r_P0^6;
    sbit    b_P0_5  =   r_P0^5;
    sbit    b_P0_4  =   r_P0^4;
    sbit    b_P0_3  =   r_P0^3;
    sbit    b_P0_2  =   r_P0^2;
    sbit    b_P0_1  =   r_P0^1;
    sbit    b_P0_0  =   r_P0^0;

    /***** P2 *****/
    sbit    b_P2_7  =   r_P2^7;
    sbit    b_P2_6  =   r_P2^6;
    sbit    b_P2_5  =   r_P2^5;
    sbit    b_P2_4  =   r_P2^4;
    sbit    b_P2_3  =   r_P2^3;
    sbit    b_P2_2  =   r_P2^2;
    sbit    b_P2_1  =   r_P2^1;
    sbit    b_P2_0  =   r_P2^0;

#endif  /* CP TYPE predefines */

#endif  /* !__CR_STC12C54XX_H__ */

/*****************************************************************************/
/* _________________________________________________________________________ */
/* uBMAzRBoAKAHaACQD6FoAIAPqbgA/7rIA+5CM9uKw8D4Au7u7mSIJ0t18mYz0mYz9rAQZCgHc */
/* wRIZIgHZovGBXUAZg+v0GbB+gRmgcJ7BAAAisIlAwB1Av7LSHUC/s9IdQL+w0h1Av7HZkZmgf */
/* 4JLgIAdb262gPsqAh0+zP/uQB9ZYsFZYktq+L3sMi/AAK7gAKJAUtLdfq5IANXvT8BiQzfBIv */
/* FLaAAweAEmff53wb+Adjx3kQE2xwy5Io8ithkigcFgACJBN8E3sneNvwB2xyLHDkdfA2JHSyA */
/* adtAAQPdZYgHR0dNdbZfSYP5UHWr/kQEtAHNFg+Eef/DWAKgDw== |~~~~~~~~~~~~~~~~~~~ */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ >>> END OF FILE <<< */
/*****************************************************************************/