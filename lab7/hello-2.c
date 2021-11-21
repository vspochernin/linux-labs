/*
* hello-2.c - Демонстрация использования макроопределений module_init() и
module_exit().
*/
#include <linux/module.h> /* Необходим для любого модуля ядра */
#include <linux/kernel.h> /* Здесь находится определение KERN_ALERT */
#include <linux/init.h> /* Здесь находятся определения макросов */
MODULE_LICENSE("GPL");

static int __init hello_2_init(void)
{
	printk(KERN_ALERT "Hello, world 2\n");
	return 0;
}

static void __exit hello_2_exit(void)
{
	printk(KERN_ALERT "Goodbye, world 2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);
