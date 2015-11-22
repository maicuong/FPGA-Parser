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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/RSET_VHDL.vhd";



static void work_a_3411973387_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    unsigned char t18;
    int t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    int t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    unsigned char t40;
    char *t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5616);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 5744);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1992U);
    t8 = *((char **)t2);
    t17 = *((int *)t8);
    t18 = (t17 == 0);
    if (t18 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t19 = *((int *)t11);
    t20 = (t19 == 1);
    t16 = t20;

LAB27:    if (t16 == 1)
        goto LAB22;

LAB23:    t15 = (unsigned char)0;

LAB24:    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1992U);
    t30 = *((char **)t2);
    t31 = *((int *)t30);
    t32 = (t31 == 2);
    if (t32 == 1)
        goto LAB31;

LAB32:    t29 = (unsigned char)0;

LAB33:    t10 = t29;

LAB21:    if (t10 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t2 = (t0 + 5808);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t17;
    xsi_driver_first_trans_fast(t2);

LAB17:    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5744);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    *((unsigned char *)t47) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t19 = (t17 + 1);
    t2 = (t0 + 5808);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t19;
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

LAB19:    t10 = (unsigned char)1;
    goto LAB21;

LAB22:    t2 = (t0 + 2152U);
    t12 = *((char **)t2);
    t22 = *((unsigned char *)t12);
    t2 = (t0 + 1672U);
    t13 = *((char **)t2);
    t23 = *((unsigned char *)t13);
    t24 = (t22 == t23);
    if (t24 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 2152U);
    t14 = *((char **)t2);
    t25 = *((unsigned char *)t14);
    t2 = (t0 + 1832U);
    t26 = *((char **)t2);
    t27 = *((unsigned char *)t26);
    t28 = (t25 == t27);
    t21 = t28;

LAB30:    t15 = t21;
    goto LAB24;

LAB25:    t16 = (unsigned char)1;
    goto LAB27;

LAB28:    t21 = (unsigned char)1;
    goto LAB30;

LAB31:    t2 = (t0 + 2152U);
    t34 = *((char **)t2);
    t35 = *((unsigned char *)t34);
    t2 = (t0 + 1672U);
    t36 = *((char **)t2);
    t37 = *((unsigned char *)t36);
    t38 = (t35 >= t37);
    if (t38 == 1)
        goto LAB34;

LAB35:    t33 = (unsigned char)0;

LAB36:    t29 = t33;
    goto LAB33;

LAB34:    t2 = (t0 + 2152U);
    t39 = *((char **)t2);
    t40 = *((unsigned char *)t39);
    t2 = (t0 + 1832U);
    t41 = *((char **)t2);
    t42 = *((unsigned char *)t41);
    t43 = (t40 <= t42);
    t33 = t43;
    goto LAB36;

}

static void work_a_3411973387_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 5936);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5632);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3411973387_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(73, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6000);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5648);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3411973387_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6064);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5664);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3411973387_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3411973387_3212880686_p_0,(void *)work_a_3411973387_3212880686_p_1,(void *)work_a_3411973387_3212880686_p_2,(void *)work_a_3411973387_3212880686_p_3};
	xsi_register_didat("work_a_3411973387_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_3411973387_3212880686.didat");
	xsi_register_executes(pe);
}
