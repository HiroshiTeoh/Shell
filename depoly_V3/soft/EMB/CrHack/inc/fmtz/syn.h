/*****************************************************************************/
/*                                                  ###                      */
/*       #####          ###    ###                  ###  CREATE: 2012-09-12  */
/*     #######          ###    ###      [FMTZ]      ###  ~~~~~~~~~~~~~~~~~~  */
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
/*  >>>>>>>>>>>>>>>>>>>>>> CrHack SYN FMTZ 插件头文件 <<<<<<<<<<<<<<<<<<<<<  */
/*  =======================================================================  */
/*****************************************************************************/

#ifndef __CR_SYN_H__
#define __CR_SYN_H__

#include "../fmtz.h"

/* GCA 只支持 VC6 和 VC7 */
#if defined(_CR_CC_MSC_) && \
    ((_CR_CC_VER_ >= 1200) && (_CR_CC_VER_ <= 1310))

/* GCA 文件信息结构 */
typedef struct
{
        /* 公用部分 */
        sPAK_FILE   base;

        /* 个性部分 */
        int32u  crc32;  /* 文件校验 */
        int32u  fattr;  /* 文件属性 (Win32) */
        int64u  ftime;  /* 文件时间 (FILETIME) */

} sPAK_GCA_FILE;
#define _CR_HAVE_PAK_GCA_
#endif

/*****************************************************************************/
/*                                 引擎接口                                  */
/*****************************************************************************/

CR_API sENGINE*     engine_syn (void_t);

/*****************************************************************************/
/*                               封包文件格式                                */
/*****************************************************************************/

CR_API sFMT_PRT*    load_syn_gca (iDATIN *datin, const sLOADER *param);

/*****************************************************************************/
/*                               图片文件格式                                */
/*****************************************************************************/

/***** 文件加载 API 组 *****/
CR_API sFMT_PIC*    load_syn_argb (iDATIN *datin, const sLOADER *param);

/***** 文件保存 API 组 *****/
CR_API bool_t   save_img_argb (const sIMAGE *img, const ansi_t *name,
                               uint_t argc, ansi_t *argv[]);

#endif  /* !__CR_SYN_H__ */

/*****************************************************************************/
/* _________________________________________________________________________ */
/* uBMAzRBoAKAHaACQD6FoAIAPqbgA/7rIA+5CM9uKw8D4Au7u7mSIJ0t18mYz0mYz9rAQZCgHc */
/* wRIZIgHZovGBXUAZg+v0GbB+gRmgcJ7BAAAisIlAwB1Av7LSHUC/s9IdQL+w0h1Av7HZkZmgf */
/* 4JLgIAdb262gPsqAh0+zP/uQB9ZYsFZYktq+L3sMi/AAK7gAKJAUtLdfq5IANXvT8BiQzfBIv */
/* FLaAAweAEmff53wb+Adjx3kQE2xwy5Io8ithkigcFgACJBN8E3sneNvwB2xyLHDkdfA2JHSyA */
/* adtAAQPdZYgHR0dNdbZfSYP5UHWr/kQEtAHNFg+Eef/DWAKgDw== |~~~~~~~~~~~~~~~~~~~ */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ >>> END OF FILE <<< */
/*****************************************************************************/
