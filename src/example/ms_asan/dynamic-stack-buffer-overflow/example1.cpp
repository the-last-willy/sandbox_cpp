// file: example1-main.c
// global-buffer-overflow error

// AddressSanitizer reports a buffer overflow at the first line
// in function main() in all cases, REGARDLESS of the order in
// which the object files: a.obj, b.obj, and c.obj are linked.

double x[5];

int main() {
    int rc = (int) x[5];  // Boom!
    return rc;
}