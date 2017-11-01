In ProcessIsolationNonExample.cpp, both "processes" are trying to access the same allocated memory, so there can be many problems that occur because the user, and both processes has no idea what the value of the memory is
after it has been altered by the processes.
This is just to show that if the processes have different values in stacks and
say p1 swaps something in and out, then p2 tries to get the same memory location,
p2 will be expecting something completely different than what it received.

In ProcessIsolation.cpp each process has its own allocated memory, so when one of the processes alters it the other will have no problems.

makefile for good example: ProcIsoExMake.mk
bad example: ProcIsoNExMake.mk