#############################################################################
# Makefile for building filebrowser
# Generated by tmake at 15:41, 2012/09/29
#     Project: filebrowser
#    Template: app
#############################################################################

####### Compiler, tools and options

CC	=	$(TARGET_CROSS)gcc
CXX	=	$(TARGET_CROSS)g++
CFLAGS	=	-pipe $(TARGET_CFLAGS) -Wall -W -O2 -DNO_DEBUG
CXXFLAGS=	-pipe $(TARGET_CFLAGS) -DQWS -fno-exceptions -fno-rtti -Wall -W -O2 -DNO_DEBUG
INCPATH	=	-I$(QTDIR)/include -I$(QPEDIR)/include
LINK	=	$(TARGET_CROSS)g++
LFLAGS	=	$(TARGET_LDFLAGS)
LIBS	=	$(SUBLIBS) -L$(QPEDIR)/lib -L$(QTDIR)/lib -lm $(TARGET_LIBS) -lqpe -lqte
MOC	=	$(QTDIR)/bin/moc
UIC	=	$(QTDIR)/bin/uic

TAR	=	tar -cf
GZIP	=	gzip -9f

####### Files

HEADERS =	inlineedit.h \
		services.h \
		filebrowser.h
SOURCES =	filebrowser.cpp \
		services.cpp \
		inlineedit.cpp \
		main.cpp
OBJECTS =	filebrowser.o \
		services.o \
		inlineedit.o \
		main.o
INTERFACES =	
UICDECLS =	
UICIMPLS =	
SRCMOC	=	moc_inlineedit.cpp \
		moc_filebrowser.cpp
OBJMOC	=	moc_inlineedit.o \
		moc_filebrowser.o
DIST	=	
TARGET	=	filebrowser
INTERFACE_DECL_PATH = .

####### Implicit rules

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules


all: $(TARGET)

$(TARGET): $(UICDECLS) $(OBJECTS) $(OBJMOC) 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS)

moc: $(SRCMOC)

tmake: Makefile

Makefile: filebrowser.pro
	tmake filebrowser.pro -o Makefile

dist:
	$(TAR) filebrowser.tar filebrowser.pro $(SOURCES) $(HEADERS) $(INTERFACES) $(DIST)
	$(GZIP) filebrowser.tar

clean:
	-rm -f $(OBJECTS) $(OBJMOC) $(SRCMOC) $(UICIMPLS) $(UICDECLS) $(TARGET)
	-rm -f *~ core

####### Sub-libraries


###### Combined headers


####### Compile

filebrowser.o: filebrowser.cpp \
		inlineedit.h \
		filebrowser.h \
		services.h

services.o: services.cpp \
		services.h

inlineedit.o: inlineedit.cpp \
		inlineedit.h

main.o: main.cpp \
		filebrowser.h

moc_inlineedit.o: moc_inlineedit.cpp \
		inlineedit.h

moc_filebrowser.o: moc_filebrowser.cpp \
		filebrowser.h

moc_inlineedit.cpp: inlineedit.h
	$(MOC) inlineedit.h -o moc_inlineedit.cpp

moc_filebrowser.cpp: filebrowser.h
	$(MOC) filebrowser.h -o moc_filebrowser.cpp

