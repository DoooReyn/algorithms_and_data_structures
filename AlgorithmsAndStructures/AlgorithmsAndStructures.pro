TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    Sort/BubbleSort.cpp \
    Sort/SelectionSort.cpp \
    Sort/InsertionSort.cpp \
    TestClass.cpp \
    Sort/MergeSort.cpp \
    Sort/QuickSort.cpp \
    Search/LinearSearch.cpp \
    Search/BinarySearch.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Sort/ISort.h \
    Sort/SelectionSort.h \
    Sort/InsertionSort.h \
    Sort/BubbleSort.h \
    TestClass.h \
    Sort/MergeSort.h \
    Sort/QuickSort.h \
    Search/ISearch.h \
    Search/LinearSearch.h \
    Search/BinarySearch.h

