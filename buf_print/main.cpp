#include "buf_print.hpp"
#include <cstdio>
#include <thread>

const int kStringsCount = 100;
const char* kStringText = "Hello Word ";

float getTimePrintf();
float getTimeBufPrint();

int main()
{
  float timePrintf = getTimePrintf();
  float timeBufPrint = getTimeBufPrint();
  printf("Time printf:   %f\n", timePrintf);
  printf("Time bufPrint: %f\n", timeBufPrint);
  if (timePrintf < timeBufPrint) {
    printf("printf is faster bufPrint on %f seconds.\n", (timeBufPrint - timePrintf));
  } else {
    printf("bufPrint is faster printf on %f seconds.\n", (timePrintf - timeBufPrint));
  }
  return 0;
}

float getTimePrintf() {
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < kStringsCount; i++) {
    printf("%s", kStringText);
  }
  printf("\n");
  auto stop = std::chrono::high_resolution_clock::now();
  std::chrono::duration<float> delta = (stop - start);
  return delta.count();
}

float getTimeBufPrint() {
  bufPrint printer;
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < kStringsCount; i++) {
    printer.print(kStringText);
  }
  printer.print("\n");
  auto stop = std::chrono::high_resolution_clock::now();
  std::chrono::duration<float> delta = (stop - start);
  return delta.count();
}
