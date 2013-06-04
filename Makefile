#
#define target, object, libraries
#
TARGET := ffmpeg-wrapper.so
OBJECTS := ffmpeg-wrapper.o   

CC := gcc

LIBS := libavdevice libavformat libavfilter libavcodec libswresample libswscale libavutil 

LDLIBS := $(shell pkg-config --libs $(LIBS)) $(LDLIBS)

CPPFLAGS := $(shell pkg-config --cflags $(LIBS)) 

INC := ffmpeg-wrapper.h

#
# Link commands
#
$(TARGET) : $(OBJECTS) 
	$(CC) -shared -pthread $(OBJECTS) $(LDLIBS) -o $(TARGET)

#
# Compile commands
#
ffmpeg-helper.o : ffmpeg-wrapper.c ffmpeg-wrapper.h $(INC)
	$(CC) -Wall -fPIC $(CPPFLAGS) -c -o ffmpeg-wrapper.o $(FLAGS_MYSQL) ffmpeg-wrapper.c

install: $(TARGET)
	cp -vp ffmpeg-wrapper.so /usr/local/lib

clean: 
	rm -rf $(TARGET) $(OBJECTS) 
