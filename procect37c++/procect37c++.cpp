#include <iostream>

using namespace std;

class Fraction {
public:
    int divisible;
    int divider;
    Fraction sum(Fraction twonamber) {
       for (int i = 1; i < divisible; i++) {
            if (divisible % i == 0 && divider % i == 0) {
                divisible = divisible / i;
                divider = divider / i;
            }
        }
        int sret;
        Fraction answer;
        if (divider > twonamber.divider) {
            for (int i = 1; i < twonamber.divisible;i++) {
                if (divider % i == 0 && twonamber.divider % i == 0) {
                    sret = i;
                }
            }
        }
        else {
            for (int i = 1; i < divisible; i++) {
                if (divider % i == 0 && twonamber.divider % i == 0) {
                    sret = i;
                }
            }
        }
        sret = divider * twonamber.divider / sret;
        answer.divisible = divisible*(sret/divider) + twonamber.divisible*(sret/twonamber.divider);
        answer.divider = sret;
       for (int i = 1; i < answer.divisible; i++) {
            if (answer.divisible % i == 0 && answer.divider % i == 0) {
                answer.divisible = answer.divisible / i;
                answer.divider = answer.divider / i;
            }
        }
        return answer;
    }
    Fraction minus(Fraction twonamber) {
        for (int i = 1; i < divisible; i++) {
            if (divisible % i == 0 && divider % i == 0) {
                divisible = divisible / i;
                divider = divider / i;
            }
        }
        int sret;
        Fraction answer;
        if (divider > twonamber.divider) {
            for (int i = 1; i < twonamber.divider+1; i++) {
                if (divider % i == 0 && twonamber.divider % i == 0) {
                    sret = i;
                }
            }
        }
        else {
            for (int i = 1; i < divider+1; i++) {
                if (divider % i == 0 && twonamber.divider % i == 0) {
                    sret = i;
                }
            }
        }
        sret = (divider * twonamber.divider) / sret;
        answer.divisible = divisible * (sret / divider) - twonamber.divisible * (sret / twonamber.divider);
        answer.divider = sret;
        for (int i = 1; i < answer.divisible+1; i++) {
            if (answer.divisible % i == 0 && answer.divider % i == 0) {
                answer.divisible = answer.divisible / i;
                answer.divider = answer.divider / i;
            }
        }
        return answer;
    }
    Fraction multiplies(Fraction twonamber) {
        for (int i = 1; i < divisible; i++) {
            if (divisible % i == 0 && divider % i == 0) {
                divisible = divisible / i;
                divider = divider / i;
            }
        }
        Fraction answer;
        answer.divider= divider * twonamber.divider;
        answer.divisible = divisible * twonamber.divisible;
        for (int i = 1; i < answer.divisible + 1; i++) {
            if (answer.divisible % i == 0 && answer.divider % i == 0) {
                answer.divisible = answer.divisible / i;
                answer.divider = answer.divider / i;
            }
        }
        return answer;
    }
    Fraction division(Fraction twonamber) {
            for (int i = 1; i < divisible; i++) {
                if (divisible % i == 0 && divider % i == 0) {
                    divisible = divisible / i;
                    divider = divider / i;
                }
            }
            Fraction answer;
            answer.divider = divider * twonamber.divisible;
            answer.divisible = divisible * twonamber.divider;
            for (int i = 1; i < answer.divisible + 1; i++) {
                if (answer.divisible % i == 0 && answer.divider % i == 0) {
                    answer.divisible = answer.divisible / i;
                    answer.divider = answer.divider / i;
                }
            }
            return answer;
    }
};



int main()
{
    Fraction one;
    one.divider = 8;
    one.divisible = 2;
    Fraction two;
    two.divider = 4;
    two.divisible = 2;
    cout << one.sum(two).divisible << '\\' << one.sum(two).divider;
    cout << '\n';
    cout << one.divisible << '\\' << one.divider;
    cout << '\n';
    cout << two.minus(one).divisible << '\\' << two.minus(one).divider;
}