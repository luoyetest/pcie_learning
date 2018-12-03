#ifndef __MEM_H
#define __MEM_H

#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs/h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/uaccess.h>

#define MEM_SIZE	0x1000
#define MEM_CLERA	0x1
#define MEM_MAJOR	230

struct mem_dev {
	struct cdec cdev;
	unsigned char mem[MEM_SIZE];
};

#endif