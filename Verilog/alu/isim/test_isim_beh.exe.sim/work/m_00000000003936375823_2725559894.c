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
static const char *ng0 = "D:/study/DDandCA/Verilog/alu/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Cont_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3736);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t11[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t7, 32, t10, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t10, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t10);
    t15 = (t13 & t14);
    *((unsigned int *)t11) = t15;
    t12 = (t7 + 4);
    t16 = (t10 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB22;

LAB23:
LAB24:    t43 = (t0 + 2248);
    xsi_vlogvar_assign_value(t43, t11, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t10);
    t15 = (t13 | t14);
    *((unsigned int *)t11) = t15;
    t12 = (t7 + 4);
    t16 = (t10 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB25;

LAB26:
LAB27:    t43 = (t0 + 2248);
    xsi_vlogvar_assign_value(t43, t11, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 32, t7, 32, t10, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t44, 0, 8);
    xsi_vlog_signed_arith_rshift(t44, 32, t7, 32, t10, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t44, 0, 0, 32);
    goto LAB21;

LAB22:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t23 | t24);
    t25 = (t7 + 4);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & t38);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t38);
    goto LAB24;

LAB25:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t23 | t24);
    t25 = (t7 + 4);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t35 = (t29 & t28);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t36 = (t32 & t31);
    t33 = (~(t35));
    t34 = (~(t36));
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & t33);
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t34);
    goto LAB27;

}


extern void work_m_00000000003936375823_2725559894_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000003936375823_2725559894", "isim/test_isim_beh.exe.sim/work/m_00000000003936375823_2725559894.didat");
	xsi_register_executes(pe);
}
