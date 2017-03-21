#define _POSIX_SOURCE
#include <stdio.h>
#include <unistd.h>
int main(){
#ifdef _POSIX_JOB_CONTROL 
 printf("_POSIX_JOB_CONTROL=%d\n",_POSIX_JOB_CONTROL);
#else
printf("_POSIX_JOB_CONTROL not defined\n");
#endif
#ifdef _POSIX_SAVED_IDS 
 printf("_POSIX_SAVED_IDS=%d\n",_POSIX_SAVED_IDS);
#else
printf("_POSIX_SAVED_IDS not defined\n");
#endif
#ifdef _POSIX_REALTIME_SIGNALS 
 printf("_POSIX_REALTIME_SIGNALS=%d\n",_POSIX_REALTIME_SIGNALS);
#else
printf("_POSIX_REALTIME_SIGNALS not defined\n");
#endif
#ifdef _POSIX_PRIORITY_SCHEDULING 
 printf("_POSIX_PRIORITY_SCHEDULING=%d\n",_POSIX_PRIORITY_SCHEDULING);
#else
printf("_POSIX_PRIORITY_SCHEDULING not defined\n");
#endif
#ifdef _POSIX_TIMERS 
 printf("_POSIX_TIMERS=%d\n",_POSIX_TIMERS);
#else
printf("_POSIX_TIMERS not defined\n");
#endif
#ifdef _POSIX_ASYNCHRONOUS_IO 
 printf("_POSIX_ASYNCHRONOUS_IO=%d\n",_POSIX_ASYNCHRONOUS_IO);
#else
printf("_POSIX_ASYNCHRONOUS_IO not defined\n");
#endif
#ifdef _POSIX_PRIORITIZED_IO 
 printf("_POSIX_PRIORITIZED_IO=%d\n",_POSIX_PRIORITIZED_IO);
#else
printf("_POSIX_PRIORITIZED_IO not defined\n");
#endif
#ifdef _POSIX_SYNCHRONIZED_IO 
 printf("_POSIX_SYNCHRONIZED_IO=%d\n",_POSIX_SYNCHRONIZED_IO);
#else
printf("_POSIX_SYNCHRONIZED_IO not defined\n");
#endif
#ifdef _POSIX_FSYNC 
 printf("_POSIX_FSYNC=%d\n",_POSIX_FSYNC);
#else
printf("_POSIX_FSYNC not defined\n");
#endif
#ifdef _POSIX_MAPPED_FILES 
 printf("_POSIX_MAPPED_FILES=%d\n",_POSIX_MAPPED_FILES);
#else
printf("_POSIX_MAPPED_FILES not defined\n");
#endif
#ifdef _POSIX_MEMLOCK 
 printf("_POSIX_MEMLOCK=%d\n",_POSIX_MEMLOCK);
#else
printf("_POSIX_MEMLOCK not defined\n");
#endif
#ifdef _POSIX_MEMLOCK_RANGE 
 printf("_POSIX_MEMLOCK_RANGE=%d\n",_POSIX_MEMLOCK_RANGE);
#else
printf("_POSIX_MEMLOCK_RANGE not defined\n");
#endif
#ifdef _POSIX_MEMORY_PROTECTION 
 printf("_POSIX_MEMORY_PROTECTION=%d\n",_POSIX_MEMORY_PROTECTION);
#else
printf("_POSIX_MEMORY_PROTECTION not defined\n");
#endif
#ifdef _POSIX_MESSAGE_PASSING 
 printf("_POSIX_MESSAGE_PASSING=%d\n",_POSIX_MESSAGE_PASSING);
#else
printf("_POSIX_MESSAGE_PASSING not defined\n");
#endif
#ifdef _POSIX_SEMAPHORES 
 printf("_POSIX_SEMAPHORES=%d\n",_POSIX_SEMAPHORES);
#else
printf("_POSIX_SEMAPHORES not defined\n");
#endif
#ifdef _POSIX_SHARED_MEMORY_OBJECTS 
 printf("_POSIX_SHARED_MEMORY_OBJECTS=%d\n",_POSIX_SHARED_MEMORY_OBJECTS);
#else
printf("_POSIX_SHARED_MEMORY_OBJECTS not defined\n");
#endif
#ifdef _POSIX_THREADS 
 printf("_POSIX_THREADS=%d\n",_POSIX_THREADS);
#else
printf("_POSIX_THREADS not defined\n");
#endif
#ifdef _POSIX_THREAD_ATTR_STACKADDR 
 printf("_POSIX_THREAD_ATTR_STACKADDR=%d\n",_POSIX_THREAD_ATTR_STACKADDR);
#else
printf("_POSIX_THREAD_ATTR_STACKADDR not defined\n");
#endif
#ifdef _POSIX_THREAD_ATTR_STACKSIZE 
 printf("_POSIX_THREAD_ATTR_STACKSIZE=%d\n",_POSIX_THREAD_ATTR_STACKSIZE);
#else
printf("_POSIX_THREAD_ATTR_STACKSIZE not defined\n");
#endif
#ifdef _POSIX_THREAD_SAFE_FUNCTIONS 
 printf("_POSIX_THREAD_SAFE_FUNCTIONS=%d\n",_POSIX_THREAD_SAFE_FUNCTIONS);
#else
printf("_POSIX_THREAD_SAFE_FUNCTIONS not defined\n");
#endif
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING 
 printf("_POSIX_THREAD_PRIORITY_SCHEDULING=%d\n",_POSIX_THREAD_PRIORITY_SCHEDULING);
#else
printf("_POSIX_THREAD_PRIORITY_SCHEDULING not defined\n");
#endif
#ifdef _POSIX_THREAD_PRIO_INHERIT 
 printf("_POSIX_THREAD_PRIO_INHERIT=%d\n",_POSIX_THREAD_PRIO_INHERIT);
#else
printf("_POSIX_THREAD_PRIO_INHERIT not defined\n");
#endif
#ifdef _POSIX_THREAD_PRIO_PROTECT 
 printf("_POSIX_THREAD_PRIO_PROTECT=%d\n",_POSIX_THREAD_PRIO_PROTECT);
#else
printf("_POSIX_THREAD_PRIO_PROTECT not defined\n");
#endif
#ifdef _POSIX_THREAD_PROCESS_SHARED 
 printf("_POSIX_THREAD_PROCESS_SHARED=%d\n",_POSIX_THREAD_PROCESS_SHARED);
#else
printf("_POSIX_THREAD_PROCESS_SHARED not defined\n");
#endif
#ifdef _POSIX_PII 
 printf("_POSIX_PII=%d\n",_POSIX_PII);
#else
printf("_POSIX_PII not defined\n");
#endif
#ifdef _POSIX_PII_XTI 
 printf("_POSIX_PII_XTI=%d\n",_POSIX_PII_XTI);
#else
printf("_POSIX_PII_XTI not defined\n");
#endif
#ifdef _POSIX_PII_SOCKET 
 printf("_POSIX_PII_SOCKET=%d\n",_POSIX_PII_SOCKET);
#else
printf("_POSIX_PII_SOCKET not defined\n");
#endif
#ifdef _POSIX_PII_INTERNET 
 printf("_POSIX_PII_INTERNET=%d\n",_POSIX_PII_INTERNET);
#else
printf("_POSIX_PII_INTERNET not defined\n");
#endif
#ifdef _POSIX_PII_INTERNET_STREAM 
 printf("_POSIX_PII_INTERNET_STREAM=%d\n",_POSIX_PII_INTERNET_STREAM);
#else
printf("_POSIX_PII_INTERNET_STREAM not defined\n");
#endif
#ifdef _POSIX_PII_INTERNET_DGRAM 
 printf("_POSIX_PII_INTERNET_DGRAM=%d\n",_POSIX_PII_INTERNET_DGRAM);
#else
printf("_POSIX_PII_INTERNET_DGRAM not defined\n");
#endif
#ifdef _POSIX_PII_OSI 
 printf("_POSIX_PII_OSI=%d\n",_POSIX_PII_OSI);
#else
printf("_POSIX_PII_OSI not defined\n");
#endif
#ifdef _POSIX_PII_OSI_COTS 
 printf("_POSIX_PII_OSI_COTS=%d\n",_POSIX_PII_OSI_COTS);
#else
printf("_POSIX_PII_OSI_COTS not defined\n");
#endif
#ifdef _POSIX_PII_OSI_CLTS 
 printf("_POSIX_PII_OSI_CLTS=%d\n",_POSIX_PII_OSI_CLTS);
#else
printf("_POSIX_PII_OSI_CLTS not defined\n");
#endif
#ifdef _POSIX_POLL 
 printf("_POSIX_POLL=%d\n",_POSIX_POLL);
#else
printf("_POSIX_POLL not defined\n");
#endif
#ifdef _POSIX_SELECT 
 printf("_POSIX_SELECT=%d\n",_POSIX_SELECT);
#else
printf("_POSIX_SELECT not defined\n");
#endif
#ifdef _POSIX_CHOWN_RESTRICTED 
 printf("_POSIX_CHOWN_RESTRICTED=%d\n",_POSIX_CHOWN_RESTRICTED);
#else
printf("_POSIX_CHOWN_RESTRICTED not defined\n");
#endif
#ifdef _POSIX_NO_TRUNC 
 printf("_POSIX_NO_TRUNC=%d\n",_POSIX_NO_TRUNC);
#else
printf("_POSIX_NO_TRUNC not defined\n");
#endif
#ifdef _POSIX_VDISABLE 
 printf("_POSIX_VDISABLE=%d\n",_POSIX_VDISABLE);
#else
printf("_POSIX_VDISABLE not defined\n");
#endif
#ifdef _POSIX_SYNC_IO 
 printf("_POSIX_SYNC_IO=%d\n",_POSIX_SYNC_IO);
#else
printf("_POSIX_SYNC_IO not defined\n");
#endif
#ifdef _POSIX_ASYNC_IO 
 printf("_POSIX_ASYNC_IO=%d\n",_POSIX_ASYNC_IO);
#else
printf("_POSIX_ASYNC_IO not defined\n");
#endif
#ifdef _POSIX_PRIO_IO 
 printf("_POSIX_PRIO_IO=%d\n",_POSIX_PRIO_IO);
#else
printf("_POSIX_PRIO_IO not defined\n");
#endif
return 0;
}