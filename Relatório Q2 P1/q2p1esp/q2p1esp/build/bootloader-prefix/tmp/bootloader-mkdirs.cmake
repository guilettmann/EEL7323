# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/opt/riscv/Espressif-IDE/esp_idf/esp-idf-v5.3/components/bootloader/subproject"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/tmp"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/src/bootloader-stamp"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/src"
  "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/100000001275208/workspace/q2p1esp/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
