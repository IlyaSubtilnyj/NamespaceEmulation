#ifndef CONFIG_VALIDATION_H
#define CONFIG_VALIDATION_H

#include "user_config.h"

#if (FOOBAR_SHORT_NAMES == FOOBAR_NAMESPACE_ENABLED && FOOBAR_NAMESPACE == FOOBAR_NAMESPACE_DISABLED)
#error "#config_error: FOOBAR_SHORT_NAMES requires FOOBAR_NAMESPACE"
#else 
#define FSN
#endif



#endif