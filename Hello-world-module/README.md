Install linux kernel module build tools : 
 - sudo apt install build-essential linux-headers-$(uname -r)

Build the module using the "make" command

Load the module into the kernel :
 - sudo insmod hello.ko

To view kernel logs : 
 - dmesg | tail


To remove the module : 
 - sudo rmmod hello



