datadir = @datadir@
localedir = $(datadir)/locale

bin_PROGRAMS = epanet2
epanet2_SOURCES = epanet.c hash.c hydraul.c inpfile.c input1.c input2.c input3.c \
	mempool.c output.c quality.c report.c rules.c smatrix.c enumstxt.h \
	epanet2.h funcs.h hash.h mempool.h text.h toolkit.h types.h vars.h 
epanet2_CFLAGS = $(AM_CFLAGS) -DCLE=1 -DLOCALEDIR=\"$(localedir)\"

# the library search path.
epanet2_LDFLAGS = $(all_libraries) 

lib_LTLIBRARIES = libepanet2.la
libepanet2_la_SOURCES = epanet.c hash.c hydraul.c inpfile.c input1.c input2.c input3.c \
	mempool.c output.c quality.c report.c rules.c smatrix.c enumstxt.h \
	epanet2.h funcs.h hash.h mempool.h text.h types.h vars.h 
include_HEADERS = toolkit.h
libepanet2_la_DEFS = -DSOL -DLOCALEDIR=\"$(localedir)\" @DEFS@

EXTRA_DIST = epanet2.dev epanet2exe.dev Makefile.in
noinst_HEADERS = i18n.h
