/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/FILE_INPUT_TEST.vhd";
extern char *STD_TEXTIO;



static void work_a_2711740151_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);

LAB6:    t2 = (t0 + 3208);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 3208);
    *((int *)t3) = 0;
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2056U);
    t3 = (t0 + 6724);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 14;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (14 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    std_textio_file_open1(t2, t3, t7, (unsigned char)0);
    xsi_set_current_line(60, ng0);

LAB8:    t2 = (t0 + 2056U);
    t5 = std_textio_endfile(t2);
    t6 = (!(t5));
    if (t6 != 0)
        goto LAB9;

LAB11:    goto LAB2;

LAB5:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2696);
    t4 = (t0 + 2056U);
    t8 = (t0 + 2232U);
    std_textio_readline(STD_TEXTIO, t3, t4, t8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6738);
    *((int *)t2) = 1;
    t3 = (t0 + 6742);
    *((int *)t3) = 45;
    t10 = 1;
    t12 = 45;

LAB12:    if (t10 <= t12)
        goto LAB13;

LAB15:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6746);
    *((int *)t2) = 1;
    t3 = (t0 + 6750);
    *((int *)t3) = 45;
    t10 = 1;
    t12 = 45;

LAB17:    if (t10 <= t12)
        goto LAB18;

LAB20:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t12 = (t10 + 1);
    t2 = (t0 + 1728U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1728U);
    t8 = *((char **)t4);
    t13 = *((int *)t8);
    t14 = (t13 - 1);
    t11 = (t14 * 1);
    t15 = (25U * t11);
    t16 = (0U + t15);
    t4 = (t0 + 6738);
    t17 = *((int *)t4);
    t18 = (t17 - 1);
    t19 = (t18 * 1);
    t20 = (1 * t19);
    t21 = (t16 + t20);
    t9 = (t0 + 3288);
    t22 = (t9 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)32;
    xsi_driver_first_trans_delta(t9, t21, 1, 0LL);

LAB14:    t2 = (t0 + 6738);
    t10 = *((int *)t2);
    t3 = (t0 + 6742);
    t12 = *((int *)t3);
    if (t10 == t12)
        goto LAB15;

LAB16:    t13 = (t10 + 1);
    t10 = t13;
    t4 = (t0 + 6738);
    *((int *)t4) = t10;
    goto LAB12;

LAB18:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2696);
    t8 = (t0 + 2232U);
    t9 = (t0 + 1488U);
    t22 = *((char **)t9);
    t9 = (t22 + 0);
    t23 = (t0 + 1608U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    std_textio_read7(STD_TEXTIO, t4, t8, t9, t23);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    if (t5 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(72, ng0);
    goto LAB20;

LAB19:    t2 = (t0 + 6746);
    t10 = *((int *)t2);
    t3 = (t0 + 6750);
    t12 = *((int *)t3);
    if (t10 == t12)
        goto LAB20;

LAB25:    t13 = (t10 + 1);
    t10 = t13;
    t4 = (t0 + 6746);
    *((int *)t4) = t10;
    goto LAB17;

LAB21:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t2 = (t0 + 1728U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 - 1);
    t11 = (t14 * 1);
    t15 = (25U * t11);
    t16 = (0U + t15);
    t2 = (t0 + 6746);
    t17 = *((int *)t2);
    t18 = (t17 - 1);
    t19 = (t18 * 1);
    t20 = (1 * t19);
    t21 = (t16 + t20);
    t9 = (t0 + 3288);
    t22 = (t9 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t6;
    xsi_driver_first_trans_delta(t9, t21, 1, 0LL);

LAB22:    goto LAB19;

LAB24:    goto LAB22;

}


extern void work_a_2711740151_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2711740151_3212880686_p_0};
	xsi_register_didat("work_a_2711740151_3212880686", "isim/FILE_INPUT_TEST_isim_beh.exe.sim/work/a_2711740151_3212880686.didat");
	xsi_register_executes(pe);
}
