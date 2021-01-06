
#ifndef __STM32H7_EXCEPTION_HANDLERS_H__
#define __STM32H7_EXCEPTION_HANDLERS_H__

#include <stdint.h>

#if defined(DEBUG)
#define __DEBUG_BKPT()  asm volatile ("bkpt 0")
#endif

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
extern "C"
{
#endif

extern void NMI_Handler (void);
extern void HardFault_Handler (void);

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
extern void
  MemManage_Handler (void);
extern void
  BusFault_Handler (void);
extern void
  UsageFault_Handler (void);
extern  void
  DebugMon_Handler (void);
#endif

   extern   void
  SVC_Handler (void);
//
   extern   void
  PendSV_Handler (void);
   extern   void
  SysTick_Handler (void);

#if defined(__cplusplus)
}
#endif



#endif
