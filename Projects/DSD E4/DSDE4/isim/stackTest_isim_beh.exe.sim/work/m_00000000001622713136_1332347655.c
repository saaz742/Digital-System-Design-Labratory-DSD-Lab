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
static const char *ng0 = "C:/Users/sa/Desktop/DSDE4/DSDE4-98170668/DSDE4/stack.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);
    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB44;

LAB41:    if (t18 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;

LAB44:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);

LAB13:    xsi_set_current_line(28, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(34, ng0);

LAB22:    xsi_set_current_line(35, ng0);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 744);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t28 + 4);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t30);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB24;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB26:    t46 = (t31 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t31);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB21;

LAB24:    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB25:    t45 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(35, ng0);

LAB30:    xsi_set_current_line(36, ng0);
    t52 = (t0 + 2976);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng2)));
    memset(t56, 0, 8);
    xsi_vlog_unsigned_add(t56, 32, t54, 3, t55, 32);
    t57 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 3, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 3136);
    t4 = (t0 + 3136);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3136);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 2976);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t6, t31, t7, t22, 2, 1, t30, 3, 2);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t58 = (!(t9));
    t45 = (t31 + 4);
    t10 = *((unsigned int *)t45);
    t59 = (!(t10));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 32, t5, 32);
    memset(t31, 0, 8);
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t31) = 1;

LAB36:    t28 = (t31 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB29;

LAB31:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t31);
    t61 = (t11 - t12);
    t62 = (t61 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t31), t62, 0LL);
    goto LAB32;

LAB35:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(39, ng0);

LAB40:    xsi_set_current_line(40, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB39;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(45, ng0);

LAB48:    xsi_set_current_line(46, ng0);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t30 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB50;

LAB49:    if (t42 != 0)
        goto LAB51;

LAB52:    t46 = (t31 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t31);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB47;

LAB50:    *((unsigned int *)t31) = 1;
    goto LAB52;

LAB51:    t45 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(46, ng0);

LAB56:    xsi_set_current_line(47, ng0);
    t52 = (t0 + 2976);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng2)));
    memset(t56, 0, 8);
    xsi_vlog_unsigned_minus(t56, 32, t54, 3, t55, 32);
    t57 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 3, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3136);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2976);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t45 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t32, 3, t45, 32);
    xsi_vlog_generic_get_array_select_value(t6, 4, t4, t8, t28, 2, 1, t31, 32, 2);
    t46 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t46, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB55;

LAB59:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(50, ng0);

LAB64:    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB63;

}


extern void work_m_00000000001622713136_1332347655_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_25_1};
	xsi_register_didat("work_m_00000000001622713136_1332347655", "isim/stackTest_isim_beh.exe.sim/work/m_00000000001622713136_1332347655.didat");
	xsi_register_executes(pe);
}
