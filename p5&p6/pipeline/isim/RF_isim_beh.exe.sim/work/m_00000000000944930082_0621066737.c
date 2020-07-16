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
static const char *ng0 = "D:/study/DDandCA/p5/pipeline/RF.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "%d@%h: $%d <= %h";



static void Cont_37_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5304);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5192);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5368);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_41_2(char *t0)
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

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);

LAB3:    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
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

LAB9:    xsi_set_current_line(43, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 3048);
    t19 = (t0 + 3048);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 3208);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 6, 2);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 6, t4, 32);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 6);
    goto LAB3;

LAB11:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB12;

}

static void Always_47_3(char *t0)
{
    char t7[8];
    char t31[8];
    char t32[8];
    char t65[8];
    char t66[8];
    char t74[16];
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
    char *t67;
    char *t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5224);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 4680);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
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

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(49, ng0);

LAB14:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3208);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 6);

LAB15:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB21:    xsi_set_current_line(51, ng0);
    t23 = ((char*)((ng1)));
    t29 = (t0 + 3048);
    t30 = (t0 + 3048);
    t33 = (t30 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 3048);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 3208);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t31, t32, t34, t37, 2, 1, t40, 6, 2);
    t41 = (t31 + 4);
    t15 = *((unsigned int *)t41);
    t42 = (!(t15));
    t43 = (t32 + 4);
    t16 = *((unsigned int *)t43);
    t44 = (!(t16));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 6, t5, 32);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 6);
    goto LAB15;

LAB23:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t46 = (t17 - t18);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t29, t23, 0, *((unsigned int *)t32), t47);
    goto LAB24;

LAB27:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(53, ng0);

LAB32:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 1848U);
    t22 = *((char **)t9);
    t9 = ((char*)((ng4)));
    xsi_vlogtype_concat(t31, 32, 6, 2U, t9, 1, t22, 5);
    t23 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t29 = (t31 + 4);
    t30 = (t23 + 4);
    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t23);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t29);
    t52 = *((unsigned int *)t30);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t29);
    t56 = *((unsigned int *)t30);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB34;

LAB33:    if (t57 != 0)
        goto LAB35;

LAB36:    t34 = (t32 + 4);
    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t32);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 32, 6, 2U, t2, 1, t3, 5);
    t4 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB43;

LAB42:    if (t19 != 0)
        goto LAB44;

LAB45:    t9 = (t31 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t31);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB31;

LAB34:    *((unsigned int *)t32) = 1;
    goto LAB36;

LAB35:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(55, ng0);
    t35 = (t0 + 2008U);
    t36 = *((char **)t35);
    t35 = (t0 + 3048);
    t37 = (t0 + 3048);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 3048);
    t41 = (t40 + 64U);
    t43 = *((char **)t41);
    t67 = (t0 + 1848U);
    t68 = *((char **)t67);
    xsi_vlog_generic_convert_array_indices(t65, t66, t39, t43, 2, 1, t68, 5, 2);
    t67 = (t65 + 4);
    t69 = *((unsigned int *)t67);
    t42 = (!(t69));
    t70 = (t66 + 4);
    t71 = *((unsigned int *)t70);
    t44 = (!(t71));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t72 = *((unsigned int *)t65);
    t73 = *((unsigned int *)t66);
    t46 = (t72 - t73);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t35, t36, 0, *((unsigned int *)t66), t47);
    goto LAB41;

LAB43:    *((unsigned int *)t31) = 1;
    goto LAB45;

LAB44:    t8 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(57, ng0);
    t22 = xsi_vlog_time(t74, 1000.0000000000000, 1000.0000000000000);
    t23 = (t0 + 2328U);
    t29 = *((char **)t23);
    t23 = (t0 + 1848U);
    t30 = *((char **)t23);
    t23 = ((char*)((ng4)));
    xsi_vlogtype_concat(t32, 6, 6, 2U, t23, 1, t30, 5);
    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t74, 64, (char)118, t29, 32, (char)118, t32, 6, (char)118, t34, 32);
    goto LAB48;

}


extern void work_m_00000000000944930082_0621066737_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Initial_41_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000000944930082_0621066737", "isim/RF_isim_beh.exe.sim/work/m_00000000000944930082_0621066737.didat");
	xsi_register_executes(pe);
}
