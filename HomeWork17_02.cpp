#include <iostream>
#include <cmath>

using namespace std;


void numbers() {
    setlocale(LC_ALL, "Rus");
    int n;
    int s = 0;
    int a = 0;
    cout << "������� ���������� ����� : ";
    cin >> n;
    cout << "������� �����: ";
    for (int i = 0; i < n; i++) {
        cin >> a;
        s = s + a;
    }
    cout << "�����: " << s << endl;
}
void dec() {
    setlocale(LC_ALL, "Rus");
    double a, b, c, x1, x2;
    cout << "������� ������������: ";
    cin >> a >> b >> c;
    double dec1;
    dec1 = b * b - 4 * a * c;
    if (dec1 == 0) {
        x1 = -b  / (2 * a);
        cout << "������ : " << x1 << endl;
    }
    if (dec1 < 0) {
        cout << "������ ���" << endl;
    }
    if (dec1 > 0) {
        x1 = ((-b + sqrt(dec1)) / (2 * a));
        x2 = ((-b - sqrt(dec1)) / (2 * a));
        cout << "������ ������ : " << x1 << " ������ ������ : " << x2 << endl;
    }
}


void log() {
    int p = 0;
    int x;
    int r = 1;
    cout << "������� �: ";
    cin >> x;
    while (r < x) {
        r = r * 2;
        p++;
    }
    p = p - 1;
    cout << "���������� �������: " << p << endl;
}

int power(int x, unsigned p) {
    int k = x;
    for (int i = 1; i < p; ++i) {
        k = k * x;
    }
    return k;
}

int main() {
    int x = 0;
    unsigned  p = 0;
    numbers();
    dec();
    log();
    cout << "������� �����: " ;
    cin >> x;
    cout << "������� �������: ";
    cin >> p;
    cout << "�����: " << power(x, p) << endl;

    return 0;
}