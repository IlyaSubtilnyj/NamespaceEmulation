#ifndef USERCONFIG_H
#define USERCONFIG_H
#include "config.h"

/*
	short description:...
	LOGGING_ENABLED
	LOGGING_DISABLED
*/
#define LOGGING LOGGING_DISABLED


/*
	short description:...

*/
#define LOG_USE_STDOUT 1


/*
	short description:...

*/
#define LOG_USE_FILE 1


/*
	short description:...
	file to which logging messages will ne wrote
	Default Value: "./logging.txt"
*/
//#define LOG_FILE NULL

/*
	short description:...
	file writing mode
	Default Value: "a"
*/
//#define LOGGING_FILE_MODE NULL


/*
	short description:...

*/
#define LOG_USE_STRUCTURED 0

//[FOOBARNAMESPACE]
/*
	short description:...
	to enable namespacing set FOOBAR_NAMESPACE to FOOBAR_NAMESPACE_ENABLED reserved value
	to disable namespacing set FOOBAR_NAMESPACE to FOOBAR_NAMESPACE_DISABLED reservedd value
	Debug value: FOOBAR_NAMESPACE_DISABLED
*/
#define FOOBAR_NAMESPACE FOOBAR_NAMESPACE_DISABLED

//[FOOBARSHORTNAMES]
/*
	short description:...
*/
#define FOOBAR_SHORT_NAMES FOOBAR_SHORT_NAMES_DISABLED


#endif