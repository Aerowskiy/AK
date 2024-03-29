// SPDX-License-Identifier: GPL-2-Clause
#include <hello1.h>

MODULE_AUTHOR("Dmytro Lelux IO-12");
MODULE_DESCRIPTION("Lab 4");
MODULE_LICENSE("GPL");

static uint count = 1; 

module_param(count, uint, 0); 
MODULE_PARM_DESC(count, "Execution count for lab work 4\n"); 

static int __init initialize_hello_module(void) 
{
    pr_info("hello2 module initializing\n"); 
    print_hello(count); 
    return 0;
}

static void __exit finalize_hello_module(void) 
{
    pr_info("hello2 module finalizing\n");
}

module_init(initialize_hello_module);
module_exit(finalize_hello_module);

