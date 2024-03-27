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
static const char *ng0 = "D:/prj/dsd/dsde10/cpu.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {112U, 0U};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {6, 0};
static unsigned int ng13[] = {96U, 0U};
static int ng14[] = {7, 0};
static unsigned int ng15[] = {16U, 0U};
static int ng16[] = {8, 0};
static unsigned int ng17[] = {1U, 0U};
static int ng18[] = {9, 0};
static unsigned int ng19[] = {32U, 0U};
static int ng20[] = {11, 0};
static unsigned int ng21[] = {20U, 0U};
static int ng22[] = {12, 0};
static unsigned int ng23[] = {5U, 0U};
static unsigned int ng24[] = {6U, 0U};
static unsigned int ng25[] = {7U, 0U};



static void Initial_18_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(18, ng0);

LAB2:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2728);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB26;

}

static void Always_34_1(char *t0)
{
    char t13[8];
    char t21[8];
    char t25[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2728);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t16, 2, 1, t19, 8, 2);
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2728);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 8, t20, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t16, 2, 1, t21, 32, 2);
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 4);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 15U);

LAB10:    t12 = ((char*)((ng1)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t12, 4);
    if (t24 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng23)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng24)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng25)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB8;

LAB11:    xsi_set_current_line(45, ng0);

LAB28:    xsi_set_current_line(46, ng0);
    t14 = (t0 + 1608);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t0 + 2568);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t22 = (t0 + 2568);
    t26 = (t22 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2888);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t25, t20, t27, 2, 1, t30, 3, 2);
    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t25 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 8);
    goto LAB27;

LAB13:    xsi_set_current_line(50, ng0);

LAB31:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2728);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 1608);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t21, 8, t5, t14, t17, 2, 1, t20, 8, 2);
    t22 = (t0 + 2568);
    t26 = (t0 + 2568);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2568);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t34 = (t0 + 2888);
    t43 = (t34 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_array_indices(t25, t42, t28, t31, 2, 1, t44, 3, 2);
    t45 = (t25 + 4);
    t6 = *((unsigned int *)t45);
    t33 = (!(t6));
    t46 = (t42 + 4);
    t7 = *((unsigned int *)t46);
    t36 = (!(t7));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 8);
    goto LAB27;

LAB15:    xsi_set_current_line(55, ng0);

LAB34:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t5, 3, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 3);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 2728);
    t22 = (t0 + 2728);
    t26 = (t22 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 1608);
    t34 = (t31 + 56U);
    t43 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t25, t42, t27, t30, 2, 1, t43, 8, 2);
    t44 = (t25 + 4);
    t6 = *((unsigned int *)t44);
    t24 = (!(t6));
    t45 = (t42 + 4);
    t7 = *((unsigned int *)t45);
    t33 = (!(t7));
    t36 = (t24 && t33);
    if (t36 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 8);
    goto LAB27;

LAB17:    xsi_set_current_line(60, ng0);

LAB37:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t5, 3, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 3);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    goto LAB27;

LAB19:    xsi_set_current_line(64, ng0);

LAB38:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB27;

LAB21:    xsi_set_current_line(70, ng0);

LAB43:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB27;

LAB23:    xsi_set_current_line(76, ng0);

LAB48:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t5, 3, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 8, t4, 8, t12, 8);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t21, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t21, t25, t14, t17, 2, 1, t20, 3, 2);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t22);
    t24 = (!(t6));
    t26 = (t25 + 4);
    t7 = *((unsigned int *)t26);
    t33 = (!(t7));
    t36 = (t24 && t33);
    if (t36 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t4, 8, t5, 32);
    t11 = (t21 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t21);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t23 = (t10 & 1);
    *((unsigned int *)t5) = t23;
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 8);
    goto LAB27;

LAB25:    xsi_set_current_line(91, ng0);

LAB55:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t5, 3, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 8, t4, 8, t12, 8);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t21, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t21, t25, t14, t17, 2, 1, t20, 3, 2);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t22);
    t24 = (!(t6));
    t26 = (t25 + 4);
    t7 = *((unsigned int *)t26);
    t33 = (!(t7));
    t36 = (t24 && t33);
    if (t36 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 3, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 3);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t4, 8, t5, 32);
    t11 = (t21 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t21);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t23 = (t10 & 1);
    *((unsigned int *)t5) = t23;
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t21, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t21, 0, 0, 8);
    goto LAB27;

LAB29:    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t25);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t25), t41);
    goto LAB30;

LAB32:    t8 = *((unsigned int *)t25);
    t9 = *((unsigned int *)t42);
    t40 = (t8 - t9);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t22, t21, 0, *((unsigned int *)t42), t41);
    goto LAB33;

LAB35:    t8 = *((unsigned int *)t25);
    t9 = *((unsigned int *)t42);
    t37 = (t8 - t9);
    t40 = (t37 + 1);
    xsi_vlogvar_assign_value(t20, t21, 0, *((unsigned int *)t42), t40);
    goto LAB36;

LAB39:    xsi_set_current_line(65, ng0);

LAB42:    xsi_set_current_line(66, ng0);
    t12 = (t0 + 2888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t15, 3, t16, 32);
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t21, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    goto LAB41;

LAB44:    xsi_set_current_line(71, ng0);

LAB47:    xsi_set_current_line(72, ng0);
    t12 = (t0 + 2888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t15, 3, t16, 32);
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t21, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t21, 8, t4, t12, t16, 2, 1, t19, 3, 2);
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 8);
    goto LAB46;

LAB49:    t8 = *((unsigned int *)t21);
    t9 = *((unsigned int *)t25);
    t37 = (t8 - t9);
    t40 = (t37 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t25), t40);
    goto LAB50;

LAB51:    xsi_set_current_line(85, ng0);

LAB54:    xsi_set_current_line(86, ng0);
    t12 = ((char*)((ng4)));
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 1);
    goto LAB53;

LAB56:    t8 = *((unsigned int *)t21);
    t9 = *((unsigned int *)t25);
    t37 = (t8 - t9);
    t40 = (t37 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t25), t40);
    goto LAB57;

LAB58:    xsi_set_current_line(100, ng0);

LAB61:    xsi_set_current_line(101, ng0);
    t12 = ((char*)((ng4)));
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 1);
    goto LAB60;

}


extern void work_m_00000000004250202841_1200043877_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000004250202841_1200043877", "isim/cpu_isim_beh.exe.sim/work/m_00000000004250202841_1200043877.didat");
	xsi_register_executes(pe);
}
