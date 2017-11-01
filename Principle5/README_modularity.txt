In ModularityNonExample.cpp a single method will execute the entire task. Given the failure of this task it will be extremely difficult to debug. 

In Modularity.cpp the big process is broken down into a few processes, which are then further broken down as needed. Given this were to fail, it would be simple to find which method had failed, because the scope of their task is very small.

makefile for good example: prin5ExMake.mk
for bad example: prin5NEMake.mk