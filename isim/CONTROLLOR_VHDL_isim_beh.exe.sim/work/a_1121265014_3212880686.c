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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/TEXT_INPUT_VHDL.vhd";
extern char *STD_TEXTIO;
extern char *STD_STANDARD;



static void work_a_1121265014_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(37, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6080);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1121265014_3212880686_p_1(char *t0)
{
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t30;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB6:    t2 = (t0 + 6096);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 6096);
    *((int *)t3) = 0;
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4536U);
    t5 = std_textio_endfile(t2);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(69, ng0);

LAB11:    t2 = (t0 + 4536U);
    t5 = std_textio_endfile(t2);
    t6 = (!(t5));
    if (t6 != 0)
        goto LAB12;

LAB14:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 6256);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)27;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB9;

LAB12:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 5568);
    t4 = (t0 + 4536U);
    t7 = (t0 + 4712U);
    std_textio_readline(STD_TEXTIO, t3, t4, t7);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 13150);
    *((int *)t2) = 1;
    t4 = (t0 + 13154);
    *((int *)t4) = t10;
    t11 = 1;
    t12 = t10;

LAB15:    if (t11 <= t12)
        goto LAB16;

LAB18:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 13158);
    *((int *)t2) = 1;
    t4 = (t0 + 13162);
    *((int *)t4) = t10;
    t11 = 1;
    t12 = t10;

LAB20:    if (t11 <= t12)
        goto LAB21;

LAB23:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 3368U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t5 = (t10 < t11);
    if (t5 != 0)
        goto LAB46;

LAB48:
LAB47:    goto LAB11;

LAB13:;
LAB16:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 4208U);
    t8 = *((char **)t7);
    t7 = (t0 + 13150);
    t13 = *((int *)t7);
    t14 = (t13 - 1);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t9 = (t0 + 3728U);
    t17 = *((char **)t9);
    t18 = *((int *)t17);
    t19 = (t18 - 1);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 15, 1, t18);
    t21 = (100U * t20);
    t22 = (0 + t21);
    t23 = (t22 + t16);
    t9 = (t8 + t23);
    *((unsigned char *)t9) = (unsigned char)32;

LAB17:    t2 = (t0 + 13150);
    t11 = *((int *)t2);
    t3 = (t0 + 13154);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB18;

LAB19:    t10 = (t11 + 1);
    t11 = t10;
    t4 = (t0 + 13150);
    *((int *)t4) = t11;
    goto LAB15;

LAB21:    xsi_set_current_line(94, ng0);

LAB26:    t7 = (t0 + 6112);
    *((int *)t7) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 13158);
    t11 = *((int *)t2);
    t3 = (t0 + 13162);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB23;

LAB45:    t10 = (t11 + 1);
    t11 = t10;
    t4 = (t0 + 13158);
    *((int *)t4) = t11;
    goto LAB20;

LAB24:    t8 = (t0 + 6112);
    *((int *)t8) = 0;
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 13166);
    *((int *)t2) = 1;
    t4 = (t0 + 13170);
    *((int *)t4) = t10;
    t13 = 1;
    t14 = t10;

LAB31:    if (t13 <= t14)
        goto LAB32;

LAB34:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    if (t5 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)10;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t10 = (2 - 1);
    t15 = (t10 * 1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t5 = *((unsigned char *)t2);
    t7 = ((STD_STANDARD) + 1008);
    t4 = xsi_base_array_concat(t4, t29, t7, (char)99, t5, (char)99, (unsigned char)10, (char)101);
    t21 = (1U + 1U);
    t6 = (2U != t21);
    if (t6 == 1)
        goto LAB42;

LAB43:    t8 = (t0 + 6320);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    t27 = (t17 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t4, 2U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(120, ng0);
    goto LAB23;

LAB25:    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t6 = *((unsigned char *)t9);
    t24 = (t6 == (unsigned char)3);
    if (t24 == 1)
        goto LAB28;

LAB29:    t8 = (t0 + 1352U);
    t17 = *((char **)t8);
    t25 = *((unsigned char *)t17);
    t26 = (t25 == (unsigned char)3);
    t5 = t26;

LAB30:    if (t5 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t5 = (unsigned char)1;
    goto LAB30;

LAB32:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 5568);
    t8 = (t0 + 4712U);
    t9 = (t0 + 3488U);
    t17 = *((char **)t9);
    t9 = (t17 + 0);
    t27 = (t0 + 3608U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    std_textio_read7(STD_TEXTIO, t7, t8, t9, t27);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 != (unsigned char)32);
    if (t6 != 0)
        goto LAB34;

LAB35:
LAB33:    t2 = (t0 + 13166);
    t13 = *((int *)t2);
    t3 = (t0 + 13170);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB34;

LAB36:    t10 = (t13 + 1);
    t13 = t10;
    t4 = (t0 + 13166);
    *((int *)t4) = t13;
    goto LAB31;

LAB37:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t2 = (t0 + 6256);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    *((unsigned char *)t17) = t6;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t10 = (2 - 1);
    t15 = (t10 * 1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t5 = *((unsigned char *)t2);
    t4 = (t0 + 3488U);
    t7 = *((char **)t4);
    t6 = *((unsigned char *)t7);
    t8 = ((STD_STANDARD) + 1008);
    t4 = xsi_base_array_concat(t4, t29, t8, (char)99, t5, (char)99, t6, (char)101);
    t21 = (1U + 1U);
    t24 = (2U != t21);
    if (t24 == 1)
        goto LAB40;

LAB41:    t9 = (t0 + 6320);
    t17 = (t9 + 56U);
    t27 = *((char **)t17);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    memcpy(t30, t4, 2U);
    xsi_driver_first_trans_fast_port(t9);

LAB38:    goto LAB22;

LAB40:    xsi_size_not_matching(2U, t21, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(2U, t21, 0);
    goto LAB43;

LAB44:    goto LAB38;

LAB46:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3728U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t13 = (t12 + 1);
    t2 = (t0 + 3728U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t13;
    goto LAB47;

}


extern void work_a_1121265014_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1121265014_3212880686_p_0,(void *)work_a_1121265014_3212880686_p_1};
	xsi_register_didat("work_a_1121265014_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_1121265014_3212880686.didat");
	xsi_register_executes(pe);
}
