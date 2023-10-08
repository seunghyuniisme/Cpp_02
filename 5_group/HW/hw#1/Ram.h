//Ram.h 
class Ram {
    char men[100*1024];
    int size;
public:
    Ram();
    ~Ram();
    char read(int address);
    void write(int adress, char value);
};
