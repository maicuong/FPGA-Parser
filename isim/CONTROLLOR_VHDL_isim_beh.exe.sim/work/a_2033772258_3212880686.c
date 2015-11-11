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
extern char *STD_STANDARD;
static const char *ng1 = "C:/FPGAPrj/CONTROLLOR/CONTROLLOR_VHDL.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


int work_a_2033772258_3212880686_sub_3980356590_3057020925(char *t1, char *t2)
{
    char t3[248];
    char t4[24];
    char t5[16];
    char t12[8];
    char t18[8];
    int t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 4;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (4 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 4U;
    t15 = (t3 + 124U);
    t16 = ((STD_STANDARD) + 384);
    t17 = (t15 + 88U);
    *((char **)t17) = t16;
    t19 = (t15 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t15 + 80U);
    *((unsigned int *)t20) = 4U;
    t21 = (t4 + 4U);
    t22 = (t2 != 0);
    if (t22 == 1)
        goto LAB3;

LAB2:    t23 = (t4 + 12U);
    *((char **)t23) = t5;
    t24 = (0 - 0);
    t9 = (t24 * 1);
    t25 = (4U * t9);
    t26 = (0 + t25);
    t27 = (t2 + t26);
    t28 = *((int *)t27);
    t29 = (t15 + 56U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    *((int *)t29) = t28;
    t8 = 0;
    t24 = 4;

LAB4:    if (t8 <= t24)
        goto LAB5;

LAB7:    t6 = (t15 + 56U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t21) = t2;
    goto LAB2;

LAB5:    t28 = (t8 - 0);
    t9 = (t28 * 1);
    t25 = (4U * t9);
    t26 = (0 + t25);
    t6 = (t2 + t26);
    t31 = *((int *)t6);
    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t32 = *((int *)t11);
    t22 = (t31 > t32);
    if (t22 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t8 == t24)
        goto LAB7;

LAB11:    t28 = (t8 + 1);
    t8 = t28;
    goto LAB4;

LAB8:    t33 = (t8 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t10 = (t2 + t36);
    t37 = *((int *)t10);
    t13 = (t15 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t37;
    goto LAB9;

LAB12:;
}

static void work_a_2033772258_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(136, ng1);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = work_a_2033772258_3212880686_sub_3980356590_3057020925(t0, t2);
    t1 = (t0 + 7400);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7288);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(137, ng1);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (0 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t10 = (1 - 4);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1992U);
    t17 = *((char **)t16);
    t18 = (2 - 4);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 1992U);
    t25 = *((char **)t24);
    t26 = (3 - 4);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 1992U);
    t33 = *((char **)t32);
    t34 = (4 - 4);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t31, t38);
    t40 = (t0 + 7464);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t39;
    xsi_driver_first_trans_fast(t40);

LAB2:    t45 = (t0 + 7304);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(218, ng1);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(219, ng1);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 5488U);
    t10 = *((char **)t4);
    t4 = (t10 + 0);
    *((int *)t4) = t9;
    xsi_set_current_line(220, ng1);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5488U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t11 = (t9 - 1);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t9);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t8 = (t0 + 7528);
    t10 = (t8 + 56U);
    t15 = *((char **)t10);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_2033772258_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2033772258_3212880686_p_0,(void *)work_a_2033772258_3212880686_p_1,(void *)work_a_2033772258_3212880686_p_2};
	static char *se[] = {(void *)work_a_2033772258_3212880686_sub_3980356590_3057020925};
	xsi_register_didat("work_a_2033772258_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_2033772258_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
