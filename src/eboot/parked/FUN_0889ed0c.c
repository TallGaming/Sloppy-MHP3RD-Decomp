/*
 * FUN_0889ed0c: rebuild a transform matrix from Euler angles and translation.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar trigonometric C cannot reproduce the reference VFPU sequence.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

float sinf(float);
float cosf(float);

void FUN_0889ed0c(u8 *record)
{
    float x = FIELD(record, float, 0x6c) * 0.017453292f;
    float y = FIELD(record, float, 0x70) * 0.017453292f;
    float z = FIELD(record, float, 0x74) * 0.017453292f;
    float sx = sinf(x), cx = cosf(x);
    float sy = sinf(y), cy = cosf(y);
    float sz = sinf(z), cz = cosf(z);

    FIELD(record, float, 0x20) = cy * cz;
    FIELD(record, float, 0x24) = sx * sy * cz - cx * sz;
    FIELD(record, float, 0x28) = cx * sy * cz + sx * sz;
    FIELD(record, float, 0x2c) = 0.0f;
    FIELD(record, float, 0x30) = cy * sz;
    FIELD(record, float, 0x34) = sx * sy * sz + cx * cz;
    FIELD(record, float, 0x38) = cx * sy * sz - sx * cz;
    FIELD(record, float, 0x3c) = 0.0f;
    FIELD(record, float, 0x40) = -sy;
    FIELD(record, float, 0x44) = sx * cy;
    FIELD(record, float, 0x48) = cx * cy;
    FIELD(record, float, 0x4c) = 0.0f;
    FIELD(record, float, 0x50) = FIELD(record, float, 0x78);
    FIELD(record, float, 0x54) = FIELD(record, float, 0x7c);
    FIELD(record, float, 0x58) = FIELD(record, float, 0x80);
    FIELD(record, float, 0x5c) = 1.0f;
}
