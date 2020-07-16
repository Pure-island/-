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
static const char *ng0 = "D:/study/DDandCA/Verilog/p4_yj/ALUcontrol.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {33U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {6U, 0U};



static void Always_27_0(char *t0)
{
    char t3[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng1)));
    memset(t3, 0, 8);
    t4 = (t2 + 4);
    t5 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB6;

LAB3:    if (t15 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t3) = 1;

LAB6:    t19 = (t3 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng3)));
    memset(t3, 0, 8);
    t4 = (t2 + 4);
    t5 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB13;

LAB10:    if (t15 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t3) = 1;

LAB13:    t19 = (t3 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    t4 = (t2 + 4);
    t5 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB20;

LAB17:    if (t15 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t3) = 1;

LAB20:    t19 = (t3 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB16:
LAB9:    goto LAB9;

LAB5:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1608);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB9;

LAB12:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(31, ng0);
    t25 = ((char*)((ng3)));
    t26 = (t0 + 1608);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB16;

LAB19:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(32, ng0);

LAB24:    xsi_set_current_line(33, ng0);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t25);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB28;

LAB25:    if (t39 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t27) = 1;

LAB28:    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1208U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng5)));
    memset(t3, 0, 8);
    t4 = (t2 + 4);
    t5 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB35;

LAB32:    if (t15 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t3) = 1;

LAB35:    t19 = (t3 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB31:    goto LAB23;

LAB27:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(33, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 1608);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 4);
    goto LAB31;

LAB34:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(34, ng0);
    t25 = ((char*)((ng6)));
    t26 = (t0 + 1608);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB38;

LAB1:    return;
}


extern void work_m_00000000003676605577_0864879315_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003676605577_0864879315", "isim/test_isim_beh.exe.sim/work/m_00000000003676605577_0864879315.didat");
	xsi_register_executes(pe);
}
