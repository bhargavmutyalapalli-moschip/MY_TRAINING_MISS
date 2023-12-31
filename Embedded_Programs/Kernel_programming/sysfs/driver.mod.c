#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xaee657ee, "__class_create" },
	{ 0x3818fa5c, "device_create" },
	{ 0xc05c1b64, "kobject_create_and_add" },
	{ 0x5e68e530, "sysfs_create_file_ns" },
	{ 0xeabef977, "device_destroy" },
	{ 0x645620c0, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5de78793, "kobject_put" },
	{ 0x590d8343, "sysfs_remove_file_ns" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "13E09EAD3BC32097B6C0DE5");
