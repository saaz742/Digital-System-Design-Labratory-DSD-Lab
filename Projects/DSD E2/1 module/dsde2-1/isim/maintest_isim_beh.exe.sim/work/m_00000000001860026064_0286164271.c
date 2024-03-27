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
static const char *ng0 = "D:/prj/dsd/New folder/dsde2-1/main.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {10, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Initial_13_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_20_1(char *t0)
{
    char t13[8];
    char t27[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t30 = (t19 & t29);
    if (t30 != 0)
        goto LAB22;

LAB19:    if (t22 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t15 = (t13 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(42, ng0);

LAB27:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB25:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t30 = (t19 & t29);
    if (t30 != 0)
        goto LAB43;

LAB40:    if (t22 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t15 = (t13 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t30 = (t19 & t29);
    if (t30 != 0)
        goto LAB51;

LAB48:    if (t22 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t13) = 1;

LAB51:    t15 = (t13 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t11) < *((unsigned int *)t12))
        goto LAB12;

LAB13:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(28, ng0);

LAB18:    xsi_set_current_line(30, ng0);
    t23 = (t0 + 2088);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t25, 4, t26, 32);
    t28 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB21:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(38, ng0);

LAB26:    xsi_set_current_line(39, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    goto LAB25;

LAB28:    xsi_set_current_line(46, ng0);

LAB31:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t29 = (~(t22));
    t30 = (t19 & t29);
    if (t30 != 0)
        goto LAB33;

LAB32:    if (t22 != 0)
        goto LAB34;

LAB35:    t15 = (t13 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB30;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB34:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(48, ng0);

LAB39:    xsi_set_current_line(49, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng4)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t25, t27, 0, 0, 4, 0LL);
    goto LAB38;

LAB42:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(54, ng0);

LAB47:    xsi_set_current_line(55, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 2, 0LL);
    goto LAB46;

LAB50:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(58, ng0);

LAB55:    xsi_set_current_line(61, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB54;

}


extern void work_m_00000000001860026064_0286164271_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Always_20_1};
	xsi_register_didat("work_m_00000000001860026064_0286164271", "isim/maintest_isim_beh.exe.sim/work/m_00000000001860026064_0286164271.didat");
	xsi_register_executes(pe);
}
