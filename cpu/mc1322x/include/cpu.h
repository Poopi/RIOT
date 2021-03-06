/*
 * cpu.h - mc1322x specific definitions
 * Copyright (C) 2013 Oliver Hahm <oliver.hahm@inria.fr>
 *
 * This source code is licensed under the GNU Lesser General Public License,
 * Version 2.  See the file LICENSE for more details.
 */

#ifndef CPU_H
#define CPU_H 

#include <stdint.h>
#include "arm_cpu.h"
#include "mc1322x.h"

extern uintptr_t __stack_start;		///< end of user stack memory space

#endif /* CPU_H */
