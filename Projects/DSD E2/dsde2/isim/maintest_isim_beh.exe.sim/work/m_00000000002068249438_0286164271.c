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
static const char *ng0 = "D:/prj/dsd/New folder/dsde2/main.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};



static void Always_18_0(char *t0)
{
    char t11[8];
    char t23[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(24, ng0);
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
LAB8:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t28 = (~(t20));
    t29 = (t17 & t28);
    if (t29 != 0)
        goto LAB31;

LAB28:    if (t20 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t11) = 1;

LAB31:    t13 = (t11 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(39, ng0);

LAB36:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB34:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);

LAB9:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB12;

LAB13:    t15 = (t11 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(25, ng0);

LAB18:    xsi_set_current_line(26, ng0);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB20;

LAB19:    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t22) < *((unsigned int *)t21))
        goto LAB21;

LAB22:    t27 = (t23 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB17;

LAB20:    t26 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t23) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(26, ng0);

LAB27:    xsi_set_current_line(27, ng0);
    t33 = ((char*)((ng4)));
    t34 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB30:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(35, ng0);

LAB35:    xsi_set_current_line(36, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    goto LAB34;

LAB37:    xsi_set_current_line(43, ng0);

LAB40:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t14 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t28 = (~(t20));
    t29 = (t17 & t28);
    if (t29 != 0)
        goto LAB44;

LAB41:    if (t20 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t11) = 1;

LAB44:    t22 = (t11 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB39;

LAB43:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(48, ng0);

LAB48:    xsi_set_current_line(49, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 1, 0LL);
    goto LAB47;

}


extern void work_m_00000000002068249438_0286164271_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000002068249438_0286164271", "isim/maintest_isim_beh.exe.sim/work/m_00000000002068249438_0286164271.didat");
	xsi_register_executes(pe);
}
