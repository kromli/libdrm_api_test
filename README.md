# libdrm_api_test

This tool is a to get the libdrm information from drm kmd. 
This tool is written based on existing libdrm test tool with 
the aim to simplify it to make it more independent than the 
existing tool that may require more dependencies to be built.

This tool is tested on:
Ubuntu 16
Android on x86

Other Linux that may support but no tested:
ClearLinux
Fedora

Build instruction
=================
Dependencies:
libdrm

On Linux:
cmake ./
make -jN

On Android:
make libdrm_api_test
OR
mm -jN

