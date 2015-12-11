/* hello.c kernel module that prints hello world
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
    printk("<1>Hello world. \n");
    return 0;
}

void cleanup_module(void)
{
    printk(KEN_ALERT "Goodbye world. \n");
   
}

MODULE_LICENSE("GPL");
