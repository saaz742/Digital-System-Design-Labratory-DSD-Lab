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
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};



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
    char t33[8];
    char t36[8];
    char t55[8];
    char t65[8];
    char t74[8];
    char t80[8];
    char t104[8];
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
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
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
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;

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

LAB14:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB17:
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

LAB16:    xsi_set_current_line(30, ng0);

LAB18:    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng3)));
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

LAB20:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB23:    xsi_set_current_line(30, ng0);
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

LAB22:    xsi_set_current_line(32, ng0);

LAB24:    xsi_set_current_line(33, ng0);
    t12 = (t0 + 2248);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 2248);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2248);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t25 = (t0 + 2408);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t33, 16, t16, t19, t22, 2, 1, t35, 32, 1);
    t37 = (t0 + 2248);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2568);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_index_select_value(t36, 1, t33, t39, 2, t42, 32, 1);
    memset(t14, 0, 8);
    t43 = (t36 + 4);
    t23 = *((unsigned int *)t43);
    t26 = (~(t23));
    t29 = *((unsigned int *)t36);
    t30 = (t29 & t26);
    t44 = (t30 & 1U);
    if (t44 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t43) == 0)
        goto LAB25;

LAB27:    t45 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t45) = 1;

LAB28:    t46 = (t14 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t14);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB21;

LAB25:    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(33, ng0);

LAB32:    xsi_set_current_line(34, ng0);
    t52 = (t0 + 2088);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t56 = (t0 + 2088);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2088);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 2408);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t55, 16, t54, t58, t61, 2, 1, t64, 32, 1);
    t66 = (t0 + 2088);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2568);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_get_index_select_value(t65, 1, t55, t68, 2, t71, 32, 1);
    t72 = (t0 + 1208U);
    t73 = *((char **)t72);
    t72 = (t0 + 1168U);
    t75 = (t72 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 2568);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_generic_get_index_select_value(t74, 1, t73, t76, 2, t79, 32, 1);
    memset(t80, 0, 8);
    t81 = (t65 + 4);
    t82 = (t74 + 4);
    t83 = *((unsigned int *)t65);
    t84 = *((unsigned int *)t74);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = (t85 | t88);
    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t92 = (t90 | t91);
    t93 = (~(t92));
    t94 = (t89 & t93);
    if (t94 != 0)
        goto LAB34;

LAB33:    if (t92 != 0)
        goto LAB35;

LAB36:    t96 = (t80 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t80);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB31;

LAB34:    *((unsigned int *)t80) = 1;
    goto LAB36;

LAB35:    t95 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(34, ng0);

LAB40:    xsi_set_current_line(35, ng0);
    t102 = ((char*)((ng1)));
    t103 = (t0 + 1928);
    t105 = (t0 + 1928);
    t106 = (t105 + 72U);
    t107 = *((char **)t106);
    t108 = (t0 + 2408);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    xsi_vlog_generic_convert_bit_index(t104, t107, 2, t110, 32, 1);
    t111 = (t104 + 4);
    t112 = *((unsigned int *)t111);
    t24 = (!(t112));
    if (t24 == 1)
        goto LAB41;

LAB42:    goto LAB39;

LAB41:    xsi_vlogvar_assign_value(t103, t102, 0, *((unsigned int *)t104), 1);
    goto LAB42;

}


extern void work_m_00000000004278458893_2381739659_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000004278458893_2381739659", "isim/test_isim_beh.exe.sim/work/m_00000000004278458893_2381739659.didat");
	xsi_register_executes(pe);
}
