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



static void work_a_1121265014_3212880686_p_0(char *t0)
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
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    char *t33;

LAB0:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4488);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;

LAB37:    if (t1 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(75, ng0);

LAB11:    t4 = (t0 + 3336U);
    t11 = std_textio_endfile(t4);
    t12 = (!(t11));
    if (t12 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2648U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t20 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t16);
    t21 = (1U * t20);
    t2 = (t0 + 2528U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 - 1);
    t22 = (t19 - 1);
    t24 = (t22 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t19);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t2 = (t4 + t27);
    *((unsigned char *)t2) = (unsigned char)27;
    goto LAB9;

LAB12:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 3976);
    t14 = (t0 + 3336U);
    t15 = (t0 + 3512U);
    std_textio_readline(STD_TEXTIO, t13, t14, t15);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 7686);
    *((int *)t2) = 1;
    t4 = (t0 + 7690);
    *((int *)t4) = 10;
    t16 = 1;
    t17 = 10;

LAB15:    if (t16 <= t17)
        goto LAB16;

LAB18:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7694);
    *((int *)t2) = 1;
    t4 = (t0 + 7698);
    *((int *)t4) = 10;
    t16 = 1;
    t17 = 10;

LAB20:    if (t16 <= t17)
        goto LAB21;

LAB23:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2528U);
    t4 = *((char **)t2);
    t16 = *((int *)t4);
    t1 = (t16 < 3);
    if (t1 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB11;

LAB13:;
LAB16:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 3008U);
    t8 = *((char **)t5);
    t5 = (t0 + 7686);
    t18 = *((int *)t5);
    t19 = (t18 - 1);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t13 = (t0 + 2528U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t23 = (t22 - 1);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t22);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t13 = (t8 + t27);
    *((unsigned char *)t13) = (unsigned char)32;

LAB17:    t2 = (t0 + 7686);
    t16 = *((int *)t2);
    t4 = (t0 + 7690);
    t17 = *((int *)t4);
    if (t16 == t17)
        goto LAB18;

LAB19:    t18 = (t16 + 1);
    t16 = t18;
    t5 = (t0 + 7686);
    *((int *)t5) = t16;
    goto LAB15;

LAB21:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 3976);
    t8 = (t0 + 3512U);
    t13 = (t0 + 2288U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (t0 + 2408U);
    t28 = *((char **)t15);
    t15 = (t28 + 0);
    std_textio_read7(STD_TEXTIO, t5, t8, t13, t15);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7694);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = *((int *)t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(90, ng0);
    goto LAB23;

LAB22:    t2 = (t0 + 7694);
    t16 = *((int *)t2);
    t4 = (t0 + 7698);
    t17 = *((int *)t4);
    if (t16 == t17)
        goto LAB23;

LAB28:    t18 = (t16 + 1);
    t16 = t18;
    t5 = (t0 + 7694);
    *((int *)t5) = t16;
    goto LAB20;

LAB24:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2288U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 3008U);
    t8 = *((char **)t2);
    t2 = (t0 + 7694);
    t18 = *((int *)t2);
    t19 = (t18 - 1);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t13 = (t0 + 2528U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t23 = (t22 - 1);
    t24 = (t23 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t22);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t13 = (t8 + t27);
    *((unsigned char *)t13) = t3;

LAB25:    goto LAB22;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2528U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 + 1);
    t2 = (t0 + 2528U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t18;
    goto LAB30;

LAB32:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t16 = *((int *)t8);
    t2 = (t0 + 1992U);
    t13 = *((char **)t2);
    t17 = *((int *)t13);
    t18 = (t17 - 1);
    t19 = (10 * t18);
    t22 = (t16 - t19);
    t2 = (t0 + 2888U);
    t14 = *((char **)t2);
    t2 = (t14 + 0);
    *((int *)t2) = t22;
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t20 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t16);
    t21 = (1U * t20);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 - 1);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t18);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t2 = (t4 + t27);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)32);
    if (t3 != 0)
        goto LAB38;

LAB40:
LAB39:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t20 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t16);
    t21 = (1U * t20);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 - 1);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t18);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t2 = (t4 + t27);
    t1 = *((unsigned char *)t2);
    t13 = (t0 + 4568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    *((unsigned char *)t30) = t1;
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t16 = *((int *)t4);
    t2 = (t0 + 4632);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t16;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t16 = *((int *)t4);
    t2 = (t0 + 2768U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 1);
    t19 = (10 * t18);
    t22 = (t16 + t19);
    t23 = (t22 + 1);
    t2 = (t0 + 4696);
    t8 = (t2 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t23;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB33;

LAB35:    t1 = (unsigned char)1;
    goto LAB37;

LAB38:    xsi_set_current_line(113, ng0);
    t13 = (t0 + 7702);
    *((int *)t13) = 1;
    t14 = (t0 + 7706);
    *((int *)t14) = 30;
    t22 = 1;
    t23 = 30;

LAB41:    if (t22 <= t23)
        goto LAB42;

LAB44:    goto LAB39;

LAB42:    xsi_set_current_line(114, ng0);
    t15 = (t0 + 2888U);
    t28 = *((char **)t15);
    t29 = *((int *)t28);
    t6 = (t29 == 10);
    if (t6 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t16 = *((int *)t4);
    t17 = (t16 + 1);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t17;

LAB46:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    t16 = *((int *)t5);
    t17 = (t16 - 1);
    t20 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t16);
    t21 = (1U * t20);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 - 1);
    t24 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t18);
    t25 = (10U * t24);
    t26 = (0 + t25);
    t27 = (t26 + t21);
    t2 = (t4 + t27);
    t1 = *((unsigned char *)t2);
    t3 = (t1 != (unsigned char)32);
    if (t3 != 0)
        goto LAB44;

LAB49:
LAB43:    t2 = (t0 + 7702);
    t22 = *((int *)t2);
    t4 = (t0 + 7706);
    t23 = *((int *)t4);
    if (t22 == t23)
        goto LAB44;

LAB50:    t16 = (t22 + 1);
    t22 = t16;
    t5 = (t0 + 7702);
    *((int *)t5) = t22;
    goto LAB41;

LAB45:    xsi_set_current_line(116, ng0);
    t15 = (t0 + 2768U);
    t30 = *((char **)t15);
    t31 = *((int *)t30);
    t32 = (t31 + 1);
    t15 = (t0 + 2768U);
    t33 = *((char **)t15);
    t15 = (t33 + 0);
    *((int *)t15) = t32;
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t16 = *((int *)t4);
    t1 = (t16 > 3);
    if (t1 != 0)
        goto LAB44;

LAB48:    goto LAB46;

}


extern void work_a_1121265014_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1121265014_3212880686_p_0};
	xsi_register_didat("work_a_1121265014_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_1121265014_3212880686.didat");
	xsi_register_executes(pe);
}
