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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/FILE_INPUT_VHDL.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_2540651495_0831356973_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 5568);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 5472);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2540651495_0831356973_p_1(char *t0)
{
    char t5[16];
    char t31[16];
    char t41[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    int t45;
    char *t46;
    int t48;
    char *t49;
    int t51;
    char *t52;
    int t54;
    char *t55;
    int t57;
    char *t58;
    int t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3856U);
    t3 = (t0 + 8908);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 17;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (17 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(45, ng0);

LAB4:    t2 = (t0 + 3856U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3856U);
    std_textio_file_close(t2);
    xsi_set_current_line(77, ng0);

LAB32:    *((char **)t1) = &&LAB33;

LAB1:    return;
LAB5:    xsi_set_current_line(46, ng0);

LAB10:    t3 = (t0 + 5488);
    *((int *)t3) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    t4 = (t0 + 5488);
    *((int *)t4) = 0;
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4960);
    t3 = (t0 + 3856U);
    t4 = (t0 + 4032U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4960);
    t3 = (t0 + 4032U);
    t4 = (t0 + 4320U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t0 + 8680U);
    std_textio_read14(STD_TEXTIO, t2, t3, t7, t6);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t3 = (t0 + 5632);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 15U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (12 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 4320U);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t18 = (11 - 15);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t7 = (t14 + t21);
    t11 = *((unsigned char *)t7);
    t22 = ((STD_STANDARD) + 1008);
    t15 = xsi_base_array_concat(t15, t5, t22, (char)99, t10, (char)99, t11, (char)101);
    t23 = (t0 + 4320U);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (10 - 15);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t12 = *((unsigned char *)t24);
    t32 = ((STD_STANDARD) + 1008);
    t30 = xsi_base_array_concat(t30, t31, t32, (char)97, t15, t5, (char)99, t12, (char)101);
    t33 = (t0 + 4320U);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (9 - 15);
    t37 = (t36 * -1);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t34 = (t35 + t39);
    t13 = *((unsigned char *)t34);
    t42 = ((STD_STANDARD) + 1008);
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t30, t31, (char)99, t13, (char)101);
    t43 = (t0 + 8925);
    t45 = xsi_mem_cmp(t43, t40, 4U);
    if (t45 == 1)
        goto LAB13;

LAB20:    t46 = (t0 + 8929);
    t48 = xsi_mem_cmp(t46, t40, 4U);
    if (t48 == 1)
        goto LAB14;

LAB21:    t49 = (t0 + 8933);
    t51 = xsi_mem_cmp(t49, t40, 4U);
    if (t51 == 1)
        goto LAB15;

LAB22:    t52 = (t0 + 8937);
    t54 = xsi_mem_cmp(t52, t40, 4U);
    if (t54 == 1)
        goto LAB16;

LAB23:    t55 = (t0 + 8941);
    t57 = xsi_mem_cmp(t55, t40, 4U);
    if (t57 == 1)
        goto LAB17;

LAB24:    t58 = (t0 + 8945);
    t60 = xsi_mem_cmp(t58, t40, 4U);
    if (t60 == 1)
        goto LAB18;

LAB25:
LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 6;

LAB12:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = (t0 + 6080);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    *((int *)t14) = t8;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB9:    t4 = (t0 + 2632U);
    t6 = *((char **)t4);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(53, ng0);
    t61 = (t0 + 3528U);
    t62 = *((char **)t61);
    t61 = (t62 + 0);
    *((int *)t61) = 0;
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (6 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 5696);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB14:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 1;
    goto LAB12;

LAB15:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 2;
    goto LAB12;

LAB16:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 3;
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (7 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 5760);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (6 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)45);
    if (t11 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (6 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 5888);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);

LAB28:    goto LAB12;

LAB17:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 4;
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (5 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 5952);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB18:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 5;
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (5 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 6016);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB26:;
LAB27:    xsi_set_current_line(60, ng0);
    t6 = (t0 + 5824);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4320U);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (5 - 15);
    t9 = (t8 * -1);
    t16 = (1U * t9);
    t17 = (0 + t16);
    t3 = (t4 + t17);
    t10 = *((unsigned char *)t3);
    t6 = (t0 + 5888);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t10;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB28;

LAB30:    goto LAB2;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

}


extern void work_a_2540651495_0831356973_init()
{
	static char *pe[] = {(void *)work_a_2540651495_0831356973_p_0,(void *)work_a_2540651495_0831356973_p_1};
	xsi_register_didat("work_a_2540651495_0831356973", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_2540651495_0831356973.didat");
	xsi_register_executes(pe);
}
