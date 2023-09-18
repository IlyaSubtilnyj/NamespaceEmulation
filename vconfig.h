#ifndef CONFIG_VALIDATION_H
#define CONFIG_VALIDATION_H

#include "user_config.h"

#if (FOOBAR_SHORT_NAMES == FOOBAR_NAMESPACE_ENABLED && FOOBAR_NAMESPACE == FOOBAR_NAMESPACE_DISABLED)
#error "#config_error: FOOBAR_SHORT_NAMES requires FOOBAR_NAMESPACE"
#else 
#define FSN
#endif

#if !defined LOG_FILE || LOG_FILE == 0
#define LOG_FILE "./logging.txt"
#endif

#if !defined LOGGING_FILE_MODE || LOGGING_FILE_MODE == 0
#define LOGGING_FILE_MODE "at"
#endif

#endif