# Changelog

All notable modifications made in this repository are documented here.

This project is based on the OpenHW Group **CV32E40P** RISC-V processor. The changes listed below represent the Processing-in-Memory (PIM) extensions and related enhancements implemented in this repository.

---

# Version 1.0.0
## Processing-in-Memory Extension

### Added

- Processing-in-Memory (PIM) support integrated into the CV32E40P processor.
- Memory-side arithmetic execution for selected operations.
- Custom PIM benchmark suite.
- Performance evaluation framework.
- Documentation for PIM implementation and benchmarking.

---

### RTL Modifications

#### `rtl/cv32e40p_core.sv`

- Added PIM control signal integration.
- Extended datapath to support Processing-in-Memory execution.
- Connected PIM control logic with the processor pipeline.

---

#### `rtl/cv32e40p_load_store_unit.sv`

Implemented:

- PIM instruction detection
- Operand extraction
- Custom memory request generation
- PIM execution control
- Memory-side operation support

This module contains the primary architectural modifications required for Processing-in-Memory execution.

---

#### `rtl/sram_controller.sv`

Implemented:

- Memory-side arithmetic operations
- PIM enable logic
- PIM operation selection
- Compute result generation
- Writeback support

---

### Assembly & Benchmark Programs

Added benchmark applications under:

```
sim/pim_test/
```

Benchmarks include:

- Vector Addition
- Image Processing
- Matrix Convolution

---

### Performance Evaluation

Performance comparison against the baseline CV32E40P implementation.

| Benchmark | Baseline | PIM | Improvement |
|-----------|----------:|----------:|-----------:|
| Vector Addition | 2306 cycles | 1666 cycles | **27.75%** |
| Image Processing | 1218 cycles | 898 cycles | **26.27%** |
| Matrix Convolution | 1538 cycles | 834 cycles | **45.77%** |

The highest speedup was achieved for matrix convolution due to its memory-intensive access pattern.

---

### Verification

Validation performed using:

- RTL simulation
- Functional testing
- Custom benchmark programs
- Memory correctness validation

---

### Based On

OpenHW Group CV32E40P RISC-V Core

Original Repository:

https://github.com/openhwgroup/cv32e40p

This repository contains an independent Processing-in-Memory implementation developed on top of the original architecture.
