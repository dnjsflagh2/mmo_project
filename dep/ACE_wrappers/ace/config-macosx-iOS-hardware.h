// $Id: config-macosx-iOS-hardware.h 97130 2013-05-13 17:36:26Z mesnier_p $
#ifndef ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H
#define ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H

#define ACE_HAS_IPHONE
#define ACE_SIZEOF_LONG_DOUBLE 8

#include "ace/config-macosx-lion.h"

#ifdef ACE_HAS_SYSV_IPC
#undef ACE_HAS_SYSV_IPC
#endif

#endif /* ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H */

