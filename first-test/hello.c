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
  printf( "\nHello World1\n" );
  while (true)
  {
    printf( "\nHello World2\n" );
  }
  
}