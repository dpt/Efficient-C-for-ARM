# GNU makefile for Efficient C for ARM examples

# Tools

# set $(prefix) to point to cross-compiling gcc etc

cc_		?= $(prefix)clang
ar_		?= $(prefix)ar
link_		?= $(prefix)clang

# Tool flags

ccflags		= -c -std=c99 $(cpu) $(warnings) $(includes) -MMD
arflags		= rc
linkflags	=

# Compiler options

cpu		=
warnings        = -Wall -Wundef -Wpointer-arith -Wuninitialized \
		  -Wcast-align -Wwrite-strings -Wstrict-prototypes -Wunused \
		  -Wmissing-prototypes -Wmissing-declarations \
		  -Wnested-externs -Winline -Wno-unused -Wno-long-long -W \
		  -Wshadow
# -Wcast-qual disabled due to the amount of spam
includes	= -Iinclude

# Combined tool and flags

cc		= $(cc_) $(ccflags)
ar		= $(ar_) $(arflags)
link		= $(link_) $(linkflags)

# Rule patterns

.SUFFIXES:	.o

.c.o:;		$(cc) -Os -DNDEBUG $< -o $@

# Names

lib		= libarm.a

# Objects

src		= $(shell find . -name "*.c")
objs		= $(src:.c=.o)
deps		= $(src:.c=.d)

# Targets

.PHONY:	release all clean 

$(lib):		$(objs)
		$(ar) $@ $(objs)

release:	$(lib)
		@echo 'release' built

all:		release apps
		@echo 'all' built

clean:
		-rm -f $(objs) $(deps)
		@echo Cleaned

# Dependencies

-include	$(deps)

