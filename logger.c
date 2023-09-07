#include "logger.h"

/** */
void _ced_log(FILE* file, const char* fmt, ...) {
	va_list ap;
	time_t t;
	struct tm tm;
	char datestr[51];

	/* determine if we just go to std error */
	file = (file == NULL) ? stderr : file;

	/* datetime & pid formatting */
	t = time(NULL);
	_tzset();
	localtime_s(&tm, &t);
	strftime(datestr, sizeof(datestr) - 1, "%a %b %d %T %Z %Y", &tm);
	fprintf(file, "%s [%d]: ", datestr, getpid());

	/* draw out the vararg format */
	va_start(ap, fmt);
	vfprintf(file, fmt, ap);
	va_end(ap);

	/* bump to the next line */
	fprintf(file, "\n");
}