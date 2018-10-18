/*****************************************************************************/
/*                                                  ###                      */
/*       #####          ###    ###                  ###  CREATE: 2011-11-23  */
/*     #######          ###    ###      [MATH]      ###  ~~~~~~~~~~~~~~~~~~  */
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
/*  >>>>>>>>>>>>>>>>>>>> CrHack B 分度毫伏转温度函数库 <<<<<<<<<<<<<<<<<<<<  */
/*  =======================================================================  */
/*****************************************************************************/

#include "phylib.h"

/* 0.291 - 2.431 (毫伏) */
#define N_COE1  9
static const double _rom_ s_coe1[N_COE1] =
{
     9.8423321E+01, 6.9971500E+02,
    -8.4765304E+02, 1.0052644E+03,
    -8.3345952E+02, 4.5508542E+02,
    -1.5523037E+02, 2.9886750E+01,
    -2.4742860E+00,
};

/* 2.431 - 13.82 (毫伏) */
#define N_COE2  9
static const double _rom_ s_coe2[N_COE2] =
{
     2.1315071E+02, 2.8510504E+02,
    -5.2742887E+01, 9.9160804E+00,
    -1.2965303E+00, 1.1195870E-01,
    -6.0625199E-03, 1.8661696E-04,
    -2.4878585E-06,
};

/*
=======================================
    B 分度毫伏转温度
=======================================
*/
CR_API double
type_b_mv2t (
  __CR_IN__ double  mv
    )
{
    double  tt;
    ufast_t ii;

    if (mv < 0.291 || mv > 13.82)
        return (CR_PHY_INV);
    if (mv < 2.431) {
        tt = s_coe1[N_COE1 - 1] * mv;
        for (ii = N_COE1 - 2; ii != 0; ii--)
            tt = (tt + s_coe1[ii]) * mv;
        tt += s_coe1[0];
    }
    else {
        tt = s_coe2[N_COE2 - 1] * mv;
        for (ii = N_COE2 - 2; ii != 0; ii--)
            tt = (tt + s_coe2[ii]) * mv;
        tt += s_coe2[0];
    }
    return (tt);
}

/*****************************************************************************/
/* _________________________________________________________________________ */
/* uBMAzRBoAKAHaACQD6FoAIAPqbgA/7rIA+5CM9uKw8D4Au7u7mSIJ0t18mYz0mYz9rAQZCgHc */
/* wRIZIgHZovGBXUAZg+v0GbB+gRmgcJ7BAAAisIlAwB1Av7LSHUC/s9IdQL+w0h1Av7HZkZmgf */
/* 4JLgIAdb262gPsqAh0+zP/uQB9ZYsFZYktq+L3sMi/AAK7gAKJAUtLdfq5IANXvT8BiQzfBIv */
/* FLaAAweAEmff53wb+Adjx3kQE2xwy5Io8ithkigcFgACJBN8E3sneNvwB2xyLHDkdfA2JHSyA */
/* adtAAQPdZYgHR0dNdbZfSYP5UHWr/kQEtAHNFg+Eef/DWAKgDw== |~~~~~~~~~~~~~~~~~~~ */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ >>> END OF FILE <<< */
/*****************************************************************************/