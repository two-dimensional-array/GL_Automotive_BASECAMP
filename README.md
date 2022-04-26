# Buffered Print
Implemention of buffered printing messages in stdout.
---
## About project
Class bufPrint is implement buffered printing messages in stdout. 
Variable [kBufferSize][kBufferSize] is contain size of buffer. 
This class is located in files [buf_print.hpp][buf_print.hpp] and [buf_print.cpp][buf_print.cpp]. <br/>
The test program shows the advantage of buffered print over common print. 
And this program is print difference of working time buffered print with common print in seconds. 
Test program is located in file [main.cpp][main.cpp].
Exmaple of output this program.
```bash
Time printf:   0.006571
Time bufPrint: 0.005589
bufPrint is faster printf on 0.000982 seconds.
```
---

[buf_print.hpp]: https://github.com/two-dimensional-array/buffered_print/blob/main/src/buf_print.hpp
[buf_print.cpp]: https://github.com/two-dimensional-array/buffered_print/blob/main/src/buf_print.cpp
[main.cpp]: https://github.com/two-dimensional-array/buffered_print/blob/main/src/main.cpp
[kBufferSize]: https://github.com/two-dimensional-array/buffered_print/blob/2f2f1915ebe9ab5340d0097f5381bfcb1b1dbc99/src/buf_print.hpp#L3
