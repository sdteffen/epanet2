#
# spec file for package mingw64-epanet
#
# Copyright (c) 2013 SUSE LINUX Products GmbH, Nuernberg, Germany.
# Copyright (c) 2013 Steffen Macke <sdteffen@gmail.com>
#
# All modifications and additions to the file contributed by third parties
# remain the property of their copyright owners, unless otherwise agreed
# upon. The license for this file, and modifications and additions to the
# file, is the same license as for the pristine package itself (unless the
# license for the pristine package is not an Open Source License, in which
# case the license is the MIT License). An "Open Source License" is a
# license that conforms to the Open Source Definition (Version 1.9)
# published by the Open Source Initiative.


%define __strip %{_mingw64_strip}
%define __objdump %{_mingw64_objdump}
%define _use_internal_dependency_generator 0
%define __find_requires %{_mingw64_findrequires}
%define __find_provides %{_mingw64_findprovides}
%define __os_install_post %{_mingw64_debug_install_post} \
                          %{_mingw64_install_post}

Name:           mingw64-epanet
Version:        2.0.12.2
Release:        0
Summary:        Model water distribution piping systems
License:        GPL
Group:          Productivity/Other

Url:            http://www.epanet.de/
Source:          epanet-%{version}.tar.xz

BuildRoot:      %{_tmppath}/%{name}-%{version}-build

BuildArch:      noarch
#!BuildIgnore: post-build-checks

BuildRequires:  autoconf
BuildRequires:  automake
BuildRequires:  libtool
BuildRequires:  mingw64-cross-binutils
BuildRequires:  mingw64-cross-gcc
BuildRequires:  mingw64-cross-pkg-config
BuildRequires:  mingw64-filesystem

%description
EPANET models water distribution piping systems (hydraulic analysis).
The popular EPANET hydraulic modelling package..

%{_mingw64_debug_package}

%prep
%setup -q

%build
%{_mingw64_env}
./configure --prefix=%{_mingw64_prefix}

%{_mingw64_make}

%install
%{_mingw64_make} install

# Remove static library.
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet.a
rm $RPM_BUILD_ROOT%{_mingw64_includedir}/toolkit.h
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet2.a
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet2.la
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet2.so
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet2.so.0
rm $RPM_BUILD_ROOT%{_mingw64_libdir}/libepanet2.so.0.0.0

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc AUTHORS COPYING ChangeLog NEWS README TODO
%{_mingw64_bindir}/epanet2.exe

%changelog

