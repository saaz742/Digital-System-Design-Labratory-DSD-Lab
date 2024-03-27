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
static const char *ng0 = "C:/Users/sa/Desktop/dsde7/dsd7-98170668/dsde7f/receive.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {2, 0};
static int ng6[] = {9, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t13[8];
    char t32[8];
    char t65[8];
    char t68[8];
    char t69[8];
    char t70[8];
    char t82[8];
    char t91[8];
    char t108[8];
    char t117[8];
    char t134[8];
    char t143[8];
    char t160[8];
    char t169[8];
    char t183[8];
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
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    int t67;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    int t207;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
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
LAB8:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2568);
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
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB77;

LAB75:    if (*((unsigned int *)t2) == 0)
        goto LAB74;

LAB76:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB77:    memset(t32, 0, 8);
    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t5) != 0)
        goto LAB80;

LAB81:    t12 = (t32 + 4);
    t19 = *((unsigned int *)t32);
    t20 = *((unsigned int *)t12);
    t23 = (t19 || t20);
    if (t23 > 0)
        goto LAB82;

LAB83:    memcpy(t69, t32, 8);

LAB84:    t61 = (t69 + 4);
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t69);
    t92 = (t90 & t89);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB96;

LAB97:
LAB98:
LAB20:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t28 = (t0 + 2568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t30, 2, t31, 32);
    t33 = (t0 + 2568);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 2);
    goto LAB16;

LAB18:    xsi_set_current_line(37, ng0);

LAB21:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t21 = (t11 + 4);
    t22 = (t12 + 4);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t22);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t22);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB25;

LAB22:    if (t25 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB25:    t29 = (t13 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t13);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 2);
    xsi_set_current_line(47, ng0);
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
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB20;

LAB24:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(38, ng0);

LAB29:    xsi_set_current_line(39, ng0);
    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t39 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t40 = (t33 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB33;

LAB30:    if (t51 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t32) = 1;

LAB33:    t55 = (t32 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t32);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB32:    t54 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(40, ng0);
    t61 = (t0 + 2728);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng3)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_lshift(t65, 8, t63, 8, t64, 32);
    t66 = (t0 + 2728);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 8);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t67 = (!(t6));
    if (t67 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB36;

LAB38:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t13), 1);
    goto LAB39;

LAB42:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(47, ng0);

LAB47:    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 2728);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memset(t32, 0, 8);
    t28 = (t32 + 4);
    t29 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 6);
    t17 = (t16 & 1);
    *((unsigned int *)t32) = t17;
    t18 = *((unsigned int *)t29);
    t19 = (t18 >> 6);
    t20 = (t19 & 1);
    *((unsigned int *)t28) = t20;
    t30 = (t0 + 2728);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    memset(t65, 0, 8);
    t39 = (t65 + 4);
    t40 = (t33 + 4);
    t23 = *((unsigned int *)t33);
    t24 = (t23 >> 5);
    t25 = (t24 & 1);
    *((unsigned int *)t65) = t25;
    t26 = *((unsigned int *)t40);
    t27 = (t26 >> 5);
    t34 = (t27 & 1);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t65);
    t37 = (t35 ^ t36);
    *((unsigned int *)t68) = t37;
    t41 = (t32 + 4);
    t54 = (t65 + 4);
    t55 = (t68 + 4);
    t38 = *((unsigned int *)t41);
    t42 = *((unsigned int *)t54);
    t43 = (t38 | t42);
    *((unsigned int *)t55) = t43;
    t44 = *((unsigned int *)t55);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB48;

LAB49:
LAB50:    t61 = (t0 + 2728);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t69, 0, 8);
    t64 = (t69 + 4);
    t66 = (t63 + 4);
    t48 = *((unsigned int *)t63);
    t49 = (t48 >> 4);
    t50 = (t49 & 1);
    *((unsigned int *)t69) = t50;
    t51 = *((unsigned int *)t66);
    t52 = (t51 >> 4);
    t53 = (t52 & 1);
    *((unsigned int *)t64) = t53;
    t56 = *((unsigned int *)t68);
    t57 = *((unsigned int *)t69);
    t58 = (t56 ^ t57);
    *((unsigned int *)t70) = t58;
    t71 = (t68 + 4);
    t72 = (t69 + 4);
    t73 = (t70 + 4);
    t59 = *((unsigned int *)t71);
    t60 = *((unsigned int *)t72);
    t74 = (t59 | t60);
    *((unsigned int *)t73) = t74;
    t75 = *((unsigned int *)t73);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB51;

