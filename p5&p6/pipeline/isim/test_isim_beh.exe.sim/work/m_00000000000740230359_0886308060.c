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
static const char *ng0 = "D:/study/DDandCA/p5/pipeline/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {8, 0};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {13, 0};
static int ng16[] = {14, 0};



static void Always_30_0(char *t0)
{
    char t10[8];
    char t36[8];
    char t38[8];
    char t40[8];
    char t48[8];
    char t60[16];
    char t61[16];
    char t62[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB38;

LAB39:
LAB40:    t35 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB37;

LAB15:    xsi_set_current_line(36, ng0);

LAB41:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB42:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 6);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB44;

LAB43:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB45;

LAB46:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB48;

LAB49:    goto LAB37;

LAB17:    xsi_set_current_line(41, ng0);

LAB50:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB51:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 6);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB53;

LAB52:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB54;

LAB55:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB57;

LAB58:    goto LAB37;

LAB19:    xsi_set_current_line(46, ng0);

LAB59:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB60:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 6);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB62;

LAB61:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB63;

LAB64:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB66;

LAB67:    goto LAB37;

LAB21:    xsi_set_current_line(51, ng0);

LAB68:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB69:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB71;

LAB70:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB72;

LAB73:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB75;

LAB76:    goto LAB37;

LAB23:    xsi_set_current_line(56, ng0);

LAB77:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB80;

LAB79:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB81;

LAB82:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB84;

LAB85:    goto LAB37;

LAB25:    xsi_set_current_line(61, ng0);

LAB86:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB87:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t36, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB89;

LAB88:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB89;

LAB92:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB90;

LAB91:    t37 = (t36 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB93;

LAB94:    goto LAB37;

LAB27:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB95;

LAB96:
LAB97:    t35 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB98;

LAB99:
LAB100:    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t36) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t36 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB101;

LAB102:
LAB103:    memset(t10, 0, 8);
    t35 = (t10 + 4);
    t37 = (t36 + 4);
    t51 = *((unsigned int *)t36);
    t52 = (~(t51));
    *((unsigned int *)t10) = t52;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB105;

LAB104:    t58 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t58 & 4294967295U);
    t59 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t59 & 4294967295U);
    t39 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t48, 0, 8);
    xsi_vlog_signed_less(t48, 32, t4, 32, t7, 32);
    memset(t36, 0, 8);
    t3 = (t48 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t48);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t3) != 0)
        goto LAB108;

LAB109:    t9 = (t36 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB110;

LAB111:    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t9) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t36) > 0)
        goto LAB116;

LAB117:    memcpy(t10, t22, 8);

LAB118:    t35 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    xsi_vlogtype_concat(t60, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng6)));
    xsi_vlogtype_concat(t61, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_less(t62, 33, t60, 33, t61, 33);
    memset(t36, 0, 8);
    t9 = (t62 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t62);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t9) != 0)
        goto LAB121;

LAB122:    t22 = (t36 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t22);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB123;

LAB124:    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t22) > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t36) > 0)
        goto LAB129;

LAB130:    memcpy(t10, t37, 8);

LAB131:    t39 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 32, 0LL);
    goto LAB37;

LAB38:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB40;

LAB44:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t36) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(39, ng0);
    t39 = ((char*)((ng6)));
    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t24 = *((unsigned int *)t43);
    t25 = (t24 >> 0);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t45);
    t28 = (t27 >> 0);
    *((unsigned int *)t44) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t31 & 2147483647U);
    xsi_vlogtype_concat(t38, 32, 32, 2U, t40, 31, t39, 1);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t38, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB42;

LAB53:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t36) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(44, ng0);
    t39 = (t0 + 1928);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t43 = (t40 + 4);
    t44 = (t42 + 4);
    t24 = *((unsigned int *)t42);
    t25 = (t24 >> 1);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t44);
    t28 = (t27 >> 1);
    *((unsigned int *)t43) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t31 & 2147483647U);
    t45 = ((char*)((ng6)));
    xsi_vlogtype_concat(t38, 32, 32, 2U, t45, 1, t40, 31);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t38, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB51;

LAB62:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t36) = 1;
    goto LAB64;

