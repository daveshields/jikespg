# Makefile for aix for Jikes Parser Generator
CC = gcc $(CPPFLAGS) $(CFLAGS)

all: jikespg

jikespg: ctabs.o globals.o lpgparse.o lpgutil.o main.o \
     mkfirst.o mkred.o mkstates.o partset.o prntstat.o produce.o \
     ptables.o remsp.o resolve.o spacetab.o tabutil.o timetab.o
	$(CC) $(LDFLAGS) -o jikespg ctabs.o globals.o lpgparse.o lpgutil.o main.o \
	    mkfirst.o mkred.o mkstates.o partset.o prntstat.o produce.o \
	    ptables.o remsp.o resolve.o spacetab.o tabutil.o timetab.o

lpgact.i: jikespg.g
	  jikespg jikespg
	  rm jikespg.l
	  make
	  rm CRASH_THE_INITIAL_MAKE_COMMAND_TO_BREAK_OUT

main.o:	main.c common.h
	$(CC) -c main.c

globals.o: globals.c common.h
	$(CC) -c globals.c

lpgparse.o: lpgprs.h lpgdcl.h lpgdef.h lpgact.h lpgact.i lpgsym.h \
	    common.h lpgparse.h	lpgparse.c
	$(CC) -c lpgparse.c

lpgutil.o: lpgutil.c common.h
	$(CC) -c lpgutil.c

mkfirst.o: mkfirst.c common.h
	$(CC) -c mkfirst.c

mkstates.o: mkstates.c common.h
	$(CC) -c mkstates.c

prntstat.o: prntstat.c common.h
	$(CC) -c prntstat.c

mkred.o: mkred.c common.h reduce.h
	$(CC) -c mkred.c

remsp.o: remsp.c common.h reduce.h
	$(CC) -c remsp.c

resolve.o: resolve.c common.h reduce.h
	$(CC) -c resolve.c

ptables.o: ptables.c common.h
	$(CC) -c ptables.c

spacetab.o: spacetab.c common.h space.h
	$(CC) -c spacetab.c

timetab.o: timetab.c common.h
	$(CC) -c timetab.c

tabutil.o: tabutil.c common.h
	$(CC) -c tabutil.c

produce.o: produce.c common.h
	$(CC) -c produce.c

partset.o: partset.c common.h
	$(CC) -c partset.c

ctabs.o: ctabs.c common.h space.h
	$(CC) -c ctabs.c

clean:
	rm -f jikespg
	rm -f ctabs.o 
	rm -f globals.o
	rm -f lpgparse.o 
	rm -f lpgutil.o 
	rm -f main.o 
	rm -f mkfirst.o 
	rm -f mkred.o
	rm -f mkstates.o 
	rm -f partset.o 
	rm -f prntstat.o 
	rm -f produce.o 
	rm -f ptables.o 
	rm -f remsp.o
	rm -f resolve.o
	rm -f spacetab.o 
	rm -f tabutil.o
	rm -f timetab.o
