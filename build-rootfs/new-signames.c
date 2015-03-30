/**
 * Signal table for DASH.
 * This table only lists signal values for x86 architecture.
 *
 * ------------------------------------------------------------------- *
 *
 * Adapted from "SIGNAL(7) in Linux Programmer's Manual":
 *   http://man7.org/linux/man-pages/man7/signal.7.html


Copyright for signal.7:

Copyright (c) 1993 by Thomas Koenig (ig25@rz.uni-karlsruhe.de)
and Copyright (c) 2002, 2006 by Michael Kerrisk <mtk.manpages@gmail.com>
and Copyright (c) 2008 Linux Foundation, written by Michael Kerrisk
    <mtk.manpages@gmail.com>


License for signal.7:

Permission is granted to make and distribute verbatim copies of this
manual provided the copyright notice and this permission notice are
preserved on all copies.

Permission is granted to copy and distribute modified versions of this
manual under the conditions for verbatim copying, provided that the
entire resulting derived work is distributed under the terms of a
permission notice identical to this one.

Since the Linux kernel and libraries are constantly changing, this
manual page may be incorrect or out-of-date.  The author(s) assume no
responsibility for errors or omissions, or for damages resulting from
the use of the information contained herein.  The author(s) may not
have taken the same level of care in the production of this manual,
which is licensed free of charge, as they might when working
professionally.

Formatted or processed versions of this manual, if unaccompanied by
the source, must acknowledge the copyright and authors of this work.

 * ------------------------------------------------------------------- *
 *
 */


#include <signal.h>

const char* const signal_names[NSIG + 1] = {
    "DUMMY"  ,  //  0 - place holder for this array

    "HUP"    ,  //  1: Term - Hangup detected on controlling terminal or death of controlling process
    "INT"    ,  //  2: Term - Interrupt from keyboard
    "QUIT"   ,  //  3: Core - Quit from keyboard
    "ILL"    ,  //  4: Core - Illegal Instruction
    "TRAP"   ,  //  5: Core - Trace/breakpoint trap
    "ABRT"   ,  //  6: Core - Abort signal from abort(3)
    "BUS"    ,  //  7: Core - Bus error (bad memory access)
    "FPE"    ,  //  8: Core - Floating point exception
    "KILL"   ,  //  9: Term - Kill signal
    "USR1"   ,  // 10: Term - User-defined signal 1
    "SEGV"   ,  // 11: Core - Invalid memory reference
    "USR2"   ,  // 12: Term - User-defined signal 2
    "PIPE"   ,  // 13: Term - Broken pipe: write to pipe with no readers
    "ALRM"   ,  // 14: Term - Timer signal from alarm(2)
    "TERM"   ,  // 15: Term - Termination signal
    "STKFLT" ,  // 16: Term - Stack fault on coprocessor (unused)
    "CHLD"   ,  // 17: Ign  - Child stopped or terminated
    "CONT"   ,  // 18: Cont - Continue if stopped
    "STOP"   ,  // 19: Stop - Stop process
    "TSTP"   ,  // 20: Stop - Stop typed at terminal
    "TTIN"   ,  // 21: Stop - Terminal input for background process
    "TTOU"   ,  // 22: Stop - Terminal output for background process
    "URG"    ,  // 23: Ign  - Urgent condition on socket (4.2BSD)
    "XCPU"   ,  // 24: Core - CPU time limit exceeded (4.2BSD)
    "XFSZ"   ,  // 25: Core - File size limit exceeded (4.2BSD)
    "VTALRM" ,  // 26: Term - Virtual alarm clock (4.2BSD)
    "PROF"   ,  // 27: Term - Profiling timer expired
    "WINCH"  ,  // 28: Ign  - Window resize signal (4.3BSD, Sun)
    "IO"     ,  // 29: Term - I/O now possible (4.2BSD)
    "PWR"    ,  // 30: Term - Power failure (System V)
    "SYS"    ,  // 31: Core - Bad argument to routine (SVr4)
    0
};
