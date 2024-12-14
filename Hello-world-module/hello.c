#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("YourName");
MODULE_DESCRIPTION("A simple Hello World kernel module");
MODULE_VERSION("1.0");

// Function executed when the module is loaded
static int __init hello_init(void)
{
    printk(KERN_INFO "Hello, World! Kernel Module Loaded.\n");
    return 0; // 0 means successful loading
}

// Function executed when the module is removed
static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, World! Kernel Module Removed.\n");
}

// Register module entry and exit points
module_init(hello_init);
module_exit(hello_exit);
