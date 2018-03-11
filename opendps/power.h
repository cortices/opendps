const uint8_t power[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,
  0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1e,
  0x00, 0x1d, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1e,
  0x00, 0x1d, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x1a, 0x00, 0x11, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1e,
  0x00, 0x1d, 0x00, 0x03, 0x00, 0x00, 0x00, 0x11, 0x00, 0x1a, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x06, 0x00, 0x1d, 0x00, 0x1f, 0x00, 0x12, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1e,
  0x00, 0x1d, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x00, 0x1f, 0x00, 0x1d, 0x00, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x17, 0x00, 0x1f, 0x00, 0x15, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x1e,
  0x00, 0x1d, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x16, 0x00, 0x1f, 0x00, 0x16, 0x00, 0x00,
  0x00, 0x06, 0x00, 0x1e, 0x00, 0x1d, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1e,
  0x00, 0x1e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x1e, 0x00, 0x06,
  0x00, 0x0f, 0x00, 0x1f, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
  0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x1f, 0x00, 0x0c,
  0x00, 0x1b, 0x00, 0x1f, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x1f, 0x00, 0x10,
  0x00, 0x0f, 0x00, 0x1f, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x1f, 0x00, 0x0c,
  0x00, 0x06, 0x00, 0x1e, 0x00, 0x1d, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x1e, 0x00, 0x06,
  0x00, 0x00, 0x00, 0x17, 0x00, 0x1f, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1f, 0x00, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x06, 0x00, 0x1d, 0x00, 0x1f, 0x00, 0x15, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x16, 0x00, 0x1f, 0x00, 0x1d, 0x00, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x1c, 0x00, 0x1f, 0x00, 0x1d, 0x00, 0x15, 0x00, 0x10,
  0x00, 0x10, 0x00, 0x15, 0x00, 0x1d, 0x00, 0x1f, 0x00, 0x1c, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x14, 0x00, 0x1d, 0x00, 0x1f, 0x00, 0x1f,
  0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1d, 0x00, 0x14, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x12,
  0x00, 0x12, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
uint32_t power_len = 512;
uint32_t power_width = 16;
uint32_t power_height = 16;
