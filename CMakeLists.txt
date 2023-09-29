#
# Copyright (c) 2018 Nordic Semiconductor
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#
cmake_minimum_required(VERSION 3.20.0)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE ZDebug)
endif()
# Point to the build type and common config files
set(CONF_FILE "prj.${CMAKE_BUILD_TYPE}.conf" "prj.common.conf")

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(ble_test)

# NORDIC SDK APP START
target_sources(app PRIVATE
  src/main.c
)

# Include UART ASYNC API adapter
# target_sources_ifdef(CONFIG_BT_NUS_UART_ASYNC_ADAPTER app PRIVATE
#  src/uart_async_adapter.c
#)

# NORDIC SDK APP END

zephyr_library_include_directories(.)
