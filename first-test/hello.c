/*
 * Hello world example
 */
#include <rtems.h>
#include <stdlib.h>
#include <stdio.h>

rtems_task Init(
  rtems_task_argument ignored
)
{
  int i = 0;
  //printf( "\nHello World\n" );
  while (true)
  {
    i++;
  }
  
}