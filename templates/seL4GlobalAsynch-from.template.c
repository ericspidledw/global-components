/*#
 *#Copyright 2017, Data61
 *#Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 *#ABN 41 687 119 230.
 *#
 *#This software may be distributed and modified according to the terms of
 *#the BSD 2-Clause license. Note that NO WARRANTY is provided.
 *#See "LICENSE_BSD2.txt" for details.
 *#
 *#@TAG(DATA61_BSD)
  #*/
#include <sel4/sel4.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*- set is_reader = False -*/
/*- set instance = me.instance.name -*/
/*- set interface = me.interface.name -*/
/*- include 'global-endpoint.template.c' -*/

/*- set notification = pop('notification') -*/

void /*? me.interface.name ?*/_emit_underlying(void) {
    seL4_Signal(/*? notification ?*/);
}
