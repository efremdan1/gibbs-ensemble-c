CCOMPFLAGS    =	-Wall -g

CFLAGS        = $(CCOMPFLAGS)
LIBS          = -lm

LD            =	gcc
CC            =	gcc

MAKEFILE      =	Makefile
PROGRAM       =	Gibbs

INCS	      =	chem.h        \
		conf.h        \
		parameter.h   \
		potential.h   \
		system.h system_2.h 

OBJS	      =	adjust.o      \
		ener.o        \
		eneri.o       \
		gibbs.o       \
		init_chem.o   \
		lattice.o     \
		mcmove.o      \
		mcswap.o      \
		mcvol.o       \
		mcvolmod.o    \
		ran_uniform.o \
		readdat.o     \
		sample.o      \
		store.o       \
		tailc.o       \
		toterg.o      \
		writepdb.o

all:		$(PROGRAM)

$(PROGRAM)::	$(INCS)
		@/bin/rm -f $(OBJS) core

$(PROGRAM)::	$(OBJS) $(MAKEFILE)
		@$(LD) $(CFLAGS) $(OBJS) -o $(PROGRAM) $(LIBS)

clean:;		@rm -f $(OBJS) $(PROGRAM) core
