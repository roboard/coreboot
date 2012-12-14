##
## This file is part of the coreboot project.
##
## Copyright (C) 2012 The ChromiumOS Authors.  All rights reserved.
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
##

#romstage-y += romstage.c

# ramstage-y += ec.c

# FIXME: smdk5250_spl and mainboard.c are a mess. In the long
# run we'll want to replace low-level code that calls mainboard code
# with mainboard code that calls low-level code with appropriate
# parameters. Grep around for spl_get_machine_params for examples.
romstage-y += smdk5250_spl.c
ramstage-y += smdk5250_spl.c
#ramstage-y += mainboard.c

# romstage-$(CONFIG_CHROMEOS) += chromeos.c

# FIXME: we should do something similar to x86 platforms for Snow SPDs

SRC_ROOT = $(src)/mainboard/google/snow