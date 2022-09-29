#include <linux/module.h>
#include <linux/printk.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/sched.h>

static int proc_count_show(struct seq_file *s, void *v);

static int __init proc_count_init(void)
{
	pr_info("proc_count: init\n");
	proc_create_single("proc_count", 0, NULL, &proc_count_show);
	return 0;
}

static int proc_count_show(struct seq_file *s, void *v)
{
	seq_printf(s, "Hello");
    return 0;
}

static void __exit proc_count_exit(void)
{
	pr_info("proc_count: exit\n");
}

module_init(proc_count_init);
module_exit(proc_count_exit);

MODULE_AUTHOR("Alex West");
MODULE_DESCRIPTION("Lists the number of processes");
MODULE_LICENSE("GPL");
