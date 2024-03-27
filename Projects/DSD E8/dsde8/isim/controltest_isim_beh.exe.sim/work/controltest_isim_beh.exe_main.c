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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001961734753_1774216237_init();
    work_m_00000000002298743628_0597467428_init();
    work_m_00000000001813824339_2318697404_init();
    work_m_00000000000943509024_2725559894_init();
    work_m_00000000003628010853_3037777339_init();
    work_m_00000000001437398395_1374464525_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001437398395_1374464525");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
