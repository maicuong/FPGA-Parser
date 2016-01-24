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
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);


static void work_a_3411973387_3212880686_p_0(char *t0)
{
    char t16[16];
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
    int t12;
    int t13;
    unsigned char t14;
    unsigned char t15;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
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

LAB0:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = (t0 + 4672);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t17 = *((char **)t11);
    *((int *)t17) = t12;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3168U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4736);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t17 = *((char **)t11);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4800);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t17 = *((char **)t11);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 4592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
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

LAB12:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3168U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 3168U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((unsigned char *)t4) = (unsigned char)2;
    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t10 = (t12 == 0);
    if (t10 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 == 1);
    t9 = t14;

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

LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3168U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)3;

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(46, ng0);
    t47 = (t0 + 3168U);
    t48 = *((char **)t47);
    t47 = (t48 + 0);
    *((unsigned char *)t47) = (unsigned char)3;
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t2 = (t0 + 6936U);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t17 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t16, ((int)(t19)), 8);
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t2, t17, t16);
    if (t20 == 1)
        goto LAB25;

LAB26:    t21 = (t0 + 1992U);
    t22 = *((char **)t21);
    t21 = (t0 + 6936U);
    t24 = (t0 + 1672U);
    t25 = *((char **)t24);
    t26 = *((unsigned char *)t25);
    t24 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, ((int)(t26)), 8);
    t27 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t22, t21, t24, t23);
    t15 = t27;

LAB27:    t7 = t15;
    goto LAB21;

LAB22:    t9 = (unsigned char)1;
    goto LAB24;

LAB25:    t15 = (unsigned char)1;
    goto LAB27;

LAB28:    t29 = (t0 + 1992U);
    t34 = *((char **)t29);
    t29 = (t0 + 6936U);
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
    t40 = (t0 + 6936U);
    t43 = (t0 + 1672U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t43 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t42, ((int)(t45)), 8);
    t46 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t41, t40, t43, t42);
    t33 = t46;
    goto LAB33;

}


extern void work_a_3411973387_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3411973387_3212880686_p_0};
	xsi_register_didat("work_a_3411973387_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_3411973387_3212880686.didat");
	xsi_register_executes(pe);
}
