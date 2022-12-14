// First In First Out (FIFO)

#define max 100
static int queue[max + 1], head, tail;

put(int v)
{
    queue[tail++] = v;
    if (tail > max)
        tail = 0;
}

int get()
{
    int t = queue[head++];
    if (head > max)
        head = 0;
    return t;
}

queueinit()
{
    head = 0;
    tail = 0;
}
int queueempty() { return head == tail; }