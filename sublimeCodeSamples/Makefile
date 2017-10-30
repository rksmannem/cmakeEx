# -----------------------------------------------------------------------------
#                 CMake project wrapper Makefile 
# -----------------------------------------------------------------------------

SHELL := /bin/bash
RM    := rm -rf
MKDIR := mkdir -p
INSTALL_PATH := "-DCMAKE_INSTALL_PREFIX=/home/MAGICLEAP/rmannem/mydev/gitRepos/cmakeEx/sublimeCodeSamples/"
APP_BIN_PATH := "/home/MAGICLEAP/rmannem/mydev/gitRepos/cmakeEx/sublimeCodeSamples/bin"

all: ./build/Makefile
	@ $(MAKE) install -C build

./build/Makefile:
	@  ($(MKDIR) build > /dev/null)
	@  (cd build > /dev/null 2>&1 && cmake $(INSTALL_PATH) ..)

.PHONY: distclean clean

distclean:	
	@- ($(MKDIR) build > /dev/null)
	@- (cd build > /dev/null 2>&1 && cmake .. > /dev/null 2>&1)
	@- $(RM) ./build/Makefile
	@- $(RM) ./build/src
	@- $(RM) ./build/test
	@- $(RM) ./build/CMake*
	@- $(RM) ./build/cmake.*
	@- $(RM) ./build/*.cmake
	@- $(RM) ./build/*.txt
	@- $(RM) ./build
	@- $(RM) $(APP_BIN_PATH)

ifeq ($(findstring distclean,$(MAKECMDGOALS)),)
	$(MAKECMDGOALS): ./build/Makefile
	@ $(MAKE) -C build $(MAKECMDGOALS)
endif

