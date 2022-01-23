# Special target to create an AmigaOS snapshot installation
amigaos3: $(EXECUTABLE)
	mkdir -p $(AMIGAOS3PATH)
	$(CP) $(EXECUTABLE) $(AMIGAOS3PATH)/$(EXECUTABLE).original
	$(STRIP) $(EXECUTABLE) -g --strip-unneeded -o $(AMIGAOS3PATH)/$(EXECUTABLE).unneeded
	$(STRIP) $(EXECUTABLE) -g --strip-all -o $(AMIGAOS3PATH)/$(EXECUTABLE).all
