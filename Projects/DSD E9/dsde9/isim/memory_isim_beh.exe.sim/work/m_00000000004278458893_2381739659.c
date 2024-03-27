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
static const char *ng0 = "C:/Users/sa/Desktop/dsde9/dsde9-98170668/dsde9/memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {6, 0};
static int ng3[] = {1, 0};
static int ng4[] = {16, 0};



static void Initial_14_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(14, ng0);

LAB2:    xsi_set_current_line(15, ng0);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB6:    xsi_set_current_line(16, ng0);
    t12 = (t0 + 2408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t0 + 2088);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2088);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2408);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    t3 = (t0 + 2248);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2248);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 2408);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t19, 32, 1);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t20);
    t29 = (!(t7));
    t21 = (t16 + 4);
    t8 = *((unsigned int *)t21);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB10;

}

static void Always_21_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t40[8];
    char t50[8];
    char t59[8];
    char t65[8];
    char t85[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(26, ng0);

LAB14:    xsi_set_current_line(27, ng0);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(23, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2088);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2088);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 4, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2248);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t18, 4, 2);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t32);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t14), t32);
    goto LAB13;

LAB16:    xsi_set_current_line(27, ng0);

LAB18:    xsi_set_current_line(28, ng0);
    t12 = ((char*)((ng1)));
    t15 = (t0 + 1928);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t14, t18, 2, t21, 32, 1);
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB15;

LAB19:    xsi_vlogvar_assign_value(t15, t12, 0, *((unsigned int *)t14), 1);
    goto LAB20;

LAB22:    xsi_set_current_line(30, ng0);

LAB24:    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng1)));
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 32);

LAB25:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB21;

LAB26:    xsi_set_current_line(31, ng0);

LAB28:    xsi_set_current_line(32, ng0);
    t12 = ((char*)((ng1)));
    t15 = (t0 + 1928);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t14, t18, 2, t21, 32, 1);
    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2248);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t17, 2, 1, t20, 32, 1);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t25 = *((char **)t22);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_index_select_value(t14, 1, t13, t25, 2, t35, 32, 1);
    t36 = (t14 + 4);
    t6 = *((unsigned int *)t36);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB25;

LAB29:    xsi_vlogvar_assign_value(t15, t12, 0, *((unsigned int *)t14), 1);
    goto LAB30;

LAB31:    xsi_set_current_line(33, ng0);

LAB34:    xsi_set_current_line(34, ng0);
    t37 = (t0 + 2088);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t41 = (t0 + 2088);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 2088);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t0 + 2408);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t40, 16, t39, t43, t46, 2, 1, t49, 32, 1);
    t51 = (t0 + 2088);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t0 + 2568);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    xsi_vlog_generic_get_index_select_value(t50, 1, t40, t53, 2, t56, 32, 1);
    t57 = (t0 + 1208U);
    t58 = *((char **)t57);
    t57 = (t0 + 1168U);
    t60 = (t57 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 2568);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_get_index_select_value(t59, 1, t58, t61, 2, t64, 32, 1);
    memset(t65, 0, 8);
    t66 = (t50 + 4);
    t67 = (t59 + 4);
    t23 = *((unsigned int *)t50);
    t26 = *((unsigned int *)t59);
    t29 = (t23 ^ t26);
    t30 = *((unsigned int *)t66);
    t68 = *((unsigned int *)t67);
    t69 = (t30 ^ t68);
    t70 = (t29 | t69);
    t71 = *((unsigned int *)t66);
    t72 = *((unsigned int *)t67);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB38;

LAB35:    if (t73 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t65) = 1;

LAB38:    t77 = (t65 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t65);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB33;

LAB37:    t76 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(34, ng0);

LAB42:    xsi_set_current_line(35, ng0);
    t83 = ((char*)((ng3)));
    t84 = (t0 + 1928);
    t86 = (t0 + 1928);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 2408);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    xsi_vlog_generic_convert_bit_index(t85, t88, 2, t91, 32, 1);
    t92 = (t85 + 4);
    t93 = *((unsigned int *)t92);
    t24 = (!(t93));
    if (t24 == 1)
        goto LAB43;

LAB44:    goto LAB41;

LAB43:    xsi_vlogvar_assign_value(t84, t83, 0, *((unsigned int *)t85), 1);
    goto LAB44;

}


extern void work_m_00000000004278458893_2381739659_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000004278458893_2381739659", "isim/memory_isim_beh.exe.sim/work/m_00000000004278458893_2381739659.didat");
	xsi_register_executes(pe);
}
