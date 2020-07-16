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
static const char *ng0 = "D:/study/DDandCA/Verilog/p4_yj/mux.v";
static int ng1[] = {32, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {5, 0};



static void Always_32_0(char *t0)
{
    char t3[8];
    char t19[8];
    char t33[8];
    char t49[8];
    char t57[8];
    char t97[8];
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
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
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

LAB6:    memset(t19, 0, 8);
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t20) != 0)
        goto LAB9;

LAB10:    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB11;

LAB12:    memcpy(t57, t19, 8);

LAB13:    t89 = (t57 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t57);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng4)));
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
        goto LAB39;

LAB36:    if (t15 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t3) = 1;

LAB39:    memset(t19, 0, 8);
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t20) != 0)
        goto LAB42;

LAB43:    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB44;

LAB45:    memcpy(t57, t19, 8);

LAB46:    t89 = (t57 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t57);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB60;

LAB5:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB6;

LAB7:    *((unsigned int *)t19) = 1;
    goto LAB10;

LAB9:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB10;

LAB11:    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t31);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB17;

LAB14:    if (t45 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t33) = 1;

LAB17:    memset(t49, 0, 8);
    t50 = (t33 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t50) != 0)
        goto LAB20;

LAB21:    t58 = *((unsigned int *)t19);
    t59 = *((unsigned int *)t49);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t19 + 4);
    t62 = (t49 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB16:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t49) = 1;
    goto LAB21;

LAB20:    t56 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB22:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t19 + 4);
    t72 = (t49 + 4);
    t73 = *((unsigned int *)t19);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t49);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB24;

LAB25:    xsi_set_current_line(33, ng0);

LAB28:    xsi_set_current_line(34, ng0);
    t95 = (t0 + 1368U);
    t96 = *((char **)t95);
    t95 = ((char*)((ng3)));
    memset(t97, 0, 8);
    t98 = (t96 + 4);
    t99 = (t95 + 4);
    t100 = *((unsigned int *)t96);
    t101 = *((unsigned int *)t95);
    t102 = (t100 ^ t101);
    t103 = *((unsigned int *)t98);
    t104 = *((unsigned int *)t99);
    t105 = (t103 ^ t104);
    t106 = (t102 | t105);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t99);
    t109 = (t107 | t108);
    t110 = (~(t109));
    t111 = (t106 & t110);
    if (t111 != 0)
        goto LAB32;

LAB29:    if (t109 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t97) = 1;

LAB32:    t113 = (t97 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t97);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1688U);
    t2 = *((char **)t1);
    t1 = (t0 + 2408);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 32);

LAB35:    goto LAB27;

LAB31:    t112 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(34, ng0);
    t119 = (t0 + 1528U);
    t120 = *((char **)t119);
    t119 = (t0 + 2408);
    xsi_vlogvar_assign_value(t119, t120, 0, 0, 32);
    goto LAB35;

LAB38:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t19) = 1;
    goto LAB43;

LAB42:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB43;

LAB44:    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t31);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB50;

LAB47:    if (t45 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t33) = 1;

LAB50:    memset(t49, 0, 8);
    t50 = (t33 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t50) != 0)
        goto LAB53;

LAB54:    t58 = *((unsigned int *)t19);
    t59 = *((unsigned int *)t49);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t19 + 4);
    t62 = (t49 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t49) = 1;
    goto LAB54;

LAB53:    t56 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB54;

LAB55:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t19 + 4);
    t72 = (t49 + 4);
    t73 = *((unsigned int *)t19);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t49);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB57;

LAB58:    xsi_set_current_line(37, ng0);

LAB61:    xsi_set_current_line(38, ng0);
    t95 = (t0 + 1368U);
    t96 = *((char **)t95);
    t95 = ((char*)((ng3)));
    memset(t97, 0, 8);
    t98 = (t96 + 4);
    t99 = (t95 + 4);
    t100 = *((unsigned int *)t96);
    t101 = *((unsigned int *)t95);
    t102 = (t100 ^ t101);
    t103 = *((unsigned int *)t98);
    t104 = *((unsigned int *)t99);
    t105 = (t103 ^ t104);
    t106 = (t102 | t105);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t99);
    t109 = (t107 | t108);
    t110 = (~(t109));
    t111 = (t106 & t110);
    if (t111 != 0)
        goto LAB65;

LAB62:    if (t109 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t97) = 1;

LAB65:    t113 = (t97 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t97);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    t1 = (t0 + 2568);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 5);

LAB68:    goto LAB60;

LAB64:    t112 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(38, ng0);
    t119 = (t0 + 1848U);
    t120 = *((char **)t119);
    t119 = (t0 + 2568);
    xsi_vlogvar_assign_value(t119, t120, 0, 0, 5);
    goto LAB68;

LAB1:    return;
}


extern void work_m_00000000000556660654_1323274903_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000000556660654_1323274903", "isim/test_isim_beh.exe.sim/work/m_00000000000556660654_1323274903.didat");
	xsi_register_executes(pe);
}
