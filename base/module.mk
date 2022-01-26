MODULE := base

MODULE_OBJS := \
	test_new_standards.o \
	commandLine.o \
	plugins.o \
	version.o

ifdef USE_MAIN
MODULE_OBJS += main.o
endif

# Include common rules
include $(srcdir)/rules.mk
