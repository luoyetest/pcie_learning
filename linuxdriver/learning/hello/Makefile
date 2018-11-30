# 2018.11.30
# luoye

ifneq ($(KERNELRELEASE),)
	obj-m		:= hello.o
else
	KERNELDIR	?= /lib/modules/$(shell uname -r)/build
	PWD			:= $(shell pwd)
	
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
	
clean:
	rm -f *.ko *.o *.mod.o *.mod.c *.symvers *.order
	
endif
