int nthDay(int d, int n) {
    int result = (d - n) % 7;
    if(result < 0) result += 7;
    return result;
}