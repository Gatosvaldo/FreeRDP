
#include <winpr/crt.h>
#include <winpr/tchar.h>
#include <winpr/wlog.h>

int TestWLog(int argc, char* argv[])
{
	wLog* log;

	log = WLog_New("TEST");

	WLog_SetLogLevel(log, WLOG_INFO);
	WLog_Print(log, WLOG_INFO, "this is a test");
	WLog_Print(log, WLOG_WARN, "this is a %dnd %s", 2, "test");
	WLog_Print(log, WLOG_ERROR, "this is an error");
	WLog_Print(log, WLOG_TRACE, "this is a trace output");

	WLog_Free(log);

	return 0;
}
