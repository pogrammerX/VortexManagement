extern "C" void _kernelstart();

extern "C" void _kernelstart() {
    *(char*)0xb8000 = 'Q';
    return;
}