LAB52:
LAB53:    t79 = (t0 + 2728);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 3);
    t87 = (t86 & 1);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 3);
    t90 = (t89 & 1);
    *((unsigned int *)t83) = t90;
    t92 = *((unsigned int *)t70);
    t93 = *((unsigned int *)t82);
    t94 = (t92 ^ t93);
    *((unsigned int *)t91) = t94;
    t95 = (t70 + 4);
    t96 = (t82 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB54;

LAB55:
LAB56:    t105 = (t0 + 2728);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    t109 = (t108 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 2);
    t113 = (t112 & 1);
    *((unsigned int *)t108) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 >> 2);
    t116 = (t115 & 1);
    *((unsigned int *)t109) = t116;
    t118 = *((unsigned int *)t91);
    t119 = *((unsigned int *)t108);
    t120 = (t118 ^ t119);
    *((unsigned int *)t117) = t120;
    t121 = (t91 + 4);
    t122 = (t108 + 4);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t121);
    t125 = *((unsigned int *)t122);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 != 0);
    if (t128 == 1)
        goto LAB57;

LAB58:
LAB59:    t131 = (t0 + 2728);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t134, 0, 8);
    t135 = (t134 + 4);
    t136 = (t133 + 4);
    t137 = *((unsigned int *)t133);
    t138 = (t137 >> 1);
    t139 = (t138 & 1);
    *((unsigned int *)t134) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 >> 1);
    t142 = (t141 & 1);
    *((unsigned int *)t135) = t142;
    t144 = *((unsigned int *)t117);
    t145 = *((unsigned int *)t134);
    t146 = (t144 ^ t145);
    *((unsigned int *)t143) = t146;
    t147 = (t117 + 4);
    t148 = (t134 + 4);
    t149 = (t143 + 4);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB60;

LAB61:
LAB62:    t157 = (t0 + 2728);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t160, 0, 8);
    t161 = (t160 + 4);
    t162 = (t159 + 4);
    t163 = *((unsigned int *)t159);
    t164 = (t163 >> 0);
    t165 = (t164 & 1);
    *((unsigned int *)t160) = t165;
    t166 = *((unsigned int *)t162);
    t167 = (t166 >> 0);
    t168 = (t167 & 1);
    *((unsigned int *)t161) = t168;
    t170 = *((unsigned int *)t143);
    t171 = *((unsigned int *)t160);
    t172 = (t170 ^ t171);
    *((unsigned int *)t169) = t172;
    t173 = (t143 + 4);
    t174 = (t160 + 4);
    t175 = (t169 + 4);
    t176 = *((unsigned int *)t173);
    t177 = *((unsigned int *)t174);
    t178 = (t176 | t177);
    *((unsigned int *)t175) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 != 0);
    if (t180 == 1)
        goto LAB63;

LAB64:
LAB65:    memset(t183, 0, 8);
    t184 = (t13 + 4);
    t185 = (t169 + 4);
    t186 = *((unsigned int *)t13);
    t187 = *((unsigned int *)t169);
    t188 = (t186 ^ t187);
    t189 = *((unsigned int *)t184);
    t190 = *((unsigned int *)t185);
    t191 = (t189 ^ t190);
    t192 = (t188 | t191);
    t193 = *((unsigned int *)t184);
    t194 = *((unsigned int *)t185);
    t195 = (t193 | t194);
    t196 = (~(t195));
    t197 = (t192 & t196);
    if (t197 != 0)
        goto LAB69;

LAB66:    if (t195 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t183) = 1;

