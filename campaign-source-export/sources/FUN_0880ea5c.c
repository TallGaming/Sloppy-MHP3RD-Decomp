/* Copy a counted string in four-byte groups, then zero-fill the remaining destination. */
typedef unsigned int size_t;
typedef unsigned int word_type;
typedef unsigned int si_type;
typedef unsigned short hi_type;

char *FUN_0880ea5c(char *dst0, const char *src0, size_t count)
{
  unsigned char *dst;
  unsigned char *dst_end;
  unsigned char *end;
  const unsigned char *src;
  int ch0, ch1;
  int ch2, ch3;
  int ch;
  int odd_bytes;
  size_t long_count;

  dst = (unsigned char *)dst0;
  src = (unsigned const char *)src0;
  if (__builtin_expect(count >= 4, 1))
    {
      odd_bytes = (count & 3);
      count -= odd_bytes;

      do
        {
          ch0 = src[0];
          ch1 = src[1];
          ch2 = src[2];
          ch3 = src[3];
          src += 4;
          count -= 4;

          dst[0] = ch0;
          if (ch0 == '\0')
            goto found_null0;
          dst[1] = ch1;
          if (ch1 == '\0')
            goto found_null1;
          dst[2] = ch2;
          if (ch2 == '\0')
            goto found_null2;
          dst[3] = ch3;
          if (ch3 == '\0')
            goto found_null3;
          dst += 4;
        }
      while (count);
      count = odd_bytes;
    }

  end = dst + count;
  while (dst != end)
    {
      *dst++ = ch = *src++;
      if (ch == '\0')
        {
          while (dst != end)
            *dst++ = '\0';
          break;
        }
    }
  return dst0;

 found_null0:
  count++;
  dst -= 1;
 found_null1:
  count++;
  dst -= 1;
 found_null2:
  count++;
  dst -= 1;
 found_null3:
  count += odd_bytes;
  dst += 4;

  while (count && (((long)dst) & (sizeof(word_type) - 1)) != 0)
    {
      count--;
      *dst++ = 0;
    }
  while (count >= 4 * sizeof(word_type))
    {
      count -= 4 * sizeof(word_type);
      dst += 4 * sizeof(word_type);
      ((word_type *)(void *)dst)[-4] = 0;
      ((word_type *)(void *)dst)[-3] = 0;
      ((word_type *)(void *)dst)[-2] = 0;
      ((word_type *)(void *)dst)[-1] = 0;
    }
  if (count >= 2 * sizeof(word_type))
    {
      count -= 2 * sizeof(word_type);
      ((word_type *)(void *)dst)[0] = 0;
      ((word_type *)(void *)dst)[1] = 0;
      dst += 2 * sizeof(word_type);
    }
  if (count >= sizeof(word_type))
    {
      count -= sizeof(word_type);
      ((word_type *)(void *)dst)[0] = 0;
      dst += sizeof(word_type);
    }
  if (count >= sizeof(hi_type))
    {
      count -= sizeof(hi_type);
      ((hi_type *)(void *)dst)[0] = 0;
      dst += sizeof(hi_type);
    }
  if (count)
    *dst = '\0';
  return dst0;
}
