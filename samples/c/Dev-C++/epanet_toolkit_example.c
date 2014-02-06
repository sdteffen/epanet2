/**
 * epanet_toolkit_example.c Very simply EPANET Toolkit Example
 * 
 * Copyright (c) 2014 Steffen Macke <sdteffen@sdteffen.de>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */

#include "epanet2.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	switch(argc)
	{
		case 1:
			printf("ENopen(Net1.inp, Net1.txt, Net1.bin) returned %d\n", ENopen("Net1.inp", "Net1.txt", "Net1.bin"));
			break;
		case 2:
			printf("ENopen(%s) returned %d\n", argv[1], ENopen(argv[1], "", ""));
			break;
		case 3:
			printf("ENopen(%s, %s) returned %d\n", argv[1], argv[2], ENopen(argv[1], argv[2], ""));
			break;
		case 4:
			printf("ENopen(%s, %s, %s) returned %d\n", argv[1], argv[2], argv[3], ENopen(argv[1], argv[2], argv[3]));
			break;
		default:
			printf("USAGE: epanet_toolkit_example inpfile [reportfile] [binaryresultfile]");
			return 1;
			break;
	}
	printf("ENsolveH() returned %d\n", ENsolveH());
	printf("ENsaveH() returned %d\n", ENsaveH()); 
	printf("ENreport() returned %d\n", ENreport());

	return 0;
}
