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
static const char *ng0 = "D:/study/DDandCA/p5/pipeline/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {36U, 0U};
static int ng5[] = {8, 0};
static int ng6[] = {1, 0};
static int ng7[] = {24, 0};
static unsigned int ng8[] = {33U, 0U};
static unsigned int ng9[] = {37U, 0U};
static int ng10[] = {16, 0};
static int ng11[] = {11024, 0};
static unsigned int ng12[] = {43U, 0U};
static const char *ng13 = "%d@%h: *%h <= %h";
static unsigned int ng14[] = {40U, 0U};
static unsigned int ng15[] = {0U, 0U};
static unsigned int ng16[] = {41U, 0U};



static void Always_34_0(char *t0)
{
    char t7[8];
    char t14[8];
    char t34[8];
    char t44[8];
    char t53[8];
    char t69[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 4096);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(36, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 26);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 26);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 63U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 63U);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t5);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB10;

LAB7:    if (t31 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t14) = 1;

LAB10:    memset(t34, 0, 8);
    t10 = (t14 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t10) != 0)
        goto LAB13;

LAB14:    t12 = (t34 + 4);
    t40 = *((unsigned int *)t34);
    t41 = (!(t40));
    t42 = *((unsigned int *)t12);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB15;

LAB16:    memcpy(t77, t34, 8);

LAB17:    t105 = (t77 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 26);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 26);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 63U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 63U);
    t5 = ((char*)((ng8)));
    memset(t14, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t5);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB53;

LAB50:    if (t31 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t14) = 1;

LAB53:    memset(t34, 0, 8);
    t10 = (t14 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) != 0)
        goto LAB56;

LAB57:    t12 = (t34 + 4);
    t40 = *((unsigned int *)t34);
    t41 = (!(t40));
    t42 = *((unsigned int *)t12);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB58;

LAB59:    memcpy(t77, t34, 8);

LAB60:    t105 = (t77 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB74:
LAB31:    goto LAB2;

LAB9:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t34) = 1;
    goto LAB14;

LAB13:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    memset(t44, 0, 8);
    t13 = (t44 + 4);
    t45 = (t15 + 4);
    t46 = *((unsigned int *)t15);
    t47 = (t46 >> 26);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 26);
    *((unsigned int *)t13) = t49;
    t50 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t50 & 63U);
    t51 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t51 & 63U);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    t54 = (t44 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB21;

LAB18:    if (t65 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t53) = 1;

LAB21:    memset(t69, 0, 8);
    t70 = (t53 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t70) != 0)
        goto LAB24;

LAB25:    t78 = *((unsigned int *)t34);
    t79 = *((unsigned int *)t69);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t34 + 4);
    t82 = (t69 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t69) = 1;
    goto LAB25;

LAB24:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB25;

LAB26:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t34 + 4);
    t92 = (t69 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t34);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t69);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB28;

LAB29:    xsi_set_current_line(38, ng0);

LAB32:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t111 = ((char*)((ng1)));
    t112 = (t0 + 3048);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 32);

LAB33:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB35;

LAB34:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB36;

LAB37:    t10 = (t7 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 26);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 26);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 63U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 63U);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t5);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB46;

LAB43:    if (t31 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t14) = 1;

