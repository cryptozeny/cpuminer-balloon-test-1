uint64_t neighbor;
for (i = 0; i < 4096; i++) {
  uint8_t *cur_block = s->buffer + (32 * i);
  const uint8_t *blocks[5];
  const uint8_t *prev_block = i ? cur_block - 32 : block_index (s, 4095);
  blocks[0] = prev_block;
  blocks[1] = cur_block;
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[2] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[3] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[4] = block_index (s, neighbor % 4096);
  SHA256_Init (&ctx);
  memcpy(&hashmash[0],&s->counter, 8);
  for (int j=0; j<5; j++)
  memcpy(&hashmash[8+(j*32)], blocks[j], 32);
  SHA256_Update (&ctx, hashmash, 168);
  SHA256_Final (cur_block, &ctx);
  s->counter += 1;
}



for (i = 0; i < 4096; i++) {
  uint8_t *cur_block = s->buffer + (32 * i);
  const uint8_t *blocks[5];
  const uint8_t *prev_block = i ? cur_block - 32 : block_index (s, 4095);
  blocks[0] = prev_block;
  blocks[1] = cur_block;
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[2] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[3] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[4] = block_index (s, neighbor % 4096);
  SHA256_Init (&ctx);
  memcpy(&hashmash[0],&s->counter, 8);
  for (int j=0; j<5; j++)
  memcpy(&hashmash[8+(j*32)], blocks[j], 32);
  SHA256_Update (&ctx, hashmash, 168);
  SHA256_Final (cur_block, &ctx);
  s->counter += 1;
}


for (i = 0; i < 4096; i++) {
  uint8_t *cur_block = s->buffer + (32 * i);
  const uint8_t *blocks[5];
  const uint8_t *prev_block = i ? cur_block - 32 : block_index (s, 4095);
  blocks[0] = prev_block;
  blocks[1] = cur_block;
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[2] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[3] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[4] = block_index (s, neighbor % 4096);
  SHA256_Init (&ctx);
  memcpy(&hashmash[0],&s->counter, 8);
  for (int j=0; j<5; j++)
  memcpy(&hashmash[8+(j*32)], blocks[j], 32);
  SHA256_Update (&ctx, hashmash, 168);
  SHA256_Final (cur_block, &ctx);
  s->counter += 1;
}



for (i = 0; i < 4096; i++) {
  uint8_t *cur_block = s->buffer + (32 * i);
  const uint8_t *blocks[5];
  const uint8_t *prev_block = i ? cur_block - 32 : block_index (s, 4095);
  blocks[0] = prev_block;
  blocks[1] = cur_block;
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[2] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[3] = block_index (s, neighbor % 4096);
  bitstream_fill_buffer (&s->bstream, buf, 8);
  neighbor = 0;
  neighbor |= buf[7]; neighbor <<= 8; neighbor |= buf[6]; neighbor <<= 8;
  neighbor |= buf[5]; neighbor <<= 8; neighbor |= buf[4]; neighbor <<= 8;
  neighbor |= buf[3]; neighbor <<= 8; neighbor |= buf[2]; neighbor <<= 8;
  neighbor |= buf[1]; neighbor <<= 8; neighbor |= buf[0];
  blocks[4] = block_index (s, neighbor % 4096);
  SHA256_Init (&ctx);
  memcpy(&hashmash[0],&s->counter, 8);
  for (int j=0; j<5; j++)
  memcpy(&hashmash[8+(j*32)], blocks[j], 32);
  SHA256_Update (&ctx, hashmash, 168);
  SHA256_Final (cur_block, &ctx);
  s->counter += 1;
}
