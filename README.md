# STM32 Floating Point Configuration

## Configuration Steps

1. Go to **Project Properties**:
   - Navigate to **C/C++ Build > Settings > MCU/MPU Settings**.
   
2. Enable floating-point support:
   - Set both `Use float` and `Use float` options.
   - Click **Apply** to save the changes.

## Example Code

```c
#include <stdio.h>

int main() {
    float data = 3.14159;
    printf("Hello %f\n\r", data);
    return 0;
}
