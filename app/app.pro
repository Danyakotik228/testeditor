TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    editor.c \
	load.c \
	mwcrsr.c \
        mle.c \
        r1ne.c \
	show.c \
        showupfirst.c \
	text/append_line.c \
	text/delete_line.c \
	text/change_cursor_position.c \
	text/process_forward.c \
	text/create_text.c \
	text/remove_all.c

HEADERS += text/_text.h \
    data.h \
	common.h

QMAKE_CFLAGS += -Wall -Wextra

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
