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
    int t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    int t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    char *t49;
    char *t50;
    unsigned char t51;
    unsigned char t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned char t60;
    char *t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    int t66;
    int t67;
    char *t68;

LAB0:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4888);
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

LAB12:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5000);
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
    t4 = (t0 + 5000);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t2 = (t0 + 3088U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t15;
    xsi_set_current_line(37, ng0);

LAB13:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t7 = (t15 == 0);
    if (t7 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t9 = (t16 == 1);
    t6 = t9;

LAB25:    if (t6 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 == 1)
        goto LAB17;

LAB18:    t32 = (t0 + 1832U);
    t37 = *((char **)t32);
    t38 = *((int *)t37);
    t39 = (t38 == 2);
    if (t39 == 1)
        goto LAB29;

LAB30:    t36 = (unsigned char)0;

LAB31:    t1 = t36;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3088U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t2 = (t0 + 5064);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB14:    xsi_set_current_line(39, ng0);
    t61 = (t0 + 3088U);
    t65 = *((char **)t61);
    t66 = *((int *)t65);
    t67 = (t66 + 1);
    t61 = (t0 + 3088U);
    t68 = *((char **)t61);
    t61 = (t68 + 0);
    *((int *)t61) = t67;
    goto LAB13;

LAB15:;
LAB17:    t1 = (unsigned char)1;
    goto LAB19;

LAB20:    t2 = (t0 + 1992U);
    t8 = *((char **)t2);
    t2 = (t0 + 3088U);
    t11 = *((char **)t2);
    t17 = *((int *)t11);
    t18 = (t17 - 1);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t17);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t8 + t21);
    t22 = *((unsigned char *)t2);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t23 = *((unsigned char *)t13);
    t24 = (t22 == t23);
    if (t24 == 1)
        goto LAB26;

LAB27:    t12 = (t0 + 1992U);
    t14 = *((char **)t12);
    t12 = (t0 + 3088U);
    t25 = *((char **)t12);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t28 = (t27 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t26);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t12 = (t14 + t30);
    t31 = *((unsigned char *)t12);
    t32 = (t0 + 1672U);
    t33 = *((char **)t32);
    t34 = *((unsigned char *)t33);
    t35 = (t31 == t34);
    t10 = t35;

LAB28:    t3 = t10;
    goto LAB22;

LAB23:    t6 = (unsigned char)1;
    goto LAB25;

LAB26:    t10 = (unsigned char)1;
    goto LAB28;

LAB29:    t32 = (t0 + 1992U);
    t41 = *((char **)t32);
    t32 = (t0 + 3088U);
    t42 = *((char **)t32);
    t43 = *((int *)t42);
    t44 = (t43 - 1);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t32 = (t41 + t47);
    t48 = *((unsigned char *)t32);
    t49 = (t0 + 1512U);
    t50 = *((char **)t49);
    t51 = *((unsigned char *)t50);
    t52 = (t48 >= t51);
    if (t52 == 1)
        goto LAB32;

LAB33:    t40 = (unsigned char)0;

LAB34:    t36 = t40;
    goto LAB31;

LAB32:    t49 = (t0 + 1992U);
    t53 = *((char **)t49);
    t49 = (t0 + 3088U);
    t54 = *((char **)t49);
    t55 = *((int *)t54);
    t56 = (t55 - 1);
    t57 = (t56 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t55);
    t58 = (1U * t57);
    t59 = (0 + t58);
    t49 = (t53 + t59);
    t60 = *((unsigned char *)t49);
    t61 = (t0 + 1672U);
    t62 = *((char **)t61);
    t63 = *((unsigned char *)t62);
    t64 = (t60 <= t63);
    t40 = t64;
    goto LAB34;

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

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 5128);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4904);
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

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4920);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3411973387_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3411973387_3212880686_p_0,(void *)work_a_3411973387_3212880686_p_1,(void *)work_a_3411973387_3212880686_p_2};
	xsi_register_didat("work_a_3411973387_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_3411973387_3212880686.didat");
	xsi_register_executes(pe);
}
