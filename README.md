# My Notes for Quantitative Macro

## Benchmarks for Life Cycle Models
This section examines the model of
[Parallel Computing](https://github.com/davidzarruk/Parallel_Computing/)
by my codes.

### Environments
**Local ([Ryzen 5600G](https://www.amd.com/en/products/apu/amd-ryzen-5-5600g))**
- Num. of CPU Cores: 6 (12 threads) 
- Clock: 3.9GHz (Base), 4.4GHz (Max)

**Google Colabotory**
- Free Account
- GPU: K80


| Main                  | link           | Machine | Time   | 
| --------------------- | -------------- | ------- | ------ | 
| Julia                 | [html](https://kazuyanagimoto.com/notes-quant-macro/life_cycle.jl.html)         | Local   | 1.179s | 
| Rcpp                  | [html](https://kazuyanagimoto.com/notes-quant-macro/life_cycle_rcpp.html)         | Local   | 1.083s | 
| Python + Numba        | [html](https://kazuyanagimoto.com/notes-quant-macro/life_cycle_numba.html)         | Local   | 1.34s  | 
| CUDA + Python + Numba | [html](https://kazuyanagimoto.com/notes-quant-macro/life_cycle_cuda.html), [colab](https://colab.research.google.com/drive/1eszle42IDv5Jec4YCDZQCHrZeZBLJVTC?usp=sharing) | Colab   | 0.509s | 

