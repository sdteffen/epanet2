#
# spec file for package epanet
#
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

Name: epanet
Version: 2.0.12.2
Release: 1
Vendor: epanet.de
License: GPL
Summary: Model water distribution piping systems
Group: Productivity/Other
Packager: Steffen Macke <sdteffen@sdteffen.de>
BuildRoot:  %{_tmppath}/%{name}-%{version}-build 
Source: %{name}-%{version}.tar.xz
Url: http://epanet.de
BuildRequires: glibc-devel

%description
EPANETL models water distribution piping systems (hydraulic analysis).
Localized version of the popular EPANET hydraulic modelling package.

%package -n epanet-devel
Summary: EPANET Toolkit
Group: Development/Libraries/C and C++

%prep
%setup

%build
./configure --prefix=/usr --libdir=%_libdir
make

%install
rm -rf %{buildroot}
%makeinstall

%clean
rm -rf %{buildroot}

%files -n epanet
%defattr(-, root, root)
%doc AUTHORS COPYING ChangeLog NEWS README TODO
%_bindir/epanet2

%files -n epanet-devel
%defattr(-, root, root)
%_libdir/libepanet2.so
%_libdir/libepanet2.so.0
%_libdir/libepanet2.so.0.0.0

%changelog
* Sun Dec 15 2013 - Steffen Macke <sdteffen@sdteffen.de>
- Initial RPM build for version 2.0.12
