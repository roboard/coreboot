ramstage-y += socket_mPGA604.c
subdirs-y += ../model_f2x
subdirs-y += ../model_f3x
subdirs-y += ../model_f4x
subdirs-y += ../../x86/tsc
subdirs-y += ../../x86/mtrr
subdirs-y += ../../x86/lapic
subdirs-y += ../../x86/cache
subdirs-y += ../../x86/smm
subdirs-y += ../microcode
subdirs-y += ../hyperthreading

cpu_incs-$(CONFIG_CACHE_AS_RAM) += $(src)/cpu/intel/car/cache_as_ram_ht.inc

