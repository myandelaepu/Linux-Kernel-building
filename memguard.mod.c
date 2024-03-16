#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xf62f3dfa, "sched_set_fifo" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x342f3716, "perf_event_create_kernel_counter" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe8d4d0c8, "single_open" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb9fde1a, "seq_printf" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x349cba85, "strchr" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1e25684, "__trace_bputs" },
	{ 0x7294ace5, "irq_work_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x94fc8d93, "smp_call_function_many" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0xa20d01ba, "__trace_bprintk" },
	{ 0xe2964344, "__wake_up" },
	{ 0xf07464e4, "hrtimer_forward" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf4b155b5, "kthread_bind" },
	{ 0xca3cee3e, "wake_up_process" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x34ba86f2, "kthread_create_on_node" },
	{ 0x6a6673be, "perf_event_enable" },
	{ 0x4baa14de, "debugfs_create_dir" },
	{ 0x1fe1d080, "debugfs_create_file" },
	{ 0xa339e6e5, "on_each_cpu_cond_mask" },
	{ 0x1f84b9b2, "kthread_stop" },
	{ 0x625546be, "perf_event_disable" },
	{ 0x510ae3de, "perf_event_release_kernel" },
	{ 0x7d45343e, "debugfs_remove" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8cc68fe1, "seq_lseek" },
	{ 0x6a8b0722, "seq_read" },
	{ 0x3434f437, "single_release" },
	{ 0xdf6d5f2a, "param_ops_int" },
	{ 0x19933d54, "param_ops_hexint" },
	{ 0xe3e4991, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3CD3299FB83841431A3BEC8");
