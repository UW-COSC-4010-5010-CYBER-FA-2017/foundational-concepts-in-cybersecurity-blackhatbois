In the bad example for DomainSepNonExample.cpp, there is an overarching "server" that holds the amount of people that have accounts for x company. Rather than splitting up the domain between two independent domains say location, or maybe position, which have no bearing over each other, there is only a single domain which can then change and alter all the information that should be independent.

In the good example, DomainSep.cpp, there is a separated domain in east and west domain, where only those in the east domain may be altered by east domain "servers" and only those in the west may be altered there. 


Makefile for the good example: ExampleMake.mk
bad example: NonExampleMake.mk