LAB66:    xsi_set_current_line(49, ng0);
    t39 = (t0 + 1928);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t43 = (t40 + 4);
    t44 = (t42 + 4);
    t24 = *((unsigned int *)t42);
    t25 = (t24 >> 1);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t44);
    t28 = (t27 >> 1);
    *((unsigned int *)t43) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t31 & 2147483647U);
    t45 = (t0 + 1928);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t50 = (t47 + 4);
    t32 = *((unsigned int *)t47);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t48) = t34;
    t51 = *((unsigned int *)t50);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t49) = t53;
    xsi_vlogtype_concat(t38, 32, 32, 2U, t48, 1, t40, 31);
    t54 = (t0 + 1928);
    xsi_vlogvar_assign_value(t54, t38, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB60;

LAB71:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t36) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(54, ng0);
    t39 = ((char*)((ng6)));
    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t24 = *((unsigned int *)t43);
    t25 = (t24 >> 0);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t45);
    t28 = (t27 >> 0);
    *((unsigned int *)t44) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t31 & 2147483647U);
    xsi_vlogtype_concat(t38, 32, 32, 2U, t40, 31, t39, 1);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t38, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB69;

LAB80:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t36) = 1;
    goto LAB82;

LAB84:    xsi_set_current_line(59, ng0);
    t39 = (t0 + 1928);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t43 = (t40 + 4);
    t44 = (t42 + 4);
    t24 = *((unsigned int *)t42);
    t25 = (t24 >> 1);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t44);
    t28 = (t27 >> 1);
    *((unsigned int *)t43) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t31 & 2147483647U);
    t45 = ((char*)((ng6)));
    xsi_vlogtype_concat(t38, 32, 32, 2U, t45, 1, t40, 31);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t38, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB78;

LAB89:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB91;

LAB90:    *((unsigned int *)t36) = 1;
    goto LAB91;

LAB93:    xsi_set_current_line(64, ng0);
    t39 = (t0 + 1928);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t43 = (t40 + 4);
    t44 = (t42 + 4);
    t24 = *((unsigned int *)t42);
    t25 = (t24 >> 1);
    *((unsigned int *)t40) = t25;
    t27 = *((unsigned int *)t44);
    t28 = (t27 >> 1);
    *((unsigned int *)t43) = t28;
    t29 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t31 & 2147483647U);
    t45 = (t0 + 1928);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t50 = (t47 + 4);
    t32 = *((unsigned int *)t47);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t48) = t34;
    t51 = *((unsigned int *)t50);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t49) = t53;
    xsi_vlogtype_concat(t38, 32, 32, 2U, t48, 1, t40, 31);
    t54 = (t0 + 1928);
    xsi_vlogvar_assign_value(t54, t38, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB87;

LAB95:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t51 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t51 & t33);
    t52 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t52 & t34);
    t53 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t53 & t33);
    t55 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t55 & t34);
    goto LAB97;

LAB98:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB100;

LAB101:    t19 = *((unsigned int *)t36);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t36) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB103;

LAB105:    t53 = *((unsigned int *)t10);
    t55 = *((unsigned int *)t37);
    *((unsigned int *)t10) = (t53 | t55);
    t56 = *((unsigned int *)t35);
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t35) = (t56 | t57);
    goto LAB104;

LAB106:    *((unsigned int *)t36) = 1;
    goto LAB109;

LAB108:    t8 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB109;

LAB110:    t21 = ((char*)((ng2)));
    goto LAB111;

LAB112:    t22 = ((char*)((ng1)));
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t22, 32);
    goto LAB118;

LAB116:    memcpy(t10, t21, 8);
    goto LAB118;

LAB119:    *((unsigned int *)t36) = 1;
    goto LAB122;

LAB121:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB122;

LAB123:    t35 = ((char*)((ng2)));
    goto LAB124;

LAB125:    t37 = ((char*)((ng1)));
    goto LAB126;

LAB127:    xsi_vlog_unsigned_bit_combine(t10, 32, t35, 32, t37, 32);
    goto LAB131;

LAB129:    memcpy(t10, t35, 8);
    goto LAB131;

}


extern void work_m_00000000000740230359_0886308060_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000000740230359_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000000740230359_0886308060.didat");
	xsi_register_executes(pe);
}
