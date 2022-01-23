# Special target to create an AmigaOS snapshot installation
amigaos3: $(EXECUTABLE)
	mkdir -p $(AMIGAOS3PATH)
	$(STRIP) $(EXECUTABLE) -g --strip-unneeded -o $(AMIGAOS3PATH)/$(EXECUTABLE)
