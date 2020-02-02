
#include "monitor.h"
#include "descriptor_tables.h"






void kmain()
{
  init_descriptor_tables();
	monitor_clear();
  monitor_write("Hello, world!\n");
  monitor_write("Sohaib Mohammed!\n");
  asm volatile ("int $0x3");
  asm volatile ("int $0x4");
}