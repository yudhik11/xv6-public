SCHEDULER - Priority Based

Implemented the priority based scheduler in xv6. The scheduler schedules the process with higher priority and in case there are two processes with current highest priority, round-robin is applied.

The scheduler always starts at the current process and searches the proctable for next process with highest priority starting from the current process thus ensuring that RR policy is followed for equal priority cases. The scheduler checks NPROC [number of processes] starting from the current process to determine the next process with the highest priority.

The set_priority system call finds the process with the given process id in the proctable and changes its priority. It uses the concept of yield syscall to reschedule if a process's priority is altered.
