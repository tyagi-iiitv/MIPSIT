
/*
**	saunder.h - header file for MIPS and IDT/c Compiler Compatibility
**
**	Copyright 1991 Integrated Device Technology, Inc.
**	All Rights Reserved
**
*/
#ifndef __SAUNDER_H__
#define __SAUNDER_H__

#ifdef XDS
#define initmem _initmem
#define _init_sbrk __init_sbrk
#define _init_file __init_file
#define init_exc_vecs _init_exc_vecs
#define main _main
#define flush_Dcache _flush_Dcache
#define flush_Icache _flush_Icache
#define flush_cache _flush_cache
#define etext _etext
#define _fdata __fdata
#define edata _edata
#define _fbss __fbss
#define end _end
#define _exit __exit
#define init_tlb _init_tlb
#define get_mem_conf _get_mem_conf
#define set_mem_conf _set_mem_conf
#define exc_utlb_code _exc_utlb_code
#define exc_norm_code _exc_norm_code
#define clear_Dcache _clear_Dcache
#define clear_Icache _clear_Icache
#define clear_cache _clear_cache
#define exception _exception
#define extern_int _extern_int
#define _size_cache __size_cache
#define config_Dcache _config_Dcache
#define config_Icache _config_Icache
#define config_memory _config_memory
#define config_cache _config_cache
#define printf _printf
#define open _open
#define close _close
#define read _read
#define write _write
#define wbflush _wbflush
#define get_except_ptr _get_except_ptr
#define mem_exc_hdlr _mem_exc_hdlr
#define sae_errmsg _sae_errmsg
#define sim_fpint _sim_fpint 
#define sim_unint _sim_unint

#endif

#endif /* __SAUNDER_H__ */
