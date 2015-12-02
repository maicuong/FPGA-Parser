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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/STATE_CONTROLLOR_VHDL.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_3026639028_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(37, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 7912);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 7672);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_1(char *t0)
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
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7688);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    if (t12 == 1)
        goto LAB12;

LAB26:    if (t12 == 3)
        goto LAB13;

LAB27:    if (t12 == 14)
        goto LAB14;

LAB28:    if (t12 == 9)
        goto LAB15;

LAB29:    if (t12 == 10)
        goto LAB16;

LAB30:    if (t12 == 11)
        goto LAB17;

LAB31:    if (t12 == 12)
        goto LAB18;

LAB32:    if (t12 == 13)
        goto LAB19;

LAB33:    if (t12 == 15)
        goto LAB20;

LAB34:    if (t12 == 16)
        goto LAB21;

LAB35:    if (t12 == 17)
        goto LAB22;

LAB36:    if (t12 == 18)
        goto LAB23;

LAB37:    if (t12 == 19)
        goto LAB24;

LAB38:
LAB25:    xsi_set_current_line(156, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB11:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);

LAB80:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3888U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((unsigned char *)t4) = (unsigned char)1;
    goto LAB9;

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t1 = *((unsigned char *)t5);
    if (t1 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(54, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB41:    goto LAB11;

LAB13:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(63, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB44:    goto LAB11;

LAB14:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(73, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB47:    goto LAB11;

LAB15:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(81, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB50:    goto LAB11;

LAB16:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(89, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB53:    goto LAB11;

LAB17:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB55;

LAB57:    xsi_set_current_line(97, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB56:    goto LAB11;

LAB18:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(105, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB59:    goto LAB11;

LAB19:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB61;

LAB63:    xsi_set_current_line(113, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB62:    goto LAB11;

LAB20:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(122, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB65:    goto LAB11;

LAB21:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB67;

LAB69:    xsi_set_current_line(130, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB68:    goto LAB11;

LAB22:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(138, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB71:    goto LAB11;

LAB23:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB73;

LAB75:    xsi_set_current_line(146, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB74:    goto LAB11;

LAB24:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB76;

LAB78:    xsi_set_current_line(154, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 7976);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 21U);
    xsi_driver_first_trans_fast(t5);

LAB77:    goto LAB11;

LAB39:;
LAB40:    xsi_set_current_line(49, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t8 = t2;
    memset(t8, (unsigned char)2, 21U);
    t11 = (t0 + 7976);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 21U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB41;

LAB43:    xsi_set_current_line(58, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB44;

LAB46:    xsi_set_current_line(68, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 14U, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB47;

LAB49:    xsi_set_current_line(76, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 9U, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB50;

LAB52:    xsi_set_current_line(84, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 10U, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB53;

LAB55:    xsi_set_current_line(92, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 11U, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB56;

LAB58:    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 12U, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB59;

LAB61:    xsi_set_current_line(108, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 13U, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB62;

LAB64:    xsi_set_current_line(117, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 15U, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB65;

LAB67:    xsi_set_current_line(125, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 16U, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB68;

LAB70:    xsi_set_current_line(133, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 17U, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB71;

LAB73:    xsi_set_current_line(141, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 18U, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB74;

LAB76:    xsi_set_current_line(149, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 19U, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB77;

LAB79:    xsi_set_current_line(160, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t5 = t2;
    memset(t5, (unsigned char)2, 21U);
    t8 = (t0 + 7976);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB80;

}

static void work_a_3026639028_3212880686_p_2(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(169, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7704);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_3(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(170, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8104);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7720);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_4(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(171, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (3 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7736);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_5(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(172, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (14 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8232);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7752);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_6(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(173, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (13 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7768);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_7(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(174, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (17 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7784);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_8(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(175, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (19 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7800);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_9(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(176, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (16 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7816);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3026639028_3212880686_p_10(char *t0)
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
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(177, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (9 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3432U);
    t9 = *((char **)t8);
    t10 = (10 - 0);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 3432U);
    t17 = *((char **)t16);
    t18 = (11 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 3432U);
    t25 = *((char **)t24);
    t26 = (12 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 3432U);
    t33 = *((char **)t32);
    t34 = (15 - 0);
    t35 = (t34 * 1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t31, t38);
    t40 = (t0 + 3432U);
    t41 = *((char **)t40);
    t42 = (18 - 0);
    t43 = (t42 * 1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t40 = (t41 + t45);
    t46 = *((unsigned char *)t40);
    t47 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t39, t46);
    t48 = (t0 + 8552);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    *((unsigned char *)t52) = t47;
    xsi_driver_first_trans_fast_port(t48);

LAB2:    t53 = (t0 + 7832);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3026639028_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3026639028_3212880686_p_0,(void *)work_a_3026639028_3212880686_p_1,(void *)work_a_3026639028_3212880686_p_2,(void *)work_a_3026639028_3212880686_p_3,(void *)work_a_3026639028_3212880686_p_4,(void *)work_a_3026639028_3212880686_p_5,(void *)work_a_3026639028_3212880686_p_6,(void *)work_a_3026639028_3212880686_p_7,(void *)work_a_3026639028_3212880686_p_8,(void *)work_a_3026639028_3212880686_p_9,(void *)work_a_3026639028_3212880686_p_10};
	xsi_register_didat("work_a_3026639028_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_3026639028_3212880686.didat");
	xsi_register_executes(pe);
}
