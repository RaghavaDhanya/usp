#define _POSIX_SOURCE
#include <stdio.h>
#include <unistd.h>
int main(){
long res;
#ifdef _SC_ADVISORY_INFO 
	if((res=sysconf(_SC_ADVISORY_INFO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_ADVISORY_INFO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_AIO_LISTIO_MAX 
	if((res=sysconf(_SC_AIO_LISTIO_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_AIO_LISTIO_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_AIO_MAX 
	if((res=sysconf(_SC_AIO_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_AIO_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX 
	if((res=sysconf(_SC_AIO_PRIO_DELTA_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_AIO_PRIO_DELTA_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_ARG_MAX 
	if((res=sysconf(_SC_ARG_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_ARG_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_ASYNCHRONOUS_IO 
	if((res=sysconf(_SC_ASYNCHRONOUS_IO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_ASYNCHRONOUS_IO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_ATEXIT_MAX 
	if((res=sysconf(_SC_ATEXIT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_ATEXIT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_AVPHYS_PAGES 
	if((res=sysconf(_SC_AVPHYS_PAGES))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_AVPHYS_PAGES=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BARRIERS 
	if((res=sysconf(_SC_BARRIERS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BARRIERS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BASE 
	if((res=sysconf(_SC_BASE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BASE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BC_BASE_MAX 
	if((res=sysconf(_SC_BC_BASE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BC_BASE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BC_DIM_MAX 
	if((res=sysconf(_SC_BC_DIM_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BC_DIM_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BC_SCALE_MAX 
	if((res=sysconf(_SC_BC_SCALE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BC_SCALE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_BC_STRING_MAX 
	if((res=sysconf(_SC_BC_STRING_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_BC_STRING_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CHAR_BIT 
	if((res=sysconf(_SC_CHAR_BIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CHAR_BIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CHARCLASS_NAME_MAX 
	if((res=sysconf(_SC_CHARCLASS_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CHARCLASS_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CHAR_MAX 
	if((res=sysconf(_SC_CHAR_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CHAR_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CHAR_MIN 
	if((res=sysconf(_SC_CHAR_MIN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CHAR_MIN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CHILD_MAX 
	if((res=sysconf(_SC_CHILD_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CHILD_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_C_LANG_SUPPORT 
	if((res=sysconf(_SC_C_LANG_SUPPORT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_C_LANG_SUPPORT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_C_LANG_SUPPORT_R 
	if((res=sysconf(_SC_C_LANG_SUPPORT_R))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_C_LANG_SUPPORT_R=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CLK_TCK 
	if((res=sysconf(_SC_CLK_TCK))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CLK_TCK=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CLOCK_SELECTION 
	if((res=sysconf(_SC_CLOCK_SELECTION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CLOCK_SELECTION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_COLL_WEIGHTS_MAX 
	if((res=sysconf(_SC_COLL_WEIGHTS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_COLL_WEIGHTS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_CPUTIME 
	if((res=sysconf(_SC_CPUTIME))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_CPUTIME=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_DELAYTIMER_MAX 
	if((res=sysconf(_SC_DELAYTIMER_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_DELAYTIMER_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_DEVICE_IO 
	if((res=sysconf(_SC_DEVICE_IO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_DEVICE_IO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_DEVICE_SPECIFIC 
	if((res=sysconf(_SC_DEVICE_SPECIFIC))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_DEVICE_SPECIFIC=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_DEVICE_SPECIFIC_R 
	if((res=sysconf(_SC_DEVICE_SPECIFIC_R))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_DEVICE_SPECIFIC_R=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_EQUIV_CLASS_MAX 
	if((res=sysconf(_SC_EQUIV_CLASS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_EQUIV_CLASS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_EXPR_NEST_MAX 
	if((res=sysconf(_SC_EXPR_NEST_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_EXPR_NEST_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FD_MGMT 
	if((res=sysconf(_SC_FD_MGMT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FD_MGMT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FIFO 
	if((res=sysconf(_SC_FIFO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FIFO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FILE_ATTRIBUTES 
	if((res=sysconf(_SC_FILE_ATTRIBUTES))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FILE_ATTRIBUTES=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FILE_LOCKING 
	if((res=sysconf(_SC_FILE_LOCKING))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FILE_LOCKING=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FILE_SYSTEM 
	if((res=sysconf(_SC_FILE_SYSTEM))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FILE_SYSTEM=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_FSYNC 
	if((res=sysconf(_SC_FSYNC))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_FSYNC=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_GETGR_R_SIZE_MAX 
	if((res=sysconf(_SC_GETGR_R_SIZE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_GETGR_R_SIZE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_GETPW_R_SIZE_MAX 
	if((res=sysconf(_SC_GETPW_R_SIZE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_GETPW_R_SIZE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_HOST_NAME_MAX 
	if((res=sysconf(_SC_HOST_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_HOST_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_INT_MAX 
	if((res=sysconf(_SC_INT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_INT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_INT_MIN 
	if((res=sysconf(_SC_INT_MIN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_INT_MIN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_IOV_MAX 
	if((res=sysconf(_SC_IOV_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_IOV_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_IPV 
	if((res=sysconf(_SC_IPV))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_IPV=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_JOB_CONTROL 
	if((res=sysconf(_SC_JOB_CONTROL))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_JOB_CONTROL=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_LEVEL 
	if((res=sysconf(_SC_LEVEL))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_LEVEL=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_LINE_MAX 
	if((res=sysconf(_SC_LINE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_LINE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_LOGIN_NAME_MAX 
	if((res=sysconf(_SC_LOGIN_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_LOGIN_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_LONG_BIT 
	if((res=sysconf(_SC_LONG_BIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_LONG_BIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MAPPED_FILES 
	if((res=sysconf(_SC_MAPPED_FILES))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MAPPED_FILES=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MB_LEN_MAX 
	if((res=sysconf(_SC_MB_LEN_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MB_LEN_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MEMLOCK 
	if((res=sysconf(_SC_MEMLOCK))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MEMLOCK=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MEMLOCK_RANGE 
	if((res=sysconf(_SC_MEMLOCK_RANGE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MEMLOCK_RANGE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MEMORY_PROTECTION 
	if((res=sysconf(_SC_MEMORY_PROTECTION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MEMORY_PROTECTION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MESSAGE_PASSING 
	if((res=sysconf(_SC_MESSAGE_PASSING))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MESSAGE_PASSING=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MONOTONIC_CLOCK 
	if((res=sysconf(_SC_MONOTONIC_CLOCK))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MONOTONIC_CLOCK=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MQ_OPEN_MAX 
	if((res=sysconf(_SC_MQ_OPEN_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MQ_OPEN_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MQ_PRIO_MAX 
	if((res=sysconf(_SC_MQ_PRIO_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MQ_PRIO_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_MULTI_PROCESS 
	if((res=sysconf(_SC_MULTI_PROCESS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_MULTI_PROCESS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NETWORKING 
	if((res=sysconf(_SC_NETWORKING))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NETWORKING=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NGROUPS_MAX 
	if((res=sysconf(_SC_NGROUPS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NGROUPS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_ARGMAX 
	if((res=sysconf(_SC_NL_ARGMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_ARGMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_LANGMAX 
	if((res=sysconf(_SC_NL_LANGMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_LANGMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_MSGMAX 
	if((res=sysconf(_SC_NL_MSGMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_MSGMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_NMAX 
	if((res=sysconf(_SC_NL_NMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_NMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_SETMAX 
	if((res=sysconf(_SC_NL_SETMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_SETMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NL_TEXTMAX 
	if((res=sysconf(_SC_NL_TEXTMAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NL_TEXTMAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NPROCESSORS_CONF 
	if((res=sysconf(_SC_NPROCESSORS_CONF))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NPROCESSORS_CONF=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NPROCESSORS_ONLN 
	if((res=sysconf(_SC_NPROCESSORS_ONLN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NPROCESSORS_ONLN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_NZERO 
	if((res=sysconf(_SC_NZERO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_NZERO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_OPEN_MAX 
	if((res=sysconf(_SC_OPEN_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_OPEN_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PAGESIZE 
	if((res=sysconf(_SC_PAGESIZE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PAGESIZE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PAGE_SIZE 
	if((res=sysconf(_SC_PAGE_SIZE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PAGE_SIZE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PASS_MAX 
	if((res=sysconf(_SC_PASS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PASS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PHYS_PAGES 
	if((res=sysconf(_SC_PHYS_PAGES))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PHYS_PAGES=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII 
	if((res=sysconf(_SC_PII))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_INTERNET 
	if((res=sysconf(_SC_PII_INTERNET))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_INTERNET=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_INTERNET_DGRAM 
	if((res=sysconf(_SC_PII_INTERNET_DGRAM))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_INTERNET_DGRAM=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_INTERNET_STREAM 
	if((res=sysconf(_SC_PII_INTERNET_STREAM))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_INTERNET_STREAM=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_OSI 
	if((res=sysconf(_SC_PII_OSI))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_OSI=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_OSI_CLTS 
	if((res=sysconf(_SC_PII_OSI_CLTS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_OSI_CLTS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_OSI_COTS 
	if((res=sysconf(_SC_PII_OSI_COTS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_OSI_COTS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_OSI_M 
	if((res=sysconf(_SC_PII_OSI_M))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_OSI_M=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_SOCKET 
	if((res=sysconf(_SC_PII_SOCKET))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_SOCKET=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PII_XTI 
	if((res=sysconf(_SC_PII_XTI))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PII_XTI=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PIPE 
	if((res=sysconf(_SC_PIPE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PIPE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_POLL 
	if((res=sysconf(_SC_POLL))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_POLL=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PRIORITIZED_IO 
	if((res=sysconf(_SC_PRIORITIZED_IO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PRIORITIZED_IO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_PRIORITY_SCHEDULING 
	if((res=sysconf(_SC_PRIORITY_SCHEDULING))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_PRIORITY_SCHEDULING=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_RAW_SOCKETS 
	if((res=sysconf(_SC_RAW_SOCKETS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_RAW_SOCKETS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_READER_WRITER_LOCKS 
	if((res=sysconf(_SC_READER_WRITER_LOCKS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_READER_WRITER_LOCKS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_REALTIME_SIGNALS 
	if((res=sysconf(_SC_REALTIME_SIGNALS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_REALTIME_SIGNALS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_RE_DUP_MAX 
	if((res=sysconf(_SC_RE_DUP_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_RE_DUP_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_REGEXP 
	if((res=sysconf(_SC_REGEXP))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_REGEXP=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_REGEX_VERSION 
	if((res=sysconf(_SC_REGEX_VERSION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_REGEX_VERSION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_RTSIG_MAX 
	if((res=sysconf(_SC_RTSIG_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_RTSIG_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SAVED_IDS 
	if((res=sysconf(_SC_SAVED_IDS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SAVED_IDS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SCHAR_MAX 
	if((res=sysconf(_SC_SCHAR_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SCHAR_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SCHAR_MIN 
	if((res=sysconf(_SC_SCHAR_MIN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SCHAR_MIN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SELECT 
	if((res=sysconf(_SC_SELECT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SELECT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SEMAPHORES 
	if((res=sysconf(_SC_SEMAPHORES))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SEMAPHORES=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SEM_NSEMS_MAX 
	if((res=sysconf(_SC_SEM_NSEMS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SEM_NSEMS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SEM_VALUE_MAX 
	if((res=sysconf(_SC_SEM_VALUE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SEM_VALUE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS 
	if((res=sysconf(_SC_SHARED_MEMORY_OBJECTS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SHARED_MEMORY_OBJECTS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SHELL 
	if((res=sysconf(_SC_SHELL))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SHELL=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SHRT_MAX 
	if((res=sysconf(_SC_SHRT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SHRT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SHRT_MIN 
	if((res=sysconf(_SC_SHRT_MIN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SHRT_MIN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SIGNALS 
	if((res=sysconf(_SC_SIGNALS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SIGNALS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SIGQUEUE_MAX 
	if((res=sysconf(_SC_SIGQUEUE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SIGQUEUE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SINGLE_PROCESS 
	if((res=sysconf(_SC_SINGLE_PROCESS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SINGLE_PROCESS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SPAWN 
	if((res=sysconf(_SC_SPAWN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SPAWN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SPIN_LOCKS 
	if((res=sysconf(_SC_SPIN_LOCKS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SPIN_LOCKS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SPORADIC_SERVER 
	if((res=sysconf(_SC_SPORADIC_SERVER))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SPORADIC_SERVER=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SSIZE_MAX 
	if((res=sysconf(_SC_SSIZE_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SSIZE_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SS_REPL_MAX 
	if((res=sysconf(_SC_SS_REPL_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SS_REPL_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_STREAM_MAX 
	if((res=sysconf(_SC_STREAM_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_STREAM_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_STREAMS 
	if((res=sysconf(_SC_STREAMS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_STREAMS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SYMLOOP_MAX 
	if((res=sysconf(_SC_SYMLOOP_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SYMLOOP_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SYNCHRONIZED_IO 
	if((res=sysconf(_SC_SYNCHRONIZED_IO))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SYNCHRONIZED_IO=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SYSTEM_DATABASE 
	if((res=sysconf(_SC_SYSTEM_DATABASE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SYSTEM_DATABASE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_SYSTEM_DATABASE_R 
	if((res=sysconf(_SC_SYSTEM_DATABASE_R))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_SYSTEM_DATABASE_R=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_ATTR_STACKADDR 
	if((res=sysconf(_SC_THREAD_ATTR_STACKADDR))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_ATTR_STACKADDR=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE 
	if((res=sysconf(_SC_THREAD_ATTR_STACKSIZE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_ATTR_STACKSIZE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_CPUTIME 
	if((res=sysconf(_SC_THREAD_CPUTIME))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_CPUTIME=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS 
	if((res=sysconf(_SC_THREAD_DESTRUCTOR_ITERATIONS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_DESTRUCTOR_ITERATIONS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_KEYS_MAX 
	if((res=sysconf(_SC_THREAD_KEYS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_KEYS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_PRIO_INHERIT 
	if((res=sysconf(_SC_THREAD_PRIO_INHERIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_PRIO_INHERIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_PRIO_PROTECT 
	if((res=sysconf(_SC_THREAD_PRIO_PROTECT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_PRIO_PROTECT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING 
	if((res=sysconf(_SC_THREAD_PRIORITY_SCHEDULING))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_PRIORITY_SCHEDULING=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_PROCESS_SHARED 
	if((res=sysconf(_SC_THREAD_PROCESS_SHARED))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_PROCESS_SHARED=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_ROBUST_PRIO_INHERIT 
	if((res=sysconf(_SC_THREAD_ROBUST_PRIO_INHERIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_ROBUST_PRIO_INHERIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_ROBUST_PRIO_PROTECT 
	if((res=sysconf(_SC_THREAD_ROBUST_PRIO_PROTECT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_ROBUST_PRIO_PROTECT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREADS 
	if((res=sysconf(_SC_THREADS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREADS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS 
	if((res=sysconf(_SC_THREAD_SAFE_FUNCTIONS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_SAFE_FUNCTIONS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_SPORADIC_SERVER 
	if((res=sysconf(_SC_THREAD_SPORADIC_SERVER))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_SPORADIC_SERVER=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_STACK_MIN 
	if((res=sysconf(_SC_THREAD_STACK_MIN))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_STACK_MIN=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_THREAD_THREADS_MAX 
	if((res=sysconf(_SC_THREAD_THREADS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_THREAD_THREADS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TIMEOUTS 
	if((res=sysconf(_SC_TIMEOUTS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TIMEOUTS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TIMER_MAX 
	if((res=sysconf(_SC_TIMER_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TIMER_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TIMERS 
	if((res=sysconf(_SC_TIMERS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TIMERS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_T_IOV_MAX 
	if((res=sysconf(_SC_T_IOV_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_T_IOV_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE 
	if((res=sysconf(_SC_TRACE))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_EVENT_FILTER 
	if((res=sysconf(_SC_TRACE_EVENT_FILTER))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_EVENT_FILTER=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_EVENT_NAME_MAX 
	if((res=sysconf(_SC_TRACE_EVENT_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_EVENT_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_INHERIT 
	if((res=sysconf(_SC_TRACE_INHERIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_INHERIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_LOG 
	if((res=sysconf(_SC_TRACE_LOG))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_LOG=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_NAME_MAX 
	if((res=sysconf(_SC_TRACE_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_SYS_MAX 
	if((res=sysconf(_SC_TRACE_SYS_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_SYS_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TRACE_USER_EVENT_MAX 
	if((res=sysconf(_SC_TRACE_USER_EVENT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TRACE_USER_EVENT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TTY_NAME_MAX 
	if((res=sysconf(_SC_TTY_NAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TTY_NAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TYPED_MEMORY_OBJECTS 
	if((res=sysconf(_SC_TYPED_MEMORY_OBJECTS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TYPED_MEMORY_OBJECTS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_TZNAME_MAX 
	if((res=sysconf(_SC_TZNAME_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_TZNAME_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_UCHAR_MAX 
	if((res=sysconf(_SC_UCHAR_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_UCHAR_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_UINT_MAX 
	if((res=sysconf(_SC_UINT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_UINT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_UIO_MAXIOV 
	if((res=sysconf(_SC_UIO_MAXIOV))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_UIO_MAXIOV=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_ULONG_MAX 
	if((res=sysconf(_SC_ULONG_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_ULONG_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_USER_GROUPS 
	if((res=sysconf(_SC_USER_GROUPS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_USER_GROUPS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_USER_GROUPS_R 
	if((res=sysconf(_SC_USER_GROUPS_R))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_USER_GROUPS_R=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_USHRT_MAX 
	if((res=sysconf(_SC_USHRT_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_USHRT_MAX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_V 
	if((res=sysconf(_SC_V))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_V=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_VERSION 
	if((res=sysconf(_SC_VERSION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_VERSION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_WORD_BIT 
	if((res=sysconf(_SC_WORD_BIT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_WORD_BIT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XBS 
	if((res=sysconf(_SC_XBS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XBS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_CRYPT 
	if((res=sysconf(_SC_XOPEN_CRYPT))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_CRYPT=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_ENH_I 
	if((res=sysconf(_SC_XOPEN_ENH_I))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_ENH_I=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_LEGACY 
	if((res=sysconf(_SC_XOPEN_LEGACY))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_LEGACY=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_REALTIME 
	if((res=sysconf(_SC_XOPEN_REALTIME))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_REALTIME=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_REALTIME_THREADS 
	if((res=sysconf(_SC_XOPEN_REALTIME_THREADS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_REALTIME_THREADS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_SHM 
	if((res=sysconf(_SC_XOPEN_SHM))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_SHM=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_STREAMS 
	if((res=sysconf(_SC_XOPEN_STREAMS))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_STREAMS=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_UNIX 
	if((res=sysconf(_SC_XOPEN_UNIX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_UNIX=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_VERSION 
	if((res=sysconf(_SC_XOPEN_VERSION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_VERSION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_XCU_VERSION 
	if((res=sysconf(_SC_XOPEN_XCU_VERSION))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_XCU_VERSION=%d\n\033[0;0m",res);
	#endif
#ifdef _SC_XOPEN_XPG 
	if((res=sysconf(_SC_XOPEN_XPG))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42m_SC_XOPEN_XPG=%d\n\033[0;0m",res);
	#endif
return 0;
}