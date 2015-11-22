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



static void work_a_0814566339_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t41;
    int t42;
    int t43;
    char *t44;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);

LAB6:    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 4648);
    *((int *)t3) = 0;
    xsi_set_current_line(73, ng0);

LAB8:    t2 = (t0 + 3496U);
    t5 = std_textio_endfile(t2);
    t6 = (!(t5));
    if (t6 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t9 = (t8 - 1);
    t12 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t8);
    t13 = (1U * t12);
    t2 = (t0 + 2688U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 1);
    t16 = (t11 - 1);
    t18 = (t16 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t11);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t2 = (t3 + t21);
    *((unsigned char *)t2) = (unsigned char)27;
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t9 = (t8 - 1);
    t10 = (t9 - 1);
    t12 = (t10 * 1);
    t13 = (10U * t12);
    t18 = (0U + t13);
    t2 = (t0 + 2808U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t16 = (t11 - 1);
    t19 = (t16 * 1);
    t20 = (1 * t19);
    t21 = (t18 + t20);
    t2 = (t0 + 4744);
    t7 = (t2 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = (unsigned char)27;
    xsi_driver_first_trans_delta(t2, t21, 1, 0LL);
    xsi_set_current_line(103, ng0);

LAB29:    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t9 = (t8 - 1);
    t12 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t8);
    t13 = (1U * t12);
    t2 = (t0 + 2928U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 1);
    t18 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t10);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t2 = (t3 + t21);
    t5 = *((unsigned char *)t2);
    t6 = (t5 != (unsigned char)27);
    if (t6 != 0)
        goto LAB30;

LAB32:    goto LAB2;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 4136);
    t4 = (t0 + 3496U);
    t7 = (t0 + 3672U);
    std_textio_readline(STD_TEXTIO, t3, t4, t7);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8350);
    *((int *)t2) = 1;
    t3 = (t0 + 8354);
    *((int *)t3) = 10;
    t8 = 1;
    t9 = 10;

LAB12:    if (t8 <= t9)
        goto LAB13;

LAB15:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8358);
    *((int *)t2) = 1;
    t3 = (t0 + 8362);
    *((int *)t3) = 10;
    t8 = 1;
    t9 = 10;

LAB17:    if (t8 <= t9)
        goto LAB18;

LAB20:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t5 = (t8 < 3);
    if (t5 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3168U);
    t7 = *((char **)t4);
    t4 = (t0 + 8350);
    t10 = *((int *)t4);
    t11 = (t10 - 1);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (t0 + 2688U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (t16 - 1);
    t18 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t16);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t14 = (t7 + t21);
    *((unsigned char *)t14) = (unsigned char)32;

LAB14:    t2 = (t0 + 8350);
    t8 = *((int *)t2);
    t3 = (t0 + 8354);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB15;

LAB16:    t10 = (t8 + 1);
    t8 = t10;
    t4 = (t0 + 8350);
    *((int *)t4) = t8;
    goto LAB12;

