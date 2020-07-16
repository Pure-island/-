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
static const char *ng0 = "D:/study/DDandCA/p5/pipeline/CMP.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {6U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t40[8];
    char t56[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t74;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB20;

LAB17:    if (t27 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t15) = 1;

LAB20:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB37;

LAB34:    if (t27 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t15) = 1;

LAB37:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB44;

LAB41:    if (t27 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t15) = 1;

LAB44:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB51;

LAB48:    if (t27 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t15) = 1;

LAB51:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB54:
LAB47:
LAB40:
LAB23:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t37 = (t0 + 1208U);
    t38 = *((char **)t37);
    t37 = (t0 + 1368U);
    t39 = *((char **)t37);
    memset(t40, 0, 8);
    t37 = (t38 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t37);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB16;

LAB13:    if (t51 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t40) = 1;

LAB16:    t55 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t55, t40, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB16;

LAB19:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(30, ng0);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = (t0 + 1368U);
    t37 = *((char **)t30);
    memset(t56, 0, 8);
    t30 = (t31 + 4);
    t38 = (t37 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t37);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t38);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t38);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB27;

LAB24:    if (t51 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t56) = 1;

LAB27:    memset(t40, 0, 8);
    t41 = (t56 + 4);
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t41) == 0)
        goto LAB28;

LAB30:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;

LAB31:    t55 = (t40 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    *((unsigned int *)t40) = t64;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t62) != 0)
        goto LAB33;

LAB32:    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & 1U);
    t70 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t70 & 1U);
    t71 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t71, t40, 0, 0, 1, 0LL);
    goto LAB23;

LAB26:    t39 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t40) = 1;
    goto LAB31;

LAB33:    t65 = *((unsigned int *)t40);
    t66 = *((unsigned int *)t62);
    *((unsigned int *)t40) = (t65 | t66);
    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t62);
    *((unsigned int *)t55) = (t67 | t68);
    goto LAB32;

LAB36:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(31, ng0);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng4)));
    memset(t56, 0, 8);
    xsi_vlog_signed_leq(t56, 32, t31, 32, t30, 32);
    t37 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t37, t56, 0, 0, 1, 0LL);
    goto LAB40;

LAB43:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(32, ng0);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng4)));
    memset(t56, 0, 8);
    xsi_vlog_signed_greater(t56, 32, t31, 32, t30, 32);
    t37 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t37, t56, 0, 0, 1, 0LL);
    goto LAB47;

LAB50:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(33, ng0);

LAB55:    xsi_set_current_line(34, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t37 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t43 = (t42 >> 16);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t37);
    t45 = (t44 >> 16);
    *((unsigned int *)t30) = t45;
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t46 & 31U);
    t47 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t47 & 31U);
    t38 = ((char*)((ng7)));
    memset(t56, 0, 8);
    t39 = (t40 + 4);
    t41 = (t38 + 4);
    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t38);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t41);
    t53 = (t51 ^ t52);
    t57 = (t50 | t53);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t41);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t63 = (t57 & t61);
    if (t63 != 0)
        goto LAB59;

LAB56:    if (t60 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t56) = 1;

LAB59:    t55 = (t56 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (~(t64));
    t66 = *((unsigned int *)t56);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB66;

LAB63:    if (t27 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t15) = 1;

LAB66:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB62:    goto LAB54;

LAB58:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(35, ng0);
    t62 = (t0 + 1208U);
    t71 = *((char **)t62);
    t62 = ((char*)((ng4)));
    memset(t73, 0, 8);
    xsi_vlog_signed_less(t73, 32, t71, 32, t62, 32);
    t74 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t74, t73, 0, 0, 1, 0LL);
    goto LAB62;

LAB65:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(37, ng0);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng4)));
    memset(t56, 0, 8);
    xsi_vlog_signed_greatereq(t56, 32, t31, 32, t30, 32);
    t37 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t37, t56, 0, 0, 1, 0LL);
    goto LAB69;

}


extern void work_m_00000000003774854183_1579609468_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000003774854183_1579609468", "isim/test_isim_beh.exe.sim/work/m_00000000003774854183_1579609468.didat");
	xsi_register_executes(pe);
}
