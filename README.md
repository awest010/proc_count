# A Kernel Seedling

A kernel module that returns the number of processes in using /proc/count. <br/>
Developed for CS 111, Operating System Principles with Paul Eggert.

## Building

In the lab0 directory, type ```make```. <br/>
The resulting proc_count.ko file is the kernel module.

## Running

To run the module, type ```sudo insmod proc_count.ko```. <br/>
Now, if we run ```lsmod | grep proc_count``` we can see the module is running. <br/>
To list the number of processes, type ```cat /proc/count```. This should write an integer of how many processes there are followed by a newline.

## Cleaning Up

To remove the module, type ```sudo rmmod proc_count```.

## Testing

Tested on kernel verison 5.14.8

Testing scripts: the included test_lab0.py script was used to ensure the module could correctly build and to ensure it exhibited the correct behavior. In addition, the number of active proccesses were counted and compared to the returned integer. The number of active programs were close enough to be accurate.e
