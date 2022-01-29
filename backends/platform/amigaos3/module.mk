MODULE := backends/platform/amigaos3

MODULE_OBJS := \
	start.o\
	system/system.o\
	system/events.o\
	system/mutex.o\
	system/timing.o\
	system/graphics/native.o\
	system/graphics/rtg.o\

ifndef USE_MAIN
	MODULE_OBJS += main.o
endif

# We don't use rules.mk but rather manually update OBJS and MODULE_DIRS.
MODULE_OBJS := $(addprefix $(MODULE)/, $(MODULE_OBJS))
OBJS := $(MODULE_OBJS) $(OBJS)
MODULE_DIRS += $(sort $(dir $(MODULE_OBJS)))
