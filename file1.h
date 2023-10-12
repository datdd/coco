#ifndef __FILE1_H__
#define __FILE1_H__

#if EXTRA_PROFILE
void show(char *msg, char *extra);
#else
void show(char *msg);
#endif

#endif // __FILE1_H__