LAB18:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 4136);
    t7 = (t0 + 3672U);
    t14 = (t0 + 2448U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t22 = (t0 + 2568U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    std_textio_read7(STD_TEXTIO, t4, t7, t14, t22);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8358);
    t3 = (t0 + 2808U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = *((int *)t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    if (t5 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(88, ng0);
    goto LAB20;

LAB19:    t2 = (t0 + 8358);
    t8 = *((int *)t2);
    t3 = (t0 + 8362);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB20;

LAB25:    t10 = (t8 + 1);
    t8 = t10;
    t4 = (t0 + 8358);
    *((int *)t4) = t8;
    goto LAB17;

LAB21:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t2 = (t0 + 3168U);
    t7 = *((char **)t2);
    t2 = (t0 + 8358);
    t10 = *((int *)t2);
    t11 = (t10 - 1);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (t0 + 2688U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (t16 - 1);
    t18 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t16);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t14 = (t7 + t21);
    *((unsigned char *)t14) = t6;
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t2 = (t0 + 2688U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 - 1);
    t12 = (t11 * 1);
    t13 = (10U * t12);
    t18 = (0U + t13);
    t2 = (t0 + 8358);
    t16 = *((int *)t2);
    t17 = (t16 - 1);
    t19 = (t17 * 1);
    t20 = (1 * t19);
    t21 = (t18 + t20);
    t7 = (t0 + 4744);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t5;
    xsi_driver_first_trans_delta(t7, t21, 1, 0LL);

LAB22:    goto LAB19;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2688U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2688U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t10;
    goto LAB27;

LAB30:    xsi_set_current_line(104, ng0);

LAB35:    t14 = (t0 + 4664);
    *((int *)t14) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB31:;
LAB33:    t15 = (t0 + 4664);
    *((int *)t15) = 0;
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t24 = (t6 == (unsigned char)3);
    if (t24 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t25 = *((unsigned char *)t4);
    t26 = (t25 == (unsigned char)3);
    t5 = t26;

LAB42:    if (t5 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB29;

LAB34:    t15 = (t0 + 1032U);
    t22 = *((char **)t15);
    t24 = *((unsigned char *)t22);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB33;
    else
        goto LAB35;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t2 = (t0 + 1992U);
    t14 = *((char **)t2);
    t9 = *((int *)t14);
    t10 = (t9 - 1);
    t11 = (10 * t10);
    t16 = (t8 - t11);
    t2 = (t0 + 3048U);
    t15 = *((char **)t2);
    t2 = (t15 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t9 = (t8 - 1);
    t12 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t8);
    t13 = (1U * t12);
    t2 = (t0 + 2928U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 1);
    t18 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t10);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t2 = (t3 + t21);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)32);
    if (t6 != 0)
        goto LAB43;

LAB45:
LAB44:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t9 = (t8 - 1);
    t12 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t8);
    t13 = (1U * t12);
    t2 = (t0 + 2928U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 1);
    t18 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t10);
    t19 = (10U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t13);
    t2 = (t3 + t21);
    t5 = *((unsigned char *)t2);
    t14 = (t0 + 4808);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    t23 = (t22 + 56U);
    t35 = *((char **)t23);
    *((unsigned char *)t35) = t5;
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = (t0 + 4872);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t8;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = (t0 + 2928U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (10 * t10);
    t16 = (t8 + t11);
    t17 = (t16 + 1);
    t2 = (t0 + 4936);
    t7 = (t2 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((int *)t22) = t17;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB38;

LAB40:    t5 = (unsigned char)1;
    goto LAB42;

LAB43:    xsi_set_current_line(109, ng0);

LAB46:    t14 = (t0 + 3168U);
    t15 = *((char **)t14);
    t14 = (t0 + 3048U);
    t22 = *((char **)t14);
    t16 = *((int *)t22);
    t17 = (t16 - 1);
    t27 = (t17 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t16);
    t28 = (1U * t27);
    t14 = (t0 + 2928U);
    t23 = *((char **)t14);
    t29 = *((int *)t23);
    t30 = (t29 - 1);
    t31 = (t30 * 1);
    xsi_vhdl_check_range_of_index(1, 3, 1, t29);
    t32 = (10U * t31);
    t33 = (0 + t32);
    t34 = (t33 + t28);
    t14 = (t15 + t34);
    t24 = *((unsigned char *)t14);
    t25 = (t24 == (unsigned char)32);
    if (t25 != 0)
        goto LAB47;

LAB49:    goto LAB44;

LAB47:    xsi_set_current_line(110, ng0);
    t35 = (t0 + 3048U);
    t36 = *((char **)t35);
    t37 = *((int *)t36);
    t26 = (t37 == 10);
    if (t26 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t9 = (t8 + 1);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t9;

LAB51:    goto LAB46;

LAB48:;
LAB50:    xsi_set_current_line(111, ng0);
    t35 = (t0 + 2928U);
    t38 = *((char **)t35);
    t39 = *((int *)t38);
    t40 = (t39 < 3);
    if (t40 != 0)
        goto LAB53;

LAB55:
LAB54:    goto LAB51;

LAB53:    xsi_set_current_line(112, ng0);
    t35 = (t0 + 2928U);
    t41 = *((char **)t35);
    t42 = *((int *)t41);
    t43 = (t42 + 1);
    t35 = (t0 + 2928U);
    t44 = *((char **)t35);
    t35 = (t44 + 0);
    *((int *)t35) = t43;
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 1;
    goto LAB54;

}


extern void work_a_0814566339_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0814566339_3212880686_p_0};
	xsi_register_didat("work_a_0814566339_3212880686", "isim/TEXT_INPUT_VHDL_isim_beh.exe.sim/work/a_0814566339_3212880686.didat");
	xsi_register_executes(pe);
}
