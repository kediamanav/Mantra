INCLUDE_PATH =  -I"C:\Python27\eve\unstable\library\network\socket\netssl\spec\include" -D_WINSOCKAPI_
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Python27\Eiffel_14.05_95158\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DWORKBENCH -I"C:\Python27\Eiffel_14.05_95158\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Python27\Eiffel_14.05_95158\studio\spec\win64\lib\msc\mtwkbench.lib"
EIFTEMPLATES = C:\Python27\Eiffel_14.05_95158\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Python27\Eiffel_14.05_95158\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = echo_websocket_server.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C19_c.obj 

OLDOBJECTS =  sp604.obj sp604d.obj ar609.obj ar609d.obj ty596.obj ty596d.obj ty597.obj ty597d.obj \
	ty598.obj ty598d.obj ty601.obj ty601d.obj ty602.obj ty602d.obj re605.obj re605d.obj \
	ar624.obj ar624d.obj li611.obj li611d.obj re620.obj re620d.obj in610.obj in610d.obj \
	to619.obj to619d.obj it608.obj it608d.obj it607.obj it607d.obj in606.obj in606d.obj \
	se626.obj se626d.obj dy625.obj dy625d.obj cu612.obj cu612d.obj tr617.obj tr617d.obj \
	bo621.obj bo621d.obj ta618.obj ta618d.obj co616.obj co616d.obj ac614.obj ac614d.obj \
	fi622.obj fi622d.obj co613.obj co613d.obj ba615.obj ba615d.obj rt595.obj rt595d.obj \
	rt599.obj rt599d.obj rt594.obj rt594d.obj rt600.obj rt600d.obj rt603.obj rt603d.obj \
	bo623.obj bo623d.obj 

all::  Cobj19.lib

Cobj19.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

