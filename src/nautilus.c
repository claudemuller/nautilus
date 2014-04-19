#include <cga.h>
#include <printk.h>
#include <types.h>
#include <paging.h>


void 
main (unsigned long mbd, unsigned long magic)
{
    term_init();

    printk("Welcome to the Nautilus Kernel\n\n");

    init_page_frame_alloc(mbd);

}
