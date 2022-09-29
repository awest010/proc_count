# A Kernel Seedling

A kernel module that returns the number of processes in using /proc/count.

## Building

In the lab0 directory, type ```make```.
The resulting proc_count.ko file is the kernel module.

## Running

To run the module, type ```sudo insmod proc_count.ko```. Now, if we run ```lsmod | grep proc_count``` we can see the module is running. To list the number of processes, type ```cat /proc/count```. This should write an integer of how many processes there are followed by a newline.

## Cleaning Up

To remove the module, type ```sudo rmmod proc_count```.

## Testing

Tested on kernel verison 5.14.8