LAB69:    t199 = (t183 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t183);
    t203 = (t202 & t201);
    t204 = (t203 != 0);
    if (t204 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB46;

LAB48:    t46 = *((unsigned int *)t68);
    t47 = *((unsigned int *)t55);
    *((unsigned int *)t68) = (t46 | t47);
    goto LAB50;

LAB51:    t77 = *((unsigned int *)t70);
    t78 = *((unsigned int *)t73);
    *((unsigned int *)t70) = (t77 | t78);
    goto LAB53;

LAB54:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    goto LAB56;

LAB57:    t129 = *((unsigned int *)t117);
    t130 = *((unsigned int *)t123);
    *((unsigned int *)t117) = (t129 | t130);
    goto LAB59;

LAB60:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    goto LAB62;

LAB63:    t181 = *((unsigned int *)t169);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t169) = (t181 | t182);
    goto LAB65;

LAB68:    t198 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t198) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(50, ng0);

LAB73:    xsi_set_current_line(51, ng0);
    t205 = ((char*)((ng2)));
    t206 = (t0 + 1928);
    xsi_vlogvar_assign_value(t206, t205, 0, 0, 1);
    goto LAB72;

LAB74:    *((unsigned int *)t13) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t32) = 1;
    goto LAB81;

LAB80:    t11 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB81;

LAB82:    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t65, 0, 8);
    t29 = (t28 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t28);
    t27 = (t26 & t25);
    t34 = (t27 & 3U);
    if (t34 != 0)
        goto LAB88;

LAB86:    if (*((unsigned int *)t29) == 0)
        goto LAB85;

LAB87:    t30 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t30) = 1;

LAB88:    memset(t68, 0, 8);
    t31 = (t65 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t65);
    t38 = (t37 & t36);
    t42 = (t38 & 1U);
    if (t42 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t31) != 0)
        goto LAB91;

LAB92:    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t68);
    t45 = (t43 & t44);
    *((unsigned int *)t69) = t45;
    t39 = (t32 + 4);
    t40 = (t68 + 4);
    t41 = (t69 + 4);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t41);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB85:    *((unsigned int *)t65) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t68) = 1;
    goto LAB92;

LAB91:    t33 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB92;

LAB93:    t51 = *((unsigned int *)t69);
    t52 = *((unsigned int *)t41);
    *((unsigned int *)t69) = (t51 | t52);
    t54 = (t32 + 4);
    t55 = (t68 + 4);
    t53 = *((unsigned int *)t32);
    t56 = (~(t53));
    t57 = *((unsigned int *)t54);
    t58 = (~(t57));
    t59 = *((unsigned int *)t68);
    t60 = (~(t59));
    t74 = *((unsigned int *)t55);
    t75 = (~(t74));
    t67 = (t56 & t58);
    t207 = (t60 & t75);
    t76 = (~(t67));
    t77 = (~(t207));
    t78 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t78 & t76);
    t85 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t85 & t77);
    t86 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t86 & t76);
    t87 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t87 & t77);
    goto LAB95;

LAB96:    xsi_set_current_line(57, ng0);

LAB99:    xsi_set_current_line(58, ng0);
    t62 = (t0 + 2088);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t66 = ((char*)((ng1)));
    memset(t70, 0, 8);
    t71 = (t64 + 4);
    t72 = (t66 + 4);
    t94 = *((unsigned int *)t64);
    t98 = *((unsigned int *)t66);
    t99 = (t94 ^ t98);
    t100 = *((unsigned int *)t71);
    t101 = *((unsigned int *)t72);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t71);
    t111 = *((unsigned int *)t72);
    t112 = (t104 | t111);
    t113 = (~(t112));
    t114 = (t103 & t113);
    if (t114 != 0)
        goto LAB103;

LAB100:    if (t112 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t70) = 1;

LAB103:    t79 = (t70 + 4);
    t115 = *((unsigned int *)t79);
    t116 = (~(t115));
    t118 = *((unsigned int *)t70);
    t119 = (t118 & t116);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB104;

LAB105:
LAB106:    goto LAB98;

LAB102:    t73 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(58, ng0);

LAB107:    xsi_set_current_line(59, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 2248);
    xsi_vlogvar_assign_value(t81, t80, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB106;

}


extern void work_m_00000000001109660283_0934858945_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_28_1};
	xsi_register_didat("work_m_00000000001109660283_0934858945", "isim/test_isim_beh.exe.sim/work/m_00000000001109660283_0934858945.didat");
	xsi_register_executes(pe);
}
