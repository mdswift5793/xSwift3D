#ifndef VECTOR_H
#define VECTOR_H 0x0002

typedef struct vector {
    float x;
    float y;
    float z;
} vector;

vector UP {0,1,0};
vector DOWN {0, -1, 0};
vector LEFT {-1, 0, 0};
vector RIGHT {1, 0, 0};
vector FORWARD {0,0,1};
vector BACKWARD {0,0,-1};

#endif
