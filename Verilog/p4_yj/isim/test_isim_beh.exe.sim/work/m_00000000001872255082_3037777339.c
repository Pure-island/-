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
static const char *ng0 = "D:/study/DDandCA/Verilog/p4_yj/control.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {43U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {15U, 0U};



static void Always_34_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng1)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng4)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB6;

LAB7:    t1 = ((char*)((ng5)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB8;

LAB9:    t1 = ((char*)((ng6)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB10;

LAB11:    t1 = ((char*)((ng7)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB12;

LAB13:    t1 = ((char*)((ng8)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 6, t1, 6);
    if (t3 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB16;

LAB4:    xsi_set_current_line(37, ng0);

LAB17:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB6:    xsi_set_current_line(50, ng0);

LAB18:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB8:    xsi_set_current_line(63, ng0);

LAB19:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB10:    xsi_set_current_line(76, ng0);

LAB20:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB12:    xsi_set_current_line(89, ng0);

LAB21:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB14:    xsi_set_current_line(102, ng0);

LAB22:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t1 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t1 = ((char*)((ng2)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t1, 0, 0, 1);
    goto LAB16;

LAB1:    return;
}


extern void work_m_00000000001872255082_3037777339_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000001872255082_3037777339", "isim/test_isim_beh.exe.sim/work/m_00000000001872255082_3037777339.didat");
	xsi_register_executes(pe);
}
