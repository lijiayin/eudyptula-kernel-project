/*  hello-2.c - Demonstrating the module_init() and module_exit() macros.  This is the 
 *     preferred over using init_module() and cleanup_module().
 *
 *  Copyright (C) 2001 by Peter Jay Salzman
 *
 *  08/02/2006 - Updated by Rodrigo Rubira Branco <rodrigo@kernelhacking.com>
 */

/* Kernel Programming */
#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>   // Needed by all modules
#include <linux/kernel.h>   // Needed for KERN_ALERT
#include <linux/init.h>     // Needed for the macros


static int hello_2_init(void)
{
	   printk(KERN_ALERT "Hello, world 2\n");
	      return 0;
}


static void hello_2_exit(void)
{
	   printk(KERN_ALERT "Goodbye, world 2\n");
}


module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");

