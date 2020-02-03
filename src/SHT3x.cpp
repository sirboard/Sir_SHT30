#include "SHT3x.h"

Sir_SHT3x::Sir_SHT3x(uint8_t addr) {
}

void Sir_SHT3x::init(uint8_t addr) {
  i2caddr = addr;
  Wire.begin();
}