LAB46:    t10 = (t14 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB31;

LAB35:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t7) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(40, ng0);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 3208);
    t45 = (t15 + 72U);
    t52 = *((char **)t45);
    t54 = (t0 + 1688U);
    t55 = *((char **)t54);
    memset(t34, 0, 8);
    t54 = (t34 + 4);
    t68 = (t55 + 4);
    t21 = *((unsigned int *)t55);
    t22 = (t21 >> 0);
    *((unsigned int *)t34) = t22;
    t23 = *((unsigned int *)t68);
    t24 = (t23 >> 0);
    *((unsigned int *)t54) = t24;
    t25 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t25 & 3U);
    t26 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t26 & 3U);
    t70 = ((char*)((ng5)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_multiply(t44, 32, t34, 32, t70, 32);
    t76 = (t0 + 3048);
    t81 = (t76 + 56U);
    t82 = *((char **)t81);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t44, 32, t82, 32);
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t52, 2, t53, 32, 2);
    t83 = (t0 + 2888);
    t91 = (t0 + 2888);
    t92 = (t91 + 72U);
    t105 = *((char **)t92);
    t111 = (t0 + 3048);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    xsi_vlog_generic_convert_bit_index(t69, t105, 2, t113, 32, 2);
    t114 = (t69 + 4);
    t27 = *((unsigned int *)t114);
    t96 = (!(t27));
    if (t96 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB33;

LAB41:    xsi_vlogvar_assign_value(t83, t14, 0, *((unsigned int *)t69), 1);
    goto LAB42;

LAB45:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t44, 0, 8);
    t15 = (t44 + 4);
    t45 = (t13 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (t40 >> 0);
    *((unsigned int *)t44) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 0);
    *((unsigned int *)t15) = t43;
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t46 & 255U);
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & 255U);
    t52 = ((char*)((ng7)));
    t54 = (t0 + 2888);
    t55 = (t54 + 56U);
    t68 = *((char **)t55);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t76 = (t68 + 4);
    t48 = *((unsigned int *)t68);
    t49 = (t48 >> 7);
    t50 = (t49 & 1);
    *((unsigned int *)t69) = t50;
    t51 = *((unsigned int *)t76);
    t56 = (t51 >> 7);
    t57 = (t56 & 1);
    *((unsigned int *)t70) = t57;
    xsi_vlog_mul_concat(t53, 24, 1, t52, 1U, t69, 1);
    xsi_vlogtype_concat(t34, 32, 32, 2U, t53, 24, t44, 8);
    t81 = (t0 + 2888);
    xsi_vlogvar_assign_value(t81, t34, 0, 0, 32);
    goto LAB49;

LAB52:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t34) = 1;
    goto LAB57;

LAB56:    t11 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB57;

LAB58:    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    memset(t44, 0, 8);
    t13 = (t44 + 4);
    t45 = (t15 + 4);
    t46 = *((unsigned int *)t15);
    t47 = (t46 >> 26);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 26);
    *((unsigned int *)t13) = t49;
    t50 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t50 & 63U);
    t51 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t51 & 63U);
    t52 = ((char*)((ng9)));
    memset(t53, 0, 8);
    t54 = (t44 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB64;

LAB61:    if (t65 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t53) = 1;

LAB64:    memset(t69, 0, 8);
    t70 = (t53 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t70) != 0)
        goto LAB67;

LAB68:    t78 = *((unsigned int *)t34);
    t79 = *((unsigned int *)t69);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t34 + 4);
    t82 = (t69 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t69) = 1;
    goto LAB68;

LAB67:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB68;

LAB69:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t34 + 4);
    t92 = (t69 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t34);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t69);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB71;

LAB72:    xsi_set_current_line(43, ng0);

LAB75:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t111 = ((char*)((ng1)));
    t112 = (t0 + 3048);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 32);

LAB76:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB78;

LAB77:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB78;

LAB81:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB79;

LAB80:    t10 = (t7 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 26);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 26);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 63U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 63U);
    t5 = ((char*)((ng8)));
    memset(t14, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t5);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB89;

LAB86:    if (t31 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t14) = 1;

