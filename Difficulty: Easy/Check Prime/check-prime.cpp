bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    else if (n % 2 == 0 && n != 2) {
        return false;
    }
    else {
        for (int i = 3; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}