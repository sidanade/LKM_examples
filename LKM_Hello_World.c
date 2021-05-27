#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("sidanade");
MODULE_DESCRIPTION("kernel module hello world.");
MODULE_VERSION("0.01");

/*

	******Simple kernel program******

run the make file    -> $ make
to insert the module -> $ sudo insmod LKM_Hello_Word.ko
to see the message   -> $ dmesg | tail -5
to remove the module -> $ sudo rmmod LKM_Hello_Word


*/




static int __init lkm_example_init(void)
{
 
	printk(KERN_INFO "Hello from kernel\n"); // this message is logged when this module is loaded
	return 0;

}

static void __exit lkm_example_exit(void)
{
  
	printk(KERN_INFO "Bye from kernel\n"); // kernel module unload message
	
  
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);


