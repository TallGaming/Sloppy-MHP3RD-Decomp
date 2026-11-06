/*
 * PARKED: format through a temporary buffered FILE-like object.
 *
 * Hypothesis: this is Newlib's __sbprintf helper for unbuffered write streams.
 * The recovered FILE subset reflects only the fields used here; format and
 * variadic-list representations are opaque pointer-sized values.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct Buffer { u8 *base; int size; } Buffer;
typedef struct Stream {
    u8 *cursor;
    int read_count;
    int write_count;
    u16 flags;
    u16 file;
    Buffer buffer;
    int line_buffer_size;
    void *cookie;
    int (*read_fn)(void);
    int (*write_fn)(void);
    int (*seek_fn)(void);
    int (*close_fn)(void);
    Buffer unget_buffer;
    u8 *unget_cursor;
    int unget_count;
    u8 unget_inline[3];
    u8 read_inline[1];
    Buffer line_buffer;
    int block_size;
    int offset;
    void *reentrancy;
    int lock;
} Stream;
extern int FUN_08810cf4(Stream *stream, const char *format, void *arguments);
extern int FUN_0880a6c0(Stream *stream);

int FUN_08810d64(Stream *stream, const char *format, void *arguments)
{
    int result;
    Stream temporary;
    u8 buffer[1024];

    temporary.flags = stream->flags & (u16)~2;
    temporary.file = stream->file;
    temporary.cookie = stream->cookie;
    temporary.write_fn = stream->write_fn;
    temporary.buffer.base = temporary.cursor = buffer;
    temporary.buffer.size = temporary.write_count = 1024;
    temporary.line_buffer_size = 0;
    result = FUN_08810cf4(&temporary, format, arguments);
    if (result >= 0 && FUN_0880a6c0(&temporary))
        result = -1;
    if (temporary.flags & 0x40)
        stream->flags |= 0x40;
    return result;
}
