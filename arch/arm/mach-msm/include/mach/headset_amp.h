#ifndef HEADSET_AMP_H
#define HEADSET_AMP_H

#ifdef CONFIG_MACH_M7_UL
extern void headset_amp_event(unsigned int on);
#else
void headset_amp_event(unsigned int on) { };
#endif

#endif