LAB89:    t10 = (t14 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (~(t35));
    t37 = *((unsigned int *)t14);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB90;

LAB91:
LAB92:    goto LAB74;

LAB78:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB80;

LAB79:    *((unsigned int *)t7) = 1;
    goto LAB80;

LAB82:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 3208);
    t45 = (t15 + 72U);
    t52 = *((char **)t45);
    t54 = (t0 + 1688U);
    t55 = *((char **)t54);
    t54 = (t0 + 1648U);
    t68 = (t54 + 72U);
    t70 = *((char **)t68);
    t76 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t34, 32, t55, t70, 2, t76, 32, 1);
    t81 = ((char*)((ng10)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_multiply(t44, 32, t34, 32, t81, 32);
    t82 = (t0 + 3048);
    t83 = (t82 + 56U);
    t91 = *((char **)t83);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t44, 32, t91, 32);
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t52, 2, t53, 32, 2);
    t92 = (t0 + 2888);
    t105 = (t0 + 2888);
    t111 = (t105 + 72U);
    t112 = *((char **)t111);
    t113 = (t0 + 3048);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    xsi_vlog_generic_convert_bit_index(t69, t112, 2, t115, 32, 2);
    t116 = (t69 + 4);
    t21 = *((unsigned int *)t116);
    t96 = (!(t21));
    if (t96 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB76;

LAB84:    xsi_vlogvar_assign_value(t92, t14, 0, *((unsigned int *)t69), 1);
    goto LAB85;

LAB88:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t44, 0, 8);
    t15 = (t44 + 4);
    t45 = (t13 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (t40 >> 0);
    *((unsigned int *)t44) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 0);
    *((unsigned int *)t15) = t43;
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t46 & 65535U);
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & 65535U);
    t52 = ((char*)((ng10)));
    t54 = (t0 + 2888);
    t55 = (t54 + 56U);
    t68 = *((char **)t55);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t76 = (t68 + 4);
    t48 = *((unsigned int *)t68);
    t49 = (t48 >> 15);
    t50 = (t49 & 1);
    *((unsigned int *)t69) = t50;
    t51 = *((unsigned int *)t76);
    t56 = (t51 >> 15);
    t57 = (t56 & 1);
    *((unsigned int *)t70) = t57;
    xsi_vlog_mul_concat(t53, 16, 1, t52, 1U, t69, 1);
    xsi_vlogtype_concat(t34, 32, 32, 2U, t53, 16, t44, 16);
    t81 = (t0 + 2888);
    xsi_vlogvar_assign_value(t81, t34, 0, 0, 32);
    goto LAB92;

}

static void Cont_51_1(char *t0)
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

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5368);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_53_2(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng11)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(55, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2568);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 2);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB11:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB12;

}

static void Always_58_3(char *t0)
{
    char t7[8];
    char t31[8];
    char t32[8];
    char t71[8];
    char t72[8];
    char t76[8];
    char t83[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 4840);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB10;

LAB7:    if (t19 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB10:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB28;

LAB25:    if (t19 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;

LAB28:    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB13:    goto LAB2;

LAB9:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);

LAB14:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);

LAB15:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB17;

LAB16:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB18;

LAB19:    t22 = (t7 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB21;

LAB22:    goto LAB13;

LAB17:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(62, ng0);
    t23 = ((char*)((ng1)));
    t29 = (t0 + 2568);
    t30 = (t0 + 2568);
    t33 = (t30 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2568);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2728);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t31, t32, t34, t37, 2, 1, t40, 32, 2);
    t41 = (t31 + 4);
    t15 = *((unsigned int *)t41);
    t42 = (!(t15));
    t43 = (t32 + 4);
    t16 = *((unsigned int *)t43);
    t44 = (!(t16));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB15;

LAB23:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t46 = (t17 - t18);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, *((unsigned int *)t32), t47, 0LL);
    goto LAB24;

LAB27:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(64, ng0);

LAB32:    xsi_set_current_line(65, ng0);
    t9 = (t0 + 1048U);
    t22 = *((char **)t9);
    memset(t31, 0, 8);
    t9 = (t31 + 4);
    t23 = (t22 + 4);
    t48 = *((unsigned int *)t22);
    t49 = (t48 >> 26);
    *((unsigned int *)t31) = t49;
    t50 = *((unsigned int *)t23);
    t51 = (t50 >> 26);
    *((unsigned int *)t9) = t51;
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & 63U);
    t53 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t53 & 63U);
    t29 = ((char*)((ng12)));
    memset(t32, 0, 8);
    t30 = (t31 + 4);
    t33 = (t29 + 4);
    t54 = *((unsigned int *)t31);
    t55 = *((unsigned int *)t29);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t30);
    t58 = *((unsigned int *)t33);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t33);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB36;

LAB33:    if (t63 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t32) = 1;

