MODULE := backends/platform/amigaos3

MODULE_OBJS := \
	start.o\
	system.o\
	events.o\
	aga.o\
	rtg.o\
	gui.o\
	timer.o

ifndef USE_MAIN
	MODULE_OBJS += main.o
endif

# We don't use rules.mk but rather manually update OBJS and MODULE_DIRS.
MODULE_OBJS := $(addprefix $(MODULE)/, $(MODULE_OBJS))
OBJS := $(MODULE_OBJS) $(OBJS)
MODULE_DIRS += $(sort $(dir $(MODULE_OBJS)))
