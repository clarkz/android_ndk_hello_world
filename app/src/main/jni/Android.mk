LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# Tegra optimized OpenCV.mk

# Linker
LOCAL_LDLIBS += -llog

# Our module sources
LOCAL_MODULE    := HelloWorld
LOCAL_SRC_FILES := helloWorld.cpp

include $(BUILD_SHARED_LIBRARY)
