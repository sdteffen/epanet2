epanet2
=======

EPANET, adjusted to build with autotools.

You can use OBS to build EPANET for various Linux distributions:

https://build.opensuse.org/package/show/home:sdteffen_de:epanet2/epanet2

To cross-compile from Ubuntu for 64bit Windows:

sudo apt-get install mingw-w64
./configure --host=x86_64-w64-mingw32
make
make install-strip

Please also have a look at epanetl, a localized version of EPANET:

http://epanet.de/epanetl
