#include "benchmark/benchmark.h"
#include "lib/seahash.h"

static void benchmarkHashing(benchmark::State& state) {
  size_t size = 4096;
  uint8_t data[size];
  for (size_t i = 0; i < size; i++) {
    data[i] = 15;
  }
  volatile int out = 0;
  while (state.KeepRunning()) {
    for (size_t i = 0; i < 250000; i++) {
      out ^= seahash::hash(data, size);
      data[0] += data[0] + 1;
    }
  }
}

BENCHMARK(benchmarkHashing);

BENCHMARK_MAIN();
