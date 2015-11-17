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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/SET_VHDL.vhd";



static void work_a_0218539807_3212880686_p_0(char *t0)
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
    int t15;
    int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5952);
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

LAB8:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 5888);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t10 = (t15 == 0);
    if (t10 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t16 = *((int *)t8);
    t17 = (t16 == 1);
    t9 = t17;

LAB24:    if (t9 == 1)
        goto LAB19;

LAB20:    t7 = (unsigned char)0;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1832U);
    t26 = *((char **)t2);
    t27 = *((int *)t26);
    t28 = (t27 == 2);
    if (t28 == 1)
        goto LAB28;

LAB29:    t25 = (unsigned char)0;

LAB30:    t6 = t25;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5888);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    *((unsigned char *)t43) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t16 = (t15 + 1);
    t2 = (t0 + 6016);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t16;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t19 = *((unsigned char *)t11);
    t2 = (t0 + 1512U);
    t12 = *((char **)t2);
    t20 = *((unsigned char *)t12);
    t21 = (t19 == t20);
    if (t21 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1992U);
    t13 = *((char **)t2);
    t22 = *((unsigned char *)t13);
    t2 = (t0 + 1672U);
    t14 = *((char **)t2);
    t23 = *((unsigned char *)t14);
    t24 = (t22 == t23);
    t18 = t24;

LAB27:    t7 = t18;
    goto LAB21;

LAB22:    t9 = (unsigned char)1;
    goto LAB24;

LAB25:    t18 = (unsigned char)1;
    goto LAB27;

LAB28:    t2 = (t0 + 1992U);
    t30 = *((char **)t2);
    t31 = *((unsigned char *)t30);
    t2 = (t0 + 1512U);
    t32 = *((char **)t2);
    t33 = *((unsigned char *)t32);
    t34 = (t31 >= t33);
    if (t34 == 1)
        goto LAB31;

LAB32:    t29 = (unsigned char)0;

LAB33:    t25 = t29;
    goto LAB30;

LAB31:    t2 = (t0 + 1992U);
    t35 = *((char **)t2);
    t36 = *((unsigned char *)t35);
    t2 = (t0 + 1672U);
    t37 = *((char **)t2);
    t38 = *((unsigned char *)t37);
    t39 = (t36 <= t38);
    t29 = t39;
    goto LAB33;

}

static void work_a_0218539807_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6080);
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

LAB8:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 6080);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6080);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0218539807_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5776);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0218539807_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6208);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5792);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0218539807_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5808);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0218539807_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0218539807_3212880686_p_0,(void *)work_a_0218539807_3212880686_p_1,(void *)work_a_0218539807_3212880686_p_2,(void *)work_a_0218539807_3212880686_p_3,(void *)work_a_0218539807_3212880686_p_4};
	xsi_register_didat("work_a_0218539807_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_0218539807_3212880686.didat");
	xsi_register_executes(pe);
}
