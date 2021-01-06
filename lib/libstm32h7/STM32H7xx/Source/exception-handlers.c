
#include "exception-handlers.h"

#include "stm32h7xx_hal.h"


//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
NMI_Handler (void)
{

  while (1)
    {
    }
}

//void __attribute__ ((section(".after_vectors"),weak,naked))
void __attribute__ ((weak,naked))
HardFault_Handler (void)
{
  asm volatile(
      " tst lr,#4       \n"
      " ite eq          \n"
      " mrseq r0,msp    \n"
      " mrsne r0,psp    \n"
      " mov r1,lr       \n"


      : /* Outputs */
      : /* Inputs */
      : /* Clobbers */
  );
}



#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)

//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
DebugMon_Handler (void)
{

//  while (1)
//    {
//    }
}


//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
MemManage_Handler (void)
{

  while (1)
    {
    }
}

//void __attribute__ ((section(".after_vectors"),weak,naked))
void __attribute__ ((weak,naked))
BusFault_Handler (void)
{
  asm volatile(
      " tst lr,#4       \n"
      " ite eq          \n"
      " mrseq r0,msp    \n"
      " mrsne r0,psp    \n"
      " mov r1,lr       \n"


      : /* Outputs */
      : /* Inputs */
      : /* Clobbers */
  );
}


//void __attribute__ ((section(".after_vectors"),weak,naked))
void __attribute__ ((weak,naked))
UsageFault_Handler (void)
{
  asm volatile(
      " tst lr,#4       \n"
      " ite eq          \n"
      " mrseq r0,msp    \n"
      " mrsne r0,psp    \n"
      " mov r1,lr       \n"


      : /* Outputs */
      : /* Inputs */
      : /* Clobbers */
  );
}

#endif






//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
SVC_Handler (void)
{
//  while (1)
//    {
//    }
}


//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
PendSV_Handler (void)
{
//  while (1)
//    {
//    }
}

//void __attribute__ ((section(".after_vectors"),weak))
void __attribute__ ((weak))
SysTick_Handler (void)
{
  // DO NOT loop, just return.
  // Useful in case someone (like STM HAL) inadvertently enables SysTick.

	HAL_IncTick();
}

// ----------------------------------------------------------------------------