LAB36:    t35 = (t32 + 4);
    t66 = *((unsigned int *)t35);
    t67 = (~(t66));
    t68 = *((unsigned int *)t32);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 26);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t5 = ((char*)((ng14)));
    memset(t31, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t24 = (t18 | t21);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t48 = (t24 & t28);
    if (t48 != 0)
        goto LAB46;

LAB43:    if (t27 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t31) = 1;

LAB46:    t22 = (t31 + 4);
    t49 = *((unsigned int *)t22);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 26);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t5 = ((char*)((ng16)));
    memset(t31, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t24 = (t18 | t21);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t8);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t48 = (t24 & t28);
    if (t48 != 0)
        goto LAB66;

LAB63:    if (t27 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t31) = 1;

LAB66:    t22 = (t31 + 4);
    t49 = *((unsigned int *)t22);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB49:
LAB39:    goto LAB31;

LAB35:    t34 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(65, ng0);

LAB40:    xsi_set_current_line(66, ng0);
    t36 = (t0 + 2008U);
    t37 = *((char **)t36);
    t36 = (t0 + 2568);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 2568);
    t43 = (t41 + 64U);
    t73 = *((char **)t43);
    t74 = (t0 + 1688U);
    t75 = *((char **)t74);
    t74 = ((char*)((ng2)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_divide(t76, 32, t75, 32, t74, 32);
    xsi_vlog_generic_convert_array_indices(t71, t72, t40, t73, 2, 1, t76, 32, 2);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t77);
    t42 = (!(t78));
    t79 = (t72 + 4);
    t80 = *((unsigned int *)t79);
    t44 = (!(t80));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(67, ng0);
    t2 = xsi_vlog_time(t83, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t3, 32);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    t5 = (t0 + 2008U);
    t8 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t0, (char)118, t83, 64, (char)118, t7, 32, (char)118, t6, 32, (char)118, t8, 32);
    goto LAB39;

LAB41:    t81 = *((unsigned int *)t71);
    t82 = *((unsigned int *)t72);
    t46 = (t81 - t82);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t36, t37, 0, *((unsigned int *)t72), t47, 0LL);
    goto LAB42;

LAB45:    t9 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(69, ng0);

LAB50:    xsi_set_current_line(70, ng0);
    t23 = (t0 + 2568);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t33 = (t0 + 2568);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2568);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 1688U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng2)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_divide(t71, 32, t40, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 2, 1, t71, 32, 2);
    t41 = (t0 + 3368);
    xsi_vlogvar_assign_value(t41, t32, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB51:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB53;

LAB52:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB54;

LAB55:    t22 = (t7 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t0 + 2568);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t22 = (t0 + 2568);
    t23 = (t22 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 1688U);
    t33 = *((char **)t30);
    t30 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_divide(t32, 32, t33, 32, t30, 32);
    xsi_vlog_generic_convert_array_indices(t7, t31, t9, t29, 2, 1, t32, 32, 2);
    t34 = (t7 + 4);
    t10 = *((unsigned int *)t34);
    t42 = (!(t10));
    t35 = (t31 + 4);
    t11 = *((unsigned int *)t35);
    t44 = (!(t11));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(74, ng0);
    t2 = xsi_vlog_time(t83, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t3, 32);
    t5 = ((char*)((ng15)));
    t6 = (t0 + 1688U);
    t8 = *((char **)t6);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 2);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 2);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 1073741823U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t32, 30, t5, 2);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t0, (char)118, t83, 64, (char)118, t7, 32, (char)118, t31, 32, (char)118, t29, 32);
    goto LAB49;

