#include <linux/module.h>    /* 引入与模块相关的宏 */  
#include <linux/init.h>        /* 引入module_init() module_exit()函数 */  
#include <linux/moduleparam.h>/* 引入module_param() */  
MODULE_AUTHOR("Yu Qiang");  
MODULE_LICENSE("GPL");   
static int nbr = 10;  
module_param(nbr, int, S_IRUGO);  
  
static int __init yuer_init(void)  
{  
    int i;  
    for(i=0; i<nbr; i++)  
    {  
        printk(KERN_ALERT "Hello, How are you. %d\n", i);  
    }  
    return 0;  
}  
  
static void __exit yuer_exit(void)  
{  
    printk(KERN_ALERT"I come from yuer's module, I have been unlad.\n");  
}  
module_init(yuer_init);  
module_exit(yuer_exit);  
