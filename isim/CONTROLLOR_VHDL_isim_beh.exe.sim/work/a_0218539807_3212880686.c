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
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);


static void work_a_0218539807_3212880686_p_0(char *t0)
{
    char t19[16];
    char t23[16];
    char t35[16];
    char t42[16];
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
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    int t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
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

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5528);
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

LAB8:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 5464);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(39, ng0);
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

LAB17:    t29 = (t0 + 1832U);
    t30 = *((char **)t29);
    t31 = *((int *)t30);
    t32 = (t31 == 2);
    if (t32 == 1)
        goto LAB28;

LAB29:    t28 = (unsigned char)0;

LAB30:    t6 = t28;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(41, ng0);
    t47 = (t0 + 5464);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)3;
    xsi_driver_first_trans_fast(t47);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t2 = (t0 + 5592);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t2 = (t0 + 7972U);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t20 = *((unsigned char *)t13);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t19, ((int)(t20)), 8);
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t2, t12, t19);
    if (t21 == 1)
        goto LAB25;

LAB26:    t14 = (t0 + 1992U);
    t22 = *((char **)t14);
    t14 = (t0 + 7972U);
    t24 = (t0 + 1672U);
    t25 = *((char **)t24);
    t26 = *((unsigned char *)t25);
    t24 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, ((int)(t26)), 8);
    t27 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t22, t14, t24, t23);
    t18 = t27;

LAB27:    t7 = t18;
    goto LAB21;

LAB22:    t9 = (unsigned char)1;
    goto LAB24;

LAB25:    t18 = (unsigned char)1;
    goto LAB27;

LAB28:    t29 = (t0 + 1992U);
    t34 = *((char **)t29);
    t29 = (t0 + 7972U);
    t36 = (t0 + 1512U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    t36 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t35, ((int)(t38)), 8);
    t39 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t34, t29, t36, t35);
    if (t39 == 1)
        goto LAB31;

LAB32:    t33 = (unsigned char)0;

LAB33:    t28 = t33;
    goto LAB30;

LAB31:    t40 = (t0 + 1992U);
    t41 = *((char **)t40);
    t40 = (t0 + 7972U);
    t43 = (t0 + 1672U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t43 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t42, ((int)(t45)), 8);
    t46 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t41, t40, t43, t42);
    t33 = t46;
    goto LAB33;

}

static void work_a_0218539807_3212880686_p_1(char *t0)
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

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 5656);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5352);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0218539807_3212880686_p_2(char *t0)
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
    t1 = (t0 + 5720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5368);
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

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5784);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5384);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0218539807_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0218539807_3212880686_p_0,(void *)work_a_0218539807_3212880686_p_1,(void *)work_a_0218539807_3212880686_p_2,(void *)work_a_0218539807_3212880686_p_3};
	xsi_register_didat("work_a_0218539807_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_0218539807_3212880686.didat");
	xsi_register_executes(pe);
}