LAB53:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(72, ng0);
    t23 = (t0 + 2008U);
    t29 = *((char **)t23);
    t23 = (t0 + 1968U);
    t30 = (t23 + 72U);
    t33 = *((char **)t30);
    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_index_select_value(t31, 1, t29, t33, 2, t36, 32, 2);
    t37 = (t0 + 3368);
    t38 = (t0 + 3368);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 1688U);
    t43 = *((char **)t41);
    memset(t71, 0, 8);
    t41 = (t71 + 4);
    t73 = (t43 + 4);
    t15 = *((unsigned int *)t43);
    t16 = (t15 >> 0);
    *((unsigned int *)t71) = t16;
    t17 = *((unsigned int *)t73);
    t18 = (t17 >> 0);
    *((unsigned int *)t41) = t18;
    t19 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t19 & 3U);
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 3U);
    t74 = ((char*)((ng5)));
    memset(t72, 0, 8);
    xsi_vlog_unsigned_multiply(t72, 32, t71, 32, t74, 32);
    t75 = (t0 + 3048);
    t77 = (t75 + 56U);
    t79 = *((char **)t77);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t72, 32, t79, 32);
    xsi_vlog_generic_convert_bit_index(t32, t40, 2, t76, 32, 2);
    t84 = (t32 + 4);
    t21 = *((unsigned int *)t84);
    t42 = (!(t21));
    if (t42 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB51;

LAB59:    xsi_vlogvar_assign_value(t37, t31, 0, *((unsigned int *)t32), 1);
    goto LAB60;

LAB61:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t31);
    t46 = (t12 - t13);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t31), t47);
    goto LAB62;

LAB65:    t9 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(76, ng0);

LAB70:    xsi_set_current_line(77, ng0);
    t23 = (t0 + 2568);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t33 = (t0 + 2568);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2568);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 1688U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng2)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_divide(t71, 32, t40, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 2, 1, t71, 32, 2);
    t41 = (t0 + 3368);
    xsi_vlogvar_assign_value(t41, t32, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB71:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB73;

LAB72:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB74;

LAB75:    t22 = (t7 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t0 + 2568);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t22 = (t0 + 2568);
    t23 = (t22 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 1688U);
    t33 = *((char **)t30);
    t30 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_divide(t32, 32, t33, 32, t30, 32);
    xsi_vlog_generic_convert_array_indices(t7, t31, t9, t29, 2, 1, t32, 32, 2);
    t34 = (t7 + 4);
    t10 = *((unsigned int *)t34);
    t42 = (!(t10));
    t35 = (t31 + 4);
    t11 = *((unsigned int *)t35);
    t44 = (!(t11));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(81, ng0);
    t2 = xsi_vlog_time(t83, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t3, 32);
    t5 = ((char*)((ng15)));
    t6 = (t0 + 1688U);
    t8 = *((char **)t6);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 2);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 2);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 1073741823U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t32, 30, t5, 2);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t0, (char)118, t83, 64, (char)118, t7, 32, (char)118, t31, 32, (char)118, t29, 32);
    goto LAB69;

LAB73:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t7) = 1;
    goto LAB75;

LAB77:    xsi_set_current_line(79, ng0);
    t23 = (t0 + 2008U);
    t29 = *((char **)t23);
    t23 = (t0 + 1968U);
    t30 = (t23 + 72U);
    t33 = *((char **)t30);
    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_index_select_value(t31, 1, t29, t33, 2, t36, 32, 2);
    t37 = (t0 + 3368);
    t38 = (t0 + 3368);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 1688U);
    t43 = *((char **)t41);
    t41 = (t0 + 1648U);
    t73 = (t41 + 72U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t71, 32, t43, t74, 2, t75, 32, 1);
    t77 = ((char*)((ng10)));
    memset(t72, 0, 8);
    xsi_vlog_unsigned_multiply(t72, 32, t71, 32, t77, 32);
    t79 = (t0 + 3048);
    t84 = (t79 + 56U);
    t85 = *((char **)t84);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t72, 32, t85, 32);
    xsi_vlog_generic_convert_bit_index(t32, t40, 2, t76, 32, 2);
    t86 = (t32 + 4);
    t15 = *((unsigned int *)t86);
    t42 = (!(t15));
    if (t42 == 1)
        goto LAB79;

LAB80:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB71;

LAB79:    xsi_vlogvar_assign_value(t37, t31, 0, *((unsigned int *)t32), 1);
    goto LAB80;

LAB81:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t31);
    t46 = (t12 - t13);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t31), t47);
    goto LAB82;

}


extern void work_m_00000000004108662110_2924402094_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_51_1,(void *)Initial_53_2,(void *)Always_58_3};
	xsi_register_didat("work_m_00000000004108662110_2924402094", "isim/test_isim_beh.exe.sim/work/m_00000000004108662110_2924402094.didat");
	xsi_register_executes(pe);
}
