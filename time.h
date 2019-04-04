class Time {
public:
    Time();  // constructor
    void setTime(int, int, char);
    void printMilitary();
    void printStandard();
private:
    int hour;  // 0 - 23
    int minute; // 0 - 59 
    char zone; // e for ET, c for CT, p for PT, m for MT
};
